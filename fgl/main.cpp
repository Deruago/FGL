#include "fgl/Ast/Listener/User/IrTranslator.h"
#include "fgl/Ast/Visualisation/Graph.h"
#include "fgl/Bison/Parser.h"
#include "fgl/IR/Generate/File.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

std::string ReadInFile(const std::string& file)
{
	const std::ifstream inputFile(file);

	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();

	return input;
}

int main(int argc, const char* argv[])
{
	std::vector<std::string> filenames;

	for (auto i = 1; i < argc; i++)
	{
		filenames.emplace_back(argv[1]);
	}

	for (const auto& filename : filenames)
	{
		std::string text = ReadInFile(filename);

		std::cout << "File: " << filename << "\n";
		std::cout << text << "\n";
		std::cout << "\n";

		auto parser = fgl::bison::parser::Parser();
		auto* ast = parser.Parse(text);
		if (ast == nullptr || ast->GetStartNode() == nullptr)
		{
			return -1;
		}

		auto graph = ::fgl::ast::listener::deamer::visualisation::Graph();
		graph.Dispatch(ast->GetStartNode());

		auto translator = fgl::ast::listener::user::IrTranslator();
		translator.Dispatch(ast->GetStartNode());
		auto fgl = translator.GetFgl();

		auto cppFileGenerator = fgl::ir::generate::File<LanguageTarget::cpp>(fgl);

		std::cout << "\n\n\n\n\n// Generated visitor:\n\n";
		std::cout << cppFileGenerator.Generate() << "\n";

		delete ast;
	}
}
