struct State {
    typedefs: std::collections::HashMap<String, String>,
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
        eprintln!("Unknown specifiers: {}", real_input);
    }

    return input;
}

fn transpile_storage_class_specifier(node: &lang_c::ast::StorageClassSpecifier) -> String {
    match node {
        lang_c::ast::StorageClassSpecifier::Typedef => {
            return "\\typedef".to_string();
        }
        lang_c::ast::StorageClassSpecifier::Extern => {}
        lang_c::ast::StorageClassSpecifier::Static => {}
        lang_c::ast::StorageClassSpecifier::ThreadLocal => {}
        lang_c::ast::StorageClassSpecifier::Auto => {}
        lang_c::ast::StorageClassSpecifier::Register => {}
    }

    return String::new();
}

fn transpile_struct_declarator(
    node: &lang_c::ast::StructDeclarator,
    spec: &String,
    state: &mut State,
) -> String {
    match &node.declarator {
        Some(decl) => {
            return transpile_declarator(&decl.node, spec, state);
        }
        None => {}
    }

    return String::new();
}

fn transpile_struct_field(node: &lang_c::ast::StructField, state: &mut State) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_specifier_qualifier(&specifier.node, state).as_str();
        spec += " ";
    });
    spec = shrink_spec(spec);

    node.declarators.iter().for_each(|decl| {
        code += transpile_struct_declarator(&decl.node, &spec, state).as_str();
        code += ";\n";
    });

    return code;
}

fn transpile_struct_decl(node: &lang_c::ast::StructDeclaration, state: &mut State) -> String {
    match node {
        lang_c::ast::StructDeclaration::Field(f) => {
            return transpile_struct_field(&f.node, state);
        }
        lang_c::ast::StructDeclaration::StaticAssert(_) => {}
    }

    return String::new();
}

fn transpile_struct(node: &lang_c::ast::StructType, state: &mut State) -> String {
    let name: String;

    match &node.identifier {
        Some(ident) => {
            name = ident.node.name.to_string();
        }
        None => {
            name = "???".to_string();
        }
    }

    match &node.declarations {
        None => {
            return name;
        }
        Some(d) => {
            let mut code = "class ".to_string() + name.as_str();

            code += " {\n";

            for decl in d.iter() {
                code += transpile_struct_decl(&decl.node, state).as_str();
            }

            code += "}";

            return code;
        }
    }
}

fn transpile_type_specifier(node: &lang_c::ast::TypeSpecifier, state: &mut State) -> String {
    match node {
        lang_c::ast::TypeSpecifier::Void => {
            return "\\void".to_string();
        }
        lang_c::ast::TypeSpecifier::Char => {
            return "\\char".to_string();
        }
        lang_c::ast::TypeSpecifier::Short => {
            return "\\short".to_string();
        }
        lang_c::ast::TypeSpecifier::Int => {
            return "\\int".to_string();
        }
        lang_c::ast::TypeSpecifier::Long => {
            return "\\long".to_string();
        }
        lang_c::ast::TypeSpecifier::Float => {
            return "\\float".to_string();
        }
        lang_c::ast::TypeSpecifier::Double => {
            return "\\double".to_string();
        }
        lang_c::ast::TypeSpecifier::Signed => {
            return "\\signed".to_string();
        }
        lang_c::ast::TypeSpecifier::Unsigned => {
            return "\\unsigned".to_string();
        }
        lang_c::ast::TypeSpecifier::Bool => {
            return "\\bool".to_string();
        }
        lang_c::ast::TypeSpecifier::Complex => {}
        lang_c::ast::TypeSpecifier::Atomic(_) => {}
        lang_c::ast::TypeSpecifier::Struct(s) => {
            return transpile_struct(&s.node, state);
        }
        lang_c::ast::TypeSpecifier::Enum(e) => {
            let mut code = String::new();
            if e.node.enumerators.is_empty() {
                code += "i32";
            } else {
                for (i, enumerator) in e.node.enumerators.iter().enumerate() {
                    code += "i32 ";
                    code += enumerator.node.identifier.node.name.as_str();
                    code += " = ";
                    code += i.to_string().as_str();

                    if i < e.node.enumerators.len() - 1 {
                        code += ";\n";
                    }
                }
            }

            return code;
        }
        lang_c::ast::TypeSpecifier::TypedefName(ident) => {
            let typedef = state.typedefs.get(&ident.node.name);
            if typedef.is_none() {
                eprintln!("Unknown typedef: {}", ident.node.name);
                return ident.node.name.to_string();
            }
            return typedef.unwrap().to_string();
        }
        lang_c::ast::TypeSpecifier::TypeOf(_) => {}
        lang_c::ast::TypeSpecifier::TS18661Float(_) => {}
    }

    return String::new();
}

