#ifndef FGL_AST_RELATION_NODEISDELETED_H
#define FGL_AST_RELATION_NODEISDELETED_H

#include "fgl/Ast/Enum/Type.h"

namespace fgl { namespace ast { namespace relation { 

	constexpr static bool NodeIsDeleted(::fgl::ast::Type t)
	{
		
		if (t == ::fgl::ast::Type::COMMENT)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::LEFT_SQUARE_BRACKET)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::RIGHT_SQUARE_BRACKET)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::LEFT_BRACKET)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::RIGHT_BRACKET)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::LEFT_PARANTHESIS)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::RIGHT_PARANTHESIS)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::COMMA)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::DOT)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::ARROW)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::COLON)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::NEW)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::DELETE)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::EXPAND)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::WITH)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::AND)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::EQEQ)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::EQ)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::GTE)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::GT)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::LTE)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::LT)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::ADD)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::MINUS)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::TARGET_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::INCLUDE_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::MEMBER_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::FUNCTION_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::NAMINGCONVENTION_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::DISPATCH_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::INHERITANCE_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::DEAMER_LANGUAGE_NAME_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::USER_INSERTED_SETTING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::VARNAME)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::NUMBER)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::STRING)
		{
			return false;
		}

		if (t == ::fgl::ast::Type::ESCAPE_CHARS)
		{
			return true;
		}


		return false;
	}


}}}

#endif // FGL_AST_RELATION_NODEISDELETED_H