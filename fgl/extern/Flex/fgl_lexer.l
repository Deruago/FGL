%option yylineno
%option noyywrap
%option never-interactive
%option nounistd

%{
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include "fgl/Flex/Lexer.h"
#include "fgl/Ast/Enum/Type.h"
#include "fgl/Ast/Node/COMMENT.h"
#include "fgl/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "fgl/Ast/Node/LEFT_BRACKET.h"
#include "fgl/Ast/Node/RIGHT_BRACKET.h"
#include "fgl/Ast/Node/LEFT_PARANTHESIS.h"
#include "fgl/Ast/Node/RIGHT_PARANTHESIS.h"
#include "fgl/Ast/Node/COMMA.h"
#include "fgl/Ast/Node/DOT.h"
#include "fgl/Ast/Node/ARROW.h"
#include "fgl/Ast/Node/COLON.h"
#include "fgl/Ast/Node/NEW.h"
#include "fgl/Ast/Node/DELETE.h"
#include "fgl/Ast/Node/EXPAND.h"
#include "fgl/Ast/Node/WITH.h"
#include "fgl/Ast/Node/AND.h"
#include "fgl/Ast/Node/EQEQ.h"
#include "fgl/Ast/Node/EQ.h"
#include "fgl/Ast/Node/GTE.h"
#include "fgl/Ast/Node/GT.h"
#include "fgl/Ast/Node/LTE.h"
#include "fgl/Ast/Node/LT.h"
#include "fgl/Ast/Node/ADD.h"
#include "fgl/Ast/Node/MINUS.h"
#include "fgl/Ast/Node/TARGET_SETTING.h"
#include "fgl/Ast/Node/INCLUDE_SETTING.h"
#include "fgl/Ast/Node/MEMBER_SETTING.h"
#include "fgl/Ast/Node/FUNCTION_SETTING.h"
#include "fgl/Ast/Node/USER_INSERTED_SETTING.h"
#include "fgl/Ast/Node/VARNAME.h"
#include "fgl/Ast/Node/NUMBER.h"
#include "fgl/Ast/Node/STRING.h"
#include "fgl/Ast/Node/ESCAPE_CHARS.h"

#include "fgl/Ast/Node/program.h"
#include "fgl/Ast/Node/deamerreserved_star__stmt__.h"
#include "fgl/Ast/Node/stmt.h"
#include "fgl/Ast/Node/setting_rule.h"
#include "fgl/Ast/Node/entry_manipulation_rule.h"
#include "fgl/Ast/Node/exit_manipulation_rule.h"
#include "fgl/Ast/Node/capture.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__flavor_capture____.h"
#include "fgl/Ast/Node/deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__.h"
#include "fgl/Ast/Node/manipulation.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__instruction____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__instruction__.h"
#include "fgl/Ast/Node/instruction.h"
#include "fgl/Ast/Node/new_flavor.h"
#include "fgl/Ast/Node/delete_flavor.h"
#include "fgl/Ast/Node/expand_flavor.h"
#include "fgl/Ast/Node/flavor_capture.h"
#include "fgl/Ast/Node/conditional_flavor.h"
#include "fgl/Ast/Node/value.h"
#include "fgl/Ast/Node/user_defined_instruction.h"
#include "fgl/Ast/Node/object.h"
#include "fgl/Ast/Node/object_access.h"
#include "fgl/Ast/Node/deamerreserved_arrow__member__.h"
#include "fgl/Ast/Node/deamerreserved_star__DOT__member__.h"
#include "fgl/Ast/Node/member.h"
#include "fgl/Ast/Node/deamerreserved_arrow__deamerreserved_optional__argument____.h"
#include "fgl/Ast/Node/deamerreserved_star__COMMA__argument__.h"
#include "fgl/Ast/Node/argument.h"
#include "fgl/Ast/Node/flavor.h"
#include "fgl/Ast/Node/flavor_specialization.h"
#include "Bison/fgl_parser.tab.h"
void showError();
extern int fgllex();

static bool local_store = false;
static int column = 0;
static int handleColumn(const std::string& text);
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> local_objects;
#ifndef yyval
#define yyval yytext
#endif //yyval
%}

