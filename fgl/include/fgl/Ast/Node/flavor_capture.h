#ifndef fgl_AST_NODE_flavor_capture_H
#define fgl_AST_NODE_flavor_capture_H

#include "fgl/Ast/Node/fgl.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class flavor_capture : public fgl<flavor_capture>
	{
	private:
	public:
		flavor_capture(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<flavor_capture>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_flavor_capture_H
