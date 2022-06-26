#ifndef FGL_AST_RELATION_NODEISTERMINAL_H
#define FGL_AST_RELATION_NODEISTERMINAL_H

#include "fgl/Ast/Enum/Type.h"

namespace fgl { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::fgl::ast::Type t)
	{
		
		if (t == ::fgl::ast::Type::COMMENT)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LEFT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::RIGHT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LEFT_BRACKET)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::RIGHT_BRACKET)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LEFT_PARANTHESIS)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::RIGHT_PARANTHESIS)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::COMMA)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::DOT)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::ARROW)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::COLON)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::NEW)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::DELETE)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::EXPAND)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::WITH)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::AND)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::EQEQ)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::EQ)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::GTE)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::GT)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LTE)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LT)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::ADD)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::MINUS)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::TARGET_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::INCLUDE_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::MEMBER_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::FUNCTION_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::NAMINGCONVENTION_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::DISPATCH_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::INHERITANCE_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::DEAMER_LANGUAGE_NAME_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::USER_INSERTED_SETTING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::VARNAME)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::NUMBER)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::STRING)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::ESCAPE_CHARS)
		{
			return true;
		}


		return false;
	}


}}}

#endif // FGL_AST_RELATION_NODEISTERMINAL_H