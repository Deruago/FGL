#ifndef FGL_IR_FLAVOR_FLAVOR_H
#define FGL_IR_FLAVOR_FLAVOR_H

#include "fgl/Ast/Node/flavor.h"
#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Reference/Access.h"
#include <algorithm>
#include <string>
#include <utility>

namespace fgl::ir
{
	class Flavor
	{
	private:
		std::string name;
		const ::fgl::ast::node::value* specialization;

	public:
		Flavor(ast::reference::Access<::fgl::ast::node::flavor> access);

		Flavor(const Flavor& rhs);

		Flavor(const ::fgl::ast::node::flavor* flavor_);

		Flavor(std::string name_, const ::fgl::ast::node::value* specialization_ = nullptr);

		std::string GetName() const noexcept;

		const ::fgl::ast::node::value* GetSpecialization() const noexcept;

		std::string GetSpecializationAsString() const noexcept;

	public:
		bool operator==(const Flavor& rhs) const;

		bool operator<(const Flavor& rhs) const;

		bool operator>(const Flavor& rhs) const;
	};
}

#endif // FGL_IR_FLAVOR_FLAVOR_H
