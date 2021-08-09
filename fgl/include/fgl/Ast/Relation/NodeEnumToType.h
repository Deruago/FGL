#ifndef FGL_AST_RELATION_NODEENUMTOTYPE_H
#define FGL_AST_RELATION_NODEENUMTOTYPE_H

#include "fgl/Ast/Enum/Type.h"

#include "fgl/Ast/Node/program.h"
#include "fgl/Ast/Node/deamerreserved_star__stmt__.h"
#include "fgl/Ast/Node/stmt.h"
#include "fgl/Ast/Node/setting_rule.h"
#include "fgl/Ast/Node/entry_manipulation_rule.h"
#include "fgl/Ast/Node/exit_manipulation_rule.h"
#include "fgl/Ast/Node/capture.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__flavor_capture____.h"
#include "fgl/Ast/Node/deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.h"
#include "fgl/Ast/Node/manipulation.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__instruction____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__instruction__.h"
#include "fgl/Ast/Node/instruction.h"
#include "fgl/Ast/Node/new_flavor.h"
#include "fgl/Ast/Node/delete_flavor.h"
#include "fgl/Ast/Node/expand_flavor.h"
#include "fgl/Ast/Node/flavor_capture.h"
#include "fgl/Ast/Node/conditional_flavor.h"
#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Node/user_defined_instruction.h"
#include "fgl/Ast/Node/object.h"
#include "fgl/Ast/Node/object_access.h"
#include "fgl/Ast/Node/deamerreserved_arrow__member__.h"
#include "fgl/Ast/Node/deamerreserved_star__DOT__member__.h"
#include "fgl/Ast/Node/member.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__argument____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__argument__.h"
#include "fgl/Ast/Node/argument.h"
#include "fgl/Ast/Node/flavor.h"
#include "fgl/Ast/Node/flavor_specialization.h"
#include "fgl/Ast/Node/COMMENT.h"
#include "fgl/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/LEFT_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_BRACKET.h"
#include "fgl/Ast/Node/LEFT_PARANTHESIS.h"
#include "fgl/Ast/Node/RIGHT_PARANTHESIS.h"
#include "fgl/Ast/Node/COMMA.h"
#include "fgl/Ast/Node/DOT.h"
#include "fgl/Ast/Node/ARROW.h"
#include "fgl/Ast/Node/COLON.h"
#include "fgl/Ast/Node/NEW.h"
#include "fgl/Ast/Node/DELETE.h"
#include "fgl/Ast/Node/EXPAND.h"
#include "fgl/Ast/Node/WITH.h"
#include "fgl/Ast/Node/AND.h"
#include "fgl/Ast/Node/EQEQ.h"
#include "fgl/Ast/Node/EQ.h"
#include "fgl/Ast/Node/GTE.h"
#include "fgl/Ast/Node/GT.h"
#include "fgl/Ast/Node/LTE.h"
#include "fgl/Ast/Node/LT.h"
#include "fgl/Ast/Node/ADD.h"
#include "fgl/Ast/Node/MINUS.h"
#include "fgl/Ast/Node/TARGET_SETTING.h"
#include "fgl/Ast/Node/INCLUDE_SETTING.h"
#include "fgl/Ast/Node/MEMBER_SETTING.h"
#include "fgl/Ast/Node/FUNCTION_SETTING.h"
#include "fgl/Ast/Node/USER_INSERTED_SETTING.h"
#include "fgl/Ast/Node/VARNAME.h"
#include "fgl/Ast/Node/NUMBER.h"
#include "fgl/Ast/Node/STRING.h"
#include "fgl/Ast/Node/ESCAPE_CHARS.h"


namespace fgl { namespace ast { namespace relation { 

