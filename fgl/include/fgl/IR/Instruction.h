#ifndef FGL_IR_INSTRUCTION_H
#define FGL_IR_INSTRUCTION_H

#include "fgl/Ast/Node/instruction.h"
#include "fgl/Ast/Reference/Access.h"
#include "fgl/IR/Flavor/DifferenceFlavor.h"
#include "fgl/IR/LanguageTarget.h"
#include <memory>
#include <string>

namespace fgl::ir
{
	enum class InstructionType
	{
		newFlavor,
		deleteFlavor,
		expandFlavor,
		userDefined,
	};

	class Instruction
	{
	protected:
		const ::fgl::ast::node::instruction* const instruction;

	private:
		InstructionType type;

	public:
		Instruction(const ::fgl::ast::node::instruction* instruction_, InstructionType type_);

		Instruction(const ::fgl::ast::node::instruction* instruction_);

		virtual ~Instruction() = default;

		InstructionType GetType() const;

		virtual std::string GetInstruction(LanguageTarget target = LanguageTarget::cpp);

		virtual std::string GetInverseInstruction(LanguageTarget target = LanguageTarget::cpp);

		virtual std::vector<DifferenceFlavor> GetFlavors() const;

		virtual std::unique_ptr<Instruction> DeepCopy() = 0;
	};
}

#endif // FGL_IR_INSTRUCTION_H
