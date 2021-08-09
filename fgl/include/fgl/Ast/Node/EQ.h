#ifndef fgl_AST_NODE_EQ_H
#define fgl_AST_NODE_EQ_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class EQ : public fgl<EQ>
	{
	private:
	public:
		EQ(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<EQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_EQ_H
