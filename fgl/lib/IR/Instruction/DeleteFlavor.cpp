#include "fgl/IR/Instruction/DeleteFlavor.h"

fgl::ir::DeleteFlavor::DeleteFlavor(const ::fgl::ast::node::instruction* instruction)
	: InstructionTemplateBase<DeleteFlavor>(instruction, InstructionType::deleteFlavor),
	  flavor(Flavor(ast::reference::Access<::fgl::ast::node::instruction>(instruction)
						.delete_flavor()
						.flavor()))
{
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::DeleteFlavor::GetFlavors() const
{
	const DifferenceFlavor DifferenceFlavor(flavor, Operation::Delete);
	return {DifferenceFlavor};
}

std::unique_ptr<fgl::ir::Instruction> fgl::ir::DeleteFlavor::DeepCopy()
{
	return ::std::make_unique<DeleteFlavor>(this->instruction);
}
