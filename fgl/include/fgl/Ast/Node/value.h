#ifndef fgl_AST_NODE_value_H
#define fgl_AST_NODE_value_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/value.h"
#include "fgl/Ast/Node/argument.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class value : public fgl<value>, public ::fgl::ast::common::node::value, public ::fgl::ast::common::node::argument
	{
	private:
	public:
		value(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<value>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_value_H
