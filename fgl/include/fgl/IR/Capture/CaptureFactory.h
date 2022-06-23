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
		Make(const ::fgl::ast::node::flavor_capture* flavorCapture);
	};
}

#endif // FGL_IR_CAPTURE_CAPTUREFACTORY_H
