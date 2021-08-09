#ifndef fgl_AST_NODE_NEW_H
#define fgl_AST_NODE_NEW_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class NEW : public fgl<NEW>
	{
	private:
	public:
		NEW(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<NEW>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_NEW_H
