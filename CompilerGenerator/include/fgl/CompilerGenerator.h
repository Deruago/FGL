#ifndef FGL_COMPILERGENERATOR_H
#define FGL_COMPILERGENERATOR_H

#include "Deamer/Compiler/Generator/Compiler.h"
#include "Deamer/Language/Reference/PropertyDefinition.h"
#include "fgl/Language.h"


#include "Deamer/Ast/Generation/CPP/CPP.h"
#include "Deamer/Lexer/Generator/Flex/Flex.h"
#include "Deamer/Parser/Generator/Bison/Bison.h"


namespace fgl
{
	/*!	\class CompilerGenerator
	 *
	 *	\brief This contains the CompilerGenerator of the language fgl
	 *
	 *	\details The CompilerGenerator class generates the compiler and various ecosystems.
	 *
	 *	\note This is auto-generated via the DLDL definitions.
	 */
	class CompilerGenerator : public ::deamer::compiler::generator::Compiler<::fgl::Language>
	
	{
	public:
		CompilerGenerator()
			: deamer::compiler::generator::Compiler<::fgl::Language>()
			
		{
		}

		deamer::file::compiler::Output Generate() override
		{
			// Retrieve the Language Definition (LD)
			::deamer::file::compiler::Output output(::deamer::compiler::generator::Compiler<::fgl::Language>::GetLanguageDefinition());
			::deamer::language::reference::PropertyDefinition(
				::deamer::compiler::generator::Compiler<::fgl::Language>::GetLanguageDefinition())
				.GetDefinition<::deamer::language::type::definition::property::Type::Threat>()
				.PrintThreats();

			

			// Initialize language outputs
			::deamer::ast::generation::cpp::CPP CPP(::deamer::compiler::generator::Compiler<::fgl::Language>::GetLanguageDefinition());
::deamer::lexer::generator::flex::Flex Flex(::deamer::compiler::generator::Compiler<::fgl::Language>::GetLanguageDefinition());
::deamer::parser::generator::bison::Bison Bison(::deamer::compiler::generator::Compiler<::fgl::Language>::GetLanguageDefinition());


			// The language generation targets
			output.AddLanguageToolOutput(CPP.Generate());
output.AddLanguageToolOutput(Flex.Generate());
output.AddLanguageToolOutput(Bison.Generate());


			return output;
		}

		~CompilerGenerator() override = default;
	};
}

#endif // FGL_COMPILERGENERATOR_H
