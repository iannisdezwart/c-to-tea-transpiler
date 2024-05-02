use lang_c;

fn transpile_storage_class_specifier(node: &lang_c::ast::StorageClassSpecifier) -> String {
    match node {
        lang_c::ast::StorageClassSpecifier::Typedef => {}
        lang_c::ast::StorageClassSpecifier::Extern => {}
        lang_c::ast::StorageClassSpecifier::Static => {}
        lang_c::ast::StorageClassSpecifier::ThreadLocal => {}
        lang_c::ast::StorageClassSpecifier::Auto => {}
        lang_c::ast::StorageClassSpecifier::Register => {}
    }

    return String::new();
}

fn transpile_struct_declarator(node: &lang_c::ast::StructDeclarator, spec: &String) -> String {
    match &node.declarator {
        Some(decl) => {
            return transpile_declarator(&decl.node, spec);
        }
        None => {}
    }

    return String::new();
}

fn transpile_struct_field(node: &lang_c::ast::StructField) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_specifier_qualifier(&specifier.node).as_str();
        spec += " ";
    });

    node.declarators.iter().for_each(|decl| {
        code += transpile_struct_declarator(&decl.node, &spec).as_str();
        code += ";\n";
    });

    return code;
}

fn transpile_struct_decl(node: &lang_c::ast::StructDeclaration) -> String {
    match node {
        lang_c::ast::StructDeclaration::Field(f) => {
            return transpile_struct_field(&f.node);
        }
        lang_c::ast::StructDeclaration::StaticAssert(_) => {}
    }

    return String::new();
}

fn transpile_struct(node: &lang_c::ast::StructType) -> String {
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
                code += transpile_struct_decl(&decl.node).as_str();
            }

            code += "}";

            return code;
        }
    }
}

