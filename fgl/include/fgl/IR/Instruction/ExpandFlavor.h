#ifndef FGL_IR_INSTRUCTION_EXPANDFLAVOR_H
#define FGL_IR_INSTRUCTION_EXPANDFLAVOR_H

#include "fgl/IR/Convertor/ValueToString.h"
#include "fgl/IR/InstructionTemplateBase.h"

namespace fgl::ir
{
	class ExpandFlavor;

	namespace ExpandFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const ExpandFlavor*);

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const ExpandFlavor* instruction);

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const ExpandFlavor*);

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const ExpandFlavor* instruction);
	}

	class ExpandFlavor : public InstructionTemplateBase<ExpandFlavor>
	{
	public:
		Flavor flavor;
		const ast::node::value* value;

	public:
		ExpandFlavor(const ::fgl::ast::node::instruction* instruction);

	public:
		template<LanguageTarget languageTarget>
		std::string GetInstruction()
		{
			return ExpandFlavorDetail::GetInstruction<languageTarget>(this);
		}

		template<LanguageTarget languageTarget>
		std::string GetInverseInstruction()
		{
			return ExpandFlavorDetail::GetInverseInstruction<languageTarget>(this);
		}

		std::unique_ptr<Instruction> DeepCopy() override;
	};

	namespace ExpandFlavorDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const ExpandFlavor*)
		{
			return "";
		}

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const ExpandFlavor* instruction)
		{
			const std::string specializationName = instruction->flavor.GetSpecializationAsString();

			if (specializationName.empty())
			{
				return instruction->flavor.GetName() + ".value.Expand(" +
					   convertor::Value::ConvertToString(instruction->value) + ");";
			}
			else
			{
				return instruction->flavor.GetName() + ".Get<" + instruction->flavor.GetName() +
					   "_" + instruction->flavor.GetName() +
					   "SpecializationType::" + instruction->flavor.GetName() + "_" +
					   specializationName + ">().value.Expand(" +
					   convertor::Value::ConvertToString(instruction->value) + ");";
			}
		}

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const ExpandFlavor*)
		{
			return "";
		}

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const ExpandFlavor* instruction)
		{
			const std::string specializationName = instruction->flavor.GetSpecializationAsString();

			if (specializationName.empty())
			{
				return instruction->flavor.GetName() + ".value.Reduce();";
			}
			else
			{
				return instruction->flavor.GetName() + ".Get<" + instruction->flavor.GetName() +
					   "_" + instruction->flavor.GetName() +
					   "SpecializationType::" + instruction->flavor.GetName() + "_" +
					   specializationName + ">().value.Reduce();";
			}
		}
	}
}

#endif // FGL_IR_INSTRUCTION_EXPANDFLAVOR_H
