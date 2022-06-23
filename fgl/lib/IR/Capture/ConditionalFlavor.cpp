#include "fgl/IR/Capture/ConditionalFlavor.h"

fgl::ir::capture::ConditionalFlavor::ConditionalFlavor(const ::fgl::ast::node::flavor_capture* node)
	: CaptureTemplateBase<ConditionalFlavor>(node)
{
}

std::vector<fgl::ir::DifferenceFlavor> fgl::ir::capture::ConditionalFlavor::GetFlavors()
{
	return {};
}

std::unique_ptr<fgl::ir::Capture> fgl::ir::capture::ConditionalFlavor::DeepCopy()
{
	return ::std::make_unique<ConditionalFlavor>(this->node);
}
