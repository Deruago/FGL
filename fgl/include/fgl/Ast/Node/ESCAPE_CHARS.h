#ifndef fgl_AST_NODE_ESCAPE_CHARS_H
#define fgl_AST_NODE_ESCAPE_CHARS_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class ESCAPE_CHARS : public fgl<ESCAPE_CHARS>
	{
	private:
	public:
		ESCAPE_CHARS(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<ESCAPE_CHARS>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_ESCAPE_CHARS_H
