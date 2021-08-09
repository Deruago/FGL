#ifndef FGL_IR_CAPTURE_CAPTURETEMPLATEBASE_H
#define FGL_IR_CAPTURE_CAPTURETEMPLATEBASE_H

#include "fgl/IR/Capture.h"

namespace fgl::ir::capture
{
	template<typename Derived>
	class CaptureTemplateBase : public ::fgl::ir::Capture
	{
	public:
		CaptureTemplateBase(const ::fgl::ast::node::flavor_capture* node) : Capture(node)
		{
		}

	public:
		std::string GetConditional(LanguageTarget target) override
		{
			auto* derivedPtr = static_cast<Derived*>(this);
			switch (target)
			{
			case LanguageTarget::cpp:
				return derivedPtr->template GetConditional<LanguageTarget::cpp>();
			}

			return "true";
		}
	};
}

#endif // FGL_IR_CAPTURE_CAPTURETEMPLATEBASE_H
