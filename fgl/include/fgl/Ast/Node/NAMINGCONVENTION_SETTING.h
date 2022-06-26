#ifndef fgl_AST_NODE_NAMINGCONVENTION_SETTING_H
#define fgl_AST_NODE_NAMINGCONVENTION_SETTING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/setting_rule.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class NAMINGCONVENTION_SETTING : public fgl<NAMINGCONVENTION_SETTING>, public ::fgl::ast::common::node::setting_rule
	{
	private:
	public:
		NAMINGCONVENTION_SETTING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<NAMINGCONVENTION_SETTING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_NAMINGCONVENTION_SETTING_H
