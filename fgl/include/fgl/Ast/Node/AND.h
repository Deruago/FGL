#ifndef fgl_AST_NODE_AND_H
#define fgl_AST_NODE_AND_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class AND : public fgl<AND>
	{
	private:
	public:
		AND(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<AND>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_AND_H
