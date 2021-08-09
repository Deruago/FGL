#ifndef fgl_AST_NODE_delete_flavor_H
#define fgl_AST_NODE_delete_flavor_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/instruction.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class delete_flavor : public fgl<delete_flavor>, public ::fgl::ast::common::node::instruction
	{
	private:
	public:
		delete_flavor(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<delete_flavor>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_delete_flavor_H
