#include "fgl/IR/Capture/CaptureFactory.h"

std::unique_ptr<fgl::ir::Capture>
fgl::ir::CaptureFactory::Make(const ::fgl::ast::node::flavor_capture* flavorCapture)
{
	ast::reference::Access<::fgl::ast::node::flavor_capture> access(flavorCapture);
	if (!access.flavor().GetContent().empty())
	{
		return std::make_unique<fgl::ir::capture::Flavor>(flavorCapture);
	}
	if (!access.conditional_flavor().GetContent().empty())
	{
		return std::make_unique<fgl::ir::capture::ConditionalFlavor>(flavorCapture);
	}

	throw std::logic_error("Unknown flavoring given!");
}
