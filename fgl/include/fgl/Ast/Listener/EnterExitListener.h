#ifndef FGL_AST_LISTENER_ENTEREXITLISTENER_H
#define FGL_AST_LISTENER_ENTEREXITLISTENER_H

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

	class EnterExitListener : public ::deamer::external::cpp::ast::Listener
	{
	private:
	public:
		EnterExitListener() = default;
		~EnterExitListener() override = default;

	public:
		void Dispatch(const ::deamer::external::cpp::ast::Node* node)  override
		{
			const auto enumeratedValue = static_cast<fgl::ast::Type>(node->GetType());
			switch(enumeratedValue)
			{
			// Terminal cases
			
			case fgl::ast::Type::COMMENT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::COMMENT*>(node));
				break;
			}

			case fgl::ast::Type::LEFT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::LEFT_SQUARE_BRACKET*>(node));
				break;
			}

			case fgl::ast::Type::RIGHT_SQUARE_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::RIGHT_SQUARE_BRACKET*>(node));
				break;
			}

			case fgl::ast::Type::LEFT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::LEFT_BRACKET*>(node));
				break;
			}

			case fgl::ast::Type::RIGHT_BRACKET:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::RIGHT_BRACKET*>(node));
				break;
			}

			case fgl::ast::Type::LEFT_PARANTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::LEFT_PARANTHESIS*>(node));
				break;
			}

			case fgl::ast::Type::RIGHT_PARANTHESIS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::RIGHT_PARANTHESIS*>(node));
				break;
			}

			case fgl::ast::Type::COMMA:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::COMMA*>(node));
				break;
			}

			case fgl::ast::Type::DOT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::DOT*>(node));
				break;
			}

			case fgl::ast::Type::ARROW:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::ARROW*>(node));
				break;
			}

			case fgl::ast::Type::COLON:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::COLON*>(node));
				break;
			}

			case fgl::ast::Type::NEW:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::NEW*>(node));
				break;
			}

			case fgl::ast::Type::DELETE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::DELETE*>(node));
				break;
			}

			case fgl::ast::Type::EXPAND:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::EXPAND*>(node));
				break;
			}

			case fgl::ast::Type::WITH:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::WITH*>(node));
				break;
			}

			case fgl::ast::Type::AND:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::AND*>(node));
				break;
			}

			case fgl::ast::Type::EQEQ:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::EQEQ*>(node));
				break;
			}

			case fgl::ast::Type::EQ:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::EQ*>(node));
				break;
			}

			case fgl::ast::Type::GTE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::GTE*>(node));
				break;
			}

			case fgl::ast::Type::GT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::GT*>(node));
				break;
			}

			case fgl::ast::Type::LTE:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::LTE*>(node));
				break;
			}

			case fgl::ast::Type::LT:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::LT*>(node));
				break;
			}

			case fgl::ast::Type::ADD:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::ADD*>(node));
				break;
			}

			case fgl::ast::Type::MINUS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::MINUS*>(node));
				break;
			}

			case fgl::ast::Type::TARGET_SETTING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::TARGET_SETTING*>(node));
				break;
			}

			case fgl::ast::Type::INCLUDE_SETTING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::INCLUDE_SETTING*>(node));
				break;
			}

			case fgl::ast::Type::MEMBER_SETTING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::MEMBER_SETTING*>(node));
				break;
			}

			case fgl::ast::Type::FUNCTION_SETTING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::FUNCTION_SETTING*>(node));
				break;
			}

			case fgl::ast::Type::USER_INSERTED_SETTING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::USER_INSERTED_SETTING*>(node));
				break;
			}

			case fgl::ast::Type::VARNAME:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::VARNAME*>(node));
				break;
			}

			case fgl::ast::Type::NUMBER:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::NUMBER*>(node));
				break;
			}

			case fgl::ast::Type::STRING:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::STRING*>(node));
				break;
			}

			case fgl::ast::Type::ESCAPE_CHARS:
			{
				EnterAnything(node);
				EnterTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::ESCAPE_CHARS*>(node));
				break;
			}


			// Nonterminal cases
			
			case fgl::ast::Type::program:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::program*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::program*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_star__stmt__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_star__stmt__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_star__stmt__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::stmt:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::stmt*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::stmt*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::setting_rule:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::setting_rule*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::setting_rule*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::entry_manipulation_rule:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::entry_manipulation_rule*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::entry_manipulation_rule*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::exit_manipulation_rule:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::exit_manipulation_rule*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::exit_manipulation_rule*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::capture:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::capture*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::capture*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::manipulation:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::manipulation*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::manipulation*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_star__COMMA__instruction__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__instruction__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__instruction__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::instruction:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::instruction*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::instruction*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::new_flavor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::new_flavor*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::new_flavor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::delete_flavor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::delete_flavor*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::delete_flavor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::expand_flavor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::expand_flavor*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::expand_flavor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::flavor_capture:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::flavor_capture*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::flavor_capture*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::conditional_flavor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::conditional_flavor*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::conditional_flavor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::value:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::value*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::value*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::user_defined_instruction:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::user_defined_instruction*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::user_defined_instruction*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::object:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::object*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::object*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::object_access:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::object_access*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::object_access*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_arrow__member__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_arrow__member__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_arrow__member__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_star__DOT__member__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_star__DOT__member__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_star__DOT__member__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::member:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::member*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::member*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::deamerreserved_star__COMMA__argument__:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__argument__*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::deamerreserved_star__COMMA__argument__*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::argument:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::argument*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::argument*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::flavor:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::flavor*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::flavor*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			case fgl::ast::Type::flavor_specialization:
			{
				// Enter nonterminal
				EnterAnything(node);
				EnterNonTerminal(node);
				ListenEntry(static_cast<const fgl::ast::node::flavor_specialization*>(node));
				
				// Go through its children
				DefaultAction(node);

				// Exit nonterminal
				ListenExit(static_cast<const fgl::ast::node::flavor_specialization*>(node));
				ExitNonTerminal(node);
				ExitAnything(node);
				break;
			}

			}
		}

		
		virtual void ListenEntry(const fgl::ast::node::COMMENT* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::LEFT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::RIGHT_SQUARE_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::LEFT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::RIGHT_BRACKET* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::LEFT_PARANTHESIS* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::RIGHT_PARANTHESIS* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::COMMA* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::DOT* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::ARROW* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::COLON* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::NEW* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::DELETE* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::EXPAND* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::WITH* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::AND* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::EQEQ* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::EQ* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::GTE* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::GT* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::LTE* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::LT* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::ADD* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::MINUS* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::TARGET_SETTING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::INCLUDE_SETTING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::MEMBER_SETTING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::FUNCTION_SETTING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::USER_INSERTED_SETTING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::VARNAME* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::NUMBER* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::STRING* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::ESCAPE_CHARS* node) 
		{
		}

		

		
		virtual void ListenEntry(const fgl::ast::node::program* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::stmt* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::setting_rule* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::entry_manipulation_rule* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::exit_manipulation_rule* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::capture* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::manipulation* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_star__COMMA__instruction__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::instruction* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::new_flavor* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::delete_flavor* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::expand_flavor* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::flavor_capture* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::conditional_flavor* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::value* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::user_defined_instruction* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::object* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::object_access* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_arrow__member__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_star__DOT__member__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::member* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::deamerreserved_star__COMMA__argument__* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::argument* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::flavor* node) 
		{
		}

		virtual void ListenEntry(const fgl::ast::node::flavor_specialization* node) 
		{
		}

		
		virtual void ListenExit(const fgl::ast::node::program* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_star__stmt__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::stmt* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::setting_rule* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::entry_manipulation_rule* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::exit_manipulation_rule* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::capture* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::manipulation* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_star__COMMA__instruction__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::instruction* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::new_flavor* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::delete_flavor* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::expand_flavor* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::flavor_capture* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::conditional_flavor* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::value* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::user_defined_instruction* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::object* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::object_access* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_arrow__member__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_star__DOT__member__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::member* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::deamerreserved_star__COMMA__argument__* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::argument* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::flavor* node) 
		{
		}

		virtual void ListenExit(const fgl::ast::node::flavor_specialization* node) 
		{
		}


		
		virtual void EnterTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void ExitNonTerminal(const ::deamer::external::cpp::ast::Node* node) 
		{
		}
		
		virtual void EnterAnything(const ::deamer::external::cpp::ast::Node* node) 
		{
		}

		virtual void ExitAnything(const ::deamer::external::cpp::ast::Node* node) 
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

#endif // FGL_AST_LISTENER_ENTEREXITLISTENER_H