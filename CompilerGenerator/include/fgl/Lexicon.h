/* 
 * This file is auto-generated and auto-maintained by DLDL
 * Do not change code in this as it can be overwritten.
 *
 * For more information see the DLDL repo: https://github.com/Deruago/DLDL
 * For more information about Deamer: https://github.com/Deruago/theDeamerProject
 */

#ifndef FGL_LEXICON_H
#define FGL_LEXICON_H

#include "Deamer/Language/Generator/Definition/Property/User/Main/Lexicon.h"

namespace fgl
{
	class Language;

	class Lexicon : public ::deamer::language::generator::definition::property::user::Lexicon<
								::fgl::Language>
	{
	public:
		// Terminal declarations
		::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COMMENT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_SQUARE_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_BRACKET;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LEFT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> RIGHT_PARANTHESIS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COMMA;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DOT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ARROW;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> COLON;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NEW;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> DELETE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EXPAND;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> WITH;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> AND;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQEQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> EQ;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> GTE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> GT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LTE;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> LT;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ADD;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MINUS;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> TARGET_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> INCLUDE_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> MEMBER_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> FUNCTION_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> USER_INSERTED_SETTING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> VARNAME;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> NUMBER;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> STRING;
::deamer::type::SafeReserve<::deamer::language::type::definition::object::main::Terminal> ESCAPE_CHARS;

	
	public:
		Lexicon(fgl::Language* language)
			:	::deamer::language::generator::definition::property::user::Lexicon<
					::fgl::Language>(language)
		{
		}

		void GenerateObjects() override
		{
			// Terminals
			COMMENT.Set(deamer::language::type::definition::object::main::Terminal("COMMENT", "[/][^\\n\\r]*[\\n\\r]{0,1}", ::deamer::language::type::definition::object::main::SpecialType::Delete));
LEFT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_SQUARE_BRACKET", "[\\[]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_SQUARE_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_SQUARE_BRACKET", "[\\]]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("LEFT_BRACKET", "[{]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_BRACKET.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_BRACKET", "[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LEFT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("LEFT_PARANTHESIS", "[(]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
RIGHT_PARANTHESIS.Set(deamer::language::type::definition::object::main::Terminal("RIGHT_PARANTHESIS", "[)]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COMMA.Set(deamer::language::type::definition::object::main::Terminal("COMMA", "[,]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DOT.Set(deamer::language::type::definition::object::main::Terminal("DOT", "[.]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ARROW.Set(deamer::language::type::definition::object::main::Terminal("ARROW", "[-][>]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
COLON.Set(deamer::language::type::definition::object::main::Terminal("COLON", "[:]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NEW.Set(deamer::language::type::definition::object::main::Terminal("NEW", "new", ::deamer::language::type::definition::object::main::SpecialType::Standard));
DELETE.Set(deamer::language::type::definition::object::main::Terminal("DELETE", "delete", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EXPAND.Set(deamer::language::type::definition::object::main::Terminal("EXPAND", "expand", ::deamer::language::type::definition::object::main::SpecialType::Standard));
WITH.Set(deamer::language::type::definition::object::main::Terminal("WITH", "with", ::deamer::language::type::definition::object::main::SpecialType::Standard));
AND.Set(deamer::language::type::definition::object::main::Terminal("AND", "and", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EQEQ.Set(deamer::language::type::definition::object::main::Terminal("EQEQ", "[=][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
EQ.Set(deamer::language::type::definition::object::main::Terminal("EQ", "[=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
GTE.Set(deamer::language::type::definition::object::main::Terminal("GTE", "[>][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
GT.Set(deamer::language::type::definition::object::main::Terminal("GT", "[>]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LTE.Set(deamer::language::type::definition::object::main::Terminal("LTE", "[<][=]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
LT.Set(deamer::language::type::definition::object::main::Terminal("LT", "[<]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ADD.Set(deamer::language::type::definition::object::main::Terminal("ADD", "[+]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MINUS.Set(deamer::language::type::definition::object::main::Terminal("MINUS", "[-]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
TARGET_SETTING.Set(deamer::language::type::definition::object::main::Terminal("TARGET_SETTING", "[@]target[^{]*[{]([\\\\][}]|[^}])*[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
INCLUDE_SETTING.Set(deamer::language::type::definition::object::main::Terminal("INCLUDE_SETTING", "[@]include[^{]*[{]([\\\\][}]|[^}])*[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
MEMBER_SETTING.Set(deamer::language::type::definition::object::main::Terminal("MEMBER_SETTING", "[@]member[^{]*[{]([\\\\][}]|[^}])*[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
FUNCTION_SETTING.Set(deamer::language::type::definition::object::main::Terminal("FUNCTION_SETTING", "[@]function[^{]*[{]([\\\\][}]|[^}])*[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
USER_INSERTED_SETTING.Set(deamer::language::type::definition::object::main::Terminal("USER_INSERTED_SETTING", "[@][a-zA-Z_]+[a-zA-Z_0-9]*[^{]*[{]([\\\\][}]|[^}])*[}]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
VARNAME.Set(deamer::language::type::definition::object::main::Terminal("VARNAME", "[a-zA-Z_]+[a-zA-Z_0-9]*([:][:][a-zA-Z_]+[a-zA-Z_0-9]*)*", ::deamer::language::type::definition::object::main::SpecialType::Standard));
NUMBER.Set(deamer::language::type::definition::object::main::Terminal("NUMBER", "[0-9]+", ::deamer::language::type::definition::object::main::SpecialType::Standard));
STRING.Set(deamer::language::type::definition::object::main::Terminal("STRING", "[\"]([\\\\][\"]|[^\"])*[\"]", ::deamer::language::type::definition::object::main::SpecialType::Standard));
ESCAPE_CHARS.Set(deamer::language::type::definition::object::main::Terminal("ESCAPE_CHARS", "[\\n\\t\\r\\f\\v\\b\\a ]+", ::deamer::language::type::definition::object::main::SpecialType::Delete));


			// Add object calls
			// AddObject(...)
			AddObject(COMMENT);
AddObject(LEFT_SQUARE_BRACKET);
AddObject(RIGHT_SQUARE_BRACKET);
AddObject(LEFT_BRACKET);
AddObject(RIGHT_BRACKET);
AddObject(LEFT_PARANTHESIS);
AddObject(RIGHT_PARANTHESIS);
AddObject(COMMA);
AddObject(DOT);
AddObject(ARROW);
AddObject(COLON);
AddObject(NEW);
AddObject(DELETE);
AddObject(EXPAND);
AddObject(WITH);
AddObject(AND);
AddObject(EQEQ);
AddObject(EQ);
AddObject(GTE);
AddObject(GT);
AddObject(LTE);
AddObject(LT);
AddObject(ADD);
AddObject(MINUS);
AddObject(TARGET_SETTING);
AddObject(INCLUDE_SETTING);
AddObject(MEMBER_SETTING);
AddObject(FUNCTION_SETTING);
AddObject(USER_INSERTED_SETTING);
AddObject(VARNAME);
AddObject(NUMBER);
AddObject(STRING);
AddObject(ESCAPE_CHARS);


			// Place higher level operations here.
			// ReplaceObject(..., ...)
			// DeleteObject(..., ...)
			
		}
	};
}

#endif // FGL_LEXICON_H
