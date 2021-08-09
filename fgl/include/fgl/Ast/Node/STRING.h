#ifndef fgl_AST_NODE_STRING_H
#define fgl_AST_NODE_STRING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/value.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class STRING : public fgl<STRING>, public ::fgl::ast::common::node::value
	{
	private:
	public:
		STRING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<STRING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_STRING_H
