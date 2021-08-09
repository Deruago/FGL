#ifndef fgl_AST_NODE_COLON_H
#define fgl_AST_NODE_COLON_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class COLON : public fgl<COLON>
	{
	private:
	public:
		COLON(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<COLON>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_COLON_H
