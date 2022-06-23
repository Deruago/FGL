#include "fgl/IR/Instruction/NewFlavor.h"

fgl::ir::NewFlavor::NewFlavor(const ::fgl::ast::node::instruction* instruction)
	: InstructionTemplateBase<NewFlavor>(instruction, InstructionType::newFlavor),
	  flavor(Flavor(
		  ast::reference::Access<::fgl::ast::node::instruction>(instruction).new_flavor().flavor()))
{
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::NewFlavor::GetFlavors() const
{
	const DifferenceFlavor DifferenceFlavor(flavor, Operation::New);
	return {DifferenceFlavor};
}

std::unique_ptr<fgl::ir::Instruction> fgl::ir::NewFlavor::DeepCopy()
{
	return ::std::make_unique<NewFlavor>(this->instruction);
}
