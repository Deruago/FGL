#ifndef FGL_IR_NEWFLAVOR_H
#define FGL_IR_NEWFLAVOR_H

#include "fgl/IR/InstructionTemplateBase.h"

namespace fgl::ir
{
	class NewFlavor;

	namespace NewFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const NewFlavor*);

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const NewFlavor* instruction);

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const NewFlavor*);

		template<>
		inline std::string GetInverseInstruction<LanguageTarget::cpp>(const NewFlavor* instruction);
	}

	class NewFlavor : public InstructionTemplateBase<NewFlavor>
	{
	public:
		Flavor flavor;

	public:
		NewFlavor(const ::fgl::ast::node::instruction* instruction)
			: InstructionTemplateBase<NewFlavor>(instruction, InstructionType::newFlavor),
			  flavor(Flavor(ast::relation::Access<::fgl::ast::node::instruction>(instruction)
								.new_flavor()
								.flavor()))
		{
		}

	public:
		std::vector<DifferenceFlavor> GetFlavors() const override
		{
			const DifferenceFlavor DifferenceFlavor(flavor, Operation::New);
			return {DifferenceFlavor};
		}

	public:
		template<LanguageTarget languageTarget>
		std::string GetInstruction() const
		{
			return NewFlavorDetail::GetInstruction<languageTarget>(this);
		}

		template<LanguageTarget languageTarget>
		std::string GetInverseInstruction() const
		{
			return NewFlavorDetail::GetInverseInstruction<languageTarget>(this);
		}

		std::unique_ptr<Instruction> DeepCopy() override
		{
			return ::std::make_unique<NewFlavor>(this->instruction);
		}
	};

	namespace NewFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const NewFlavor*)
		{
			return "";
		}

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const NewFlavor* instruction)
		{
			const std::string specializationName = instruction->flavor.GetSpecializationAsString();

			if (specializationName.empty())
			{
				return instruction->flavor.GetName() + ".Add();";
			}
			else
			{
				return instruction->flavor.GetName() + ".Add<" + instruction->flavor.GetName() +
					   "SpecializationType::" + instruction->flavor.GetName() + "_" +
					   specializationName + ">();";
			}
		}

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const NewFlavor*)
		{
			return "";
		}

		template<>
		inline std::string GetInverseInstruction<LanguageTarget::cpp>(const NewFlavor* instruction)
		{
			const std::string specializationName = instruction->flavor.GetSpecializationAsString();

			if (specializationName.empty())
			{
				return instruction->flavor.GetName() + ".Remove();";
			}
			else
			{
				return instruction->flavor.GetName() + ".Remove<" + instruction->flavor.GetName() +
					   "SpecializationType::" + instruction->flavor.GetName() + "_" +
					   specializationName + ">();";
			}
		}
	}
}

#endif // FGL_IR_NEWFLAVOR_H
