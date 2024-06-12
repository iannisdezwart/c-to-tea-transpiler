use rand::Rng;

struct State {
    typedefs: std::collections::HashMap<String, String>,
    undef_fn_decls: std::collections::HashSet<String>,
    struct_decl_depth: i32,
    nested_struct_decls: String,
    empty_struct_decls: std::collections::HashSet<String>,
    non_empty_struct_decls: std::collections::HashSet<String>,
}

fn rand_str() -> String {
    return rand::thread_rng()
        .sample_iter(rand::distributions::Alphanumeric)
        .take(6)
        .map(char::from)
        .collect();
}

fn shrink_spec(real_input: String) -> String {
    let mut input = real_input.clone();

    // 4
    input = input.replace("\\unsigned \\long \\long \\int", "u64");
    input = input.replace("\\signed \\long \\long \\int", "i64");
    // 3
    input = input.replace("\\long \\long \\int", "i64");
    input = input.replace("\\unsigned \\short \\int", "u16");
    input = input.replace("\\signed \\short \\int", "i16");
    input = input.replace("\\unsigned \\long \\long", "u64");
    input = input.replace("\\signed \\long \\long", "i64");
    input = input.replace("\\long \\unsigned \\int", "u32");
    input = input.replace("\\unsigned \\long \\int", "u32");
    input = input.replace("\\signed \\long \\int", "i32");
    // 2
    input = input.replace("\\short \\int", "i16");
    input = input.replace("\\long \\long", "i64");
    input = input.replace("\\long \\int", "i32");
    input = input.replace("\\unsigned \\char", "u8");
    input = input.replace("\\signed \\char", "i8");
    input = input.replace("\\unsigned \\short", "u16");
    input = input.replace("\\signed \\short", "i16");
    input = input.replace("\\unsigned \\long", "u32");
    input = input.replace("\\signed \\long", "i32");
    input = input.replace("\\unsigned \\int", "u32");
    input = input.replace("\\signed \\int", "i32");
    input = input.replace("\\long \\long", "i64");
    input = input.replace("\\long \\double", "f64");
    // 1
    input = input.replace("\\unsigned", "u32");
    input = input.replace("\\signed", "i32");
    input = input.replace("\\int", "i32");
    input = input.replace("\\short", "i16");
    input = input.replace("\\char", "i8");
    input = input.replace("\\long", "i32");
    input = input.replace("\\float", "f32");
    input = input.replace("\\double", "f64");
    input = input.replace("\\bool", "i8");
    input = input.replace("\\void", "v0");

    if input.trim().contains(" ") && real_input.contains("\\") {
        eprintln!("!! Unknown specifiers: {}", real_input);
    }

    return input;
}

