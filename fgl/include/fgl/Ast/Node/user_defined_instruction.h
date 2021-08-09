#ifndef fgl_AST_NODE_user_defined_instruction_H
#define fgl_AST_NODE_user_defined_instruction_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/instruction.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class user_defined_instruction : public fgl<user_defined_instruction>, public ::fgl::ast::common::node::instruction
	{
	private:
	public:
		user_defined_instruction(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<user_defined_instruction>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_user_defined_instruction_H
