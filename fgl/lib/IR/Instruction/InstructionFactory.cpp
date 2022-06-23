#include "fgl/IR/Instruction/InstructionFactory.h"

std::unique_ptr<fgl::ir::Instruction>
fgl::ir::InstructionFactory::Make(const ::fgl::ast::node::instruction* instruction)
{
	ast::reference::Access<::fgl::ast::node::instruction> access(instruction);
	if (!access.new_flavor().GetContent().empty())
	{
		return std::make_unique<NewFlavor>(instruction);
	}
	if (!access.delete_flavor().GetContent().empty())
	{
		return std::make_unique<DeleteFlavor>(instruction);
	}
	if (!access.expand_flavor().GetContent().empty())
	{
		return std::make_unique<ExpandFlavor>(instruction);
	}
	if (!access.user_defined_instruction().GetContent().empty())
	{
		return std::make_unique<UserDefined>(instruction);
	}

	throw std::logic_error("Unknown instruction given!");
}
