#ifndef fgl_AST_COMMON_NODE_setting_rule_H
#define fgl_AST_COMMON_NODE_setting_rule_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace fgl { namespace ast { namespace common { namespace node {

	class setting_rule : public ::deamer::external::cpp::ast::CommonNodeAPI<setting_rule>
	{	private:
	public:
		setting_rule() = default;
		virtual ~setting_rule() = default;
	public:
	};
}}}}

#endif // fgl_AST_COMMON_NODE_setting_rule_H
