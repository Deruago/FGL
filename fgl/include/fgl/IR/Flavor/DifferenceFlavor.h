#ifndef FGL_IR_FLAVOR_DIFFERENCEFLAVOR_H
#define FGL_IR_FLAVOR_DIFFERENCEFLAVOR_H

#include "fgl/IR/Flavor/Flavor.h"
#include "fgl/IR/Flavor/Operation.h"

namespace fgl::ir
{
	struct DifferenceFlavor
	{
	public:
		const Flavor flavor;
		const Operation operation;

		DifferenceFlavor(const Flavor& flavor_, Operation operation_)
			: flavor(flavor_),
			  operation(operation_)
		{
		}
	};
}

#endif // FGL_IR_FLAVOR_DIFFERENCEFLAVOR_H
