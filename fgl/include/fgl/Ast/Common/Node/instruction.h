#ifndef fgl_AST_COMMON_NODE_instruction_H
#define fgl_AST_COMMON_NODE_instruction_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace fgl { namespace ast { namespace common { namespace node {

	class instruction : public ::deamer::external::cpp::ast::CommonNodeAPI<instruction>
	{	private:
	public:
		instruction() = default;
		virtual ~instruction() = default;
	public:
	};
}}}}

#endif // fgl_AST_COMMON_NODE_instruction_H
