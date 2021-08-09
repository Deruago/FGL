#ifndef FGL_IR_FLAVOR_OPERATION_H
#define FGL_IR_FLAVOR_OPERATION_H

namespace fgl::ir
{
	enum class Operation
	{
		New,
		Delete,
		Expand,
		Access,
	};
}

#endif // FGL_IR_FLAVOR_OPERATION_H
