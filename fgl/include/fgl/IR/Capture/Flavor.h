#ifndef FGL_IR_CAPTURE_FLAVOR_H
#define FGL_IR_CAPTURE_FLAVOR_H

#include "fgl/IR/Capture/CaptureTemplateBase.h"

namespace fgl::ir::capture
{
	class Flavor;

	namespace FlavorDetails
	{
		template<LanguageTarget target>
		std::string GetConditional(const ::fgl::ir::capture::Flavor*);

		template<>
		inline std::string
		GetConditional<LanguageTarget::cpp>(const ::fgl::ir::capture::Flavor* object);
	}

	class Flavor : public CaptureTemplateBase<Flavor>
	{
	public:
		::fgl::ir::Flavor flavor;

	public:
		Flavor(const ::fgl::ast::node::flavor_capture* node)
			: CaptureTemplateBase<Flavor>(node),
			  flavor(ast::relation::Access<::fgl::ast::node::flavor_capture>(node).flavor())
		{
		}

	public:
		std::vector<DifferenceFlavor> GetFlavors() override
		{
			const DifferenceFlavor differenceFlavor(flavor, Operation::Access);
			return {differenceFlavor};
		}

		template<LanguageTarget target>
		std::string GetConditional()
		{
			return FlavorDetails::GetConditional<target>(this);
		}

		std::unique_ptr<Capture> DeepCopy() override
		{
			return ::std::make_unique<Flavor>(this->node);
		}
	};

	namespace FlavorDetails
	{
		template<LanguageTarget target>
		std::string GetConditional(const ::fgl::ir::capture::Flavor*)
		{
			return "true";
		}

		template<>
		inline std::string
		GetConditional<LanguageTarget::cpp>(const ::fgl::ir::capture::Flavor* object)
		{
			const std::string specialization = object->flavor.GetSpecializationAsString();

			if (specialization.empty())
			{
				return object->flavor.GetName() + ".count > 0";
			}
			else
			{
				return object->flavor.GetName() + ".Get<" + object->flavor.GetName() +
					   "SpecializationType::" + object->flavor.GetName() + "_" + specialization +
					   ">().count > 0";
			}
		}
	}
}

#endif // FGL_IR_CAPTURE_FLAVOR_H
