#ifndef fgl_AST_NODE_COMMA_H
#define fgl_AST_NODE_COMMA_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class COMMA : public fgl<COMMA>
	{
	private:
	public:
		COMMA(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<COMMA>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_COMMA_H
