#include "fgl/IR/Fgl.h"
#include <set>

void fgl::ir::Fgl::SetUnderlyingNodes(const ::std::string& text)
{
	underlyingNodes = text;
}

void fgl::ir::Fgl::AddTargetSetting(const std::string& text)
{
}

void fgl::ir::Fgl::AddMemberSetting(const std::string& text)
{
	members.push_back(text);
}

void fgl::ir::Fgl::AddIncludeSetting(const std::string& text)
{
	includes.push_back(text);
}

void fgl::ir::Fgl::AddFunctionSetting(const std::string& text)
{
	functions.push_back(text);
}

void fgl::ir::Fgl::AddCustomSetting(const std::string& text)
{
}

void fgl::ir::Fgl::SetManipulationRules(
	const std::map<ir::Object, std::vector<ir::ManipulationRule>>& manipulationRules_)
{
	manipulationRules = manipulationRules_;
}

std::set<fgl::ir::Flavor> fgl::ir::Fgl::GetFlavors() const
{
	if (flavors.has_value())
	{
		return flavors.value();
	}

	flavors = std::set<Flavor>();

	for (auto [target, manipulations] : manipulationRules)
	{
		for (const auto& manipulation : manipulations)
		{
			for (const auto& flavor : manipulation.GetFlavors())
			{
				flavors.value().insert(flavor.flavor);

				if (flavor.flavor.GetSpecialization() != nullptr)
				{
					flavors.value().insert(Flavor(flavor.flavor.GetName()));
				}
			}
		}
	}

	return flavors.value();
}

std::set<fgl::ir::Flavor> fgl::ir::Fgl::GetBaseFlavors() const
{
	const auto allFlavors = GetFlavors();
	auto baseFlavors = std::set<fgl::ir::Flavor>();

	for (const auto& flavor : allFlavors)
	{
		std::cout << flavor.GetName() << " "
				  << ::std::to_string((::std::size_t)flavor.GetSpecialization()) << '\n';
		baseFlavors.emplace(Flavor(flavor.GetName()));
	}

	return baseFlavors;
}

std::set<fgl::ir::Flavor> fgl::ir::Fgl::GetSpecializationOfBaseFlavors(const Flavor& flavor) const
{
	const auto allFlavors = GetFlavors();
	auto specializationFlavors = std::set<fgl::ir::Flavor>();

	for (const auto& currentFlavor : allFlavors)
	{
		std::cout << "bruh: " << currentFlavor.GetName() << " "
				  << currentFlavor.GetSpecializationAsString() << "\n";
		if (currentFlavor.GetSpecialization() != nullptr &&
			currentFlavor.GetName() == flavor.GetName())
		{
			specializationFlavors.insert(currentFlavor);
		}
	}

	return specializationFlavors;
}

std::map<fgl::ir::Object, std::vector<fgl::ir::ManipulationRule>>
fgl::ir::Fgl::GetManipulation() const
{
	return manipulationRules;
}

std::vector<std::string> fgl::ir::Fgl::GetIncludes() const
{
	return includes;
}

::std::vector<::std::string> fgl::ir::Fgl::GetFunctions() const
{
	return functions;
}

::std::vector<::std::string> fgl::ir::Fgl::GetMembers() const
{
	return members;
}

::std::string fgl::ir::Fgl::GetUnderlyingNodes() const
{
	return underlyingNodes;
}
