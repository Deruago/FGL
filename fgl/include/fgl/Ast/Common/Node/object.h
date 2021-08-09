#ifndef fgl_AST_COMMON_NODE_object_H
#define fgl_AST_COMMON_NODE_object_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace fgl { namespace ast { namespace common { namespace node {

	class object : public ::deamer::external::cpp::ast::CommonNodeAPI<object>
	{	private:
	public:
		object() = default;
		virtual ~object() = default;
	public:
	};
}}}}

#endif // fgl_AST_COMMON_NODE_object_H