fn transpile_type_qualifier(node: &lang_c::ast::TypeQualifier) -> String {
    match node {
        lang_c::ast::TypeQualifier::Const => {}
        lang_c::ast::TypeQualifier::Restrict => {}
        lang_c::ast::TypeQualifier::Volatile => {}
        lang_c::ast::TypeQualifier::Nonnull => {}
        lang_c::ast::TypeQualifier::NullUnspecified => {}
        lang_c::ast::TypeQualifier::Nullable => {}
        lang_c::ast::TypeQualifier::Atomic => {}
    }

    return String::new();
}

fn transpile_declaration_specifier(
    node: &lang_c::ast::DeclarationSpecifier,
    state: &mut State,
) -> String {
    match node {
        lang_c::ast::DeclarationSpecifier::StorageClass(n) => {
            return transpile_storage_class_specifier(&n.node);
        }
        lang_c::ast::DeclarationSpecifier::TypeSpecifier(n) => {
            return transpile_type_specifier(&n.node, state);
        }
        lang_c::ast::DeclarationSpecifier::TypeQualifier(n) => {
            return transpile_type_qualifier(&n.node);
        }
        lang_c::ast::DeclarationSpecifier::Function(_) => {}
        lang_c::ast::DeclarationSpecifier::Alignment(_) => {}
        lang_c::ast::DeclarationSpecifier::Extension(_) => {}
    }

    return String::new();
}

fn transpile_initializer(node: &lang_c::ast::Initializer, state: &mut State) -> String {
    match node {
        lang_c::ast::Initializer::Expression(e) => {
            return transpile_expression(&e.node, state);
        }
        lang_c::ast::Initializer::List(_) => {}
    }

    return String::new();
}

fn transpile_init_declarator(node: &lang_c::ast::InitDeclarator, state: &mut State) -> String {
    let mut code = String::new();

    code += transpile_declarator(&node.declarator.node, &String::new(), state).as_str();

    match &node.initializer {
        Some(init) => {
            code += " = ";
            code += transpile_initializer(&init.node, state).as_str();
        }
        None => {}
    }

    return code;
}

fn transpile_parameter_declaration(
    node: &lang_c::ast::ParameterDeclaration,
    state: &mut State,
) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_declaration_specifier(&specifier.node, state).as_str();
        spec += " ";
    });
    spec = shrink_spec(spec);

    match &node.declarator {
        Some(declarator) => {
            code += transpile_declarator(&declarator.node, &spec, state).as_str();
        }
        None => {
            code = spec;
        }
    }

    return code;
}

