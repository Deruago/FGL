#ifndef fgl_AST_NODE_EXPAND_H
#define fgl_AST_NODE_EXPAND_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class EXPAND : public fgl<EXPAND>
	{
	private:
	public:
		EXPAND(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<EXPAND>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_EXPAND_H