fn transpile_storage_class_specifier(node: &lang_c::ast::StorageClassSpecifier) -> Option<String> {
    match node {
        lang_c::ast::StorageClassSpecifier::Typedef => {
            return Some("\\typedef".to_string());
        }
        lang_c::ast::StorageClassSpecifier::Extern => {
            return Some("\\extern".to_string());
        }
        lang_c::ast::StorageClassSpecifier::Static => {
            // [Ignored] Think this is fine.
            return Some(String::new());
        }
        lang_c::ast::StorageClassSpecifier::ThreadLocal => {
            // [Ignored] Fine.
            return Some(String::new());
        }
        lang_c::ast::StorageClassSpecifier::Auto => {
            // [Ignored] Not supported.
            eprintln!("!! auto keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::StorageClassSpecifier::Register => {
            // [Ignored] Fine.
            return Some(String::new());
        }
    }
}

fn transpile_struct_declarator(
    node: &mut lang_c::ast::StructDeclarator,
    spec: &String,
    state: &mut State,
) -> Option<String> {
    match &mut node.declarator {
        Some(decl) => {
            return transpile_declarator(&mut decl.node, spec, state, &String::new());
        }
        None => {
            // Anonymous struct.
            return Some(String::new());
        }
    }
}

fn transpile_struct_field(
    node: &mut lang_c::ast::StructField,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    let mut spec = String::new();
    for specifier in node.specifiers.iter_mut() {
        match transpile_specifier_qualifier(&mut specifier.node, state) {
            Some(spec_qual) => {
                spec += spec_qual.as_str();
                spec += " ";
            }
            None => {
                return None;
            }
        }
    }
    spec = shrink_spec(spec);

    for decl in node.declarators.iter_mut() {
        match transpile_struct_declarator(&mut decl.node, &spec, state) {
            Some(strt_decl) => {
                code += strt_decl.as_str();
                code += ";\n";
            }
            None => {
                // Ignore this field.
            }
        }
    }

    return Some(code);
}

fn transpile_struct_decl(
    node: &mut lang_c::ast::StructDeclaration,
    state: &mut State,
) -> Option<String> {
    match node {
        lang_c::ast::StructDeclaration::Field(f) => {
            return transpile_struct_field(&mut f.node, state);
        }
        lang_c::ast::StructDeclaration::StaticAssert(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
    }
}

fn transpile_struct(
    node: &mut lang_c::ast::StructType,
    state: &mut State,
    is_decl: bool,
) -> Option<String> {
    let is_nested_struct_decl = state.struct_decl_depth > 0;
    state.struct_decl_depth += 1;

    let name: String;

    match &node.identifier {
        Some(ident) => {
            name = "$T_".to_string() + &ident.node.name;
        }
        None => {
            let unprefixed_name = format!("anon_{}", rand_str());
            name = format!("$T_{}", unprefixed_name);
            node.identifier = Some(lang_c::span::Node::<lang_c::ast::Identifier> {
                node: lang_c::ast::Identifier {
                    name: unprefixed_name,
                },
                span: lang_c::span::Span::none(),
            });
        }
    }

    match &mut node.declarations {
        None => {
            if !state.non_empty_struct_decls.contains(&name)
                && !state.empty_struct_decls.contains(&name)
            {
                state.empty_struct_decls.insert(name.clone());
            }
            if is_decl {
                state.struct_decl_depth -= 1;
                return None;
            }
            state.struct_decl_depth -= 1;
            return Some(name);
        }
        Some(d) => {
            let mut code = "class ".to_string() + name.as_str();
            state.non_empty_struct_decls.insert(name.clone());

            code += " {\n";

            for decl in d.iter_mut() {
                match transpile_struct_decl(&mut decl.node, state) {
                    Some(strt_decl) => {
                        code += strt_decl.as_str();
                    }
                    None => {
                        state.struct_decl_depth -= 1;
                        return None;
                    }
                }
            }

            code += "}";

            if is_nested_struct_decl {
                state.nested_struct_decls += &code;
                state.nested_struct_decls += ";\n";
                state.struct_decl_depth -= 1;
                return Some(name);
            }

            state.struct_decl_depth -= 1;
            return Some(code);
        }
    }
}

fn transpile_type_specifier(
    node: &mut lang_c::ast::TypeSpecifier,
    state: &mut State,
    is_decl: bool,
) -> Option<String> {
    match node {
        lang_c::ast::TypeSpecifier::Void => {
            return Some("\\void".to_string());
        }
        lang_c::ast::TypeSpecifier::Char => {
            return Some("\\char".to_string());
        }
        lang_c::ast::TypeSpecifier::Short => {
            return Some("\\short".to_string());
        }
        lang_c::ast::TypeSpecifier::Int => {
            return Some("\\int".to_string());
        }
        lang_c::ast::TypeSpecifier::Long => {
            return Some("\\long".to_string());
        }
        lang_c::ast::TypeSpecifier::Float => {
            return Some("\\float".to_string());
        }
        lang_c::ast::TypeSpecifier::Double => {
            return Some("\\double".to_string());
        }
        lang_c::ast::TypeSpecifier::Signed => {
            return Some("\\signed".to_string());
        }
        lang_c::ast::TypeSpecifier::Unsigned => {
            return Some("\\unsigned".to_string());
        }
        lang_c::ast::TypeSpecifier::Bool => {
            return Some("\\bool".to_string());
        }
        lang_c::ast::TypeSpecifier::Complex => {
            // [Ignored] Not supported.
            eprintln!("!! complex keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::TypeSpecifier::Atomic(_) => {
            // [Ignored] Not supported.
            eprintln!("!! atomic keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::TypeSpecifier::Struct(s) => {
            return transpile_struct(&mut s.node, state, is_decl);
        }
        lang_c::ast::TypeSpecifier::Enum(e) => {
            let mut code = String::new();
            if e.node.enumerators.is_empty() {
                code += "i32";
            } else {
                for (i, enumerator) in e.node.enumerators.iter().enumerate() {
                    code += "i32 ";
                    code += "$I_";
                    code += &enumerator.node.identifier.node.name;
                    code += " = ";
                    code += i.to_string().as_str();

                    if i < e.node.enumerators.len() - 1 {
                        code += ";\n";
                    }
                }
            }

            return Some(code);
        }
        lang_c::ast::TypeSpecifier::TypedefName(ident) => {
            let typedef_id = "$T_".to_string() + &ident.node.name;
            let typedef = state.typedefs.get(&typedef_id);
            if typedef.is_none() {
                eprintln!("!! Unknown typedef: {}", typedef_id);
                return Some(ident.node.name.to_string());
            }
            return Some(typedef.unwrap().to_string());
        }
        lang_c::ast::TypeSpecifier::TypeOf(_) => {
            // [Ignored] Not supported.
            eprintln!("!! typeof keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::TypeSpecifier::TS18661Float(_) => {
            // [Ignored] Not supported.
            eprintln!("!! ts18661float not supported: {:?}", node);
            return None;
        }
    }
}

fn transpile_type_qualifier(node: &lang_c::ast::TypeQualifier) -> String {
    match node {
        lang_c::ast::TypeQualifier::Const => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::Restrict => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::Volatile => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::Nonnull => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::NullUnspecified => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::Nullable => {
            // [Ignored] Fine.
        }
        lang_c::ast::TypeQualifier::Atomic => {
            // [Ignored] Not supported.
        }
    }

    return String::new();
}

fn transpile_declaration_specifier(
    node: &mut lang_c::ast::DeclarationSpecifier,
    state: &mut State,
    is_decl: bool,
) -> Option<String> {
    match node {
        lang_c::ast::DeclarationSpecifier::StorageClass(n) => {
            return transpile_storage_class_specifier(&n.node);
        }
        lang_c::ast::DeclarationSpecifier::TypeSpecifier(n) => {
            return transpile_type_specifier(&mut n.node, state, is_decl);
        }
        lang_c::ast::DeclarationSpecifier::TypeQualifier(n) => {
            return Some(transpile_type_qualifier(&n.node));
        }
        lang_c::ast::DeclarationSpecifier::Function(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
        lang_c::ast::DeclarationSpecifier::Alignment(_) => {
            // [Ignored] Not supported.
            eprintln!("!! alignment keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::DeclarationSpecifier::Extension(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
    }
}

fn transpile_initializer(node: &mut lang_c::ast::Initializer, state: &mut State) -> Option<String> {
    match node {
        lang_c::ast::Initializer::Expression(e) => {
            return transpile_expression(&mut e.node, state);
        }
        lang_c::ast::Initializer::List(_) => {
            // [TODO] Implement.
            eprintln!("!! initializer list not supported: {:?}", node);
            return None;
        }
    }
}

fn transpile_init_declarator(
    node: &mut lang_c::ast::InitDeclarator,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    match transpile_declarator(
        &mut node.declarator.node,
        &String::new(),
        state,
        &String::new(),
    ) {
        Some(decl) => {
            code += decl.as_str();
        }
        None => {
            return None;
        }
    }

    match &mut node.initializer {
        Some(init) => match transpile_initializer(&mut init.node, state) {
            Some(init) => {
                code += " = ";
                code += init.as_str();
            }
            None => {
                // Ignore initializer.
            }
        },
        None => {
            // Has no initializer.
        }
    }

    return Some(code);
}

fn transpile_parameter_declaration(
    node: &mut lang_c::ast::ParameterDeclaration,
    state: &mut State,
    index: usize,
) -> Option<String> {
    let mut code = String::new();

    let mut spec = String::new();
    for specifier in node.specifiers.iter_mut() {
        match transpile_declaration_specifier(&mut specifier.node, state, false) {
            Some(decl_spec) => {
                spec += decl_spec.as_str();
                spec += " ";
            }
            None => {
                return None;
            }
        }
    }
    spec = shrink_spec(spec);

    let default_arg_name = format!("$A_{}", index.to_string());
    match &mut node.declarator {
        Some(declarator) => {
            match transpile_declarator(&mut declarator.node, &spec, state, &default_arg_name) {
                Some(decl) => {
                    code += decl.as_str();
                }
                None => {
                    return None;
                }
            }
        }
        None => {
            code = spec;
            code += default_arg_name.as_str();
        }
    }

    return Some(code);
}

fn eval_imm_expr(expr: &str) -> String {
    // Just implements some basic cases and returns 0 for everything else.

    let shift_regex = regex::Regex::new(r"^\((\d+)\)<<\((\d+)\)$").unwrap();
    if shift_regex.is_match(expr) {
        let captures = shift_regex.captures(expr).unwrap();
        let lhs: u64 = captures.get(1).unwrap().as_str().parse::<u64>().unwrap();
        let rhs: u64 = captures.get(2).unwrap().as_str().parse::<u64>().unwrap();
        return (lhs << rhs).to_string();
    }

    let number_regex = regex::Regex::new(r"^(\d+)$").unwrap();
    if number_regex.is_match(expr) {
        return expr.to_string();
    }

    return "0".to_string();
}

fn transpile_declarator(
    node: &mut lang_c::ast::Declarator,
    spec: &String,
    state: &mut State,
    default_id_name: &String,
) -> Option<String> {
    let mut id_code = String::new();

    match &node.kind.node {
        lang_c::ast::DeclaratorKind::Identifier(ident) => {
            id_code += "$I_";
            id_code += ident.node.name.as_str();
        }
        lang_c::ast::DeclaratorKind::Abstract => {
            id_code += default_id_name;
        }
        lang_c::ast::DeclaratorKind::Declarator(_) => {
            // [Ignored] Think this is function pointers. Implement.
            eprintln!("!! function pointer declarator not supported: {:?}", node);
            return None;
        }
    }

    let mut before_id_code = String::new();
    let mut after_id_code = String::new();

    for derived in node.derived.iter_mut() {
        match &mut derived.node {
            lang_c::ast::DerivedDeclarator::Pointer(_) => {
                before_id_code += "*";
            }
            lang_c::ast::DerivedDeclarator::Array(a) => match &mut a.node.size {
                lang_c::ast::ArraySize::Unknown => {
                    before_id_code += "*";
                }
                lang_c::ast::ArraySize::VariableUnknown => {
                    before_id_code += "*";
                }
                lang_c::ast::ArraySize::VariableExpression(e) => {
                    before_id_code += "[";
                    match transpile_expression_no_parens(&mut e.node, state) {
                        Some(expr) => {
                            before_id_code += &eval_imm_expr(expr.as_str());
                        }
                        None => {
                            return None;
                        }
                    }
                    before_id_code += "]";
                }
                lang_c::ast::ArraySize::StaticExpression(e) => {
                    before_id_code += "[";
                    match transpile_expression_no_parens(&mut e.node, state) {
                        Some(expr) => {
                            before_id_code += &eval_imm_expr(expr.as_str());
                        }
                        None => {
                            return None;
                        }
                    }
                    before_id_code += "]";
                }
            },
            lang_c::ast::DerivedDeclarator::Function(f) => {
                after_id_code += "(";

                let len = &f.node.parameters.len();
                for (i, param) in f.node.parameters.iter_mut().enumerate() {
                    match transpile_parameter_declaration(&mut param.node, state, i) {
                        Some(param_decl) => {
                            after_id_code += param_decl.as_str();
                        }

                        None => {
                            return None;
                        }
                    }

                    if i < len - 1 {
                        after_id_code += ", ";
                    }
                }

                after_id_code += ")";
            }
            lang_c::ast::DerivedDeclarator::KRFunction(i) => {
                if !i.is_empty() {
                    eprintln!("!! YO FOUND KR FUNC {}", id_code);
                }
                after_id_code += "(";

                for id in i.iter() {
                    after_id_code += id.node.name.as_str();
                }

                after_id_code += ")";
            }
            lang_c::ast::DerivedDeclarator::Block(_) => {
                // [Ignored] Don't know what this is.
            }
        }
    }

    let mut code = String::new();

    code += spec.as_str();
    code += before_id_code.as_str();
    code += id_code.as_str();
    code += after_id_code.as_str();

    return Some(code);
}

fn transpile_block_item(node: &mut lang_c::ast::BlockItem, state: &mut State) -> Option<String> {
    match node {
        lang_c::ast::BlockItem::Declaration(decl) => {
            return transpile_declaration(&mut decl.node, state, false);
        }
        lang_c::ast::BlockItem::StaticAssert(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
        lang_c::ast::BlockItem::Statement(stmt) => {
            return transpile_statement(&mut stmt.node, state);
        }
    }
}

fn transpile_unary_operator(node: &lang_c::ast::UnaryOperator, operand: String) -> String {
    match node {
        lang_c::ast::UnaryOperator::PostIncrement => {
            return operand + "++";
        }
        lang_c::ast::UnaryOperator::PostDecrement => {
            return operand + "--";
        }
        lang_c::ast::UnaryOperator::PreIncrement => {
            return "++".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::PreDecrement => {
            return "--".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Address => {
            return "&".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Indirection => {
            return "*".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Plus => {
            return "+".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Minus => {
            return "-".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Complement => {
            return "~".to_string() + &operand;
        }
        lang_c::ast::UnaryOperator::Negate => {
            return "!".to_string() + &operand;
        }
    }
}

fn transpile_specifier_qualifier(
    node: &mut lang_c::ast::SpecifierQualifier,
    state: &mut State,
) -> Option<String> {
    match node {
        lang_c::ast::SpecifierQualifier::TypeSpecifier(t) => {
            return transpile_type_specifier(&mut t.node, state, false);
        }
        lang_c::ast::SpecifierQualifier::TypeQualifier(t) => {
            return Some(transpile_type_qualifier(&t.node));
        }
        lang_c::ast::SpecifierQualifier::Extension(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
    }
}

fn transpile_type_name(node: &mut lang_c::ast::TypeName, state: &mut State) -> Option<String> {
    let mut code = String::new();

    let mut spec = String::new();
    for specifier in node.specifiers.iter_mut() {
        match transpile_specifier_qualifier(&mut specifier.node, state) {
            Some(spec_qual) => {
                spec += spec_qual.as_str();
                spec += " ";
            }
            None => {
                return None;
            }
        }
    }
    spec = shrink_spec(spec);

    match &mut node.declarator {
        Some(declarator) => {
            match transpile_declarator(&mut declarator.node, &spec, state, &String::new()) {
                Some(decl) => {
                    code += decl.as_str();
                }
                None => {
                    return None;
                }
            }
        }
        None => {
            // No declarator.
            code = spec;
        }
    }

    return Some(code);
}

fn transpile_binary_operator(
    node: &lang_c::ast::BinaryOperator,
    lhs: String,
    rhs: String,
) -> String {
    match node {
        lang_c::ast::BinaryOperator::Index => {
            return lhs.to_string() + "[" + &rhs + "]";
        }
        lang_c::ast::BinaryOperator::Multiply => {
            return lhs.to_string() + "*" + &rhs;
        }
        lang_c::ast::BinaryOperator::Divide => {
            return lhs.to_string() + "/" + &rhs;
        }
        lang_c::ast::BinaryOperator::Modulo => {
            return lhs.to_string() + "%" + &rhs;
        }
        lang_c::ast::BinaryOperator::Plus => {
            return lhs.to_string() + "+" + &rhs;
        }
        lang_c::ast::BinaryOperator::Minus => {
            return lhs.to_string() + "-" + &rhs;
        }
        lang_c::ast::BinaryOperator::ShiftLeft => {
            return lhs.to_string() + "<<" + &rhs;
        }
        lang_c::ast::BinaryOperator::ShiftRight => {
            return lhs.to_string() + ">>" + &rhs;
        }
        lang_c::ast::BinaryOperator::Less => {
            return lhs.to_string() + "<" + &rhs;
        }
        lang_c::ast::BinaryOperator::Greater => {
            return lhs.to_string() + ">" + &rhs;
        }
        lang_c::ast::BinaryOperator::LessOrEqual => {
            return lhs.to_string() + "<=" + &rhs;
        }
        lang_c::ast::BinaryOperator::GreaterOrEqual => {
            return lhs.to_string() + ">=" + &rhs;
        }
        lang_c::ast::BinaryOperator::Equals => {
            return lhs.to_string() + "==" + &rhs;
        }
        lang_c::ast::BinaryOperator::NotEquals => {
            return lhs.to_string() + "!=" + &rhs;
        }
        lang_c::ast::BinaryOperator::BitwiseAnd => {
            return lhs.to_string() + "&" + &rhs;
        }
        lang_c::ast::BinaryOperator::BitwiseXor => {
            return lhs.to_string() + "^" + &rhs;
        }
        lang_c::ast::BinaryOperator::BitwiseOr => {
            return lhs.to_string() + "|" + &rhs;
        }
        lang_c::ast::BinaryOperator::LogicalAnd => {
            return lhs.to_string() + "&" + &rhs;
        }
        lang_c::ast::BinaryOperator::LogicalOr => {
            return lhs.to_string() + "|" + &rhs;
        }
        lang_c::ast::BinaryOperator::Assign => {
            return lhs.to_string() + "=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignMultiply => {
            return lhs.to_string() + "*=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignDivide => {
            return lhs.to_string() + "/=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignModulo => {
            return lhs.to_string() + "%=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignPlus => {
            return lhs.to_string() + "+=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignMinus => {
            return lhs.to_string() + "-=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignShiftLeft => {
            return lhs.to_string() + "<<=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignShiftRight => {
            return lhs.to_string() + ">>=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignBitwiseAnd => {
            return lhs.to_string() + "&=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignBitwiseXor => {
            return lhs.to_string() + "^=" + &rhs;
        }
        lang_c::ast::BinaryOperator::AssignBitwiseOr => {
            return lhs.to_string() + "|=" + &rhs;
        }
    }
}

fn transpile_expression(node: &mut lang_c::ast::Expression, state: &mut State) -> Option<String> {
    match transpile_expression_no_parens(node, state) {
        Some(expr) => {
            return Some("(".to_string() + &expr + ")");
        }
        None => {
            return None;
        }
    }
}

fn transpile_expression_no_parens(
    node: &mut lang_c::ast::Expression,
    state: &mut State,
) -> Option<String> {
    match node {
        lang_c::ast::Expression::Identifier(i) => {
            return Some("$I_".to_string() + &i.node.name);
        }
        lang_c::ast::Expression::Constant(c) => match &c.node {
            lang_c::ast::Constant::Character(c) => {
                return Some(c.to_string());
            }
            lang_c::ast::Constant::Integer(i) => {
                let mut number = i.number.to_string().clone();
                match i.base {
                    lang_c::ast::IntegerBase::Decimal => {
                        // Do nothing.
                    }
                    lang_c::ast::IntegerBase::Octal => {
                        number = i64::from_str_radix(&number, 8).unwrap().to_string();
                    }
                    lang_c::ast::IntegerBase::Hexadecimal => {
                        number = i64::from_str_radix(&number, 16).unwrap().to_string();
                    }
                    lang_c::ast::IntegerBase::Binary => {
                        number = i64::from_str_radix(&number, 2).unwrap().to_string();
                    }
                }
                number.retain(|c| c.is_numeric());
                return Some(number);
            }
            lang_c::ast::Constant::Float(f) => {
                let mut float = f.number.to_string().clone();
                float.retain(|c| c.is_numeric() || c == '.'); // Cut off trailing 'F'.
                return Some(float);
            }
        },
        lang_c::ast::Expression::StringLiteral(s) => {
            match s
                .node
                .iter()
                .find(|c| !c.starts_with("\"") || !c.ends_with("\""))
            {
                Some(_) => {
                    eprintln!("!! Invalid string literal: {:?}", s.node);
                }
                None => {
                    // Happy path.
                }
            }

            return Some(
                "\"".to_string()
                    + &s.node
                        .iter()
                        .map(|z| &z[1..z.len() - 1])
                        .collect::<Vec<&str>>()
                        .join("")
                        .to_string()
                    + "\"",
            );
        }
        lang_c::ast::Expression::GenericSelection(_) => {
            // [Ignored] Don't know what this is.
            eprintln!("!! generic selection not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::Member(m) => {
            match transpile_expression(&mut m.node.expression.node, state) {
                Some(expr) => {
                    let mut code = expr;

                    match m.node.operator.node {
                        lang_c::ast::MemberOperator::Direct => {
                            code += ".";
                        }
                        lang_c::ast::MemberOperator::Indirect => {
                            code += "->";
                        }
                    }

                    code += "$I_";
                    code += &m.node.identifier.node.name;

                    return Some(code);
                }
                None => {
                    return None;
                }
            }
        }
        lang_c::ast::Expression::Call(c) => {
            // let mut code = transpile_expression(&c.node.callee.node, state);
            // Expect identifier. TODO: Allow function pointers.
            let mut code = String::new();
            match &c.node.callee.node {
                lang_c::ast::Expression::Identifier(i) => {
                    code += "$I_";
                    code += i.node.name.as_str();
                }
                _ => {
                    eprintln!("!! Unknown callee: {:?}", c.node.callee.node);
                    return None;
                }
            }

            code += "(";
            let len = c.node.arguments.len();
            for (i, a) in c.node.arguments.iter_mut().enumerate() {
                match transpile_expression(&mut a.node, state) {
                    Some(expr) => {
                        code += expr.as_str();
                        if i < len - 1 {
                            code += ", ";
                        }
                    }
                    None => {
                        return None;
                    }
                }
            }
            code += ")";

            return Some(code);
        }
        lang_c::ast::Expression::CompoundLiteral(_) => {
            // [Ignored] Don't know what this is.
            eprintln!("!! compound literal not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::SizeOfTy(_) => {
            // [Hack] Not supported, so just return 0.
            return Some("0".to_string());
        }
        lang_c::ast::Expression::SizeOfVal(_) => {
            // [Hack] Not supported, so just return 0.
            return Some("0".to_string());
        }
        lang_c::ast::Expression::AlignOf(_) => {
            // [Ignored] Not supported.
            eprintln!("!! alignof keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::UnaryOperator(u) => {
            match transpile_expression(&mut u.node.operand.node, state) {
                Some(expr) => {
                    return Some(transpile_unary_operator(&u.node.operator.node, expr));
                }
                None => {
                    return None;
                }
            }
        }
        lang_c::ast::Expression::Cast(c) => {
            let mut code = String::new();

            match transpile_type_name(&mut c.node.type_name.node, state) {
                Some(type_name) => {
                    code += "[";
                    code += type_name.as_str();
                    code += "]";
                    code += "(";
                }
                None => {
                    return None;
                }
            }

            match transpile_expression(&mut c.node.expression.node, state) {
                Some(expr) => {
                    code += expr.as_str();
                    code += ")";
                }
                None => {
                    return None;
                }
            }

            return Some(code);
        }
        lang_c::ast::Expression::BinaryOperator(b) => {
            match transpile_expression(&mut b.node.lhs.node, state) {
                Some(lhs_expr) => match transpile_expression(&mut b.node.rhs.node, state) {
                    Some(rhs_expr) => {
                        return Some(transpile_binary_operator(
                            &b.node.operator.node,
                            lhs_expr,
                            rhs_expr,
                        ));
                    }
                    None => {
                        return None;
                    }
                },
                None => {
                    return None;
                }
            }
        }
        lang_c::ast::Expression::Conditional(_) => {
            // [TODO] Implement.
            eprintln!("!! ternaries not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::Comma(_) => {
            // [Ignored] Not supported.
            eprintln!("!! comma statements not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::OffsetOf(_) => {
            // [Ignored] Not supported.
            eprintln!("!! offsetof keyword not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::VaArg(_) => {
            // [Ignored] Not supported.
            eprintln!("!! variadic arguments not supported: {:?}", node);
            return None;
        }
        lang_c::ast::Expression::Statement(s) => {
            return transpile_statement(&mut s.node, state);
        }
    }
}

fn transpile_if_statement(
    node: &mut lang_c::ast::IfStatement,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    code += "if (";
    match transpile_expression(&mut node.condition.node, state) {
        Some(expr) => {
            code += expr.as_str();
        }
        None => {
            return None;
        }
    }
    code += ") {\n";
    match transpile_statement(&mut node.then_statement.node, state) {
        Some(stmt) => {
            code += stmt.as_str();
        }
        None => {
            return None;
        }
    }
    code += "}\n";

    match &mut node.else_statement {
        Some(else_stmt) => {
            code += "else {\n";
            match transpile_statement(&mut else_stmt.node, state) {
                Some(stmt) => {
                    code += stmt.as_str();
                }
                None => {
                    return None;
                }
            }
            code += "}\n";
        }
        None => {
            // No else statement.
        }
    }

    return Some(code);
}

fn transpile_switch_statement(
    node: &mut lang_c::ast::SwitchStatement,
    state: &mut State,
) -> Option<String> {
    let mut cases: Vec<(lang_c::ast::Expression, Vec<lang_c::ast::Statement>)> = Vec::new();
    let mut default_statement: Option<lang_c::ast::Statement> = None;

    match &node.statement.node {
        lang_c::ast::Statement::Compound(compound) => {
            for item in compound.iter() {
                match &item.node {
                    lang_c::ast::BlockItem::Declaration(_) => {
                        // Not applicable.
                    }
                    lang_c::ast::BlockItem::StaticAssert(_) => {
                        // Not applicable.
                    }
                    lang_c::ast::BlockItem::Statement(stmt) => match &stmt.node {
                        lang_c::ast::Statement::Labeled(l) => {
                            let mut labeled = l.clone();
                            let mut inner_cases: Vec<lang_c::ast::Expression> = Vec::new();

                            loop {
                                match labeled.node.label.node {
                                    lang_c::ast::Label::Case(e) => {
                                        inner_cases.push(e.node);
                                    }
                                    lang_c::ast::Label::Default => {
                                        default_statement =
                                            Some(labeled.node.statement.node.clone());
                                    }
                                    _ => {
                                        eprintln!(
                                            "!! Unknown label: {:?}",
                                            labeled.node.label.node
                                        );
                                    }
                                }

                                match labeled.node.statement.node {
                                    lang_c::ast::Statement::Labeled(l) => {
                                        labeled = l.clone();
                                    }
                                    _ => {
                                        for case in inner_cases.iter() {
                                            let mut v = Vec::new();
                                            v.push(labeled.node.statement.node.clone());
                                            cases.push((case.clone(), v));
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        _ => match cases.last_mut() {
                            Some((_, stmts)) => {
                                stmts.push(stmt.node.clone());
                            }
                            None => {
                                eprintln!(
                                        "!! Unknown switch statement (dangling statement with no label before it): {:?}",
                                         stmt.node
                                    );
                            }
                        },
                    },
                }
            }
        }
        _ => {
            eprintln!(
                "!! Unknown switch statement (not compound): {:?}",
                &mut node.statement.node
            );
        }
    }

    let mut code = String::new();
    let switch_id = rand_str();
    // Fake loop so we can break the switch cases.
    code += format!(
        "for (u8 $_{} = 0; $_{} == 0; $_{} = 1) {{\n",
        switch_id, switch_id, switch_id
    )
    .as_str();
    for (i, c) in cases.iter_mut().enumerate() {
        if i > 0 {
            code += "else ";
        }
        code += "if (";
        match transpile_expression(&mut node.expression.node, state) {
            Some(expr) => {
                code += expr.as_str();
            }
            None => {
                return None;
            }
        }
        code += " == ";
        match transpile_expression(&mut c.0, state) {
            Some(expr) => {
                code += expr.as_str();
            }
            None => {
                return None;
            }
        }
        code += ") {\n";
        for s in c.1.iter_mut() {
            match transpile_statement(s, state) {
                Some(stmt) => {
                    code += stmt.as_str();
                }
                None => {
                    // Ignore.
                }
            }
        }
        code += "}\n";
    }

    match &mut default_statement {
        Some(stmt) => {
            if cases.len() > 0 {
                code += "else {\n";
            }
            match transpile_statement(stmt, state) {
                Some(stmt) => {
                    code += stmt.as_str();
                }
                None => {
                    return None;
                }
            }
            if cases.len() > 0 {
                code += "}\n";
            }
        }
        None => {
            // No default statement.
        }
    }

    code += "}\n"; // End fake loop.

    return Some(code);
}

fn transpile_while_statement(
    node: &mut lang_c::ast::WhileStatement,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    code += "while (";
    match transpile_expression(&mut node.expression.node, state) {
        Some(expr) => {
            code += expr.as_str();
        }
        None => {
            return None;
        }
    }
    code += ") {\n";
    match transpile_statement(&mut node.statement.node, state) {
        Some(stmt) => {
            code += stmt.as_str();
        }
        None => {
            return None;
        }
    }
    code += "}\n";

    return Some(code);
}

fn transpile_do_while_statement(
    node: &mut lang_c::ast::DoWhileStatement,
    state: &mut State,
) -> Option<String> {
    match transpile_statement(&mut node.statement.node, state) {
        Some(stmt) => {
            let mut code = String::new();

            code += stmt.as_str();
            code += "while (";
            match transpile_expression(&mut node.expression.node, state) {
                Some(expr) => {
                    code += expr.as_str();
                }
                None => {
                    return None;
                }
            }
            code += ") {\n";
            code += stmt.as_str();
            code += "}\n";

            return Some(code);
        }
        None => {
            return None;
        }
    }
}

fn transpile_for_initializer(
    node: &mut lang_c::ast::ForInitializer,
    state: &mut State,
) -> Option<String> {
    match node {
        lang_c::ast::ForInitializer::Expression(e) => {
            match transpile_expression(&mut e.node, state) {
                Some(expr) => {
                    return Some(expr + ";");
                }
                None => {
                    return None;
                }
            }
        }
        lang_c::ast::ForInitializer::Declaration(d) => {
            return transpile_declaration(&mut d.node, state, false);
        }
        lang_c::ast::ForInitializer::Empty => {
            // Empty.
            return Some("0;".to_string());
        }
        lang_c::ast::ForInitializer::StaticAssert(_) => {
            // [Ignored] Fine.
            return Some("0;".to_string());
        }
    }
}

fn transpile_for_statement(
    node: &mut lang_c::ast::ForStatement,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    code += "for (";
    match transpile_for_initializer(&mut node.initializer.node, state) {
        Some(for_init) => {
            code += for_init.as_str();
        }
        None => {
            return None;
        }
    }
    match &mut node.condition {
        Some(c) => match transpile_expression(&mut c.node, state) {
            Some(expr) => {
                code += expr.as_str();
            }
            None => {
                return None;
            }
        },
        None => {
            code += "1";
        }
    }
    code += "; ";
    match &mut node.step {
        Some(s) => match transpile_expression(&mut s.node, state) {
            Some(expr) => {
                code += expr.as_str();
            }
            None => {
                return None;
            }
        },
        None => {
            code += "0";
        }
    }
    code += ") {\n";
    match transpile_statement(&mut node.statement.node, state) {
        Some(stmt) => {
            code += stmt.as_str();
        }
        None => {
            return None;
        }
    }
    code += "}\n";

    return Some(code);
}

fn transpile_statement(node: &mut lang_c::ast::Statement, state: &mut State) -> Option<String> {
    match node {
        lang_c::ast::Statement::Labeled(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
        lang_c::ast::Statement::Compound(compound) => {
            let mut code = String::new();

            for item in compound.iter_mut() {
                match transpile_block_item(&mut item.node, state) {
                    Some(blck_itm) => {
                        code += blck_itm.as_str();
                    }
                    None => {
                        return None;
                    }
                }
            }

            return Some(code);
        }
        lang_c::ast::Statement::Expression(e) => match e {
            Some(expr) => match transpile_expression(&mut expr.node, state) {
                Some(expr) => {
                    return Some(expr + ";\n");
                }
                None => {
                    return None;
                }
            },
            None => {
                // Empty expression.
                return Some(String::new());
            }
        },
        lang_c::ast::Statement::If(i) => {
            return transpile_if_statement(&mut i.node, state);
        }
        lang_c::ast::Statement::Switch(s) => {
            return transpile_switch_statement(&mut s.node, state);
        }
        lang_c::ast::Statement::While(w) => {
            return transpile_while_statement(&mut w.node, state);
        }
        lang_c::ast::Statement::DoWhile(d) => {
            return transpile_do_while_statement(&mut d.node, state);
        }
        lang_c::ast::Statement::For(f) => {
            return transpile_for_statement(&mut f.node, state);
        }
        lang_c::ast::Statement::Goto(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
        lang_c::ast::Statement::Continue => {
            return Some("continue;\n".to_string());
        }
        lang_c::ast::Statement::Break => {
            return Some("break;\n".to_string());
        }
        lang_c::ast::Statement::Return(r) => match r {
            Some(expr) => match transpile_expression(&mut expr.node, state) {
                Some(expr) => {
                    return Some(format!("return {};\n", expr));
                }
                None => {
                    return None;
                }
            },
            None => {
                return Some("return;\n".to_string());
            }
        },
        lang_c::ast::Statement::Asm(_) => {
            // [Ignored] Fine.
            return Some(String::new());
        }
    }
}

fn transpile_function_definition(
    node: &mut lang_c::ast::FunctionDefinition,
    state: &mut State,
) -> Option<String> {
    let mut code = String::new();

    let mut spec = String::new();
    for specifier in node.specifiers.iter_mut() {
        match transpile_declaration_specifier(&mut specifier.node, state, false) {
            Some(decl_spec) => {
                spec += decl_spec.as_str();
                spec += " ";
            }
            None => {
                return None;
            }
        }
    }
    spec = shrink_spec(spec);

    match transpile_declarator(&mut node.declarator.node, &spec, state, &String::new()) {
        Some(decl) => {
            code += decl.as_str();
        }
        None => {
            return None;
        }
    }
    code += "\n";
    code += "{\n";

    match transpile_statement(&mut node.statement.node, state) {
        Some(stmt) => {
            code += stmt.as_str();
        }
        None => {
            // Empty definition.
        }
    }

    code += "}\n";
    code += "\n";

    return Some(code);
}

fn get_decl_name(node: &lang_c::ast::InitDeclarator) -> Option<String> {
    match &node.declarator.node.kind.node {
        lang_c::ast::DeclaratorKind::Identifier(ident) => {
            return Some(ident.node.name.to_string());
        }
        _ => {
            return None;
        }
    }
}

fn is_struct_or_enum(node: &mut lang_c::ast::DeclarationSpecifier) -> Option<(String, bool)> {
    match node {
        lang_c::ast::DeclarationSpecifier::TypeSpecifier(t) => match &mut t.node {
            lang_c::ast::TypeSpecifier::Struct(s) => match &mut s.node.identifier {
                Some(ident) => {
                    return Some((
                        "$T_".to_string() + &ident.node.name,
                        s.node.declarations.is_some(),
                    ));
                }
                None => {
                    let unprefixed_name = format!("anon_{}", rand_str());
                    let name = format!("$T_{}", unprefixed_name);
                    s.node.identifier = Some(lang_c::span::Node::<lang_c::ast::Identifier> {
                        node: lang_c::ast::Identifier {
                            name: unprefixed_name,
                        },
                        span: lang_c::span::Span::none(),
                    });
                    return Some((name, s.node.declarations.is_some()));
                }
            },
            lang_c::ast::TypeSpecifier::Enum(e) => {
                return Some(("i32".to_string(), !e.node.enumerators.is_empty()));
            }
            _ => {
                return None;
            }
        },
        _ => {
            return None;
        }
    }
}

fn transpile_declaration(
    node: &mut lang_c::ast::Declaration,
    state: &mut State,
    is_top_level: bool,
) -> Option<String> {
    let mut spec = String::new();
    let mut is_typedef = false;
    let mut typedef_struct_or_enum_name: String = String::new();
    let mut typedef_struct_or_enum_has_body = false;
    let mut is_extern = false;

    for specifier in node.specifiers.iter_mut() {
        let res = is_struct_or_enum(&mut specifier.node);
        let is_fn_def = match &node.declarators.iter().any(
            |d: &lang_c::span::Node<lang_c::ast::InitDeclarator>| match &d
                .node
                .declarator
                .node
                .derived
                .iter()
                .any(|e| match &e.node {
                    lang_c::ast::DerivedDeclarator::Function(_) => true,
                    lang_c::ast::DerivedDeclarator::KRFunction(_) => true,
                    _ => false,
                }) {
                true => true,
                false => false,
            },
        ) {
            true => true,
            false => false,
        };

        if is_typedef && res.is_some() {
            (typedef_struct_or_enum_name, typedef_struct_or_enum_has_body) = res.unwrap();
        }

        match transpile_declaration_specifier(
            &mut specifier.node,
            state,
            !is_fn_def && !is_typedef && is_top_level,
        ) {
            Some(sp) => {
                if sp == "\\typedef" {
                    is_typedef = true;
                } else if sp == "\\extern" {
                    is_extern = true;
                } else {
                    spec += sp.as_str();
                    spec += " ";
                }
            }
            None => {
                return None;
            }
        }
    }

    spec = shrink_spec(spec);

    if node.declarators.is_empty() {
        if is_typedef {
            eprintln!("!! Typedef without declarators: {}", spec);
        }
        return Some(spec + ";\n");
    }

    let mut code = String::new();

    for decl in node.declarators.iter_mut() {
        let name = get_decl_name(&decl.node);

        match &name {
            Some(n) => {
                let prefixed_name = "$T_".to_string() + n;
                if is_typedef {
                    if !typedef_struct_or_enum_name.is_empty() {
                        if typedef_struct_or_enum_has_body
                        // || *n == typedef_struct_or_enum_name
                        {
                            code += spec.as_str();
                            code += ";\n";
                        }
                        state.typedefs.insert(
                            prefixed_name.to_string(),
                            typedef_struct_or_enum_name.clone(),
                        );
                    } else {
                        state
                            .typedefs
                            .insert(prefixed_name.to_string(), spec.clone());
                    }

                    continue;
                }
            }
            None => {
                // No name.
            }
        }

        match decl
            .node
            .declarator
            .node
            .derived
            .iter()
            .any(|d| match &d.node {
                lang_c::ast::DerivedDeclarator::Function(_) => true,
                lang_c::ast::DerivedDeclarator::KRFunction(_) => true,
                _ => false,
            }) {
            true => {
                // Non-extern function declarations may be defined later.
                if name.is_none() {
                    continue;
                }
                let prefixed_name = "$I_".to_string() + &name.unwrap();
                if !is_extern {
                    code += &format!("\\begin_fn_decl {}\n", prefixed_name.to_string());
                    state.undef_fn_decls.insert(prefixed_name.to_string());
                }
                code += &spec;
                code += " ";
                match transpile_init_declarator(&mut decl.node, state) {
                    Some(init_decl) => {
                        code += init_decl.as_str();
                    }
                    None => {
                        return None;
                    }
                }
                code += "{}\n";
                if !is_extern {
                    code += &format!("\\end_fn_decl {}\n", prefixed_name.to_string());
                }
            }
            false => {
                code += &spec;
                code += " ";
                match transpile_init_declarator(&mut decl.node, state) {
                    Some(init_decl) => {
                        code += init_decl.as_str();
                    }
                    None => {
                        return None;
                    }
                }
                code += ";\n";
            }
        }
    }

    return Some(code);
}

fn transpile(parse: &mut lang_c::driver::Parse, state: &mut State) -> String {
    let mut class_decls = String::new();
    let mut other_code = String::new();

    for item in parse.unit.0.iter_mut() {
        match &mut item.node {
            lang_c::ast::ExternalDeclaration::Declaration(d) => {
                match transpile_declaration(&mut d.node, state, true) {
                    Some(decl) => {
                        if decl.starts_with("class") {
                            class_decls += decl.as_str();
                        } else {
                            other_code += decl.as_str();
                        }
                    }
                    None => {
                        // Ignore declarations that could not be transpiled.
                    }
                }
            }
            lang_c::ast::ExternalDeclaration::StaticAssert(_) => {
                // [Ignored] Fine.
            }
            lang_c::ast::ExternalDeclaration::FunctionDefinition(f) => {
                match transpile_function_definition(&mut f.node, state) {
                    Some(func_def) => {
                        other_code += func_def.as_str();
                        match &mut f.node.declarator.node.kind.node {
                            lang_c::ast::DeclaratorKind::Identifier(ident) => {
                                state
                                    .undef_fn_decls
                                    .remove(&("$I_".to_string() + &ident.node.name));
                            }
                            _ => {
                                eprintln!(
                                    "!! Unknown function definition: {:?}",
                                    f.node.declarator.node
                                );
                            }
                        }
                    }
                    None => {
                        // Ignore function definitions that could not be transpiled.
                    }
                }
            }
        }
    }

    let mut empty_struct_decls = String::new();
    for name in state.empty_struct_decls.iter() {
        if state.non_empty_struct_decls.contains(name) {
            continue;
        }
        empty_struct_decls += &format!("class {} {{}};\n", name);
    }

    return "// hoisted nested struct decls:\n".to_string()
        + &state.nested_struct_decls.to_string()
        + "\n// hoisted empty struct decls:\n"
        + empty_struct_decls.as_str()
        + "\n// non-empty struct decls:\n"
        + &class_decls
        + "\n// other code:\n"
        + &other_code;
}

fn main() {
    let source_path = std::env::args().nth(1).unwrap();
    let config = lang_c::driver::Config {
        cpp_command: "cc".to_string(),
        cpp_options: vec!["-E".to_string()],
        flavor: lang_c::driver::Flavor::ClangC11,
    };
    let parse_res = &mut lang_c::driver::parse(&config, source_path);

    match parse_res {
        Ok(parse) => {
            // println!("{:#?}", parse);
            let mut state = State {
                typedefs: [
                    ("$T___builtin_va_list".to_string(), "v0*".to_string()),
                    ("$T___sighandler_t".to_string(), "v0*".to_string()),
                    ("$T___compar_fn_t".to_string(), "v0*".to_string()),
                ]
                .iter()
                .cloned()
                .collect(),
                undef_fn_decls: std::collections::HashSet::new(),
                struct_decl_depth: 0,
                nested_struct_decls: String::new(),
                empty_struct_decls: std::collections::HashSet::new(),
                non_empty_struct_decls: std::collections::HashSet::new(),
            };
            let mut transpiled = transpile(parse, &mut state);

            // Handle undefined function declarations.
            // Find `begin_fn_decl <name>` and see if it exists in state.undef_fn_decls.
            // If it does, remove it from state.undef_fn_decls and remove the
            // `begin_fn_decl <name>` and `end_fn_decl <name>` lines.
            // Otherwise, scrap the function definition entirely.
            while let Some(begin_fn_decl_begin) = transpiled.find("\\begin_fn_decl ") {
                let name = &transpiled[begin_fn_decl_begin + "\\begin_fn_decl ".len()..]
                    .split('\n')
                    .next()
                    .unwrap();

                let end_fn_decl_begin = transpiled
                    .find(&format!("\\end_fn_decl {}", name.to_string()))
                    .unwrap();
                let end_fn_decl_end =
                    end_fn_decl_begin + transpiled[end_fn_decl_begin..].find('\n').unwrap();
                let begin_fn_decl_end =
                    begin_fn_decl_begin + transpiled[begin_fn_decl_begin..].find('\n').unwrap();

                if state.undef_fn_decls.contains(*name) {
                    // Remove the `begin_fn_decl` and `end_fn_decl` lines.
                    transpiled.replace_range(end_fn_decl_begin..(end_fn_decl_end), "");
                    transpiled.replace_range(begin_fn_decl_begin..(begin_fn_decl_end), "");
                } else {
                    // Remove the entire function definition.
                    transpiled.replace_range(begin_fn_decl_begin..(end_fn_decl_end), "");
                }
            }

            println!("{}", transpiled);
            eprintln!("typedefs: {:?}", state.typedefs);
        }
        Err(err) => {
            eprintln!("!! Error: {}", err);
        }
    }
}
