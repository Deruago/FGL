#ifndef fgl_AST_NODE_LT_H
#define fgl_AST_NODE_LT_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class LT : public fgl<LT>
	{
	private:
	public:
		LT(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<LT>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_LT_H
