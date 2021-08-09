#ifndef fgl_AST_NODE_ARROW_H
#define fgl_AST_NODE_ARROW_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class ARROW : public fgl<ARROW>
	{
	private:
	public:
		ARROW(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<ARROW>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_ARROW_H
