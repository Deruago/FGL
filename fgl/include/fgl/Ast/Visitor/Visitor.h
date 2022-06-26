#ifndef fgl_AST_VISITOR_DEAMER_VISITOR_H
#define fgl_AST_VISITOR_DEAMER_VISITOR_H

#include <Deamer/External/Cpp/Ast/Visitor.h>
#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Enum/Type.h"
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
#include "fgl/Ast/Node/NAMINGCONVENTION_SETTING.h"
#include "fgl/Ast/Node/DISPATCH_SETTING.h"
#include "fgl/Ast/Node/INHERITANCE_SETTING.h"
#include "fgl/Ast/Node/DEAMER_LANGUAGE_NAME_SETTING.h"
#include "fgl/Ast/Node/USER_INSERTED_SETTING.h"
#include "fgl/Ast/Node/VARNAME.h"
#include "fgl/Ast/Node/NUMBER.h"
#include "fgl/Ast/Node/STRING.h"
#include "fgl/Ast/Node/ESCAPE_CHARS.h"

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

namespace fgl { namespace ast { namespace Visitor { 

	class Visitor : public ::deamer::external::cpp::ast::Visitor
	{
	private:
	public:
		Visitor() = default;
		~Visitor() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<fgl::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case fgl::ast::Type::COMMENT:
			{
				Visit(static_cast<const fgl::ast::node::COMMENT*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Visit(static_cast<const fgl::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Visit(static_cast<const fgl::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_BRACKET:
			{
				Visit(static_cast<const fgl::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_BRACKET:
			{
				Visit(static_cast<const fgl::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_PARANTHESIS:
			{
				Visit(static_cast<const fgl::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_PARANTHESIS:
			{
				Visit(static_cast<const fgl::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}
			case fgl::ast::Type::COMMA:
			{
				Visit(static_cast<const fgl::ast::node::COMMA*>(node));
				break;
			}
			case fgl::ast::Type::DOT:
			{
				Visit(static_cast<const fgl::ast::node::DOT*>(node));
				break;
			}
			case fgl::ast::Type::ARROW:
			{
				Visit(static_cast<const fgl::ast::node::ARROW*>(node));
				break;
			}
			case fgl::ast::Type::COLON:
			{
				Visit(static_cast<const fgl::ast::node::COLON*>(node));
				break;
			}
			case fgl::ast::Type::NEW:
			{
				Visit(static_cast<const fgl::ast::node::NEW*>(node));
				break;
			}
			case fgl::ast::Type::DELETE:
			{
				Visit(static_cast<const fgl::ast::node::DELETE*>(node));
				break;
			}
			case fgl::ast::Type::EXPAND:
			{
				Visit(static_cast<const fgl::ast::node::EXPAND*>(node));
				break;
			}
			case fgl::ast::Type::WITH:
			{
				Visit(static_cast<const fgl::ast::node::WITH*>(node));
				break;
			}
			case fgl::ast::Type::AND:
			{
				Visit(static_cast<const fgl::ast::node::AND*>(node));
				break;
			}
			case fgl::ast::Type::EQEQ:
			{
				Visit(static_cast<const fgl::ast::node::EQEQ*>(node));
				break;
			}
			case fgl::ast::Type::EQ:
			{
				Visit(static_cast<const fgl::ast::node::EQ*>(node));
				break;
			}
			case fgl::ast::Type::GTE:
			{
				Visit(static_cast<const fgl::ast::node::GTE*>(node));
				break;
			}
			case fgl::ast::Type::GT:
			{
				Visit(static_cast<const fgl::ast::node::GT*>(node));
				break;
			}
			case fgl::ast::Type::LTE:
			{
				Visit(static_cast<const fgl::ast::node::LTE*>(node));
				break;
			}
			case fgl::ast::Type::LT:
			{
				Visit(static_cast<const fgl::ast::node::LT*>(node));
				break;
			}
			case fgl::ast::Type::ADD:
			{
				Visit(static_cast<const fgl::ast::node::ADD*>(node));
				break;
			}
			case fgl::ast::Type::MINUS:
			{
				Visit(static_cast<const fgl::ast::node::MINUS*>(node));
				break;
			}
			case fgl::ast::Type::TARGET_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::TARGET_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::INCLUDE_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::INCLUDE_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::MEMBER_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::MEMBER_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::FUNCTION_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::FUNCTION_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::NAMINGCONVENTION_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::NAMINGCONVENTION_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::DISPATCH_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::DISPATCH_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::INHERITANCE_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::INHERITANCE_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::DEAMER_LANGUAGE_NAME_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::DEAMER_LANGUAGE_NAME_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::USER_INSERTED_SETTING:
			{
				Visit(static_cast<const fgl::ast::node::USER_INSERTED_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::VARNAME:
			{
				Visit(static_cast<const fgl::ast::node::VARNAME*>(node));
				break;
			}
			case fgl::ast::Type::NUMBER:
			{
				Visit(static_cast<const fgl::ast::node::NUMBER*>(node));
				break;
			}
			case fgl::ast::Type::STRING:
			{
				Visit(static_cast<const fgl::ast::node::STRING*>(node));
				break;
			}
			case fgl::ast::Type::ESCAPE_CHARS:
			{
				Visit(static_cast<const fgl::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case fgl::ast::Type::program:
			{
				Visit(static_cast<const fgl::ast::node::program*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_star__stmt__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_star__stmt__*>(node));
				break;
			}
			case fgl::ast::Type::stmt:
			{
				Visit(static_cast<const fgl::ast::node::stmt*>(node));
				break;
			}
			case fgl::ast::Type::setting_rule:
			{
				Visit(static_cast<const fgl::ast::node::setting_rule*>(node));
				break;
			}
			case fgl::ast::Type::entry_manipulation_rule:
			{
				Visit(static_cast<const fgl::ast::node::entry_manipulation_rule*>(node));
				break;
			}
			case fgl::ast::Type::exit_manipulation_rule:
			{
				Visit(static_cast<const fgl::ast::node::exit_manipulation_rule*>(node));
				break;
			}
			case fgl::ast::Type::capture:
			{
				Visit(static_cast<const fgl::ast::node::capture*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*>(node));
				break;
			}
			case fgl::ast::Type::manipulation:
			{
				Visit(static_cast<const fgl::ast::node::manipulation*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_star__COMMA__instruction__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__instruction__*>(node));
				break;
			}
			case fgl::ast::Type::instruction:
			{
				Visit(static_cast<const fgl::ast::node::instruction*>(node));
				break;
			}
			case fgl::ast::Type::new_flavor:
			{
				Visit(static_cast<const fgl::ast::node::new_flavor*>(node));
				break;
			}
			case fgl::ast::Type::delete_flavor:
			{
				Visit(static_cast<const fgl::ast::node::delete_flavor*>(node));
				break;
			}
			case fgl::ast::Type::expand_flavor:
			{
				Visit(static_cast<const fgl::ast::node::expand_flavor*>(node));
				break;
			}
			case fgl::ast::Type::flavor_capture:
			{
				Visit(static_cast<const fgl::ast::node::flavor_capture*>(node));
				break;
			}
			case fgl::ast::Type::conditional_flavor:
			{
				Visit(static_cast<const fgl::ast::node::conditional_flavor*>(node));
				break;
			}
			case fgl::ast::Type::value:
			{
				Visit(static_cast<const fgl::ast::node::value*>(node));
				break;
			}
			case fgl::ast::Type::user_defined_instruction:
			{
				Visit(static_cast<const fgl::ast::node::user_defined_instruction*>(node));
				break;
			}
			case fgl::ast::Type::object:
			{
				Visit(static_cast<const fgl::ast::node::object*>(node));
				break;
			}
			case fgl::ast::Type::object_access:
			{
				Visit(static_cast<const fgl::ast::node::object_access*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__member__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_arrow__member__*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_star__DOT__member__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_star__DOT__member__*>(node));
				break;
			}
			case fgl::ast::Type::member:
			{
				Visit(static_cast<const fgl::ast::node::member*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*>(node));
				break;
			}
			case fgl::ast::Type::deamerreserved_star__COMMA__argument__:
			{
				Visit(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__argument__*>(node));
				break;
			}
			case fgl::ast::Type::argument:
			{
				Visit(static_cast<const fgl::ast::node::argument*>(node));
				break;
			}
			case fgl::ast::Type::flavor:
			{
				Visit(static_cast<const fgl::ast::node::flavor*>(node));
				break;
			}
			case fgl::ast::Type::flavor_specialization:
			{
				Visit(static_cast<const fgl::ast::node::flavor_specialization*>(node));
				break;
			}
			}
		}
		virtual void Visit(const fgl::ast::node::COMMENT* node)
		{
		}
		virtual void Visit(const fgl::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const fgl::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Visit(const fgl::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Visit(const fgl::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Visit(const fgl::ast::node::LEFT_PARANTHESIS* node)
		{
		}
		virtual void Visit(const fgl::ast::node::RIGHT_PARANTHESIS* node)
		{
		}
		virtual void Visit(const fgl::ast::node::COMMA* node)
		{
		}
		virtual void Visit(const fgl::ast::node::DOT* node)
		{
		}
		virtual void Visit(const fgl::ast::node::ARROW* node)
		{
		}
		virtual void Visit(const fgl::ast::node::COLON* node)
		{
		}
		virtual void Visit(const fgl::ast::node::NEW* node)
		{
		}
		virtual void Visit(const fgl::ast::node::DELETE* node)
		{
		}
		virtual void Visit(const fgl::ast::node::EXPAND* node)
		{
		}
		virtual void Visit(const fgl::ast::node::WITH* node)
		{
		}
		virtual void Visit(const fgl::ast::node::AND* node)
		{
		}
		virtual void Visit(const fgl::ast::node::EQEQ* node)
		{
		}
		virtual void Visit(const fgl::ast::node::EQ* node)
		{
		}
		virtual void Visit(const fgl::ast::node::GTE* node)
		{
		}
		virtual void Visit(const fgl::ast::node::GT* node)
		{
		}
		virtual void Visit(const fgl::ast::node::LTE* node)
		{
		}
		virtual void Visit(const fgl::ast::node::LT* node)
		{
		}
		virtual void Visit(const fgl::ast::node::ADD* node)
		{
		}
		virtual void Visit(const fgl::ast::node::MINUS* node)
		{
		}
		virtual void Visit(const fgl::ast::node::TARGET_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::INCLUDE_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::MEMBER_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::FUNCTION_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::NAMINGCONVENTION_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::DISPATCH_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::INHERITANCE_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::DEAMER_LANGUAGE_NAME_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::USER_INSERTED_SETTING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::VARNAME* node)
		{
		}
		virtual void Visit(const fgl::ast::node::NUMBER* node)
		{
		}
		virtual void Visit(const fgl::ast::node::STRING* node)
		{
		}
		virtual void Visit(const fgl::ast::node::ESCAPE_CHARS* node)
		{
		}

		virtual void Visit(const fgl::ast::node::program* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::stmt* node)
		{
		}
		virtual void Visit(const fgl::ast::node::setting_rule* node)
		{
		}
		virtual void Visit(const fgl::ast::node::entry_manipulation_rule* node)
		{
		}
		virtual void Visit(const fgl::ast::node::exit_manipulation_rule* node)
		{
		}
		virtual void Visit(const fgl::ast::node::capture* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::manipulation* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_star__COMMA__instruction__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::instruction* node)
		{
		}
		virtual void Visit(const fgl::ast::node::new_flavor* node)
		{
		}
		virtual void Visit(const fgl::ast::node::delete_flavor* node)
		{
		}
		virtual void Visit(const fgl::ast::node::expand_flavor* node)
		{
		}
		virtual void Visit(const fgl::ast::node::flavor_capture* node)
		{
		}
		virtual void Visit(const fgl::ast::node::conditional_flavor* node)
		{
		}
		virtual void Visit(const fgl::ast::node::value* node)
		{
		}
		virtual void Visit(const fgl::ast::node::user_defined_instruction* node)
		{
		}
		virtual void Visit(const fgl::ast::node::object* node)
		{
		}
		virtual void Visit(const fgl::ast::node::object_access* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_arrow__member__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_star__DOT__member__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::member* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node)
		{
		}
		virtual void Visit(const fgl::ast::node::deamerreserved_star__COMMA__argument__* node)
		{
		}
		virtual void Visit(const fgl::ast::node::argument* node)
		{
		}
		virtual void Visit(const fgl::ast::node::flavor* node)
		{
		}
		virtual void Visit(const fgl::ast::node::flavor_specialization* node)
		{
		}
	};

}}}

#endif // fgl_AST_VISITOR_DEAMER_VISITOR_H
