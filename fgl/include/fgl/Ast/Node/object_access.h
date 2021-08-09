#ifndef fgl_AST_NODE_object_access_H
#define fgl_AST_NODE_object_access_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/value.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class object_access : public fgl<object_access>, public ::fgl::ast::common::node::value
	{
	private:
	public:
		object_access(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<object_access>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_object_access_H
