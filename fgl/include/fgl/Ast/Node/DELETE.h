#ifndef fgl_AST_NODE_DELETE_H
#define fgl_AST_NODE_DELETE_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class DELETE : public fgl<DELETE>
	{
	private:
	public:
		DELETE(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<DELETE>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_DELETE_H
