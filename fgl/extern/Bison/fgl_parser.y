%define parse.error verbose
%define parse.lac full


%{
#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <Deamer/External/Cpp/Lexer/TerminalObject.h>
#include <Deamer/External/Cpp/Ast/Node.h>
#include "fgl/Bison/Parser.h"
#define YY_NO_UNISTD_H
#include "Flex/fgl_lexer.h"
#undef YY_NO_UNISTD_H
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


#ifndef YY_parse_NERRS
#define YY_parse_NERRS fglnerrs
#endif //YY_parse_NERRS
#ifndef YY_parse_LLOC
#define YY_parse_LLOC fgllloc
#endif //YY_parse_LLOC
#define YYERROR_VERBOSE

void fglerror(const char* s);
int fgllex();
static ::deamer::external::cpp::ast::Tree* outputTree = nullptr;
%}

%token<Terminal> COMMENT
%token<Terminal> LEFT_SQUARE_BRACKET
%token<Terminal> RIGHT_SQUARE_BRACKET
%token<Terminal> LEFT_BRACKET
%token<Terminal> RIGHT_BRACKET
%token<Terminal> LEFT_PARANTHESIS
%token<Terminal> RIGHT_PARANTHESIS
%token<Terminal> COMMA
%token<Terminal> DOT
%token<Terminal> ARROW
%token<Terminal> COLON
%token<Terminal> NEW
%token<Terminal> DELETE
%token<Terminal> EXPAND
%token<Terminal> WITH
%token<Terminal> AND
%token<Terminal> EQEQ
%token<Terminal> EQ
%token<Terminal> GTE
%token<Terminal> GT
%token<Terminal> LTE
%token<Terminal> LT
%token<Terminal> ADD
%token<Terminal> MINUS
%token<Terminal> TARGET_SETTING
%token<Terminal> INCLUDE_SETTING
%token<Terminal> MEMBER_SETTING
%token<Terminal> FUNCTION_SETTING
%token<Terminal> USER_INSERTED_SETTING
%token<Terminal> VARNAME
%token<Terminal> NUMBER
%token<Terminal> STRING
%token<Terminal> ESCAPE_CHARS


%nterm<fgl_program> program
%nterm<fgl_deamerreserved_star__stmt__> deamerreserved_star__stmt__
%nterm<fgl_stmt> stmt
%nterm<fgl_setting_rule> setting_rule
%nterm<fgl_entry_manipulation_rule> entry_manipulation_rule
%nterm<fgl_exit_manipulation_rule> exit_manipulation_rule
%nterm<fgl_capture> capture
%nterm<fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____> deamerreserved_arrow__deamerreserved_optional__flavor_capture____
%nterm<fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__> deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__
%nterm<fgl_manipulation> manipulation
%nterm<fgl_deamerreserved_arrow__deamerreserved_optional__instruction____> deamerreserved_arrow__deamerreserved_optional__instruction____
%nterm<fgl_deamerreserved_star__COMMA__instruction__> deamerreserved_star__COMMA__instruction__
%nterm<fgl_instruction> instruction
%nterm<fgl_new_flavor> new_flavor
%nterm<fgl_delete_flavor> delete_flavor
%nterm<fgl_expand_flavor> expand_flavor
%nterm<fgl_flavor_capture> flavor_capture
%nterm<fgl_conditional_flavor> conditional_flavor
%nterm<fgl_value> value
%nterm<fgl_user_defined_instruction> user_defined_instruction
%nterm<fgl_object> object
%nterm<fgl_object_access> object_access
%nterm<fgl_deamerreserved_arrow__member__> deamerreserved_arrow__member__
%nterm<fgl_deamerreserved_star__DOT__member__> deamerreserved_star__DOT__member__
%nterm<fgl_member> member
%nterm<fgl_deamerreserved_arrow__deamerreserved_optional__argument____> deamerreserved_arrow__deamerreserved_optional__argument____
%nterm<fgl_deamerreserved_star__COMMA__argument__> deamerreserved_star__COMMA__argument__
%nterm<fgl_argument> argument
%nterm<fgl_flavor> flavor
%nterm<fgl_flavor_specialization> flavor_specialization


