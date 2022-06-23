#ifndef FGL_IR_USERDEFINED_H
#define FGL_IR_USERDEFINED_H

#include "fgl/IR/Convertor/ValueToString.h"
#include "fgl/IR/InstructionTemplateBase.h"

namespace fgl::ir
{
	class UserDefined;

	namespace UserDefinedDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const UserDefined*);

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const UserDefined* instruction);

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const UserDefined*);

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const UserDefined* instruction);
	}

	class UserDefined : public InstructionTemplateBase<UserDefined>
	{
	public:
		const ast::node::value* value;

	public:
		UserDefined(const ::fgl::ast::node::instruction* instruction);

	public:
		template<LanguageTarget languageTarget>
		std::string GetInstruction()
		{
			return UserDefinedDetail::GetInstruction<languageTarget>(this);
		}

		template<LanguageTarget languageTarget>
		std::string GetInverseInstruction()
		{
			return UserDefinedDetail::GetInverseInstruction<languageTarget>(this);
		}

		std::unique_ptr<Instruction> DeepCopy() override;
	};

	namespace UserDefinedDetail
	{
		template<LanguageTarget languageTarget>
		inline std::string GetInstruction(const UserDefined*)
		{
			return "";
		}

		template<>
		inline std::string GetInstruction<LanguageTarget::cpp>(const UserDefined* instruction)
		{
			return ::fgl::ir::convertor::Value::ConvertToString(instruction->value);
		}

		template<LanguageTarget languageTarget>
		inline std::string GetInverseInstruction(const UserDefined*)
		{
			return "";
		}

		template<>
		inline std::string
		GetInverseInstruction<LanguageTarget::cpp>(const UserDefined* instruction)
		{
			return "";
		}
	}
}

#endif // FGL_IR_USERDEFINED_H
