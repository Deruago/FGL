#ifndef FGL_AST_RELATION_NODEENUMTOTEXT_H
#define FGL_AST_RELATION_NODEENUMTOTEXT_H

#include "fgl/Ast/Enum/Type.h"

namespace fgl { namespace ast { namespace relation { 

	static constexpr const char* ConvertEnumToText(::fgl::ast::Type type)
	{
		switch(type)
		{
			
	case ::fgl::ast::Type::program: {
		return "program";
	}
	

	case ::fgl::ast::Type::deamerreserved_star__stmt__: {
		return "deamerreserved_star__stmt__";
	}
	

	case ::fgl::ast::Type::stmt: {
		return "stmt";
	}
	

	case ::fgl::ast::Type::setting_rule: {
		return "setting_rule";
	}
	

	case ::fgl::ast::Type::entry_manipulation_rule: {
		return "entry_manipulation_rule";
	}
	

	case ::fgl::ast::Type::exit_manipulation_rule: {
		return "exit_manipulation_rule";
	}
	

	case ::fgl::ast::Type::capture: {
		return "capture";
	}
	

	case ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____: {
		return "deamerreserved_arrow__deamerreserved_optional__flavor_capture____";
	}
	

	case ::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: {
		return "deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__";
	}
	

	case ::fgl::ast::Type::manipulation: {
		return "manipulation";
	}
	

	case ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____: {
		return "deamerreserved_arrow__deamerreserved_optional__instruction____";
	}
	

	case ::fgl::ast::Type::deamerreserved_star__COMMA__instruction__: {
		return "deamerreserved_star__COMMA__instruction__";
	}
	

	case ::fgl::ast::Type::instruction: {
		return "instruction";
	}
	

	case ::fgl::ast::Type::new_flavor: {
		return "new_flavor";
	}
	

	case ::fgl::ast::Type::delete_flavor: {
		return "delete_flavor";
	}
	

	case ::fgl::ast::Type::expand_flavor: {
		return "expand_flavor";
	}
	

	case ::fgl::ast::Type::flavor_capture: {
		return "flavor_capture";
	}
	

	case ::fgl::ast::Type::conditional_flavor: {
		return "conditional_flavor";
	}
	

	case ::fgl::ast::Type::value: {
		return "value";
	}
	

	case ::fgl::ast::Type::user_defined_instruction: {
		return "user_defined_instruction";
	}
	

	case ::fgl::ast::Type::object: {
		return "object";
	}
	

	case ::fgl::ast::Type::object_access: {
		return "object_access";
	}
	

	case ::fgl::ast::Type::deamerreserved_arrow__member__: {
		return "deamerreserved_arrow__member__";
	}
	

	case ::fgl::ast::Type::deamerreserved_star__DOT__member__: {
		return "deamerreserved_star__DOT__member__";
	}
	

	case ::fgl::ast::Type::member: {
		return "member";
	}
	

	case ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____: {
		return "deamerreserved_arrow__deamerreserved_optional__argument____";
	}
	

	case ::fgl::ast::Type::deamerreserved_star__COMMA__argument__: {
		return "deamerreserved_star__COMMA__argument__";
	}
	

	case ::fgl::ast::Type::argument: {
		return "argument";
	}
	

	case ::fgl::ast::Type::flavor: {
		return "flavor";
	}
	

	case ::fgl::ast::Type::flavor_specialization: {
		return "flavor_specialization";
	}
	

	case ::fgl::ast::Type::COMMENT: {
		return "COMMENT";
	}
	

	case ::fgl::ast::Type::LEFT_SQUARE_BRACKET: {
		return "LEFT_SQUARE_BRACKET";
	}
	

	case ::fgl::ast::Type::RIGHT_SQUARE_BRACKET: {
		return "RIGHT_SQUARE_BRACKET";
	}
	

	case ::fgl::ast::Type::LEFT_BRACKET: {
		return "LEFT_BRACKET";
	}
	

	case ::fgl::ast::Type::RIGHT_BRACKET: {
		return "RIGHT_BRACKET";
	}
	

	case ::fgl::ast::Type::LEFT_PARANTHESIS: {
		return "LEFT_PARANTHESIS";
	}
	

	case ::fgl::ast::Type::RIGHT_PARANTHESIS: {
		return "RIGHT_PARANTHESIS";
	}
	

	case ::fgl::ast::Type::COMMA: {
		return "COMMA";
	}
	

	case ::fgl::ast::Type::DOT: {
		return "DOT";
	}
	

	case ::fgl::ast::Type::ARROW: {
		return "ARROW";
	}
	

	case ::fgl::ast::Type::COLON: {
		return "COLON";
	}
	

	case ::fgl::ast::Type::NEW: {
		return "NEW";
	}
	

	case ::fgl::ast::Type::DELETE: {
		return "DELETE";
	}
	

	case ::fgl::ast::Type::EXPAND: {
		return "EXPAND";
	}
	

	case ::fgl::ast::Type::WITH: {
		return "WITH";
	}
	

	case ::fgl::ast::Type::AND: {
		return "AND";
	}
	

	case ::fgl::ast::Type::EQEQ: {
		return "EQEQ";
	}
	

	case ::fgl::ast::Type::EQ: {
		return "EQ";
	}
	

	case ::fgl::ast::Type::GTE: {
		return "GTE";
	}
	

	case ::fgl::ast::Type::GT: {
		return "GT";
	}
	

	case ::fgl::ast::Type::LTE: {
		return "LTE";
	}
	

	case ::fgl::ast::Type::LT: {
		return "LT";
	}
	

	case ::fgl::ast::Type::ADD: {
		return "ADD";
	}
	

	case ::fgl::ast::Type::MINUS: {
		return "MINUS";
	}
	

	case ::fgl::ast::Type::TARGET_SETTING: {
		return "TARGET_SETTING";
	}
	

	case ::fgl::ast::Type::INCLUDE_SETTING: {
		return "INCLUDE_SETTING";
	}
	

	case ::fgl::ast::Type::MEMBER_SETTING: {
		return "MEMBER_SETTING";
	}
	

	case ::fgl::ast::Type::FUNCTION_SETTING: {
		return "FUNCTION_SETTING";
	}
	

	case ::fgl::ast::Type::USER_INSERTED_SETTING: {
		return "USER_INSERTED_SETTING";
	}
	

	case ::fgl::ast::Type::VARNAME: {
		return "VARNAME";
	}
	

	case ::fgl::ast::Type::NUMBER: {
		return "NUMBER";
	}
	

	case ::fgl::ast::Type::STRING: {
		return "STRING";
	}
	

	case ::fgl::ast::Type::ESCAPE_CHARS: {
		return "ESCAPE_CHARS";
	}
	

		}
		
		return "";
	}

}}}

#endif // FGL_AST_RELATION_NODEENUMTOTEXT_H