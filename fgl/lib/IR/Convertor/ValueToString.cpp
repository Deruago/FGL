#include "fgl/IR/Convertor/ValueToString.h"

::std::string fgl::ir::convertor::Value::ConvertToString(const ast::node::value* value)
{
	ast::reference::Access<ast::node::value> access(value);
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

std::string fgl::ir::convertor::Value::ConvertToString(const ast::node::NUMBER* value)
{
	return value->GetValue();
}

std::string fgl::ir::convertor::Value::ConvertToString(const ast::node::STRING* value)
{
	return value->GetValue();
}

std::string fgl::ir::convertor::Value::ConvertToString(const ast::node::object_access* value)
{
	return value->GetText() + ';';
}