%union{
	::deamer::external::cpp::lexer::TerminalObject* Terminal;
	::fgl::ast::node::COMMENT* fgl_COMMENT;
	::fgl::ast::node::LEFT_SQUARE_BRACKET* fgl_LEFT_SQUARE_BRACKET;
	::fgl::ast::node::RIGHT_SQUARE_BRACKET* fgl_RIGHT_SQUARE_BRACKET;
	::fgl::ast::node::LEFT_BRACKET* fgl_LEFT_BRACKET;
	::fgl::ast::node::RIGHT_BRACKET* fgl_RIGHT_BRACKET;
	::fgl::ast::node::LEFT_PARANTHESIS* fgl_LEFT_PARANTHESIS;
	::fgl::ast::node::RIGHT_PARANTHESIS* fgl_RIGHT_PARANTHESIS;
	::fgl::ast::node::COMMA* fgl_COMMA;
	::fgl::ast::node::DOT* fgl_DOT;
	::fgl::ast::node::ARROW* fgl_ARROW;
	::fgl::ast::node::COLON* fgl_COLON;
	::fgl::ast::node::NEW* fgl_NEW;
	::fgl::ast::node::DELETE* fgl_DELETE;
	::fgl::ast::node::EXPAND* fgl_EXPAND;
	::fgl::ast::node::WITH* fgl_WITH;
	::fgl::ast::node::AND* fgl_AND;
	::fgl::ast::node::EQEQ* fgl_EQEQ;
	::fgl::ast::node::EQ* fgl_EQ;
	::fgl::ast::node::GTE* fgl_GTE;
	::fgl::ast::node::GT* fgl_GT;
	::fgl::ast::node::LTE* fgl_LTE;
	::fgl::ast::node::LT* fgl_LT;
	::fgl::ast::node::ADD* fgl_ADD;
	::fgl::ast::node::MINUS* fgl_MINUS;
	::fgl::ast::node::TARGET_SETTING* fgl_TARGET_SETTING;
	::fgl::ast::node::INCLUDE_SETTING* fgl_INCLUDE_SETTING;
	::fgl::ast::node::MEMBER_SETTING* fgl_MEMBER_SETTING;
	::fgl::ast::node::FUNCTION_SETTING* fgl_FUNCTION_SETTING;
	::fgl::ast::node::USER_INSERTED_SETTING* fgl_USER_INSERTED_SETTING;
	::fgl::ast::node::VARNAME* fgl_VARNAME;
	::fgl::ast::node::NUMBER* fgl_NUMBER;
	::fgl::ast::node::STRING* fgl_STRING;
	::fgl::ast::node::ESCAPE_CHARS* fgl_ESCAPE_CHARS;
	::fgl::ast::node::program* fgl_program;
	::fgl::ast::node::deamerreserved_star__stmt__* fgl_deamerreserved_star__stmt__;
	::fgl::ast::node::stmt* fgl_stmt;
	::fgl::ast::node::setting_rule* fgl_setting_rule;
	::fgl::ast::node::entry_manipulation_rule* fgl_entry_manipulation_rule;
	::fgl::ast::node::exit_manipulation_rule* fgl_exit_manipulation_rule;
	::fgl::ast::node::capture* fgl_capture;
	::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____* fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____;
	::fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__* fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__;
	::fgl::ast::node::manipulation* fgl_manipulation;
	::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____* fgl_deamerreserved_arrow__deamerreserved_optional__instruction____;
	::fgl::ast::node::deamerreserved_star__COMMA__instruction__* fgl_deamerreserved_star__COMMA__instruction__;
	::fgl::ast::node::instruction* fgl_instruction;
	::fgl::ast::node::new_flavor* fgl_new_flavor;
	::fgl::ast::node::delete_flavor* fgl_delete_flavor;
	::fgl::ast::node::expand_flavor* fgl_expand_flavor;
	::fgl::ast::node::flavor_capture* fgl_flavor_capture;
	::fgl::ast::node::conditional_flavor* fgl_conditional_flavor;
	::fgl::ast::node::value* fgl_value;
	::fgl::ast::node::user_defined_instruction* fgl_user_defined_instruction;
	::fgl::ast::node::object* fgl_object;
	::fgl::ast::node::object_access* fgl_object_access;
	::fgl::ast::node::deamerreserved_arrow__member__* fgl_deamerreserved_arrow__member__;
	::fgl::ast::node::deamerreserved_star__DOT__member__* fgl_deamerreserved_star__DOT__member__;
	::fgl::ast::node::member* fgl_member;
	::fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____* fgl_deamerreserved_arrow__deamerreserved_optional__argument____;
	::fgl::ast::node::deamerreserved_star__COMMA__argument__* fgl_deamerreserved_star__COMMA__argument__;
	::fgl::ast::node::argument* fgl_argument;
	::fgl::ast::node::flavor* fgl_flavor;
	::fgl::ast::node::flavor_specialization* fgl_flavor_specialization;

}

%%


