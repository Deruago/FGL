#ifndef FGL_IR_OBJECT_H
#define FGL_IR_OBJECT_H

#include <string>

namespace fgl::ir
{
	class Object
	{
	private:
		std::string text;

	public:
		Object(const std::string& text_ = "");

		bool operator==(const Object& rhs) const;

		bool operator>(const Object& rhs) const;

		bool operator<(const Object& rhs) const;

		bool operator>=(const Object& rhs) const;

		bool operator<=(const Object& rhs) const;

	public:
		std::string GetName() const;
	};
}

#endif // FGL_IR_OBJECT_H
