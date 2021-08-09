#ifndef FGL_IR_CONVERTOR_VALUETOSTRING_H
#define FGL_IR_CONVERTOR_VALUETOSTRING_H

#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Reference/Access.h"
#include <string>

namespace fgl::ir::convertor
{
	struct Value
	{
		static ::std::string ConvertToString(const ast::node::value* value)
		{
			ast::relation::Access<ast::node::value> access(value);
			if (!access.NUMBER().GetContent().empty())
			{
				return ConvertToString(access.NUMBER().GetContent()[0]);
			}
			if (!access.STRING().GetContent().empty())
			{
				return ConvertToString(access.STRING().GetContent()[0]);
			}
			if (!access.object_access().GetContent().empty())
			{
				return ConvertToString(access.object_access().GetContent()[0]);
			}

			return "";
		}
		static std::string ConvertToString(const ast::node::NUMBER* value)
		{
			return value->GetValue();
		}

		static std::string ConvertToString(const ast::node::STRING* value)
		{
			return value->GetValue();
		}

		static std::string ConvertToString(const ast::node::object_access* value)
		{
			return value->GetText() + ';';
		}
	};
}

#endif // FGL_IR_CONVERTOR_VALUETOSTRING_H
