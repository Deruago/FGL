#ifndef fgl_AST_NODE_EQEQ_H
#define fgl_AST_NODE_EQEQ_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class EQEQ : public fgl<EQEQ>
	{
	private:
	public:
		EQEQ(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<EQEQ>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_EQEQ_H
