#ifndef FGL_IR_DELETEFLAVOR_H
#define FGL_IR_DELETEFLAVOR_H

#include "fgl/IR/InstructionTemplateBase.h"

namespace fgl::ir
{
	class DeleteFlavor;

	namespace DeleteFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const DeleteFlavor*);

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const DeleteFlavor* instruction);

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const DeleteFlavor*);

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const DeleteFlavor* instruction);
	}

	class DeleteFlavor : public InstructionTemplateBase<DeleteFlavor>
	{
	public:
		Flavor flavor;

	public:
		DeleteFlavor(const ::fgl::ast::node::instruction* instruction)
			: InstructionTemplateBase<DeleteFlavor>(instruction, InstructionType::deleteFlavor),
			  flavor(Flavor(ast::reference::Access<::fgl::ast::node::instruction>(instruction)
								.delete_flavor()
								.flavor()))
		{
		}

	public:
		std::vector<DifferenceFlavor> GetFlavors() const override
		{
			const DifferenceFlavor DifferenceFlavor(flavor, Operation::Delete);
			return {DifferenceFlavor};
		}

	public:
		template<LanguageTarget languageTarget>
		std::string GetInstruction() const
		{
			return DeleteFlavorDetail::GetInstruction<languageTarget>(this);
		}

		template<LanguageTarget languageTarget>
		std::string GetInverseInstruction() const
		{
			return DeleteFlavorDetail::GetInverseInstruction<languageTarget>(this);
		}

		std::unique_ptr<Instruction> DeepCopy() override
		{
			return ::std::make_unique<DeleteFlavor>(this->instruction);
		}
	};

	namespace DeleteFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const DeleteFlavor*)
		{
			return "";
		}

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const DeleteFlavor* instruction)
		{
			const std::string specializationName = instruction->flavor.GetSpecializationAsString();

			if (specializationName.empty())
			{
				return instruction->flavor.GetName() + ".Remove();";
			}
			else
			{
				return instruction->flavor.GetName() + ".Remove<" + instruction->flavor.GetName() +
					   "_" + instruction->flavor.GetName() +
					   "SpecializationType::" + instruction->flavor.GetName() + "_" +
					   specializationName + ">();";
			}
		}

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const DeleteFlavor*)
		{
			return "";
		}

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const DeleteFlavor* instruction)
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
	}
}

#endif // FGL_IR_DELETEFLAVOR_H
