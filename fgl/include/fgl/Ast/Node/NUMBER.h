#ifndef fgl_AST_NODE_NUMBER_H
#define fgl_AST_NODE_NUMBER_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/value.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class NUMBER : public fgl<NUMBER>, public ::fgl::ast::common::node::value
	{
	private:
	public:
		NUMBER(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<NUMBER>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_NUMBER_H
