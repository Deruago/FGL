#include "fgl/CompilerGenerator.h"

#include "Deamer/File/Generate/Compiler.h"
int main(int argc, char* argv[])
{
		// Generate: fgl
	::fgl::CompilerGenerator fgl_compiler;
	::deamer::file::generate::Compiler fgl_WriteToDisk(fgl_compiler.Generate());
	fgl_WriteToDisk.Generate();

	return 0;
}
