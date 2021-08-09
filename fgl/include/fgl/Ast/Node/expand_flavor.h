#ifndef fgl_AST_NODE_expand_flavor_H
#define fgl_AST_NODE_expand_flavor_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/instruction.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class expand_flavor : public fgl<expand_flavor>, public ::fgl::ast::common::node::instruction
	{
	private:
	public:
		expand_flavor(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<expand_flavor>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_expand_flavor_H
