#ifndef fgl_AST_NODE_TARGET_SETTING_H
#define fgl_AST_NODE_TARGET_SETTING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/setting_rule.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class TARGET_SETTING : public fgl<TARGET_SETTING>, public ::fgl::ast::common::node::setting_rule
	{
	private:
	public:
		TARGET_SETTING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<TARGET_SETTING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_TARGET_SETTING_H
