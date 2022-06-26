#ifndef fgl_AST_NODE_DEAMER_LANGUAGE_NAME_SETTING_H
#define fgl_AST_NODE_DEAMER_LANGUAGE_NAME_SETTING_H

#include "fgl/Ast/Node/fgl.h"
#include "fgl/Ast/Node/setting_rule.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace fgl { namespace ast { namespace node {

	class DEAMER_LANGUAGE_NAME_SETTING : public fgl<DEAMER_LANGUAGE_NAME_SETTING>, public ::fgl::ast::common::node::setting_rule
	{
	private:
	public:
		DEAMER_LANGUAGE_NAME_SETTING(deamer::external::cpp::ast::NodeInformation information_)
		: fgl<DEAMER_LANGUAGE_NAME_SETTING>(information_, {}, {})
		{
		}
	};

}}}

#endif // fgl_AST_NODE_DEAMER_LANGUAGE_NAME_SETTING_H
