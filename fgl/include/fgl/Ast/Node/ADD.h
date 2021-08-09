#ifndef fgl_AST_NODE_ADD_H
#define fgl_AST_NODE_ADD_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class ADD : public fgl<ADD>
	{
	private:
	public:
		ADD(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<ADD>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_ADD_H
