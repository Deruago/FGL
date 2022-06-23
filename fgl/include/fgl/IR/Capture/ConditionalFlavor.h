#ifndef FGL_IR_CAPTURE_CONDITIONALFLAVOR_H
#define FGL_IR_CAPTURE_CONDITIONALFLAVOR_H

#include "fgl/IR/Capture/CaptureTemplateBase.h"

namespace fgl::ir::capture
{
	class ConditionalFlavor;

	namespace ConditionalFlavorDetails
	{
		template<LanguageTarget target>
		std::string GetConditional(const ::fgl::ir::capture::ConditionalFlavor*);

		template<>
		inline std::string
		GetConditional<LanguageTarget::cpp>(const ::fgl::ir::capture::ConditionalFlavor* object);
	}

	class ConditionalFlavor : public CaptureTemplateBase<ConditionalFlavor>
	{
	public:
		ConditionalFlavor(const ::fgl::ast::node::flavor_capture* node);

	public:
		std::vector<DifferenceFlavor> GetFlavors() override;

		template<LanguageTarget target>
		std::string GetConditional()
		{
			return ConditionalFlavorDetails::GetConditional<target>(this);
		}

		std::unique_ptr<Capture> DeepCopy() override;
	};

	namespace ConditionalFlavorDetails
	{
		template<LanguageTarget target>
		std::string GetConditional(const ::fgl::ir::capture::ConditionalFlavor*)
		{
			return "true";
		}

		template<>
		inline std::string
		GetConditional<LanguageTarget::cpp>(const ::fgl::ir::capture::ConditionalFlavor* object)
		{
			return "";
		}
	}
}

#endif // FGL_IR_CAPTURE_CONDITIONALFLAVOR_H
