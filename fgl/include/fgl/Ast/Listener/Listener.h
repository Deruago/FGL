#ifndef fgl_AST_LISTENER_DEAMER_LISTENER_H
#define fgl_AST_LISTENER_DEAMER_LISTENER_H

#include <Deamer/External/Cpp/Ast/Listener.h>
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

namespace fgl { namespace ast { namespace listener { 

	class Listener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		Listener() = default;
		~Listener() override = default;
	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node) override
		{
			const auto enumeratedValue = static_cast<fgl::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			case fgl::ast::Type::COMMENT:
			{
				Listen(static_cast<const fgl::ast::node::COMMENT*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_SQUARE_BRACKET:
			{
				Listen(static_cast<const fgl::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				Listen(static_cast<const fgl::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_BRACKET:
			{
				Listen(static_cast<const fgl::ast::node::LEFT_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_BRACKET:
			{
				Listen(static_cast<const fgl::ast::node::RIGHT_BRACKET*>(node));
				break;
			}
			case fgl::ast::Type::LEFT_PARANTHESIS:
			{
				Listen(static_cast<const fgl::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}
			case fgl::ast::Type::RIGHT_PARANTHESIS:
			{
				Listen(static_cast<const fgl::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}
			case fgl::ast::Type::COMMA:
			{
				Listen(static_cast<const fgl::ast::node::COMMA*>(node));
				break;
			}
			case fgl::ast::Type::DOT:
			{
				Listen(static_cast<const fgl::ast::node::DOT*>(node));
				break;
			}
			case fgl::ast::Type::ARROW:
			{
				Listen(static_cast<const fgl::ast::node::ARROW*>(node));
				break;
			}
			case fgl::ast::Type::COLON:
			{
				Listen(static_cast<const fgl::ast::node::COLON*>(node));
				break;
			}
			case fgl::ast::Type::NEW:
			{
				Listen(static_cast<const fgl::ast::node::NEW*>(node));
				break;
			}
			case fgl::ast::Type::DELETE:
			{
				Listen(static_cast<const fgl::ast::node::DELETE*>(node));
				break;
			}
			case fgl::ast::Type::EXPAND:
			{
				Listen(static_cast<const fgl::ast::node::EXPAND*>(node));
				break;
			}
			case fgl::ast::Type::WITH:
			{
				Listen(static_cast<const fgl::ast::node::WITH*>(node));
				break;
			}
			case fgl::ast::Type::AND:
			{
				Listen(static_cast<const fgl::ast::node::AND*>(node));
				break;
			}
			case fgl::ast::Type::EQEQ:
			{
				Listen(static_cast<const fgl::ast::node::EQEQ*>(node));
				break;
			}
			case fgl::ast::Type::EQ:
			{
				Listen(static_cast<const fgl::ast::node::EQ*>(node));
				break;
			}
			case fgl::ast::Type::GTE:
			{
				Listen(static_cast<const fgl::ast::node::GTE*>(node));
				break;
			}
			case fgl::ast::Type::GT:
			{
				Listen(static_cast<const fgl::ast::node::GT*>(node));
				break;
			}
			case fgl::ast::Type::LTE:
			{
				Listen(static_cast<const fgl::ast::node::LTE*>(node));
				break;
			}
			case fgl::ast::Type::LT:
			{
				Listen(static_cast<const fgl::ast::node::LT*>(node));
				break;
			}
			case fgl::ast::Type::ADD:
			{
				Listen(static_cast<const fgl::ast::node::ADD*>(node));
				break;
			}
			case fgl::ast::Type::MINUS:
			{
				Listen(static_cast<const fgl::ast::node::MINUS*>(node));
				break;
			}
			case fgl::ast::Type::TARGET_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::TARGET_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::INCLUDE_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::INCLUDE_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::MEMBER_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::MEMBER_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::FUNCTION_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::FUNCTION_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::NAMINGCONVENTION_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::NAMINGCONVENTION_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::DISPATCH_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::DISPATCH_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::INHERITANCE_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::INHERITANCE_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::DEAMER_LANGUAGE_NAME_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::DEAMER_LANGUAGE_NAME_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::USER_INSERTED_SETTING:
			{
				Listen(static_cast<const fgl::ast::node::USER_INSERTED_SETTING*>(node));
				break;
			}
			case fgl::ast::Type::VARNAME:
			{
				Listen(static_cast<const fgl::ast::node::VARNAME*>(node));
				break;
			}
			case fgl::ast::Type::NUMBER:
			{
				Listen(static_cast<const fgl::ast::node::NUMBER*>(node));
				break;
			}
			case fgl::ast::Type::STRING:
			{
				Listen(static_cast<const fgl::ast::node::STRING*>(node));
				break;
			}
			case fgl::ast::Type::ESCAPE_CHARS:
			{
				Listen(static_cast<const fgl::ast::node::ESCAPE_CHARS*>(node));
				break;
			}

			case fgl::ast::Type::program:
			{
				Listen(static_cast<const fgl::ast::node::program*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_star__stmt__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_star__stmt__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::stmt:
			{
				Listen(static_cast<const fgl::ast::node::stmt*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::setting_rule:
			{
				Listen(static_cast<const fgl::ast::node::setting_rule*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::entry_manipulation_rule:
			{
				Listen(static_cast<const fgl::ast::node::entry_manipulation_rule*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::exit_manipulation_rule:
			{
				Listen(static_cast<const fgl::ast::node::exit_manipulation_rule*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::capture:
			{
				Listen(static_cast<const fgl::ast::node::capture*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::manipulation:
			{
				Listen(static_cast<const fgl::ast::node::manipulation*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_star__COMMA__instruction__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__instruction__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::instruction:
			{
				Listen(static_cast<const fgl::ast::node::instruction*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::new_flavor:
			{
				Listen(static_cast<const fgl::ast::node::new_flavor*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::delete_flavor:
			{
				Listen(static_cast<const fgl::ast::node::delete_flavor*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::expand_flavor:
			{
				Listen(static_cast<const fgl::ast::node::expand_flavor*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::flavor_capture:
			{
				Listen(static_cast<const fgl::ast::node::flavor_capture*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::conditional_flavor:
			{
				Listen(static_cast<const fgl::ast::node::conditional_flavor*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::value:
			{
				Listen(static_cast<const fgl::ast::node::value*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::user_defined_instruction:
			{
				Listen(static_cast<const fgl::ast::node::user_defined_instruction*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::object:
			{
				Listen(static_cast<const fgl::ast::node::object*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::object_access:
			{
				Listen(static_cast<const fgl::ast::node::object_access*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__member__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_arrow__member__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_star__DOT__member__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_star__DOT__member__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::member:
			{
				Listen(static_cast<const fgl::ast::node::member*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::deamerreserved_star__COMMA__argument__:
			{
				Listen(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__argument__*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::argument:
			{
				Listen(static_cast<const fgl::ast::node::argument*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::flavor:
			{
				Listen(static_cast<const fgl::ast::node::flavor*>(node));
				DefaultAction(node);
				break;
			}
			case fgl::ast::Type::flavor_specialization:
			{
				Listen(static_cast<const fgl::ast::node::flavor_specialization*>(node));
				DefaultAction(node);
				break;
			}
			}
		}
		virtual void Listen(const fgl::ast::node::COMMENT* node)
		{
		}
		virtual void Listen(const fgl::ast::node::LEFT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const fgl::ast::node::RIGHT_SQUARE_BRACKET* node)
		{
		}
		virtual void Listen(const fgl::ast::node::LEFT_BRACKET* node)
		{
		}
		virtual void Listen(const fgl::ast::node::RIGHT_BRACKET* node)
		{
		}
		virtual void Listen(const fgl::ast::node::LEFT_PARANTHESIS* node)
		{
		}
		virtual void Listen(const fgl::ast::node::RIGHT_PARANTHESIS* node)
		{
		}
		virtual void Listen(const fgl::ast::node::COMMA* node)
		{
		}
		virtual void Listen(const fgl::ast::node::DOT* node)
		{
		}
		virtual void Listen(const fgl::ast::node::ARROW* node)
		{
		}
		virtual void Listen(const fgl::ast::node::COLON* node)
		{
		}
		virtual void Listen(const fgl::ast::node::NEW* node)
		{
		}
		virtual void Listen(const fgl::ast::node::DELETE* node)
		{
		}
		virtual void Listen(const fgl::ast::node::EXPAND* node)
		{
		}
		virtual void Listen(const fgl::ast::node::WITH* node)
		{
		}
		virtual void Listen(const fgl::ast::node::AND* node)
		{
		}
		virtual void Listen(const fgl::ast::node::EQEQ* node)
		{
		}
		virtual void Listen(const fgl::ast::node::EQ* node)
		{
		}
		virtual void Listen(const fgl::ast::node::GTE* node)
		{
		}
		virtual void Listen(const fgl::ast::node::GT* node)
		{
		}
		virtual void Listen(const fgl::ast::node::LTE* node)
		{
		}
		virtual void Listen(const fgl::ast::node::LT* node)
		{
		}
		virtual void Listen(const fgl::ast::node::ADD* node)
		{
		}
		virtual void Listen(const fgl::ast::node::MINUS* node)
		{
		}
		virtual void Listen(const fgl::ast::node::TARGET_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::INCLUDE_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::MEMBER_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::FUNCTION_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::NAMINGCONVENTION_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::DISPATCH_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::INHERITANCE_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::DEAMER_LANGUAGE_NAME_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::USER_INSERTED_SETTING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::VARNAME* node)
		{
		}
		virtual void Listen(const fgl::ast::node::NUMBER* node)
		{
		}
		virtual void Listen(const fgl::ast::node::STRING* node)
		{
		}
		virtual void Listen(const fgl::ast::node::ESCAPE_CHARS* node)
		{
		}

		virtual void Listen(const fgl::ast::node::program* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_star__stmt__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::stmt* node)
		{
		}
		virtual void Listen(const fgl::ast::node::setting_rule* node)
		{
		}
		virtual void Listen(const fgl::ast::node::entry_manipulation_rule* node)
		{
		}
		virtual void Listen(const fgl::ast::node::exit_manipulation_rule* node)
		{
		}
		virtual void Listen(const fgl::ast::node::capture* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::manipulation* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_star__COMMA__instruction__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::instruction* node)
		{
		}
		virtual void Listen(const fgl::ast::node::new_flavor* node)
		{
		}
		virtual void Listen(const fgl::ast::node::delete_flavor* node)
		{
		}
		virtual void Listen(const fgl::ast::node::expand_flavor* node)
		{
		}
		virtual void Listen(const fgl::ast::node::flavor_capture* node)
		{
		}
		virtual void Listen(const fgl::ast::node::conditional_flavor* node)
		{
		}
		virtual void Listen(const fgl::ast::node::value* node)
		{
		}
		virtual void Listen(const fgl::ast::node::user_defined_instruction* node)
		{
		}
		virtual void Listen(const fgl::ast::node::object* node)
		{
		}
		virtual void Listen(const fgl::ast::node::object_access* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_arrow__member__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_star__DOT__member__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::member* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node)
		{
		}
		virtual void Listen(const fgl::ast::node::deamerreserved_star__COMMA__argument__* node)
		{
		}
		virtual void Listen(const fgl::ast::node::argument* node)
		{
		}
		virtual void Listen(const fgl::ast::node::flavor* node)
		{
		}
		virtual void Listen(const fgl::ast::node::flavor_specialization* node)
		{
		}
	private:
		void DefaultAction(const ::deamer::external::cpp::ast::Node* node)
		{
			for(const auto* child : node->GetNodes())
			{
				Dispatch(child);
			}
		}
	};

}}}

#endif // fgl_AST_LISTENER_DEAMER_LISTENER_H
