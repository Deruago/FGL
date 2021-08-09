#ifndef FGL_AST_RELATION_NODEISNONTERMINAL_H
#define FGL_AST_RELATION_NODEISNONTERMINAL_H

#include "fgl/Ast/Enum/Type.h"

namespace fgl { namespace ast { namespace relation { 

	constexpr static bool NodeIsNonTerminal(::fgl::ast::Type t)
	{
		
		if (t == ::fgl::ast::Type::program)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_star__stmt__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::stmt)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::setting_rule)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::entry_manipulation_rule)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::exit_manipulation_rule)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::capture)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::manipulation)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_star__COMMA__instruction__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::instruction)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::new_flavor)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::delete_flavor)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::expand_flavor)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::flavor_capture)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::conditional_flavor)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::value)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::user_defined_instruction)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::object)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::object_access)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_arrow__member__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_star__DOT__member__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::member)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::deamerreserved_star__COMMA__argument__)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::argument)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::flavor)
		{
			return true;
		}

		if (t == ::fgl::ast::Type::flavor_specialization)
		{
			return true;
		}


		return false;
	}


}}}

#endif // FGL_AST_RELATION_NODEISNONTERMINAL_H