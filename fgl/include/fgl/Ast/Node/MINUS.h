#ifndef fgl_AST_NODE_MINUS_H
#define fgl_AST_NODE_MINUS_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class MINUS : public fgl<MINUS>
	{
	private:
	public:
		MINUS(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<MINUS>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_MINUS_H
