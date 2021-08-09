#include "fgl/IR/Instruction.h"

fgl::ir::Instruction::Instruction(const ::fgl::ast::node::instruction* instruction_,
								  InstructionType type_)
	: instruction(instruction_),
	  type(type_)
{
}

fgl::ir::Instruction::Instruction(const ::fgl::ast::node::instruction* instruction_)
	: instruction(instruction_)
{
	ast::relation::Access<::fgl::ast::node::instruction> access(instruction);
	if (!access.new_flavor().GetContent().empty())
	{
		type = InstructionType::newFlavor;
	}
	else if (!access.delete_flavor().GetContent().empty())
	{
		type = InstructionType::deleteFlavor;
	}
	else if (!access.expand_flavor().GetContent().empty())
	{
		type = InstructionType::expandFlavor;
	}
	else if (!access.user_defined_instruction().GetContent().empty())
	{
		type = InstructionType::userDefined;
	}
}

fgl::ir::InstructionType fgl::ir::Instruction::GetType() const
{
	return type;
}

std::string fgl::ir::Instruction::GetInstruction(LanguageTarget target)
{
	return "";
}

std::string fgl::ir::Instruction::GetInverseInstruction(LanguageTarget target)
{
	return "";
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::Instruction::GetFlavors() const
{
	return {};
}

/*std::unique_ptr<fgl::ir::Instruction> fgl::ir::Instruction::DeepCopy()
{
	return std::make_unique<Instruction>(Instruction(instruction, type));
}*/
