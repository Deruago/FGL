#ifndef FGL_AST_RELATION_NODETYPETOENUM_H
#define FGL_AST_RELATION_NODETYPETOENUM_H

#include "fgl/Ast/Enum/Type.h"

namespace fgl { namespace ast { namespace node {

class program;
class deamerreserved_star__stmt__;
class stmt;
class setting_rule;
class entry_manipulation_rule;
class exit_manipulation_rule;
class capture;
class deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
class deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
class manipulation;
class deamerreserved_arrow__deamerreserved_optional__instruction____;
class deamerreserved_star__COMMA__instruction__;
class instruction;
class new_flavor;
class delete_flavor;
class expand_flavor;
class flavor_capture;
class conditional_flavor;
class value;
class user_defined_instruction;
class object;
class object_access;
class deamerreserved_arrow__member__;
class deamerreserved_star__DOT__member__;
class member;
class deamerreserved_arrow__deamerreserved_optional__argument____;
class deamerreserved_star__COMMA__argument__;
class argument;
class flavor;
class flavor_specialization;
class COMMENT;
class LEFT_SQUARE_BRACKET;
class RIGHT_SQUARE_BRACKET;
class LEFT_BRACKET;
class RIGHT_BRACKET;
class LEFT_PARANTHESIS;
class RIGHT_PARANTHESIS;
class COMMA;
class DOT;
class ARROW;
class COLON;
class NEW;
class DELETE;
class EXPAND;
class WITH;
class AND;
class EQEQ;
class EQ;
class GTE;
class GT;
class LTE;
class LT;
class ADD;
class MINUS;
class TARGET_SETTING;
class INCLUDE_SETTING;
class MEMBER_SETTING;
class FUNCTION_SETTING;
class USER_INSERTED_SETTING;
class VARNAME;
class NUMBER;
class STRING;
class ESCAPE_CHARS;

}}}

