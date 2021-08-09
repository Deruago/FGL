#ifndef fgl_AST_NODE_object_H
#define fgl_AST_NODE_object_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/object.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class object : public fgl<object>, public ::fgl::ast::common::node::object
	{
	private:
	public:
		object(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<object>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_object_H
