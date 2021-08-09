#ifndef fgl_AST_NODE_INCLUDE_SETTING_H
#define fgl_AST_NODE_INCLUDE_SETTING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/setting_rule.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class INCLUDE_SETTING : public fgl<INCLUDE_SETTING>, public ::fgl::ast::common::node::setting_rule
	{
	private:
	public:
		INCLUDE_SETTING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<INCLUDE_SETTING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_INCLUDE_SETTING_H
