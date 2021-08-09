#ifndef fgl_AST_NODE_LEFT_PARANTHESIS_H
#define fgl_AST_NODE_LEFT_PARANTHESIS_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class LEFT_PARANTHESIS : public fgl<LEFT_PARANTHESIS>
	{
	private:
	public:
		LEFT_PARANTHESIS(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<LEFT_PARANTHESIS>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_LEFT_PARANTHESIS_H