program:
	deamerreserved_star__stmt__  {
		auto* const newNode = new fgl::ast::node::program({::fgl::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
;


deamerreserved_star__stmt__:
	stmt deamerreserved_star__stmt__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


stmt:
	entry_manipulation_rule  {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| exit_manipulation_rule  {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| setting_rule  {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


setting_rule:
	TARGET_SETTING  {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::TARGET_SETTING({::fgl::ast::Type::TARGET_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| MEMBER_SETTING  {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::MEMBER_SETTING({::fgl::ast::Type::MEMBER_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| INCLUDE_SETTING  {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::INCLUDE_SETTING({::fgl::ast::Type::INCLUDE_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| FUNCTION_SETTING  {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::FUNCTION_SETTING({::fgl::ast::Type::FUNCTION_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| USER_INSERTED_SETTING  {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::USER_INSERTED_SETTING({::fgl::ast::Type::USER_INSERTED_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


entry_manipulation_rule:
	capture object ARROW ADD manipulation  {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), new fgl::ast::node::ADD({::fgl::ast::Type::ADD, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| capture object ARROW manipulation  {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), $4 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


exit_manipulation_rule:
	capture object ARROW MINUS manipulation  {
		auto* const newNode = new fgl::ast::node::exit_manipulation_rule({::fgl::ast::Type::exit_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, $2, new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }), new fgl::ast::node::MINUS({::fgl::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), $5 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


capture:
	LEFT_SQUARE_BRACKET deamerreserved_arrow__deamerreserved_optional__flavor_capture____ RIGHT_SQUARE_BRACKET  {
		auto* const newNode = new fgl::ast::node::capture({::fgl::ast::Type::capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_SQUARE_BRACKET({::fgl::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new fgl::ast::node::RIGHT_SQUARE_BRACKET({::fgl::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__deamerreserved_optional__flavor_capture____:
	flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__:
	COMMA flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| AND flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::AND({::fgl::ast::Type::AND, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


manipulation:
	LEFT_BRACKET deamerreserved_arrow__deamerreserved_optional__instruction____ RIGHT_BRACKET  {
		auto* const newNode = new fgl::ast::node::manipulation({::fgl::ast::Type::manipulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_BRACKET({::fgl::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new fgl::ast::node::RIGHT_BRACKET({::fgl::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__deamerreserved_optional__instruction____:
	instruction deamerreserved_star__COMMA__instruction__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__instruction__:
	COMMA instruction deamerreserved_star__COMMA__instruction__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


instruction:
	new_flavor  {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| delete_flavor  {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| expand_flavor  {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| user_defined_instruction  {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


new_flavor:
	NEW DOT flavor  {
		auto* const newNode = new fgl::ast::node::new_flavor({::fgl::ast::Type::new_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::NEW({::fgl::ast::Type::NEW, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


delete_flavor:
	DELETE DOT flavor  {
		auto* const newNode = new fgl::ast::node::delete_flavor({::fgl::ast::Type::delete_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::DELETE({::fgl::ast::Type::DELETE, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


expand_flavor:
	EXPAND DOT flavor DOT WITH LEFT_PARANTHESIS value RIGHT_PARANTHESIS  {
		auto* const newNode = new fgl::ast::node::expand_flavor({::fgl::ast::Type::expand_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::EXPAND({::fgl::ast::Type::EXPAND, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }), new fgl::ast::node::WITH({::fgl::ast::Type::WITH, ::deamer::external::cpp::ast::NodeValue::terminal, $5 }), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $6 }), $7, new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $8 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


flavor_capture:
	flavor  {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| conditional_flavor  {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


conditional_flavor:
	value EQEQ value  {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new fgl::ast::node::EQEQ({::fgl::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| value LTE value  {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new fgl::ast::node::LTE({::fgl::ast::Type::LTE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| value GTE value  {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new fgl::ast::node::GTE({::fgl::ast::Type::GTE, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| value LT value  {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new fgl::ast::node::LT({::fgl::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| value GT value  {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1, new fgl::ast::node::GT({::fgl::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


value:
	object_access  {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| NUMBER  {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::NUMBER({::fgl::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| STRING  {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::STRING({::fgl::ast::Type::STRING, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


user_defined_instruction:
	value  {
		auto* const newNode = new fgl::ast::node::user_defined_instruction({::fgl::ast::Type::user_defined_instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


object:
	VARNAME  {
		auto* const newNode = new fgl::ast::node::object({::fgl::ast::Type::object, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


object_access:
	deamerreserved_arrow__member__  {
		auto* const newNode = new fgl::ast::node::object_access({::fgl::ast::Type::object_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__member__:
	member deamerreserved_star__DOT__member__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__member__({::fgl::ast::Type::deamerreserved_arrow__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__DOT__member__:
	DOT member deamerreserved_star__DOT__member__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


member:
	VARNAME LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__argument____ RIGHT_PARANTHESIS  {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $2 }), $3, new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $4 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| VARNAME  {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_arrow__deamerreserved_optional__argument____:
	argument deamerreserved_star__COMMA__argument__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { $1, $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


deamerreserved_star__COMMA__argument__:
	COMMA argument deamerreserved_star__COMMA__argument__  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, $3 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	|  {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


argument:
	value  {
		auto* const newNode = new fgl::ast::node::argument({::fgl::ast::Type::argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { $1 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


flavor:
	VARNAME flavor_specialization  {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2 });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
	| VARNAME  {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;


flavor_specialization:
	LEFT_PARANTHESIS value RIGHT_PARANTHESIS  {
		auto* const newNode = new fgl::ast::node::flavor_specialization({::fgl::ast::Type::flavor_specialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $1 }), $2, new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, $3 }) });
		$$ = newNode;

		// Ignored, Deleted, tokens are deleted
	}
;



%%

void fglerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* fgl::bison::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = fgl_scan_string(text.c_str());
	fglparse();
	fgl_delete_buffer(buf);
	fgllex_destroy();

	return outputTree;
}
