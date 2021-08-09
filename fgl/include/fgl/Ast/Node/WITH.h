#ifndef fgl_AST_NODE_WITH_H
#define fgl_AST_NODE_WITH_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class WITH : public fgl<WITH>
	{
	private:
	public:
		WITH(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<WITH>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_WITH_H
