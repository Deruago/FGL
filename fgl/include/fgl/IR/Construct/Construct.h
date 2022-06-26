#ifndef FGL_IR_CONSTRUCT_CONSTRUCT_H
#define FGL_IR_CONSTRUCT_CONSTRUCT_H

#include "fgl/Ast/Listener/User/IrTranslator.h"
#include "fgl/Bison/Parser.h"
#include "fgl/IR/Fgl.h"
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace fgl::ir
{
	struct Construct
	{
		enum class ConditionalType
		{
			no,
			LT,
			LTE,
			GT,
			GTE,
			EQEQ
		};

		struct FlavorConditional
		{
			std::string lhs;
			ConditionalType type;
			std::string rhs;

			FlavorConditional(std::string lhs_) : FlavorConditional(lhs_, ConditionalType::no, "")
			{
			}

			FlavorConditional(std::string lhs_, ConditionalType type_, std::string rhs_)
				: lhs(lhs_),
				  type(type_),
				  rhs(rhs_)
			{
			}

			std::string GetText()
			{
				switch (type)
				{
				case ConditionalType::no: {
					return lhs;
				}
				case ConditionalType::LT: {
					return lhs + " < " + rhs;
				}
				case ConditionalType::LTE: {
					return lhs + " <= " + rhs;
				}
				case ConditionalType::GT: {
					return lhs + " > " + rhs;
				}
				case ConditionalType::GTE: {
					return lhs + " >= " + rhs;
				}
				case ConditionalType::EQEQ: {
					return lhs + " == " + rhs;
				}
				}
			}
		};

		struct Flavor
		{
			std::string name;
			std::string specialization;

			Flavor() = default;

			Flavor(std::string name_) : name(std::move(name_))
			{
			}

			Flavor(std::string name_, std::string specialization_)
				: name(std::move(name_)),
				  specialization(std::move(specialization_))
			{
			}

			std::string GetName()
			{
				if (specialization.empty())
				{
					return name;
				}

				return name + "(" + specialization + ")";
			}
		};

		struct FlavorGroup
		{
			std::vector<FlavorConditional> flavorConditionals;

			FlavorGroup() = default;
			~FlavorGroup() = default;

			void AddFlavorConditional(FlavorConditional flavorConditional)
			{
				flavorConditionals.push_back(flavorConditional);
			}

			std::string GetText()
			{
				std::string output;
				output += "[";

				bool first = true;
				for (auto flavorConditional : flavorConditionals)
				{
					if (first)
					{
						first = false;
					}
					else
					{
						output += ", ";
					}
					output += flavorConditional.GetText();
				}

				output += "]";

				return "";
			}
		};

		enum class InstructionType
		{
			Unknown,
			New,
			Delete,
			Expand,
			User,
		};

		struct Instruction
		{
			Flavor flavor;
			std::string value;
			InstructionType instructionType = InstructionType::Unknown;

			Instruction(Flavor flavor_) : flavor(flavor_)
			{
			}

			Instruction(std::string value_) : value(value_)
			{
			}

			Instruction(int value_) : value(std::to_string(value_))
			{
			}

			void SetInstructionType(InstructionType instructionType_)
			{
				instructionType = instructionType_;
			}

			std::string GetText()
			{
				switch (instructionType)
				{
				case InstructionType::Unknown: {
					return "";
				}
				case InstructionType::New: {
					return "new." + flavor.GetName();
				}
				case InstructionType::Delete: {
					return "delete." + flavor.GetName();
				}
				case InstructionType::Expand: {
					return "expand." + flavor.GetName() + ".with(" + value + ")";
				}
				case InstructionType::User: {
					return value;
				}
				}
			}
		};

		struct ManipulationRule
		{
			std::string name;
			bool entry = true;
			FlavorGroup flavorGroup;
			std::vector<Instruction> instructions;

			ManipulationRule(std::string name_) : name(name_)
			{
			}

			void AddNewInstruction(Instruction newInstruction)
			{
				newInstruction.SetInstructionType(InstructionType::New);
				instructions.push_back(newInstruction);
			}

			void AddDeleteInstruction(Instruction newInstruction)
			{
				newInstruction.SetInstructionType(InstructionType::Delete);
				instructions.push_back(newInstruction);
			}

			void AddExpandInstruction(Instruction newInstruction)
			{
				newInstruction.SetInstructionType(InstructionType::Expand);
				instructions.push_back(newInstruction);
			}

			void AddUserInstruction(Instruction newInstruction)
			{
				newInstruction.SetInstructionType(InstructionType::User);
				instructions.push_back(newInstruction);
			}

			void SetEntry(bool entry_)
			{
				entry = entry_;
			}

			std::string GetText()
			{
				std::string output;

				output += flavorGroup.GetText();
				output += " " + name;
				output += " -> ";

				if (!entry)
				{
					output += "-";
				}

				output += "{ ";

				bool first = true;
				for (auto instruction : instructions)
				{
					if (first)
					{
						first = false;
					}
					else
					{
						output += ", ";
					}

					output += instruction.GetText();
				}

				output += " }";
				return output;
			}
		};

		struct Function
		{
			std::string value;

			Function(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@function -> {" + value + "}\n";
			}
		};

		struct Include
		{
			std::string value;

			Include(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@include -> {" + value + "}\n";
			}
		};

		struct Inheritance
		{
			std::string value;

			Inheritance(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@inheritance -> {" + value + "}\n";
			}
		};

		struct Member
		{
			std::string value;

			Member(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@member -> {" + value + "}\n";
			}
		};

		struct DeamerLanguageName
		{
			std::string value;

			DeamerLanguageName(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@deamer-language-name -> {" + value + "}\n";
			}
		};

		struct UseDispatch
		{
			std::string value;

			UseDispatch(std::string value_) : value(value_)
			{
			}

			UseDispatch(bool value_)
			{
				if (value_)
				{
					value = "true";
				}
				else
				{
					value = "false";
				}
			}

			std::string GetText()
			{
				return "@dispatch -> {" + value + "}\n";
			}
		};

		struct NameConvention
		{
			std::string value;

			NameConvention(std::string value_) : value(value_)
			{
			}

			std::string GetText()
			{
				return "@nameconvention -> {" + value + "}\n";
			}
		};

		std::vector<Function> functions;
		std::vector<Include> includes;
		std::vector<Inheritance> inheritances;
		std::vector<Member> members;
		DeamerLanguageName deamerLanguageName;
		UseDispatch useDispatch;
		NameConvention nameConvention;

		std::vector<std::unique_ptr<ManipulationRule>> manipulationRules;

		ManipulationRule* AddEntryManipulationRule(std::string name)
		{
			auto manipulationRule = std::make_unique<ManipulationRule>(name);
			manipulationRule->SetEntry(true);
			auto* const tmp = manipulationRule.get();

			manipulationRules.push_back(std::move(manipulationRule));

			return tmp;
		}

		ManipulationRule* AddExitManipulationRule(std::string name)
		{
			auto manipulationRule = std::make_unique<ManipulationRule>(name);
			manipulationRule->SetEntry(false);
			auto* const tmp = manipulationRule.get();

			manipulationRules.push_back(std::move(manipulationRule));

			return tmp;
		}

		void AddFunction(Function function)
		{
			functions.push_back(function);
		}

		void AddInclude(Include element)
		{
			includes.push_back(element);
		}

		void AddInheritance(Inheritance element)
		{
			inheritances.push_back(element);
		}

		void AddMember(Member member)
		{
			members.push_back(member);
		}

		void AddDeamerLanguageName(DeamerLanguageName name)
		{
			deamerLanguageName = name;
		}

		void SpecifyDispatch(UseDispatch element)
		{
			useDispatch = element;
		}

		void SpecifyNameConvention(NameConvention element)
		{
			nameConvention = element;
		}

		std::string GetText()
		{
			std::string output;
			for (auto include : includes)
			{
				output += include.GetText();
			}

			for (auto inheritance : inheritances)
			{
				output += inheritance.GetText();
			}

			for (auto function : functions)
			{
				output += function.GetText();
			}

			for (auto member : members)
			{
				output += member.GetText();
			}

			output += deamerLanguageName.GetText();
			output += useDispatch.GetText();
			output += nameConvention.GetText();

			for (auto manipulationRule : manipulationRules)
			{
				output += manipulationRule->GetText() + "\n";
			}
			return output;
		}

		ir::Fgl GetFgl()
		{
			const auto parser = bison::parser::Parser();
			const auto tree =
				std::unique_ptr<::deamer::external::cpp::ast::Tree>(parser.Parse(GetText()));

			auto irTranslator = ast::listener::user::IrTranslator();
			irTranslator.Dispatch(tree->GetStartNode());

			auto fgl = irTranslator.GetFgl();

			return fgl;
		}
	};
}

#endif // FGL_IR_CONSTRUCT_CONSTRUCT_H
