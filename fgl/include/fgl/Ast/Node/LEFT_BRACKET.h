#ifndef fgl_AST_NODE_LEFT_BRACKET_H
#define fgl_AST_NODE_LEFT_BRACKET_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class LEFT_BRACKET : public fgl<LEFT_BRACKET>
	{
	private:
	public:
		LEFT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<LEFT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_LEFT_BRACKET_H