fn transpile_declarator(
    node: &lang_c::ast::Declarator,
    spec: &String,
    state: &mut State,
) -> String {
    let mut id_code = String::new();

    match &node.kind.node {
        lang_c::ast::DeclaratorKind::Identifier(ident) => {
            id_code += ident.node.name.as_str();
        }
        lang_c::ast::DeclaratorKind::Abstract => {}
        lang_c::ast::DeclaratorKind::Declarator(_) => {}
    }

    let mut before_id_code = String::new();
    let mut after_id_code = String::new();

    node.derived.iter().for_each(|derived| match &derived.node {
        lang_c::ast::DerivedDeclarator::Pointer(_) => {
            before_id_code += "*";
        }
        lang_c::ast::DerivedDeclarator::Array(a) => {
            before_id_code += "[";

            match &a.node.size {
                lang_c::ast::ArraySize::Unknown => {}
                lang_c::ast::ArraySize::VariableUnknown => {}
                lang_c::ast::ArraySize::VariableExpression(e) => {
                    before_id_code += transpile_expression(&e.node, state).as_str();
                }
                lang_c::ast::ArraySize::StaticExpression(e) => {
                    before_id_code += transpile_expression(&e.node, state).as_str();
                }
            }

            before_id_code += "]";
        }
        lang_c::ast::DerivedDeclarator::Function(f) => {
            after_id_code += "(";

            for (i, param) in f.node.parameters.iter().enumerate() {
                after_id_code += transpile_parameter_declaration(&param.node, state).as_str();

                if i < f.node.parameters.len() - 1 {
                    after_id_code += ", ";
                }
            }

            after_id_code += ")";
        }
        lang_c::ast::DerivedDeclarator::KRFunction(i) => {
            after_id_code += "(";

            for id in i.iter() {
                after_id_code += id.node.name.as_str();
            }

            after_id_code += ")";
        }
        lang_c::ast::DerivedDeclarator::Block(_) => {}
    });

    let mut code = String::new();

    code += spec.as_str();
    code += before_id_code.as_str();
    code += id_code.as_str();
    code += after_id_code.as_str();

    return code;
}

fn transpile_block_item(node: &lang_c::ast::BlockItem, state: &mut State) -> String {
    match node {
        lang_c::ast::BlockItem::Declaration(decl) => {
            return transpile_declaration(&decl.node, state);
        }
        lang_c::ast::BlockItem::StaticAssert(_) => {}
        lang_c::ast::BlockItem::Statement(stmt) => {
            return transpile_statement(&stmt.node, state);
        }
    }

    return String::new();
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
    node: &lang_c::ast::SpecifierQualifier,
    state: &mut State,
) -> String {
    match node {
        lang_c::ast::SpecifierQualifier::TypeSpecifier(t) => {
            return transpile_type_specifier(&t.node, state);
        }
        lang_c::ast::SpecifierQualifier::TypeQualifier(t) => {
            return transpile_type_qualifier(&t.node);
        }
        lang_c::ast::SpecifierQualifier::Extension(_) => {}
    }

    return String::new();
}

