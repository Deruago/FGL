#ifndef fgl_AST_NODE_entry_manipulation_rule_H
#define fgl_AST_NODE_entry_manipulation_rule_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class entry_manipulation_rule : public fgl<entry_manipulation_rule>, public ::fgl::ast::common::node::stmt
	{
	private:
	public:
		entry_manipulation_rule(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<entry_manipulation_rule>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_entry_manipulation_rule_H
