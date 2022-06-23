#include "fgl/IR/Capture/Flavor.h"

fgl::ir::capture::Flavor::Flavor(const ::fgl::ast::node::flavor_capture* node)
	: CaptureTemplateBase<Flavor>(node),
	  flavor(ast::reference::Access<::fgl::ast::node::flavor_capture>(node).flavor())
{
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::capture::Flavor::GetFlavors()
{
	const DifferenceFlavor differenceFlavor(flavor, Operation::Access);
	return {differenceFlavor};
}

std::unique_ptr<fgl::ir::Capture> fgl::ir::capture::Flavor::DeepCopy()
{
	return ::std::make_unique<Flavor>(this->node);
}
