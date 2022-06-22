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
		static std::unique_ptr<Instruction> Make(const ::fgl::ast::node::instruction* instruction)
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
	};
}

#endif // FGL_IR_INSTRUCTION_INSTRUCTIONFACTORY_H
