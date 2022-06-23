#include "fgl/IR/Flavor/DifferenceFlavor.h"

fgl::ir::DifferenceFlavor::DifferenceFlavor(const Flavor& flavor_, Operation operation_)
	: flavor(flavor_),
	  operation(operation_)
{
}