COMMENT	([/][^\n\r]*[\n\r]{0,1})
LEFT_SQUARE_BRACKET	([\[])
RIGHT_SQUARE_BRACKET	([\]])
LEFT_BRACKET	([{])
RIGHT_BRACKET	([}])
LEFT_PARANTHESIS	([(])
RIGHT_PARANTHESIS	([)])
COMMA	([,])
DOT	([.])
ARROW	([-][>])
COLON	([:])
NEW	(new)
DELETE	(delete)
EXPAND	(expand)
WITH	(with)
AND	(and)
EQEQ	([=][=])
EQ	([=])
GTE	([>][=])
GT	([>])
LTE	([<][=])
LT	([<])
ADD	([+])
MINUS	([-])
TARGET_SETTING	([@]target[^{]*[{]([\\][}]|[^}])*[}])
INCLUDE_SETTING	([@]include[^{]*[{]([\\][}]|[^}])*[}])
MEMBER_SETTING	([@]member[^{]*[{]([\\][}]|[^}])*[}])
FUNCTION_SETTING	([@]function[^{]*[{]([\\][}]|[^}])*[}])
USER_INSERTED_SETTING	([@][a-zA-Z_]+[a-zA-Z_0-9]*[^{]*[{]([\\][}]|[^}])*[}])
VARNAME	([a-zA-Z_]+[a-zA-Z_0-9]*([:][:][a-zA-Z_]+[a-zA-Z_0-9]*)*)
NUMBER	([0-9]+)
STRING	(["]([\\]["]|[^"])*["])
ESCAPE_CHARS	([\n\t\r\f\v\b\a ]+)

%%

{COMMENT}	{handleColumn(yyval);if (!local_store) ;}
{LEFT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LEFT_SQUARE_BRACKET);;}
{RIGHT_SQUARE_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (RIGHT_SQUARE_BRACKET);;}
{LEFT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LEFT_BRACKET);;}
{RIGHT_BRACKET}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (RIGHT_BRACKET);;}
{LEFT_PARANTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LEFT_PARANTHESIS);;}
{RIGHT_PARANTHESIS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (RIGHT_PARANTHESIS);;}
{COMMA}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (COMMA);;}
{DOT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (DOT);;}
{ARROW}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ARROW);;}
{COLON}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (COLON);;}
{NEW}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (NEW);;}
{DELETE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (DELETE);;}
{EXPAND}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (EXPAND);;}
{WITH}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (WITH);;}
{AND}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (AND);;}
{EQEQ}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (EQEQ);;}
{EQ}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (EQ);;}
{GTE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (GTE);;}
{GT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (GT);;}
{LTE}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LTE);;}
{LT}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (LT);;}
{ADD}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (ADD);;}
{MINUS}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (MINUS);;}
{TARGET_SETTING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (TARGET_SETTING);;}
{INCLUDE_SETTING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (INCLUDE_SETTING);;}
{MEMBER_SETTING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (MEMBER_SETTING);;}
{FUNCTION_SETTING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (FUNCTION_SETTING);;}
{USER_INSERTED_SETTING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (USER_INSERTED_SETTING);;}
{VARNAME}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (VARNAME);;}
{NUMBER}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (NUMBER);;}
{STRING}	{if (local_store) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column));else fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column);;handleColumn(yyval);if (!local_store) return (STRING);;}
{ESCAPE_CHARS}	{handleColumn(yyval);if (!local_store) ;}

%%
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static int handleColumn(const std::string& text)
{
	int currentColumn = column;
	currentColumn += text.size();
	for (auto character : text)
	{
		if (character == '\n')
		{
			currentColumn = 0;
			break;
		}
	}
	
	return currentColumn;
}

std::vector<const deamer::external::cpp::lexer::TerminalObject*> fgl::lexer::Lexer::Tokenize(const std::string& text) const
{
	local_store = true;
	column = 0;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}


