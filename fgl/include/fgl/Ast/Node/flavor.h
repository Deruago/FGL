#ifndef fgl_AST_NODE_flavor_H
#define fgl_AST_NODE_flavor_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class flavor : public fgl<flavor>
	{
	private:
	public:
		flavor(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<flavor>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_flavor_H
