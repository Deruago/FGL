#ifndef fgl_AST_NODE_VARNAME_H
#define fgl_AST_NODE_VARNAME_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/object.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class VARNAME : public fgl<VARNAME>, public ::fgl::ast::common::node::object
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_VARNAME_H