	template<::fgl::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::fgl::ast::Type::program>
	{
		constexpr static auto value = ::fgl::ast::Type::program;
		using type = ::fgl::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_star__stmt__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__stmt__;
		using type = ::fgl::ast::node::deamerreserved_star__stmt__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::stmt>
	{
		constexpr static auto value = ::fgl::ast::Type::stmt;
		using type = ::fgl::ast::node::stmt;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::setting_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::setting_rule;
		using type = ::fgl::ast::node::setting_rule;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::entry_manipulation_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::entry_manipulation_rule;
		using type = ::fgl::ast::node::entry_manipulation_rule;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::exit_manipulation_rule>
	{
		constexpr static auto value = ::fgl::ast::Type::exit_manipulation_rule;
		using type = ::fgl::ast::node::exit_manipulation_rule;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::capture>
	{
		constexpr static auto value = ::fgl::ast::Type::capture;
		using type = ::fgl::ast::node::capture;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
		using type = ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::manipulation>
	{
		constexpr static auto value = ::fgl::ast::Type::manipulation;
		using type = ::fgl::ast::node::manipulation;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_star__COMMA__instruction__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__COMMA__instruction__;
		using type = ::fgl::ast::node::deamerreserved_star__COMMA__instruction__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::instruction>
	{
		constexpr static auto value = ::fgl::ast::Type::instruction;
		using type = ::fgl::ast::node::instruction;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::new_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::new_flavor;
		using type = ::fgl::ast::node::new_flavor;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::delete_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::delete_flavor;
		using type = ::fgl::ast::node::delete_flavor;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::expand_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::expand_flavor;
		using type = ::fgl::ast::node::expand_flavor;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::flavor_capture>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor_capture;
		using type = ::fgl::ast::node::flavor_capture;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::conditional_flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::conditional_flavor;
		using type = ::fgl::ast::node::conditional_flavor;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::value>
	{
		constexpr static auto value = ::fgl::ast::Type::value;
		using type = ::fgl::ast::node::value;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::user_defined_instruction>
	{
		constexpr static auto value = ::fgl::ast::Type::user_defined_instruction;
		using type = ::fgl::ast::node::user_defined_instruction;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::object>
	{
		constexpr static auto value = ::fgl::ast::Type::object;
		using type = ::fgl::ast::node::object;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::object_access>
	{
		constexpr static auto value = ::fgl::ast::Type::object_access;
		using type = ::fgl::ast::node::object_access;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_arrow__member__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__member__;
		using type = ::fgl::ast::node::deamerreserved_arrow__member__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_star__DOT__member__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__DOT__member__;
		using type = ::fgl::ast::node::deamerreserved_star__DOT__member__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::member>
	{
		constexpr static auto value = ::fgl::ast::Type::member;
		using type = ::fgl::ast::node::member;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____;
		using type = ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::deamerreserved_star__COMMA__argument__>
	{
		constexpr static auto value = ::fgl::ast::Type::deamerreserved_star__COMMA__argument__;
		using type = ::fgl::ast::node::deamerreserved_star__COMMA__argument__;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::argument>
	{
		constexpr static auto value = ::fgl::ast::Type::argument;
		using type = ::fgl::ast::node::argument;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::flavor>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor;
		using type = ::fgl::ast::node::flavor;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::flavor_specialization>
	{
		constexpr static auto value = ::fgl::ast::Type::flavor_specialization;
		using type = ::fgl::ast::node::flavor_specialization;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::COMMENT>
	{
		constexpr static auto value = ::fgl::ast::Type::COMMENT;
		using type = ::fgl::ast::node::COMMENT;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::LEFT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_SQUARE_BRACKET;
		using type = ::fgl::ast::node::LEFT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::RIGHT_SQUARE_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_SQUARE_BRACKET;
		using type = ::fgl::ast::node::RIGHT_SQUARE_BRACKET;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::LEFT_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_BRACKET;
		using type = ::fgl::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::RIGHT_BRACKET>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_BRACKET;
		using type = ::fgl::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::LEFT_PARANTHESIS>
	{
		constexpr static auto value = ::fgl::ast::Type::LEFT_PARANTHESIS;
		using type = ::fgl::ast::node::LEFT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::RIGHT_PARANTHESIS>
	{
		constexpr static auto value = ::fgl::ast::Type::RIGHT_PARANTHESIS;
		using type = ::fgl::ast::node::RIGHT_PARANTHESIS;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::COMMA>
	{
		constexpr static auto value = ::fgl::ast::Type::COMMA;
		using type = ::fgl::ast::node::COMMA;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::DOT>
	{
		constexpr static auto value = ::fgl::ast::Type::DOT;
		using type = ::fgl::ast::node::DOT;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::ARROW>
	{
		constexpr static auto value = ::fgl::ast::Type::ARROW;
		using type = ::fgl::ast::node::ARROW;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::COLON>
	{
		constexpr static auto value = ::fgl::ast::Type::COLON;
		using type = ::fgl::ast::node::COLON;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::NEW>
	{
		constexpr static auto value = ::fgl::ast::Type::NEW;
		using type = ::fgl::ast::node::NEW;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::DELETE>
	{
		constexpr static auto value = ::fgl::ast::Type::DELETE;
		using type = ::fgl::ast::node::DELETE;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::EXPAND>
	{
		constexpr static auto value = ::fgl::ast::Type::EXPAND;
		using type = ::fgl::ast::node::EXPAND;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::WITH>
	{
		constexpr static auto value = ::fgl::ast::Type::WITH;
		using type = ::fgl::ast::node::WITH;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::AND>
	{
		constexpr static auto value = ::fgl::ast::Type::AND;
		using type = ::fgl::ast::node::AND;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::EQEQ>
	{
		constexpr static auto value = ::fgl::ast::Type::EQEQ;
		using type = ::fgl::ast::node::EQEQ;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::EQ>
	{
		constexpr static auto value = ::fgl::ast::Type::EQ;
		using type = ::fgl::ast::node::EQ;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::GTE>
	{
		constexpr static auto value = ::fgl::ast::Type::GTE;
		using type = ::fgl::ast::node::GTE;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::GT>
	{
		constexpr static auto value = ::fgl::ast::Type::GT;
		using type = ::fgl::ast::node::GT;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::LTE>
	{
		constexpr static auto value = ::fgl::ast::Type::LTE;
		using type = ::fgl::ast::node::LTE;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::LT>
	{
		constexpr static auto value = ::fgl::ast::Type::LT;
		using type = ::fgl::ast::node::LT;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::ADD>
	{
		constexpr static auto value = ::fgl::ast::Type::ADD;
		using type = ::fgl::ast::node::ADD;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::MINUS>
	{
		constexpr static auto value = ::fgl::ast::Type::MINUS;
		using type = ::fgl::ast::node::MINUS;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::TARGET_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::TARGET_SETTING;
		using type = ::fgl::ast::node::TARGET_SETTING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::INCLUDE_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::INCLUDE_SETTING;
		using type = ::fgl::ast::node::INCLUDE_SETTING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::MEMBER_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::MEMBER_SETTING;
		using type = ::fgl::ast::node::MEMBER_SETTING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::FUNCTION_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::FUNCTION_SETTING;
		using type = ::fgl::ast::node::FUNCTION_SETTING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::USER_INSERTED_SETTING>
	{
		constexpr static auto value = ::fgl::ast::Type::USER_INSERTED_SETTING;
		using type = ::fgl::ast::node::USER_INSERTED_SETTING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::VARNAME>
	{
		constexpr static auto value = ::fgl::ast::Type::VARNAME;
		using type = ::fgl::ast::node::VARNAME;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::NUMBER>
	{
		constexpr static auto value = ::fgl::ast::Type::NUMBER;
		using type = ::fgl::ast::node::NUMBER;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::STRING>
	{
		constexpr static auto value = ::fgl::ast::Type::STRING;
		using type = ::fgl::ast::node::STRING;
	};

	template<>
	struct NodeEnumToType<::fgl::ast::Type::ESCAPE_CHARS>
	{
		constexpr static auto value = ::fgl::ast::Type::ESCAPE_CHARS;
		using type = ::fgl::ast::node::ESCAPE_CHARS;
	};


template<::fgl::ast::Type T>
constexpr static auto NodeEnumToType_v = ::fgl::ast::relation::NodeEnumToType<T>::value;

template<::fgl::ast::Type T>
using NodeEnumToType_t = typename ::fgl::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // FGL_AST_RELATION_NODEENUMTOTYPE_H