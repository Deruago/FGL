/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef FGL_LANGUAGE_H
#define FGL_LANGUAGE_H

#include "Deamer/Language/Generator/Definition/Language.h"
#include "fgl/Threat.h"
#include "fgl/Identity.h"
#include "fgl/Generation.h"
#include "fgl/Grammar.h"
#include "fgl/Lexicon.h"


namespace fgl
{
	/*!	\class Language
	 *
	 *	\brief This contains the Language Definition of the language fgl
	 *
	 *	\details The LD initializes all base LPD's with its own pointer (this).
	 *	This allows the LPD's to access other LPD's via the language object.
	 *
	 *	\note This is auto-generated via the DLDL definition.
	 */
	class Language : public ::deamer::language::generator::definition::Language<
						 ::fgl::Language , ::fgl::Threat
, ::fgl::Identity
, ::fgl::Generation
, ::fgl::Grammar
, ::fgl::Lexicon
>
						 , public ::fgl::Threat
, public ::fgl::Identity
, public ::fgl::Generation
, public ::fgl::Grammar
, public ::fgl::Lexicon

	{
	public:
		Language() : ::deamer::language::generator::definition::Language<
						 ::fgl::Language , ::fgl::Threat
, ::fgl::Identity
, ::fgl::Generation
, ::fgl::Grammar
, ::fgl::Lexicon
>()
		, ::fgl::Threat::Threat(this)
, ::fgl::Identity::Identity(this)
, ::fgl::Generation::Generation(this)
, ::fgl::Grammar::Grammar(this)
, ::fgl::Lexicon::Lexicon(this)

		{
		}

		~Language() override = default;
	};
}

#endif // FGL_LANGUAGE_H
