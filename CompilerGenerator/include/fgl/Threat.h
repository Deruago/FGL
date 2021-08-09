#ifndef FGL_THREAT_H
#define FGL_THREAT_H

#include "Deamer/Language/Generator/Definition/Property/Standard/Main/Threat.h"
#include "Deamer/Language/Type/Definition/Object/Main/Threat/Analyzer/Combined/Deamer/DeamerCore.h"

namespace fgl
{
	class Language;

	/*!	\class Threat
	 *
	 *	\brief This contains the threat LPD of the language fgl
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Threat : public ::deamer::language::generator::definition::property::standard::Threat<
			  ::fgl::Language, ::deamer::language::type::definition::object::main::threat::
											analyzer::deamer::DeamerCore>
	{
	public:
		Threat(::fgl::Language* language)
			: ::deamer::language::generator::definition::property::standard::Threat<
				  ::fgl::Language, ::deamer::language::type::definition::object::main::
												threat::analyzer::deamer::DeamerCore>(language)
		{
		}
		~Threat() override = default;
	};
}

#endif // FGL_THREAT_H
