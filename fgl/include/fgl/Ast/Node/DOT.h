#ifndef fgl_AST_NODE_DOT_H
#define fgl_AST_NODE_DOT_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class DOT : public fgl<DOT>
	{
	private:
	public:
		DOT(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<DOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_DOT_H
