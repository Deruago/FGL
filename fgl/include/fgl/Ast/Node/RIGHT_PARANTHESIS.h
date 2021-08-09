#ifndef fgl_AST_NODE_RIGHT_PARANTHESIS_H
#define fgl_AST_NODE_RIGHT_PARANTHESIS_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class RIGHT_PARANTHESIS : public fgl<RIGHT_PARANTHESIS>
	{
	private:
	public:
		RIGHT_PARANTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<RIGHT_PARANTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_RIGHT_PARANTHESIS_H
