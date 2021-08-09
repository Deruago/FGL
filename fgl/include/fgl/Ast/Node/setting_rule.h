#ifndef fgl_AST_NODE_setting_rule_H
#define fgl_AST_NODE_setting_rule_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Common/Node/setting_rule.h"
#include "fgl/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node { 

	class setting_rule : public fgl<setting_rule>, public ::fgl::ast::common::node::setting_rule, public ::fgl::ast::common::node::stmt
	{
	private:
	public:
		setting_rule(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: fgl<setting_rule>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_setting_rule_H
