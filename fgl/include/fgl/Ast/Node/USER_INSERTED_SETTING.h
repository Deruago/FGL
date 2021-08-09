#ifndef fgl_AST_NODE_USER_INSERTED_SETTING_H
#define fgl_AST_NODE_USER_INSERTED_SETTING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/setting_rule.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class USER_INSERTED_SETTING : public fgl<USER_INSERTED_SETTING>, public ::fgl::ast::common::node::setting_rule
	{
	private:
	public:
		USER_INSERTED_SETTING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<USER_INSERTED_SETTING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_USER_INSERTED_SETTING_H
