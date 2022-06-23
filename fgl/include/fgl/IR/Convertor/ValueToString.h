#ifndef FGL_IR_CONVERTOR_VALUETOSTRING_H
#define FGL_IR_CONVERTOR_VALUETOSTRING_H

#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Reference/Access.h"
#include <string>

namespace fgl::ir::convertor
{
	struct Value
	{
		static ::std::string ConvertToString(const ast::node::value* value);

		static std::string ConvertToString(const ast::node::NUMBER* value);

		static std::string ConvertToString(const ast::node::STRING* value);

		static std::string ConvertToString(const ast::node::object_access* value);
	};
}

#endif // FGL_IR_CONVERTOR_VALUETOSTRING_H
