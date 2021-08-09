#ifndef FGL_AST_VISUALISATION_GRAPH_H
#define FGL_AST_VISUALISATION_GRAPH_H

#include "fgl/Ast/Listener/EnterExitListener.h"

namespace fgl { namespace ast { namespace listener { namespace deamer { namespace visualisation {

	class Graph : public EnterExitListener
	{
	private:
		std::string output;

		void Init()
		{
			output += "digraph fgl_AST {\n";
		}

		void End()
		{
			output += "}\n";
		}

		void AddConnection(const  ::deamer::external::cpp::ast::Node* source, const  ::deamer::external::cpp::ast::Node* target)
		{
			output += "\t" + std::to_string(::std::size_t(source)) + " -> " + std::to_string(::std::size_t(target)) + ";\n";
		}

		
		void ListenEntry(const ::fgl::ast::node::program* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"program\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_star__stmt__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__stmt__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"stmt\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::setting_rule* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"setting_rule\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::entry_manipulation_rule* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"entry_manipulation_rule\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::exit_manipulation_rule* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"exit_manipulation_rule\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::capture* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"capture\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__deamerreserved_optional__flavor_capture____\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::manipulation* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"manipulation\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__deamerreserved_optional__instruction____\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__instruction__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::instruction* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"instruction\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::new_flavor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"new_flavor\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::delete_flavor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"delete_flavor\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::expand_flavor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"expand_flavor\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::flavor_capture* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"flavor_capture\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::conditional_flavor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"conditional_flavor\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::value* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"value\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::user_defined_instruction* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"user_defined_instruction\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::object* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"object\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::object_access* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"object_access\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_arrow__member__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__member__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_star__DOT__member__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__DOT__member__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::member* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"member\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_arrow__deamerreserved_optional__argument____\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::deamerreserved_star__COMMA__argument__* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"deamerreserved_star__COMMA__argument__\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::argument* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"argument\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::flavor* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"flavor\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::flavor_specialization* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"flavor_specialization\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::COMMENT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COMMENT\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::LEFT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::RIGHT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::LEFT_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_BRACKET\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::RIGHT_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_BRACKET\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::LEFT_PARANTHESIS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_PARANTHESIS\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::RIGHT_PARANTHESIS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_PARANTHESIS\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::COMMA* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COMMA\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::DOT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DOT\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::ARROW* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ARROW\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::COLON* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"COLON\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::NEW* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NEW\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::DELETE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DELETE\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::EXPAND* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EXPAND\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::WITH* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"WITH\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::AND* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"AND\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::EQEQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EQEQ\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::EQ* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EQ\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::GTE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"GTE\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::GT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"GT\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::LTE* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LTE\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::LT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LT\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::ADD* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ADD\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::MINUS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MINUS\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::TARGET_SETTING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"TARGET_SETTING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::INCLUDE_SETTING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"INCLUDE_SETTING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::MEMBER_SETTING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"MEMBER_SETTING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::FUNCTION_SETTING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"FUNCTION_SETTING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::USER_INSERTED_SETTING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"USER_INSERTED_SETTING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::VARNAME* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"VARNAME\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::NUMBER* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"NUMBER\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::STRING* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"STRING\"];\n";
		}

		void ListenEntry(const ::fgl::ast::node::ESCAPE_CHARS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ESCAPE_CHARS\"];\n";
		}

		
		void ListenExit(const ::fgl::ast::node::program* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_star__stmt__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::stmt* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::setting_rule* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::entry_manipulation_rule* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::exit_manipulation_rule* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::capture* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::manipulation* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_star__COMMA__instruction__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::instruction* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::new_flavor* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::delete_flavor* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::expand_flavor* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::flavor_capture* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::conditional_flavor* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::value* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::user_defined_instruction* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::object* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::object_access* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_arrow__member__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_star__DOT__member__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::member* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::deamerreserved_star__COMMA__argument__* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::argument* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::flavor* node) override
		{
		}

		void ListenExit(const ::fgl::ast::node::flavor_specialization* node) override
		{
		}


	public:
		Graph()
		{
			Init();
		}


		std::string GetGraph()
		{
			End();
			return output;
		}
	};

}}}}}

#endif // FGL_AST_VISUALISATION_GRAPH_H