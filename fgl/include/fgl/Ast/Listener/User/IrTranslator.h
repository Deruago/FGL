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
		std::vector<std::string> inheritances;
		std::vector<std::string> functions;
		std::vector<std::string> includes;
		std::vector<std::string> members;
		ir::NamingConvention namingConvention = ir::NamingConvention::standard;
		std::string languageName;
		bool enableDispatch = false;

		void ListenEntry(const node::INCLUDE_SETTING* node) override
		{
			auto include = node->GetValue();
			include.pop_back();
			include.erase(0, include.find('{') + 1);

			includes.push_back(include);
		}

		void ListenEntry(const node::MEMBER_SETTING* node) override
		{
			auto member = node->GetValue();
			member.pop_back();
			member.erase(0, member.find('{') + 1);

			members.push_back(member);
		}

		void ListenEntry(const node::FUNCTION_SETTING* node) override
		{
			auto function = node->GetValue();
			function.erase(0, function.find('{') + 1);

			functions.push_back(function);
		}

		void ListenEntry(const node::INHERITANCE_SETTING* node) override
		{
			auto inheritance = node->GetValue();
			inheritance.erase(0, inheritance.find('{') + 1);

			inheritances.push_back(inheritance);
		}

		void ListenEntry(const node::NAMINGCONVENTION_SETTING* node) override
		{
			auto namingConventionText = node->GetValue();
			namingConventionText.pop_back();
			namingConventionText.erase(0, namingConventionText.find('{') + 1);

			if (namingConventionText == "LS")
			{
				namingConvention = ir::NamingConvention::DeamerLS;
			}
			else if (namingConventionText == "AST")
			{
				namingConvention = ir::NamingConvention::DeamerLegacyAst;
			}
			else
			{
				namingConvention = ir::NamingConvention::standard;
			}
		}

		void ListenEntry(const node::DEAMER_LANGUAGE_NAME_SETTING* node) override
		{
			auto language_name = node->GetValue();
			language_name.pop_back();
			language_name.erase(0, language_name.find('{') + 1);

			languageName = language_name;
		}

		void ListenEntry(const node::DISPATCH_SETTING* node) override
		{
			auto dispatch = node->GetValue();
			dispatch.pop_back();
			dispatch.erase(0, dispatch.find('{') + 1);

			if (dispatch == "false")
			{
				enableDispatch = false;
			}
			else
			{
				enableDispatch = true;
			}
		}

		void ListenEntry(const node::entry_manipulation_rule* node) override
		{
			reference::Access<node::entry_manipulation_rule> access(node);

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

		void ListenEntry(const node::exit_manipulation_rule* node) override
		{
			reference::Access<node::exit_manipulation_rule> access(node);

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
			fgl->SetNamingConvention(namingConvention);
			fgl->SetDeamerLanguageName(languageName);
			fgl->SetDispatchUsage(enableDispatch);
			fgl->SetManipulationRules(manipulationRules);

			for (const auto& include : includes)
			{
				fgl->AddIncludeSetting(include);
			}

			for (const auto& member : members)
			{
				fgl->AddMemberSetting(member);
			}

			for (const auto& function : functions)
			{
				fgl->AddFunctionSetting(function);
			}

			for (const auto& inheritance : inheritances)
			{
				fgl->AddInheritanceSetting(inheritance);
			}

			return fgl.value();
		}
	};
}

#endif // FGL_AST_LISTENER_USER_IRTRANSLATOR_H
