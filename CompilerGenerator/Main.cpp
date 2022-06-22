/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#include "fgl/CompilerGenerator.h"

#include "Deamer/File/Generate/Compiler.h"

int main(int argc, char* argv[])
{
		// Generate: fgl
	::fgl::CompilerGenerator fgl_compiler;
	::deamer::file::generate::Compiler fgl_WriteToDisk(fgl_compiler.Generate());
	fgl_WriteToDisk.SetProjectType(::deamer::file::generate::Compiler::ProjectType::single);
	
	fgl_WriteToDisk.Generate();


	return 0;
}
