#ifndef FGL_AST_LISTENER_USER_IRTRANSLATOR_H
#define FGL_AST_LISTENER_USER_IRTRANSLATOR_H

#include "fgl/Ast/Listener/EnterExitListener.h"
#include "fgl/Ast/Reference/Access.h"
#include "fgl/IR/Capture.h"
#include "fgl/IR/Capture/CaptureFactory.h"
#include "fgl/IR/Fgl.h"
#include "fgl/IR/Instruction.h"
#include "fgl/IR/Instruction/InstructionFactory.h"
#include "fgl/IR/ManipulationRule.h"
#include "fgl/IR/Object.h"
#include <map>
#include <optional>

namespace fgl::ast::listener::user
{
	class IrTranslator : public EnterExitListener
	{
		std::map<ir::Object, std::vector<ir::ManipulationRule>> manipulationRules;
		mutable std::optional<ir::Fgl> fgl; // lazy initialized;
		::std::vector<::std::string> functions;
		::std::vector<::std::string> includes;
		::std::vector<::std::string> members;

		void ListenEntry(const fgl::ast::node::INCLUDE_SETTING* node) override
		{
			auto include = node->GetValue();
			include.pop_back();
			include.erase(0, include.find('{') + 1);

			includes.push_back(include);
		}

		void ListenEntry(const fgl::ast::node::MEMBER_SETTING* node) override
		{
			auto member = node->GetValue();
			member.pop_back();
			member.erase(0, member.find('{') + 1);

			members.push_back(member);
		}

		void ListenEntry(const fgl::ast::node::FUNCTION_SETTING* node) override
		{
			auto function = node->GetValue();
			function.erase(0, 9);

			functions.push_back(function);
		}

		void ListenEntry(const ::fgl::ast::node::entry_manipulation_rule* node) override
		{
			reference::Access<::fgl::ast::node::entry_manipulation_rule> access(node);

			const ir::Object target(access.object().VARNAME().GetContent()[0]->GetValue());

			std::vector<std::unique_ptr<ir::Capture>> captures;
			access.capture().flavor_capture().for_all(
				[&captures](const node::flavor_capture* flavor_capture) {
					captures.emplace_back(ir::CaptureFactory::Make(flavor_capture));
				});

			std::vector<std::unique_ptr<ir::Instruction>> instructions;
			access.manipulation().instruction().for_all(
				[&instructions](const node::instruction* instruction) {
					instructions.emplace_back(ir::InstructionFactory::Make(instruction));
				});

			auto manipulationRule = ir::ManipulationRule(std::move(captures), target,
														 std::move(instructions), ir::Type::Entry);

			if (manipulationRules.find(target) == manipulationRules.end())
			{
				manipulationRules.insert({target, std::vector<ir::ManipulationRule>()});
			}

			manipulationRules[target].emplace_back(std::move(manipulationRule));
		}

		void ListenEntry(const ::fgl::ast::node::exit_manipulation_rule* node) override
		{
			reference::Access<::fgl::ast::node::exit_manipulation_rule> access(node);

			const ir::Object target(access.object().VARNAME().GetContent()[0]->GetValue());

			std::vector<std::unique_ptr<ir::Capture>> captures;
			access.capture().flavor_capture().for_all(
				[&captures](const node::flavor_capture* flavor_capture) {
					captures.emplace_back(ir::CaptureFactory::Make(flavor_capture));
				});

			std::vector<std::unique_ptr<ir::Instruction>> instructions;
			access.manipulation().instruction().for_all(
				[&instructions](const node::instruction* instruction) {
					instructions.emplace_back(ir::InstructionFactory::Make(instruction));
				});

			auto manipulationRule = ir::ManipulationRule(std::move(captures), target,
														 std::move(instructions), ir::Type::Exit);

			if (manipulationRules.find(target) == manipulationRules.end())
			{
				manipulationRules.insert({target, std::vector<ir::ManipulationRule>()});
			}

			manipulationRules[target].emplace_back(std::move(manipulationRule));
		}

	public:
		[[nodiscard]] std::map<ir::Object, std::vector<ir::ManipulationRule>>
		GetManipulationRules() const
		{
			return manipulationRules;
		}

		ir::Fgl GetFgl() const
		{
			if (fgl.has_value())
			{
				return fgl.value();
			}

			fgl = ir::Fgl();
			fgl.value().SetManipulationRules(manipulationRules);

			for (const auto& include : includes)
			{
				fgl.value().AddIncludeSetting(include);
			}

			for (const auto& member : members)
			{
				fgl.value().AddMemberSetting(member);
			}

			for (const auto& function : functions)
			{
				fgl.value().AddFunctionSetting(function);
			}

			return fgl.value();
		}
	};
}

#endif // FGL_AST_LISTENER_USER_IRTRANSLATOR_H
