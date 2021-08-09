#ifndef fgl_AST_NODE_argument_H
#define fgl_AST_NODE_argument_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/argument.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class argument : public fgl<argument>, public ::fgl::ast::common::node::argument
	{
	private:
	public:
		argument(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<argument>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_argument_H
