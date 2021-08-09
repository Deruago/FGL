#ifndef fgl_AST_NODE_GTE_H
#define fgl_AST_NODE_GTE_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class GTE : public fgl<GTE>
	{
	private:
	public:
		GTE(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<GTE>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_GTE_H