fn transpile_type_name(node: &lang_c::ast::TypeName, state: &mut State) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_specifier_qualifier(&specifier.node, state).as_str();
        spec += " ";
    });
    spec = shrink_spec(spec);

    match &node.declarator {
        Some(declarator) => {
            code += transpile_declarator(&declarator.node, &spec, state).as_str();
        }
        None => {}
    }

    return code;
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
            return lhs.to_string() + "&&" + &rhs;
        }
        lang_c::ast::BinaryOperator::LogicalOr => {
            return lhs.to_string() + "||" + &rhs;
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

fn transpile_expression(node: &lang_c::ast::Expression, state: &mut State) -> String {
    return "(".to_string() + &transpile_expression_(node, state) + ")";
}

fn transpile_expression_(node: &lang_c::ast::Expression, state: &mut State) -> String {
    match node {
        lang_c::ast::Expression::Identifier(i) => {
            return i.node.name.to_string();
        }
        lang_c::ast::Expression::Constant(c) => match &c.node {
            lang_c::ast::Constant::Character(c) => {
                return "'".to_string() + &c + "'";
            }
            lang_c::ast::Constant::Integer(i) => {
                return i.number.to_string();
            }
            lang_c::ast::Constant::Float(f) => {
                return f.number.to_string();
            }
        },
        lang_c::ast::Expression::StringLiteral(s) => {
            match s
                .node
                .iter()
                .find(|c| !c.starts_with("\"") || !c.ends_with("\""))
            {
                Some(_) => {
                    eprintln!("Invalid string literal: {:?}", s.node);
                }
                None => {}
            }

            return "\"".to_string()
                + &s.node
                    .iter()
                    .map(|z| &z[1..z.len() - 1])
                    .collect::<Vec<&str>>()
                    .join("")
                    .to_string()
                + "\"";
        }
        lang_c::ast::Expression::GenericSelection(_) => {}
        lang_c::ast::Expression::Member(m) => {
            let mut code = transpile_expression(&m.node.expression.node, state);

            match m.node.operator.node {
                lang_c::ast::MemberOperator::Direct => {
                    code += ".";
                }
                lang_c::ast::MemberOperator::Indirect => {
                    code += "->";
                }
            }

            code += m.node.identifier.node.name.as_str();

            return code;
        }
        lang_c::ast::Expression::Call(c) => {
            // let mut code = transpile_expression(&c.node.callee.node, state);
            // Expect identifier. TODO: Allow function pointers.
            let mut code = String::new();
            match &c.node.callee.node {
                lang_c::ast::Expression::Identifier(i) => {
                    code += i.node.name.as_str();
                }
                _ => {
                    eprintln!("Unknown callee: {:?}", c.node.callee.node);
                }
            }

            code += "(";
            for (i, a) in c.node.arguments.iter().enumerate() {
                code += transpile_expression(&a.node, state).as_str();
                if i < c.node.arguments.len() - 1 {
                    code += ", ";
                }
            }
            code += ")";

            return code;
        }
        lang_c::ast::Expression::CompoundLiteral(_) => {}
        lang_c::ast::Expression::SizeOfTy(_) => {}
        lang_c::ast::Expression::SizeOfVal(_) => {}
        lang_c::ast::Expression::AlignOf(_) => {}
        lang_c::ast::Expression::UnaryOperator(u) => {
            return transpile_unary_operator(
                &u.node.operator.node,
                transpile_expression(&u.node.operand.node, state),
            );
        }
        lang_c::ast::Expression::Cast(c) => {
            let mut code = String::new();

            code += transpile_type_name(&c.node.type_name.node, state).as_str();
            code += "(";
            code += transpile_expression(&c.node.expression.node, state).as_str();
            code += ")";

            return code;
        }
        lang_c::ast::Expression::BinaryOperator(b) => {
            return transpile_binary_operator(
                &b.node.operator.node,
                transpile_expression(&b.node.lhs.node, state),
                transpile_expression(&b.node.rhs.node, state),
            );
        }
        lang_c::ast::Expression::Conditional(_) => {}
        lang_c::ast::Expression::Comma(_) => {}
        lang_c::ast::Expression::OffsetOf(_) => {}
        lang_c::ast::Expression::VaArg(_) => {}
        lang_c::ast::Expression::Statement(s) => {
            return transpile_statement(&s.node, state);
        }
    }

    return String::new();
}

fn transpile_if_statement(node: &lang_c::ast::IfStatement, state: &mut State) -> String {
    let mut code = String::new();

    code += "if (";
    code += transpile_expression(&node.condition.node, state).as_str();
    code += ") {\n";
    code += transpile_statement(&node.then_statement.node, state).as_str();
    code += "}\n";

    match &node.else_statement {
        Some(else_stmt) => {
            code += "else {\n";
            code += transpile_statement(&else_stmt.node, state).as_str();
            code += "}\n";
        }
        None => {}
    }

    return code;
}

fn transpile_switch_statement(node: &lang_c::ast::SwitchStatement, state: &mut State) -> String {
    let mut code = String::new();
    let mut cases: Vec<(&lang_c::ast::Expression, Vec<&lang_c::ast::Statement>)> = Vec::new();
    let mut default_statement: Option<&lang_c::ast::Statement> = None;

    match &node.statement.node {
        lang_c::ast::Statement::Compound(compound) => {
            for item in compound.iter() {
                match &item.node {
                    lang_c::ast::BlockItem::Declaration(_) => {}
                    lang_c::ast::BlockItem::StaticAssert(_) => {}
                    lang_c::ast::BlockItem::Statement(stmt) => match &stmt.node {
                        lang_c::ast::Statement::Labeled(l) => {
                            let mut labeled = l;
                            let mut inner_cases: Vec<&lang_c::ast::Expression> = Vec::new();

                            loop {
                                match &labeled.node.label.node {
                                    lang_c::ast::Label::Case(e) => {
                                        inner_cases.push(&e.node);
                                    }
                                    lang_c::ast::Label::Default => {
                                        default_statement = Some(&labeled.node.statement.node);
                                    }
                                    _ => {
                                        eprintln!("Unknown label: {:?}", labeled.node.label.node);
                                    }
                                }

                                match &labeled.node.statement.node {
                                    lang_c::ast::Statement::Labeled(l) => {
                                        labeled = l;
                                    }
                                    _ => {
                                        for case in inner_cases.iter() {
                                            cases.push((
                                                case,
                                                [&labeled.node.statement.node].to_vec(),
                                            ));
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        _ => match cases.last_mut() {
                            Some((_, stmts)) => {
                                stmts.push(&stmt.node);
                            }
                            None => {
                                eprintln!(
                                        "Unknown switch statement (dangling statement with no label before it): {:?}",
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
                "Unknown switch statement (not compound): {:?}",
                node.statement.node
            );
        }
    }

    for (i, c) in cases.iter().enumerate() {
        if i > 0 {
            code += "else ";
        }
        code += "if (";
        code += transpile_expression(&node.expression.node, state).as_str();
        code += " == ";
        code += transpile_expression(&c.0, state).as_str();
        code += ") {\n";
        for s in c.1.iter() {
            code += transpile_statement(s, state).as_str();
        }
        code += "}\n";
    }

    match default_statement {
        Some(stmt) => {
            if cases.len() > 0 {
                code += "else {\n";
            }
            code += transpile_statement(stmt, state).as_str();
            if cases.len() > 0 {
                code += "}\n";
            }
        }
        None => {}
    }

    return code;
}

fn transpile_statement(node: &lang_c::ast::Statement, state: &mut State) -> String {
    match node {
        lang_c::ast::Statement::Labeled(_) => {}
        lang_c::ast::Statement::Compound(compound) => {
            let mut code = String::new();

            for item in compound.iter() {
                code += transpile_block_item(&item.node, state).as_str();
            }

            return code;
        }
        lang_c::ast::Statement::Expression(e) => match e {
            Some(expr) => {
                return transpile_expression(&expr.node, state) + ";\n";
            }
            None => {}
        },
        lang_c::ast::Statement::If(i) => {
            return transpile_if_statement(&i.node, state);
        }
        lang_c::ast::Statement::Switch(s) => {
            return transpile_switch_statement(&s.node, state);
        }
        lang_c::ast::Statement::While(_) => {}
        lang_c::ast::Statement::DoWhile(_) => {}
        lang_c::ast::Statement::For(_) => {}
        lang_c::ast::Statement::Goto(_) => {}
        lang_c::ast::Statement::Continue => {
            return "continue;\n".to_string();
        }
        lang_c::ast::Statement::Break => {
            return "break;\n".to_string();
        }
        lang_c::ast::Statement::Return(r) => match r {
            Some(expr) => {
                return format!("return {};\n", transpile_expression(&expr.node, state));
            }
            None => {
                return "return;\n".to_string();
            }
        },
        lang_c::ast::Statement::Asm(_) => {}
    }

    return String::new();
}

fn transpile_function_definition(
    node: &lang_c::ast::FunctionDefinition,
    state: &mut State,
) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_declaration_specifier(&specifier.node, state).as_str();
        spec += " ";
    });
    spec = shrink_spec(spec);

    code += transpile_declarator(&node.declarator.node, &spec, state).as_str();
    code += "\n";
    code += "{\n";

    code += transpile_statement(&node.statement.node, state).as_str();

    code += "}\n";
    code += "\n";

    return code;
}

fn get_name(node: &lang_c::ast::InitDeclarator) -> Option<String> {
    match &node.declarator.node.kind.node {
        lang_c::ast::DeclaratorKind::Identifier(ident) => {
            return Some(ident.node.name.to_string());
        }
        _ => {
            return None;
        }
    }
}

fn is_struct_or_enum(node: &lang_c::ast::DeclarationSpecifier) -> Option<(String, bool)> {
    match node {
        lang_c::ast::DeclarationSpecifier::TypeSpecifier(t) => match &t.node {
            lang_c::ast::TypeSpecifier::Struct(s) => match &s.node.identifier {
                Some(ident) => {
                    return Some((ident.node.name.to_string(), s.node.declarations.is_some()));
                }
                None => {
                    return Some(("???".to_string(), s.node.declarations.is_some()));
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

fn transpile_declaration(node: &lang_c::ast::Declaration, state: &mut State) -> String {
    let mut spec = String::new();
    let mut is_typedef = false;
    let mut typedef_struct_or_enum_name: String = String::new();
    let mut typedef_struct_or_enum_has_body = false;

    node.specifiers.iter().for_each(|specifier| {
        let res = is_struct_or_enum(&specifier.node);
        if is_typedef && res.is_some() {
            (typedef_struct_or_enum_name, typedef_struct_or_enum_has_body) = res.unwrap();
        }

        let sp = transpile_declaration_specifier(&specifier.node, state);

        if sp == "\\typedef" {
            is_typedef = true;
        } else {
            spec += sp.as_str();
            spec += " ";
        }
    });

    spec = shrink_spec(spec);

    if node.declarators.is_empty() {
        if is_typedef {
            eprintln!("Typedef without declarators: {}", spec);
        }
        return spec + ";\n";
    }

    let mut code = String::new();
    node.declarators.iter().for_each(|decl| {
        let name = get_name(&decl.node);

        match &name {
            Some(n) => {
                if is_typedef {
                    if !typedef_struct_or_enum_name.is_empty() {
                        if typedef_struct_or_enum_name == "???" {
                            spec = spec.replacen("class ???", format!("class {}", n).as_str(), 1);
                            code += spec.as_str();
                            code += ";\n";
                        } else if typedef_struct_or_enum_has_body {
                            code += spec.as_str();
                            code += ";\n";
                        }
                        state.typedefs.insert(
                            n.to_string(),
                            if typedef_struct_or_enum_name == "???" {
                                n.to_string()
                            } else {
                                typedef_struct_or_enum_name.clone()
                            },
                        );
                    } else {
                        state.typedefs.insert(n.to_string(), spec.clone());
                    }

                    return;
                }
            }
            None => {}
        }

        code += &spec;
        code += " ";
        code += transpile_init_declarator(&decl.node, state).as_str();
        code += ";\n";
    });

    return code;
}

fn transpile(parse: lang_c::driver::Parse, state: &mut State) -> String {
    let mut code = String::new();

    for item in parse.unit.0 {
        match item.node {
            lang_c::ast::ExternalDeclaration::Declaration(d) => {
                code += transpile_declaration(&d.node, state).as_str();
            }
            lang_c::ast::ExternalDeclaration::StaticAssert(_) => {}
            lang_c::ast::ExternalDeclaration::FunctionDefinition(f) => {
                code += transpile_function_definition(&f.node, state).as_str();
            }
        }
    }

    return code;
}

fn main() {
    let source_path = std::env::args().nth(1).unwrap();
    let config = lang_c::driver::Config {
        cpp_command: "clang".to_string(),
        cpp_options: vec!["-E".to_string()],
        flavor: lang_c::driver::Flavor::ClangC11,
    };
    let parse_res = lang_c::driver::parse(&config, source_path);

    match parse_res {
        Ok(parse) => {
            println!("{:#?}", parse);
            let mut state = State {
                typedefs: std::collections::HashMap::new(),
            };
            println!("{}", transpile(parse, &mut state));
        }
        Err(err) => {
            eprintln!("Error: {}", err);
        }
    }
}
