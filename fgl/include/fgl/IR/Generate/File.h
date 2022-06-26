#ifndef FGL_IR_GENERATE_FILE_H
#define FGL_IR_GENERATE_FILE_H
#include "fgl/IR/Fgl.h"
#include "fgl/IR/LanguageTarget.h"
#include "fgl/Template/IR/Generate/cpp/Deamer/TemplatedEntryExitListener/EntryExitListenerTemplate.h"
#include <string>

namespace fgl::ir::generate
{
	/*!	\class File
	 *
	 * \brief Generates the Fgl visitor file.
	 *
	 */
	template<LanguageTarget target>
	class File
	{
	};

	template<>
	class File<LanguageTarget::cpp>
	{
	private:
		Fgl fgl;

	public:
		File(const Fgl& fgl_);

	public:
		std::string Generate();

	private:
		void SetupGeneral(const cpp::EntryExitListenerTemplate& visitorTemplate);

		void ImplementActions(fgl::ir::generate::cpp::EntryExitListenerTemplate& visitorTemplate);
		void ImplementFlavorDeclarations(
			fgl::ir::generate::cpp::EntryExitListenerTemplate& visitorTemplate);
		void ImplementUserInjections(cpp::EntryExitListenerTemplate& visitorTemplate);

		std::string GetConditionalCaptureOfRule(const ManipulationRule& value);
		std::string GetManipulationOfRule(const ManipulationRule& value);
		std::string GetMirorManipulationOfRule(const ManipulationRule& value);
	};
}

#endif // FGL_IR_GENERATE_FILE_H
