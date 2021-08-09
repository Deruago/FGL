#include "fgl/IR/Capture.h"

::fgl::ir::Capture::Capture(const ::fgl::ast::node::flavor_capture* node_) : node(node_)
{
}

std::string fgl::ir::Capture::GetConditional(LanguageTarget target)
{
	return "true";
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::Capture::GetFlavors()
{
	return {};
}
