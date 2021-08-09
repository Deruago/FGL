#ifndef fgl_AST_COMMON_NODE_value_H
#define fgl_AST_COMMON_NODE_value_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace fgl { namespace ast { namespace common { namespace node {

	class value : public ::deamer::external::cpp::ast::CommonNodeAPI<value>
	{	private:
	public:
		value() = default;
		virtual ~value() = default;
	public:
	};
}}}}

#endif // fgl_AST_COMMON_NODE_value_H
