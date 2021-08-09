#ifndef fgl_AST_COMMON_NODE_argument_H
#define fgl_AST_COMMON_NODE_argument_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace fgl { namespace ast { namespace common { namespace node {

	class argument : public ::deamer::external::cpp::ast::CommonNodeAPI<argument>
	{	private:
	public:
		argument() = default;
		virtual ~argument() = default;
	public:
	};
}}}}

#endif // fgl_AST_COMMON_NODE_argument_H