fn transpile_type_specifier(node: &lang_c::ast::TypeSpecifier) -> String {
    match node {
        lang_c::ast::TypeSpecifier::Void => {
            return "v0".to_string();
        }
        lang_c::ast::TypeSpecifier::Char => {
            return "i8".to_string();
        }
        lang_c::ast::TypeSpecifier::Short => {
            return "i16".to_string();
        }
        lang_c::ast::TypeSpecifier::Int => {
            return "i32".to_string();
        }
        lang_c::ast::TypeSpecifier::Long => {
            return "i64".to_string();
        }
        lang_c::ast::TypeSpecifier::Float => {
            return "f32".to_string();
        }
        lang_c::ast::TypeSpecifier::Double => {
            return "f64".to_string();
        }
        lang_c::ast::TypeSpecifier::Signed => {
            return "i32".to_string();
        }
        lang_c::ast::TypeSpecifier::Unsigned => {
            return "u32".to_string();
        }
        lang_c::ast::TypeSpecifier::Bool => {
            return "i8".to_string();
        }
        lang_c::ast::TypeSpecifier::Complex => {}
        lang_c::ast::TypeSpecifier::Atomic(_) => {}
        lang_c::ast::TypeSpecifier::Struct(s) => {
            return transpile_struct(&s.node);
        }
        lang_c::ast::TypeSpecifier::Enum(_) => {}
        lang_c::ast::TypeSpecifier::TypedefName(_) => {}
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

fn transpile_declaration_specifier(node: &lang_c::ast::DeclarationSpecifier) -> String {
    match node {
        lang_c::ast::DeclarationSpecifier::StorageClass(n) => {
            return transpile_storage_class_specifier(&n.node);
        }
        lang_c::ast::DeclarationSpecifier::TypeSpecifier(n) => {
            return transpile_type_specifier(&n.node);
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

fn transpile_initializer(node: &lang_c::ast::Initializer) -> String {
    match node {
        lang_c::ast::Initializer::Expression(e) => {
            return transpile_expression(&e.node);
        }
        lang_c::ast::Initializer::List(_) => {}
    }

    return String::new();
}

fn transpile_init_declarator(node: &lang_c::ast::InitDeclarator) -> String {
    let mut code = String::new();

    code += transpile_declarator(&node.declarator.node, &String::new()).as_str();

    match &node.initializer {
        Some(init) => {
            code += " = ";
            code += transpile_initializer(&init.node).as_str();
        }
        None => {}
    }

    return code;
}

fn transpile_parameter_declaration(node: &lang_c::ast::ParameterDeclaration) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_declaration_specifier(&specifier.node).as_str();
        spec += " ";
    });

    match &node.declarator {
        Some(declarator) => {
            code += transpile_declarator(&declarator.node, &spec).as_str();
        }
        None => {}
    }

    return code;
}

fn transpile_declarator(node: &lang_c::ast::Declarator, spec: &String) -> String {
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
                    before_id_code += transpile_expression(&e.node).as_str();
                }
                lang_c::ast::ArraySize::StaticExpression(e) => {
                    before_id_code += transpile_expression(&e.node).as_str();
                }
            }

            before_id_code += "]";
        }
        lang_c::ast::DerivedDeclarator::Function(f) => {
            after_id_code += "(";

            for (i, param) in f.node.parameters.iter().enumerate() {
                after_id_code += transpile_parameter_declaration(&param.node).as_str();

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

fn transpile_block_item(node: &lang_c::ast::BlockItem) -> String {
    match node {
        lang_c::ast::BlockItem::Declaration(decl) => {
            return transpile_declaration(&decl.node);
        }
        lang_c::ast::BlockItem::StaticAssert(_) => {}
        lang_c::ast::BlockItem::Statement(stmt) => {
            return transpile_statement(&stmt.node);
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

fn transpile_specifier_qualifier(node: &lang_c::ast::SpecifierQualifier) -> String {
    match node {
        lang_c::ast::SpecifierQualifier::TypeSpecifier(t) => {
            return transpile_type_specifier(&t.node);
        }
        lang_c::ast::SpecifierQualifier::TypeQualifier(t) => {
            return transpile_type_qualifier(&t.node);
        }
        lang_c::ast::SpecifierQualifier::Extension(_) => {}
    }

    return String::new();
}

fn transpile_type_name(node: &lang_c::ast::TypeName) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_specifier_qualifier(&specifier.node).as_str();
        spec += " ";
    });

    match &node.declarator {
        Some(declarator) => {
            code += transpile_declarator(&declarator.node, &spec).as_str();
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

fn transpile_expression(node: &lang_c::ast::Expression) -> String {
    return "(".to_string() + &transpile_expression_(node) + ")";
}

fn transpile_expression_(node: &lang_c::ast::Expression) -> String {
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
            return "\"".to_string() + &s.node.join("").to_string() + "\"";
        }
        lang_c::ast::Expression::GenericSelection(_) => {}
        lang_c::ast::Expression::Member(m) => {
            let mut code = transpile_expression(&m.node.expression.node);

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
            let mut code = transpile_expression(&c.node.callee.node);

            code += "(";
            for (i, a) in c.node.arguments.iter().enumerate() {
                code += transpile_expression(&a.node).as_str();
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
                transpile_expression(&u.node.operand.node),
            );
        }
        lang_c::ast::Expression::Cast(c) => {
            let mut code = String::new();

            code += transpile_type_name(&c.node.type_name.node).as_str();
            code += "(";
            code += transpile_expression(&c.node.expression.node).as_str();
            code += ")";

            return code;
        }
        lang_c::ast::Expression::BinaryOperator(b) => {
            return transpile_binary_operator(
                &b.node.operator.node,
                transpile_expression(&b.node.lhs.node),
                transpile_expression(&b.node.rhs.node),
            );
        }
        lang_c::ast::Expression::Conditional(_) => {}
        lang_c::ast::Expression::Comma(_) => {}
        lang_c::ast::Expression::OffsetOf(_) => {}
        lang_c::ast::Expression::VaArg(_) => {}
        lang_c::ast::Expression::Statement(s) => {
            return transpile_statement(&s.node);
        }
    }

    return String::new();
}

fn transpile_statement(node: &lang_c::ast::Statement) -> String {
    match node {
        lang_c::ast::Statement::Labeled(_) => {}
        lang_c::ast::Statement::Compound(compound) => {
            let mut code = String::new();

            for item in compound.iter() {
                code += transpile_block_item(&item.node).as_str();
            }

            return code;
        }
        lang_c::ast::Statement::Expression(e) => match e {
            Some(expr) => {
                return transpile_expression(&expr.node) + ";\n";
            }
            None => {}
        },
        lang_c::ast::Statement::If(_) => {
            // return transpile_if_statement(&i.node);
        }
        lang_c::ast::Statement::Switch(_) => {}
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
                return format!("return {};\n", transpile_expression(&expr.node));
            }
            None => {
                return "return;\n".to_string();
            }
        },
        lang_c::ast::Statement::Asm(_) => {}
    }

    return String::new();
}

fn transpile_function_definition(node: &lang_c::ast::FunctionDefinition) -> String {
    let mut code = String::new();

    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_declaration_specifier(&specifier.node).as_str();
        spec += " ";
    });

    code += transpile_declarator(&node.declarator.node, &spec).as_str();
    code += "\n";
    code += "{\n";

    code += transpile_statement(&node.statement.node).as_str();

    code += "}\n";
    code += "\n";

    return code;
}

fn transpile_declaration(node: &lang_c::ast::Declaration) -> String {
    let mut spec = String::new();
    node.specifiers.iter().for_each(|specifier| {
        spec += transpile_declaration_specifier(&specifier.node).as_str();
        spec += " ";
    });

    if node.declarators.is_empty() {
        return spec + ";\n";
    }

    let mut code = String::new();
    node.declarators.iter().for_each(|decl| {
        code += &spec;
        code += " ";
        code += transpile_init_declarator(&decl.node).as_str();
        code += ";\n";
    });

    return code;
}

fn transpile(parse: lang_c::driver::Parse) -> String {
    let mut code = String::new();

    for item in parse.unit.0 {
        match item.node {
            lang_c::ast::ExternalDeclaration::Declaration(d) => {
                code += transpile_declaration(&d.node).as_str();
            }
            lang_c::ast::ExternalDeclaration::StaticAssert(_) => {}
            lang_c::ast::ExternalDeclaration::FunctionDefinition(f) => {
                code += transpile_function_definition(&f.node).as_str();
            }
        }
    }

    return code;
}

fn main() {
    let source_path = std::env::args().nth(1).unwrap();
    let config = lang_c::driver::Config::default();
    let parse_res = lang_c::driver::parse(&config, source_path);

    match parse_res {
        Ok(parse) => {
            println!("{:#?}", parse);
            println!("{}", transpile(parse));
        }
        Err(err) => {
            eprintln!("Error: {}", err);
        }
    }
}
