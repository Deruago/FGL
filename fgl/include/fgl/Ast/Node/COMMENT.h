#ifndef fgl_AST_NODE_COMMENT_H
#define fgl_AST_NODE_COMMENT_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class COMMENT : public fgl<COMMENT>
	{
	private:
	public:
		COMMENT(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<COMMENT>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_COMMENT_H
