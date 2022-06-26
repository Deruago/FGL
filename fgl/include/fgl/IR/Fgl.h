#ifndef FGL_IR_FGL_H
#define FGL_IR_FGL_H

#include "fgl/IR/Capture.h"
#include "fgl/IR/Instruction.h"
#include "fgl/IR/ManipulationRule.h"
#include "fgl/IR/Object.h"
#include "fgl/Template/IR/Generate/cpp/Deamer/TemplatedEntryExitListener/EntryExitListenerTemplate.h"
#include "fgl/Template/IR/Generate/cpp/Visitor/VisitorTemplate.h"
#include <map>
#include <optional>
#include <set>
#include <string>
#include <vector>

namespace fgl::ir
{
	/*!	\enum NamingConvention
	 *
	 *	\brief Used to apply integration local naming conventions.
	 *
	 *	\details This may override naming rules to fit to the integration.
	 */
	enum class NamingConvention
	{
		standard,		 // Standard Flavoring Style
		DeamerLS,		 // Integration for Deamer LS
		DeamerLegacyAst, // Integration for Deamer Legacy Ast
	};

	class Fgl
	{
	private:
		std::map<Object, std::vector<ManipulationRule>> manipulationRules;
		mutable std::optional<std::set<Flavor>> flavors;

		std::vector<std::string> inheritances;
		std::vector<std::string> includes;
		std::vector<std::string> members;
		std::vector<std::string> functions;

		std::string underlyingNodes = "GetNodes()";
		std::string enterFunction = "Enter";
		std::string exitFunction = "Exit";
		std::string nodeType = "Node";

		bool utilizeDispatch = true;

		NamingConvention namingConvention = NamingConvention::standard;
		std::string deamerLanguageName;

	public:
		Fgl() = default;
		~Fgl() = default;

	public:
		/*!	\fn SetUnderlyingNodes
		 *
		 * \brief Sets the function or member that needs to be called to get the underlying nodes.
		 */
		void SetUnderlyingNodes(const std::string& text);

		void AddTargetSetting(const std::string& text);

		void AddMemberSetting(const std::string& text);

		void AddIncludeSetting(const std::string& text);

		void AddInheritanceSetting(const std::string& text);

		void AddFunctionSetting(const std::string& text);

		void AddCustomSetting(const std::string& text);

		void SetManipulationRules(
			const std::map<Object, std::vector<ManipulationRule>>& manipulationRules_);

		void SetEnterFunction(const std::string& enterFunction_);
		void SetExitFunction(const std::string& exitFunction_);
		void SetNodeType(const std::string& nodeType_);
		void SetDeamerLanguageName(const std::string& deamerLanguageName_);
		void SetNamingConvention(NamingConvention namingConvention_);
		void SetDispatchUsage(bool useDispatch_);

	public:
		/*!	\fn GetFlavors
		 *
		 *	\brief returns flavors used.
		 *
		 * \details Deduces the flavors given the manipulationrules.
		 */
		std::set<Flavor> GetFlavors() const;

		/*!	\fn GetBaseFlavors
		 *
		 *	\brief Returns all base flavors without any specialization.
		 */
		std::set<Flavor> GetBaseFlavors() const;

		/*!	\fn GetSpecializationOfBaseFlavors
		 *
		 *	\brief Returns all specializations from a base flavor.
		 */
		std::set<Flavor> GetSpecializationOfBaseFlavors(const Flavor& flavor) const;

		std::map<Object, std::vector<ManipulationRule>> GetManipulation() const;
		std::vector<std::string> GetInheritances() const;
		std::vector<std::string> GetIncludes() const;
		std::vector<std::string> GetFunctions() const;
		std::vector<std::string> GetMembers() const;
		std::string GetUnderlyingNodes() const;

		std::string GetEnterFunction() const;
		std::string GetExitFunction() const;
		std::string GetNodeType() const;
		std::string GetDeamerLanguageName() const;
		NamingConvention GetNamingConvention() const;

		bool GetDispatchUsage() const;
	};
}

#endif // FGL_IR_FGL_H
