#ifndef fgl_AST_NODE_instruction_H
#define fgl_AST_NODE_instruction_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/instruction.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class instruction : public fgl<instruction>, public ::fgl::ast::common::node::instruction
	{
	private:
	public:
		instruction(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<instruction>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_instruction_H
