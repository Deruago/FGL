#include "fgl/IR/Instruction/ExpandFlavor.h"

fgl::ir::ExpandFlavor::ExpandFlavor(const ::fgl::ast::node::instruction* instruction)
	: InstructionTemplateBase<ExpandFlavor>(instruction, InstructionType::expandFlavor),
	  flavor(Flavor(ast::reference::Access<::fgl::ast::node::instruction>(instruction)
						.expand_flavor()
						.flavor())),
	  value(ast::reference::Access<::fgl::ast::node::instruction>(instruction)
				.expand_flavor()
				.value()
				.GetContent()[0])
{
}

std::unique_ptr<fgl::ir::Instruction> fgl::ir::ExpandFlavor::DeepCopy()
{
	return ::std::make_unique<ExpandFlavor>(this->instruction);
}
