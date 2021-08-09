#ifndef fgl_AST_NODE_LEFT_SQUARE_BRACKET_H
#define fgl_AST_NODE_LEFT_SQUARE_BRACKET_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class LEFT_SQUARE_BRACKET : public fgl<LEFT_SQUARE_BRACKET>
	{
	private:
	public:
		LEFT_SQUARE_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<LEFT_SQUARE_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_LEFT_SQUARE_BRACKET_H
