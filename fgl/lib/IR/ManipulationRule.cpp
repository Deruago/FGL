#include "fgl/IR/ManipulationRule.h"
#include <utility>

fgl::ir::ManipulationRule::ManipulationRule(std::vector<std::unique_ptr<Capture>> captures_,
											Object object_,
											std::vector<std::unique_ptr<Instruction>> instructions_,
											Type type_)
	: captures(std::move(captures_)),
	  object(std::move(object_)),
	  instructions(std::move(instructions_)),
	  type(type_)
{
}

fgl::ir::ManipulationRule::ManipulationRule(const ManipulationRule& manipulationRule)
{
	for (auto const& capture : manipulationRule.captures)
	{
		captures.push_back(capture->DeepCopy());
	}

	object = manipulationRule.object;

	for (auto const& instruction : manipulationRule.instructions)
	{
		instructions.push_back(instruction->DeepCopy());
	}

	type = manipulationRule.type;
}

fgl::ir::ManipulationRule::ManipulationRule(ManipulationRule&& manipulationRule) noexcept
	: captures(std::move(manipulationRule.captures)),
	  object(manipulationRule.object),
	  instructions(std::move(manipulationRule.instructions)),
	  type(manipulationRule.type)
{
}

fgl::ir::Object fgl::ir::ManipulationRule::GetTarget() const
{
	return object;
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::ManipulationRule::GetFlavors() const
{
	std::vector<DifferenceFlavor> flavors;
	for (auto const& instruction : instructions)
	{
		for (auto const& differenceFlavor : instruction->GetFlavors())
		{
			flavors.push_back(differenceFlavor);
		}
	}

	for (auto const& capture : captures)
	{
		for (auto const& differenceFlavor : capture->GetFlavors())
		{
			flavors.push_back(differenceFlavor);
		}
	}

	return flavors;
}

const std::vector<std::unique_ptr<fgl::ir::Capture>>& fgl::ir::ManipulationRule::GetCapture() const
{
	return captures;
}

const std::vector<std::unique_ptr<fgl::ir::Instruction>>&
fgl::ir::ManipulationRule::GetInstructions() const
{
	return instructions;
}
