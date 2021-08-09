#ifndef fgl_AST_NODE_LTE_H
#define fgl_AST_NODE_LTE_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class LTE : public fgl<LTE>
	{
	private:
	public:
		LTE(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<LTE>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_LTE_H
