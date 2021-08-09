#include "fgl/IR/Generate/File.h"
#include "fgl/Template/IR/Generate/cpp/VisitorTemplate.h"

fgl::ir::generate::File<LanguageTarget::cpp>::File(const Fgl& fgl_) : fgl(fgl_)
{
}

std::string fgl::ir::generate::File<LanguageTarget::cpp>::Generate()
{
	auto visitorTemplate = cpp::VisitorTemplate();

	visitorTemplate.sub_member_access_name_->Set(fgl.GetUnderlyingNodes());

	ImplementActions(visitorTemplate);

	ImplementFlavorDeclarations(visitorTemplate);

	ImplementUserInjections(visitorTemplate);

	return visitorTemplate.GetOutput();
}

void fgl::ir::generate::File<LanguageTarget::cpp>::ImplementActions(
	fgl::ir::generate::cpp::VisitorTemplate& visitorTemplate)
{
	for (auto [target, manipulationRules] : fgl.GetManipulation())
	{
		auto name = target.GetName();
		name.erase(0, name.find_last_of(":") + 1);

		visitorTemplate.object_type_->Set(target.GetName());
		visitorTemplate.object_type_name_->Set(name);

		visitorTemplate.entry_cases_->variable_field_->Clear();
		visitorTemplate.exit_cases_->variable_field_->Clear();

		::std::size_t id = 0;
		for (const auto& manipulationRule : manipulationRules)
		{
			visitorTemplate.action_id_->Set(::std::to_string(id));

			visitorTemplate.entry_conditional_->Set(GetConditionalCaptureOfRule(manipulationRule));
			visitorTemplate.entry_manipulation_->Set(GetManipulationOfRule(manipulationRule));

			visitorTemplate.miror_manipulation_->Set(GetMirorManipulationOfRule(manipulationRule));

			visitorTemplate.entry_cases_->ExpandVariableField();
			visitorTemplate.exit_cases_->ExpandVariableField();

			id += 1;
		}

		visitorTemplate.entry_node_->ExpandVariableField();
		visitorTemplate.exit_node_->ExpandVariableField();
		visitorTemplate.dispatch_function_->ExpandVariableField();
	}
}

void fgl::ir::generate::File<LanguageTarget::cpp>::ImplementFlavorDeclarations(
	fgl::ir::generate::cpp::VisitorTemplate& visitorTemplate)
{
	for (const auto& baseFlavor : fgl.GetBaseFlavors())
	{
		visitorTemplate.flavor_name_->Set(baseFlavor.GetName());
		visitorTemplate.flavor_specialization_member_->variable_field_->Clear();
		visitorTemplate.flavor_enum_to_type_conversion_case_->variable_field_->Clear();
		visitorTemplate.flavor_specialization_case_->variable_field_->Clear();
		visitorTemplate.flavor_specialization_type_definition_case_->variable_field_->Clear();

		for (const auto& specializationFlavor : fgl.GetSpecializationOfBaseFlavors(baseFlavor))
		{
			visitorTemplate.flavor_specialization_name_->Set(
				specializationFlavor.GetSpecializationAsString());

			visitorTemplate.flavor_specialization_case_->ExpandVariableField();
			visitorTemplate.flavor_type_definition_specialization_case_->ExpandVariableField();
			visitorTemplate.flavor_specialization_forward_declaration_->ExpandVariableField();
			visitorTemplate.flavor_specialization_member_->ExpandVariableField();
			visitorTemplate.flavor_specialization_type_definition_case_->ExpandVariableField();
			visitorTemplate.flavor_specialization_->ExpandVariableField();
			visitorTemplate.flavor_enum_to_type_conversion_case_->ExpandVariableField();
		}

		visitorTemplate.flavor_forward_declaration_->ExpandVariableField();
		visitorTemplate.flavor_->ExpandVariableField();
		visitorTemplate.flavor_type_definition_default_case_->ExpandVariableField();
		visitorTemplate.flavor_specialization_type_definition_->ExpandVariableField();
		visitorTemplate.flavor_declaration_->ExpandVariableField();
		visitorTemplate.flavor_enum_to_type_conversion_->ExpandVariableField();
	}
}

void fgl::ir::generate::File<LanguageTarget::cpp>::ImplementUserInjections(
	cpp::VisitorTemplate& visitorTemplate)
{
	for (const auto& include : fgl.GetIncludes())
	{
		visitorTemplate.user_include_section_->Set(include);
		visitorTemplate.user_include_section_->ExpandVariableField();
	}

	for (const auto& function : fgl.GetFunctions())
	{
		visitorTemplate.user_function_section_->Set(function);
		visitorTemplate.user_function_section_->ExpandVariableField();
	}

	for (const auto& member : fgl.GetMembers())
	{
		visitorTemplate.user_member_section_->Set(member);
		visitorTemplate.user_member_section_->ExpandVariableField();
	}
}

std::string fgl::ir::generate::File<LanguageTarget::cpp>::GetConditionalCaptureOfRule(
	const ManipulationRule& value)
{
	std::string conditional;

	const auto& captures = value.GetCapture();
	for (auto i = 0; i < captures.size(); i++)
	{
		const auto& capture = captures[i];

		conditional += capture->GetConditional(LanguageTarget::cpp);

		conditional += " && ";
	}

	conditional += "true";

	return conditional;
}

std::string
fgl::ir::generate::File<LanguageTarget::cpp>::GetManipulationOfRule(const ManipulationRule& value)
{
	std::string manipulationText;

	auto& instructions = value.GetInstructions();

	for (const auto& instruction : instructions)
	{
		manipulationText += instruction->GetInstruction(LanguageTarget::cpp) + "\n";
	}

	return manipulationText;
}

std::string fgl::ir::generate::File<LanguageTarget::cpp>::GetMirorManipulationOfRule(
	const ManipulationRule& value)
{
	std::string manipulationText;

	auto& instructions = value.GetInstructions();

	for (const auto& instruction : instructions)
	{
		manipulationText += instruction->GetInverseInstruction(LanguageTarget::cpp) + "\n";
	}

	std::cout << "\n";
	std::cout << manipulationText << "\n";

	return manipulationText;
}
