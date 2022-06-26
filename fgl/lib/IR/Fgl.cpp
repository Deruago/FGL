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

void fgl::ir::Fgl::AddInheritanceSetting(const std::string& text)
{
	inheritances.push_back(text);
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

void fgl::ir::Fgl::SetEnterFunction(const std::string& enterFunction_)
{
	enterFunction = enterFunction_;
}

void fgl::ir::Fgl::SetExitFunction(const std::string& exitFunction_)
{
	exitFunction = exitFunction_;
}

void fgl::ir::Fgl::SetNodeType(const std::string& nodeType_)
{
	nodeType = nodeType_;
}

void fgl::ir::Fgl::SetDeamerLanguageName(const std::string& deamerLanguageName_)
{
	deamerLanguageName = deamerLanguageName_;
}

void fgl::ir::Fgl::SetNamingConvention(NamingConvention namingConvention_)
{
	namingConvention = namingConvention_;
}

void fgl::ir::Fgl::SetDispatchUsage(bool useDispatch_)
{
	utilizeDispatch = useDispatch_;
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

std::vector<std::string> fgl::ir::Fgl::GetInheritances() const
{
	return inheritances;
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

std::string fgl::ir::Fgl::GetEnterFunction() const
{
	return enterFunction;
}

std::string fgl::ir::Fgl::GetExitFunction() const
{
	return exitFunction;
}

std::string fgl::ir::Fgl::GetNodeType() const
{
	return nodeType;
}

std::string fgl::ir::Fgl::GetDeamerLanguageName() const
{
	return deamerLanguageName;
}

fgl::ir::NamingConvention fgl::ir::Fgl::GetNamingConvention() const
{
	return namingConvention;
}

bool fgl::ir::Fgl::GetDispatchUsage() const
{
	return utilizeDispatch;
}
