#ifndef fgl_AST_NODE_RIGHT_BRACKET_H
#define fgl_AST_NODE_RIGHT_BRACKET_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class RIGHT_BRACKET : public fgl<RIGHT_BRACKET>
	{
	private:
	public:
		RIGHT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<RIGHT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_RIGHT_BRACKET_H
