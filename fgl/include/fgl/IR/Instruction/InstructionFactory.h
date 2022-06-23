#ifndef FGL_IR_INSTRUCTION_INSTRUCTIONFACTORY_H
#define FGL_IR_INSTRUCTION_INSTRUCTIONFACTORY_H

#include "fgl/IR/Instruction.h"
#include "fgl/IR/Instruction/DeleteFlavor.h"
#include "fgl/IR/Instruction/ExpandFlavor.h"
#include "fgl/IR/Instruction/NewFlavor.h"
#include "fgl/IR/Instruction/UserDefined.h"
#include <memory>

namespace fgl::ir
{
	class InstructionFactory
	{
	public:
		static std::unique_ptr<Instruction> Make(const ::fgl::ast::node::instruction* instruction);
	};
}

#endif // FGL_IR_INSTRUCTION_INSTRUCTIONFACTORY_H
