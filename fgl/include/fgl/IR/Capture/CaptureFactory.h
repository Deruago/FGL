#ifndef FGL_IR_CAPTURE_CAPTUREFACTORY_H
#define FGL_IR_CAPTURE_CAPTUREFACTORY_H

#include "fgl/IR/Capture.h"
#include "fgl/IR/Capture/ConditionalFlavor.h"
#include "fgl/IR/Capture/Flavor.h"
#include <memory>

namespace fgl::ir
{
	class CaptureFactory
	{
	public:
		static std::unique_ptr<fgl::ir::Capture>
		Make(const ::fgl::ast::node::flavor_capture* flavorCapture)
		{
			ast::relation::Access<::fgl::ast::node::flavor_capture> access(flavorCapture);
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
	};
}

#endif // FGL_IR_CAPTURE_CAPTUREFACTORY_H
