#ifndef FGL_IR_FGL_H
#define FGL_IR_FGL_H

#include "fgl/IR/Capture.h"
#include "fgl/IR/Instruction.h"
#include "fgl/IR/ManipulationRule.h"
#include "fgl/IR/Object.h"
#include "fgl/Template/IR/Generate/cpp/VisitorTemplate.h"
#include <map>
#include <optional>
#include <set>
#include <string>
#include <vector>

namespace fgl::ir
{
	class Fgl
	{
	private:
		::std::map<ir::Object, ::std::vector<ir::ManipulationRule>> manipulationRules;
		mutable ::std::optional<::std::set<Flavor>> flavors;

		::std::vector<::std::string> includes;
		::std::vector<::std::string> members;
		::std::vector<::std::string> functions;

		::std::string underlyingNodes = "GetNodes()";

	public:
		Fgl() = default;
		~Fgl() = default;

	public:
		/*!	\fn SetUnderlyingNodes
		 *
		 * \brief Sets the function or member that needs to be called to get the underlying nodes.
		 */
		void SetUnderlyingNodes(const ::std::string& text);

		void AddTargetSetting(const std::string& text);

		void AddMemberSetting(const std::string& text);

		void AddIncludeSetting(const std::string& text);

		void AddFunctionSetting(const std::string& text);

		void AddCustomSetting(const std::string& text);

		void SetManipulationRules(
			const std::map<ir::Object, std::vector<ir::ManipulationRule>>& manipulationRules_);

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

		::std::map<ir::Object, ::std::vector<ir::ManipulationRule>> GetManipulation() const;
		::std::vector<::std::string> GetIncludes() const;
		::std::vector<::std::string> GetFunctions() const;
		::std::vector<::std::string> GetMembers() const;
		::std::string GetUnderlyingNodes() const;
	};
}

#endif // FGL_IR_FGL_H
