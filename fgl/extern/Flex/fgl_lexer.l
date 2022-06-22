%option yylineno
%option noyywrap



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
static bool include_deleted = false;
static int column = 0;
static void handleColumn(const std::string& text);
static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject);
static std::vector<const deamer::external::cpp::lexer::TerminalObject*> 
local_objects;


#ifndef yyval
#define yyval yytext
#endif // yyval
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

DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH	(.)

%%

{COMMENT}	{  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1))); else if (local_store && false) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(1))); else if (local_store && true); else if (!true || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(1)); else if (false) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(1)); handleColumn(yyval); if ((!local_store && false) || (!local_store && include_deleted)) return (COMMENT); }
{LEFT_SQUARE_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(2))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(2)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(2)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_SQUARE_BRACKET); }
{RIGHT_SQUARE_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(3))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(3)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(3)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_SQUARE_BRACKET); }
{LEFT_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(4))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(4)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(4)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_BRACKET); }
{RIGHT_BRACKET}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(5))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(5)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(5)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_BRACKET); }
{LEFT_PARANTHESIS}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(6))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(6)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(6)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LEFT_PARANTHESIS); }
{RIGHT_PARANTHESIS}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(7))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(7)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(7)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (RIGHT_PARANTHESIS); }
{COMMA}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(8))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(8)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(8)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (COMMA); }
{DOT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(9))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(9)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(9)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (DOT); }
{ARROW}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(10))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(10)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(10)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ARROW); }
{COLON}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(11))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(11)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(11)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (COLON); }
{NEW}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(12))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(12)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(12)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (NEW); }
{DELETE}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(13))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(13)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(13)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (DELETE); }
{EXPAND}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(14))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(14)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(14)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (EXPAND); }
{WITH}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(15))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(15)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(15)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (WITH); }
{AND}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(16))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(16)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(16)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (AND); }
{EQEQ}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(17))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(17)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(17)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (EQEQ); }
{EQ}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(18))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(18)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(18)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (EQ); }
{GTE}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(19))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(19)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(19)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (GTE); }
{GT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(20))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(20)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(20)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (GT); }
{LTE}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(21))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(21)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(21)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LTE); }
{LT}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(22))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(22)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(22)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (LT); }
{ADD}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(23))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(23)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(23)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (ADD); }
{MINUS}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(24))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(24)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(24)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (MINUS); }
{TARGET_SETTING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(25))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(25)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(25)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (TARGET_SETTING); }
{INCLUDE_SETTING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(26))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(26)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(26)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (INCLUDE_SETTING); }
{MEMBER_SETTING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(27))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(27)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(27)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (MEMBER_SETTING); }
{FUNCTION_SETTING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(28))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(28)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(28)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (FUNCTION_SETTING); }
{USER_INSERTED_SETTING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(29))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(29))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(29)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(29)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (USER_INSERTED_SETTING); }
{VARNAME}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(30))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(30))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(30)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(30)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (VARNAME); }
{NUMBER}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(31))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(31))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(31)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(31)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (NUMBER); }
{STRING}	{  if (local_store && !false || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(32))); else if (local_store && true) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(32))); else if (local_store && false); else if (!false || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(32)); else if (true) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(32)); handleColumn(yyval); if ((!local_store && true) || (!local_store && include_deleted)) return (STRING); }
{ESCAPE_CHARS}	{  if (local_store && !true || local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(33))); else if (local_store && false) store(new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(33))); else if (local_store && true); else if (!true || include_deleted) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(33)); else if (false) fgllval.Terminal = new deamer::external::cpp::lexer::TerminalObject("", yylineno, column, std::size_t(33)); handleColumn(yyval); if ((!local_store && false) || (!local_store && include_deleted)) return (ESCAPE_CHARS); }

{DEAMER_RESERVED_UNRECOGNIZED_RULE_MATCH} { if (local_store && include_deleted) store(new deamer::external::cpp::lexer::TerminalObject(yyval, yylineno, column, std::size_t(0))); }

%%

static void store(const deamer::external::cpp::lexer::TerminalObject* const newObject)
{
	local_objects.push_back(newObject);
}

static void clear()
{
	local_objects.clear();
}

static void handleColumn(const std::string& text)
{
	int& currentColumn = column;
	currentColumn += text.size();
	for (auto character : text)
	{
		if (character == '\n')
		{
			currentColumn = 0;
			break;
		}
	}
}

std::vector<const ::deamer::external::cpp::lexer::TerminalObject*> fgl::flex::lexer::Lexer::Tokenize(const std::string& text, ::deamer::external::cpp::lexer::TerminalConstructionPolicy constructionPolicy) const
{
	if (constructionPolicy == ::deamer::external::cpp::lexer::TerminalConstructionPolicy::include_deleted_terminals)
	{
		include_deleted = true;
	}
	else
	{
		include_deleted = false;
	}

	local_store = true;
	column = 0;

	YY_BUFFER_STATE buf;
	buf = yy_scan_string(text.c_str());
	yylex();
	yy_delete_buffer(buf);
	yylex_destroy();

	local_store = false;
	include_deleted = false;

	auto local_objects_copy = local_objects;
	clear();

	return local_objects_copy;
}