#ifndef FGL_AST_RELATION_NODETEXTTOENUM_H
#define FGL_AST_RELATION_NODETEXTTOENUM_H

#include "fgl/Ast/Enum/Type.h"
#include <string>
#include <map>

namespace fgl { namespace ast { namespace relation { 

	static constexpr ::fgl::ast::Type ConvertTextToEnum(const std::string& text)
	{
		static const std::map<std::string, ::fgl::ast::Type> mapTextWithType = {
			{"", ::fgl::ast::Type::deamerreserved_unknown },
			
		{ "program", ::fgl::ast::Type::program },
	

		{ "deamerreserved_star__stmt__", ::fgl::ast::Type::deamerreserved_star__stmt__ },
	

		{ "stmt", ::fgl::ast::Type::stmt },
	

		{ "setting_rule", ::fgl::ast::Type::setting_rule },
	

		{ "entry_manipulation_rule", ::fgl::ast::Type::entry_manipulation_rule },
	

		{ "exit_manipulation_rule", ::fgl::ast::Type::exit_manipulation_rule },
	

		{ "capture", ::fgl::ast::Type::capture },
	

		{ "deamerreserved_arrow__deamerreserved_optional__flavor_capture____", ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____ },
	

		{ "deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__", ::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__ },
	

		{ "manipulation", ::fgl::ast::Type::manipulation },
	

		{ "deamerreserved_arrow__deamerreserved_optional__instruction____", ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____ },
	

		{ "deamerreserved_star__COMMA__instruction__", ::fgl::ast::Type::deamerreserved_star__COMMA__instruction__ },
	

		{ "instruction", ::fgl::ast::Type::instruction },
	

		{ "new_flavor", ::fgl::ast::Type::new_flavor },
	

		{ "delete_flavor", ::fgl::ast::Type::delete_flavor },
	

		{ "expand_flavor", ::fgl::ast::Type::expand_flavor },
	

		{ "flavor_capture", ::fgl::ast::Type::flavor_capture },
	

		{ "conditional_flavor", ::fgl::ast::Type::conditional_flavor },
	

		{ "value", ::fgl::ast::Type::value },
	

		{ "user_defined_instruction", ::fgl::ast::Type::user_defined_instruction },
	

		{ "object", ::fgl::ast::Type::object },
	

		{ "object_access", ::fgl::ast::Type::object_access },
	

		{ "deamerreserved_arrow__member__", ::fgl::ast::Type::deamerreserved_arrow__member__ },
	

		{ "deamerreserved_star__DOT__member__", ::fgl::ast::Type::deamerreserved_star__DOT__member__ },
	

		{ "member", ::fgl::ast::Type::member },
	

		{ "deamerreserved_arrow__deamerreserved_optional__argument____", ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____ },
	

		{ "deamerreserved_star__COMMA__argument__", ::fgl::ast::Type::deamerreserved_star__COMMA__argument__ },
	

		{ "argument", ::fgl::ast::Type::argument },
	

		{ "flavor", ::fgl::ast::Type::flavor },
	

		{ "flavor_specialization", ::fgl::ast::Type::flavor_specialization },
	

		{ "COMMENT", ::fgl::ast::Type::COMMENT },
	

		{ "LEFT_SQUARE_BRACKET", ::fgl::ast::Type::LEFT_SQUARE_BRACKET },
	

		{ "RIGHT_SQUARE_BRACKET", ::fgl::ast::Type::RIGHT_SQUARE_BRACKET },
	

		{ "LEFT_BRACKET", ::fgl::ast::Type::LEFT_BRACKET },
	

		{ "RIGHT_BRACKET", ::fgl::ast::Type::RIGHT_BRACKET },
	

		{ "LEFT_PARANTHESIS", ::fgl::ast::Type::LEFT_PARANTHESIS },
	

		{ "RIGHT_PARANTHESIS", ::fgl::ast::Type::RIGHT_PARANTHESIS },
	

		{ "COMMA", ::fgl::ast::Type::COMMA },
	

		{ "DOT", ::fgl::ast::Type::DOT },
	

		{ "ARROW", ::fgl::ast::Type::ARROW },
	

		{ "COLON", ::fgl::ast::Type::COLON },
	

		{ "NEW", ::fgl::ast::Type::NEW },
	

		{ "DELETE", ::fgl::ast::Type::DELETE },
	

		{ "EXPAND", ::fgl::ast::Type::EXPAND },
	

		{ "WITH", ::fgl::ast::Type::WITH },
	

		{ "AND", ::fgl::ast::Type::AND },
	

		{ "EQEQ", ::fgl::ast::Type::EQEQ },
	

		{ "EQ", ::fgl::ast::Type::EQ },
	

		{ "GTE", ::fgl::ast::Type::GTE },
	

		{ "GT", ::fgl::ast::Type::GT },
	

		{ "LTE", ::fgl::ast::Type::LTE },
	

		{ "LT", ::fgl::ast::Type::LT },
	

		{ "ADD", ::fgl::ast::Type::ADD },
	

		{ "MINUS", ::fgl::ast::Type::MINUS },
	

		{ "TARGET_SETTING", ::fgl::ast::Type::TARGET_SETTING },
	

		{ "INCLUDE_SETTING", ::fgl::ast::Type::INCLUDE_SETTING },
	

		{ "MEMBER_SETTING", ::fgl::ast::Type::MEMBER_SETTING },
	

		{ "FUNCTION_SETTING", ::fgl::ast::Type::FUNCTION_SETTING },
	

		{ "USER_INSERTED_SETTING", ::fgl::ast::Type::USER_INSERTED_SETTING },
	

		{ "VARNAME", ::fgl::ast::Type::VARNAME },
	

		{ "NUMBER", ::fgl::ast::Type::NUMBER },
	

		{ "STRING", ::fgl::ast::Type::STRING },
	

		{ "ESCAPE_CHARS", ::fgl::ast::Type::ESCAPE_CHARS },
	

		};

		return mapTextWithType[text];
	}

}}}

#endif // FGL_AST_RELATION_NODETEXTTOENUM_H