#ifndef fgl_AST_NODE_conditional_flavor_H
#define fgl_AST_NODE_conditional_flavor_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class conditional_flavor : public fgl<conditional_flavor>
	{
	private:
	public:
		conditional_flavor(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<conditional_flavor>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_conditional_flavor_H
