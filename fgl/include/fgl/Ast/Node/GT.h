#ifndef fgl_AST_NODE_GT_H
#define fgl_AST_NODE_GT_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class GT : public fgl<GT>
	{
	private:
	public:
		GT(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<GT>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_GT_H
