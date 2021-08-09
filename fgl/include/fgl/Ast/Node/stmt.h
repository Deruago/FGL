#ifndef fgl_AST_NODE_stmt_H
#define fgl_AST_NODE_stmt_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class stmt : public fgl<stmt>, public ::fgl::ast::common::node::stmt
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_stmt_H
