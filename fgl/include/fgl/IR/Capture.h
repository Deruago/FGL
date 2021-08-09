#ifndef FGL_IR_CAPTURE_H
#define FGL_IR_CAPTURE_H

#include "fgl/Ast/Node/flavor_capture.h"
#include "fgl/IR/Capture.h"
#include "fgl/IR/Flavor/DifferenceFlavor.h"
#include "fgl/IR/LanguageTarget.h"
#include <vector>

namespace fgl::ir
{
	class Capture
	{
	protected:
		const ::fgl::ast::node::flavor_capture* const node;

	public:
		Capture(const ::fgl::ast::node::flavor_capture* node_);

		virtual std::string GetConditional(LanguageTarget target = LanguageTarget::cpp);

		virtual std::vector<DifferenceFlavor> GetFlavors();

		virtual std::unique_ptr<Capture> DeepCopy() = 0;
	};
}

#endif // FGL_IR_CAPTURE_H
