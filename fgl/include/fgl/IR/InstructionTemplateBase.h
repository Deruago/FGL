#ifndef FGL_IR_INSTRUCTIONTEMPLATEBASE_H
#define FGL_IR_INSTRUCTIONTEMPLATEBASE_H

#include "fgl/IR/Instruction.h"

namespace fgl::ir
{
	template<typename Derived>
	class InstructionTemplateBase : public Instruction
	{
	public:
		InstructionTemplateBase(const ::fgl::ast::node::instruction* instruction_,
								InstructionType type_)
			: Instruction(instruction_, type_)
		{
		}

		virtual ~InstructionTemplateBase() override = default;

		std::string GetInstruction(LanguageTarget target) override
		{
			auto* derivedPtr = static_cast<Derived*>(this);
			switch (target)
			{
			case LanguageTarget::cpp:
				return derivedPtr->template GetInstruction<LanguageTarget::cpp>();
			}

			return "";
		}

		std::string GetInverseInstruction(LanguageTarget target) override
		{
			std::cout << "Ewa!\n";

			auto* derivedPtr = static_cast<Derived*>(this);
			switch (target)
			{
			case LanguageTarget::cpp:
				return derivedPtr->template GetInverseInstruction<LanguageTarget::cpp>();
			}

			return "";
		}
	};
}

#endif // FGL_IR_INSTRUCTIONTEMPLATEBASE_H
