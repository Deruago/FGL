#ifndef fgl_AST_NODE_flavor_specialization_H
#define fgl_AST_NODE_flavor_specialization_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class flavor_specialization : public fgl<flavor_specialization>
	{
	private:
	public:
		flavor_specialization(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<flavor_specialization>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_flavor_specialization_H