namespace fgl { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::fgl::ast::node::program>
	{
		constexpr static auto value = ::fgl::ast::Type::program;
		using type = ::fgl::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__stmt__;
		using type = ::fgl::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::stmt>
	{
		constexpr static auto value = ::fgl::ast::Type::stmt;
		using type = ::fgl::ast::node::stmt;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::setting_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::setting_rule;
		using type = ::fgl::ast::node::setting_rule;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::entry_manipulation_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::entry_manipulation_rule;
		using type = ::fgl::ast::node::entry_manipulation_rule;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::exit_manipulation_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::exit_manipulation_rule;
		using type = ::fgl::ast::node::exit_manipulation_rule;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::capture>
	{
		constexpr static auto value = ::fgl::ast::Type::capture;
		using type = ::fgl::ast::node::capture;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
		using type = ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::manipulation>
	{
		constexpr static auto value = ::fgl::ast::Type::manipulation;
		using type = ::fgl::ast::node::manipulation;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_star__COMMA__instruction__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__COMMA__instruction__;
		using type = ::fgl::ast::node::deamerreserved_star__COMMA__instruction__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::instruction>
	{
		constexpr static auto value = ::fgl::ast::Type::instruction;
		using type = ::fgl::ast::node::instruction;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::new_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::new_flavor;
		using type = ::fgl::ast::node::new_flavor;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::delete_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::delete_flavor;
		using type = ::fgl::ast::node::delete_flavor;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::expand_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::expand_flavor;
		using type = ::fgl::ast::node::expand_flavor;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::flavor_capture>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor_capture;
		using type = ::fgl::ast::node::flavor_capture;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::conditional_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::conditional_flavor;
		using type = ::fgl::ast::node::conditional_flavor;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::value>
	{
		constexpr static auto value = ::fgl::ast::Type::value;
		using type = ::fgl::ast::node::value;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::user_defined_instruction>
	{
		constexpr static auto value = ::fgl::ast::Type::user_defined_instruction;
		using type = ::fgl::ast::node::user_defined_instruction;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::object>
	{
		constexpr static auto value = ::fgl::ast::Type::object;
		using type = ::fgl::ast::node::object;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::object_access>
	{
		constexpr static auto value = ::fgl::ast::Type::object_access;
		using type = ::fgl::ast::node::object_access;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_arrow__member__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__member__;
		using type = ::fgl::ast::node::deamerreserved_arrow__member__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_star__DOT__member__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__DOT__member__;
		using type = ::fgl::ast::node::deamerreserved_star__DOT__member__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::member>
	{
		constexpr static auto value = ::fgl::ast::Type::member;
		using type = ::fgl::ast::node::member;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::deamerreserved_star__COMMA__argument__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__COMMA__argument__;
		using type = ::fgl::ast::node::deamerreserved_star__COMMA__argument__;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::argument>
	{
		constexpr static auto value = ::fgl::ast::Type::argument;
		using type = ::fgl::ast::node::argument;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor;
		using type = ::fgl::ast::node::flavor;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::flavor_specialization>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor_specialization;
		using type = ::fgl::ast::node::flavor_specialization;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::COMMENT>
	{
		constexpr static auto value = ::fgl::ast::Type::COMMENT;
		using type = ::fgl::ast::node::COMMENT;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::fgl::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::fgl::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::LEFT_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_BRACKET;
		using type = ::fgl::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::RIGHT_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_BRACKET;
		using type = ::fgl::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_PARANTHESIS;
		using type = ::fgl::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_PARANTHESIS;
		using type = ::fgl::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::COMMA>
	{
		constexpr static auto value = ::fgl::ast::Type::COMMA;
		using type = ::fgl::ast::node::COMMA;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::DOT>
	{
		constexpr static auto value = ::fgl::ast::Type::DOT;
		using type = ::fgl::ast::node::DOT;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::ARROW>
	{
		constexpr static auto value = ::fgl::ast::Type::ARROW;
		using type = ::fgl::ast::node::ARROW;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::COLON>
	{
		constexpr static auto value = ::fgl::ast::Type::COLON;
		using type = ::fgl::ast::node::COLON;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::NEW>
	{
		constexpr static auto value = ::fgl::ast::Type::NEW;
		using type = ::fgl::ast::node::NEW;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::DELETE>
	{
		constexpr static auto value = ::fgl::ast::Type::DELETE;
		using type = ::fgl::ast::node::DELETE;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::EXPAND>
	{
		constexpr static auto value = ::fgl::ast::Type::EXPAND;
		using type = ::fgl::ast::node::EXPAND;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::WITH>
	{
		constexpr static auto value = ::fgl::ast::Type::WITH;
		using type = ::fgl::ast::node::WITH;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::AND>
	{
		constexpr static auto value = ::fgl::ast::Type::AND;
		using type = ::fgl::ast::node::AND;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::EQEQ>
	{
		constexpr static auto value = ::fgl::ast::Type::EQEQ;
		using type = ::fgl::ast::node::EQEQ;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::EQ>
	{
		constexpr static auto value = ::fgl::ast::Type::EQ;
		using type = ::fgl::ast::node::EQ;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::GTE>
	{
		constexpr static auto value = ::fgl::ast::Type::GTE;
		using type = ::fgl::ast::node::GTE;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::GT>
	{
		constexpr static auto value = ::fgl::ast::Type::GT;
		using type = ::fgl::ast::node::GT;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::LTE>
	{
		constexpr static auto value = ::fgl::ast::Type::LTE;
		using type = ::fgl::ast::node::LTE;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::LT>
	{
		constexpr static auto value = ::fgl::ast::Type::LT;
		using type = ::fgl::ast::node::LT;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::ADD>
	{
		constexpr static auto value = ::fgl::ast::Type::ADD;
		using type = ::fgl::ast::node::ADD;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::MINUS>
	{
		constexpr static auto value = ::fgl::ast::Type::MINUS;
		using type = ::fgl::ast::node::MINUS;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::TARGET_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::TARGET_SETTING;
		using type = ::fgl::ast::node::TARGET_SETTING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::INCLUDE_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::INCLUDE_SETTING;
		using type = ::fgl::ast::node::INCLUDE_SETTING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::MEMBER_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::MEMBER_SETTING;
		using type = ::fgl::ast::node::MEMBER_SETTING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::FUNCTION_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::FUNCTION_SETTING;
		using type = ::fgl::ast::node::FUNCTION_SETTING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::USER_INSERTED_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::USER_INSERTED_SETTING;
		using type = ::fgl::ast::node::USER_INSERTED_SETTING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::VARNAME>
	{
		constexpr static auto value = ::fgl::ast::Type::VARNAME;
		using type = ::fgl::ast::node::VARNAME;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::NUMBER>
	{
		constexpr static auto value = ::fgl::ast::Type::NUMBER;
		using type = ::fgl::ast::node::NUMBER;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::STRING>
	{
		constexpr static auto value = ::fgl::ast::Type::STRING;
		using type = ::fgl::ast::node::STRING;
	};

	template<>
	struct NodeTypeToEnum<::fgl::ast::node::ESCAPE_CHARS>
	{
		constexpr static auto value = ::fgl::ast::Type::ESCAPE_CHARS;
		using type = ::fgl::ast::node::ESCAPE_CHARS;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::fgl::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::fgl::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // FGL_AST_RELATION_NODETYPETOENUM_H