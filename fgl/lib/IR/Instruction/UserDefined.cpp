#include "fgl/IR/Instruction/UserDefined.h"

fgl::ir::UserDefined::UserDefined(const ::fgl::ast::node::instruction* instruction)
	: InstructionTemplateBase<UserDefined>(instruction, InstructionType::userDefined),
	  value(ast::reference::Access<::fgl::ast::node::instruction>(instruction)
				.user_defined_instruction()
				.value()
				.GetContent()[0])
{
}

std::unique_ptr<fgl::ir::Instruction> fgl::ir::UserDefined::DeepCopy()
{
	return ::std::make_unique<UserDefined>(this->instruction);
}
