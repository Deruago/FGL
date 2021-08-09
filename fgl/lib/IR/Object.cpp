#include "fgl/IR/Object.h"

fgl::ir::Object::Object(const std::string& text_) : text(text_)
{
}

bool fgl::ir::Object::operator==(const Object& rhs) const
{
	return this->text == rhs.text;
}

bool fgl::ir::Object::operator>(const Object& rhs) const
{
	return this->text > rhs.text;
}

bool fgl::ir::Object::operator<(const Object& rhs) const
{
	return this->text < rhs.text;
}

bool fgl::ir::Object::operator>=(const Object& rhs) const
{
	return this->text >= rhs.text;
}

bool fgl::ir::Object::operator<=(const Object& rhs) const
{
	return this->text <= rhs.text;
}

std::string fgl::ir::Object::GetName() const
{
	return text;
}
