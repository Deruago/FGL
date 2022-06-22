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
		Flavor(ast::reference::Access<::fgl::ast::node::flavor> access)
		{
			name = access.VARNAME().GetContent()[0]->GetValue();

			auto specialization_ = access.flavor_specialization().value().GetContent();
			if (!specialization_.empty())
			{
				specialization = specialization_[0];
			}
			else
			{
				specialization = nullptr;
			}
		}

		Flavor(const Flavor& rhs) : name(rhs.name), specialization(rhs.specialization)
		{
		}

		Flavor(const ::fgl::ast::node::flavor* flavor_)
			: Flavor(ast::reference::Access<::fgl::ast::node::flavor>(flavor_))
		{
		}

		Flavor(std::string name_, const ::fgl::ast::node::value* specialization_ = nullptr)
			: name(std::move(name_)),
			  specialization(specialization_)
		{
		}

		std::string GetName() const noexcept
		{
			return name;
		}

		const ::fgl::ast::node::value* GetSpecialization() const noexcept
		{
			return specialization;
		}

		std::string GetSpecializationAsString() const noexcept
		{
			if (specialization == nullptr)
			{
				return "";
			}

			ast::reference::Access<::fgl::ast::node::value> access(specialization);

			if (!access.NUMBER().GetContent().empty())
			{
				return access.NUMBER().GetContent()[0]->GetValue();
			}
			if (!access.STRING().GetContent().empty())
			{
				auto text = access.STRING().GetContent()[0]->GetValue();
				text.erase(std::remove(text.begin(), text.end(), '"'), text.end());
				text.erase(std::remove(text.begin(), text.end(), '\\'), text.end());

				return text;
			}
			if (!access.object_access().GetContent().empty())
			{
				// Not implemented
				return "";
			}

			return "";
		}

	public:
		bool operator==(const Flavor& rhs) const
		{
			return this->name == rhs.name && this->specialization == rhs.specialization;
		}

		bool operator<(const Flavor& rhs) const
		{
			if ((this->name + this->GetSpecializationAsString()).size() <
				(rhs.name + rhs.GetSpecializationAsString()).size())
			{
				return true;
			}

			if ((this->name + this->GetSpecializationAsString()).size() >
				(rhs.name + rhs.GetSpecializationAsString()).size())
			{
				return false;
			}

			return (this->name + this->GetSpecializationAsString()) <
				   (rhs.name + this->GetSpecializationAsString());
		}

		bool operator>(const Flavor& rhs) const
		{
			if ((this->name + this->GetSpecializationAsString()).size() >
				(rhs.name + rhs.GetSpecializationAsString()).size())
			{
				return true;
			}

			if ((this->name + this->GetSpecializationAsString()).size() <
				(rhs.name + rhs.GetSpecializationAsString()).size())
			{
				return false;
			}

			return (this->name + this->GetSpecializationAsString()) >
				   (rhs.name + this->GetSpecializationAsString());
		}
	};
}

#endif // FGL_IR_FLAVOR_FLAVOR_H
