#ifndef fgl_AST_NODE_program_H
#define fgl_AST_NODE_program_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class program : public fgl<program>
	{
	private:
	public:
		program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_program_H
