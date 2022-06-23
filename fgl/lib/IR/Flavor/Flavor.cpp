#include "fgl/IR/Flavor/Flavor.h"

fgl::ir::Flavor::Flavor(ast::reference::Access<::fgl::ast::node::flavor> access)
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

fgl::ir::Flavor::Flavor(const Flavor& rhs) : name(rhs.name), specialization(rhs.specialization)
{
}

fgl::ir::Flavor::Flavor(const ::fgl::ast::node::flavor* flavor_)
	: Flavor(ast::reference::Access<::fgl::ast::node::flavor>(flavor_))
{
}

fgl::ir::Flavor::Flavor(std::string name_, const ::fgl::ast::node::value* specialization_)
	: name(std::move(name_)),
	  specialization(specialization_)
{
}

std::string fgl::ir::Flavor::GetName() const noexcept
{
	return name;
}

const ::fgl::ast::node::value* fgl::ir::Flavor::GetSpecialization() const noexcept
{
	return specialization;
}

std::string fgl::ir::Flavor::GetSpecializationAsString() const noexcept
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

bool fgl::ir::Flavor::operator==(const Flavor& rhs) const
{
	return this->name == rhs.name && this->specialization == rhs.specialization;
}

bool fgl::ir::Flavor::operator<(const Flavor& rhs) const
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

bool fgl::ir::Flavor::operator>(const Flavor& rhs) const
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
