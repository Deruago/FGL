/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_FGL_FGL_PARSER_TAB_H_INCLUDED
# define YY_FGL_FGL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int fgldebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LEFT_SQUARE_BRACKET = 258,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 259,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_BRACKET = 260,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 261,           /* RIGHT_BRACKET  */
    LEFT_PARANTHESIS = 262,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 263,       /* RIGHT_PARANTHESIS  */
    COMMA = 264,                   /* COMMA  */
    DOT = 265,                     /* DOT  */
    ARROW = 266,                   /* ARROW  */
    COLON = 267,                   /* COLON  */
    NEW = 268,                     /* NEW  */
    DELETE = 269,                  /* DELETE  */
    EXPAND = 270,                  /* EXPAND  */
    WITH = 271,                    /* WITH  */
    AND = 272,                     /* AND  */
    EQEQ = 273,                    /* EQEQ  */
    EQ = 274,                      /* EQ  */
    GTE = 275,                     /* GTE  */
    GT = 276,                      /* GT  */
    LTE = 277,                     /* LTE  */
    LT = 278,                      /* LT  */
    ADD = 279,                     /* ADD  */
    MINUS = 280,                   /* MINUS  */
    TARGET_SETTING = 281,          /* TARGET_SETTING  */
    INCLUDE_SETTING = 282,         /* INCLUDE_SETTING  */
    MEMBER_SETTING = 283,          /* MEMBER_SETTING  */
    FUNCTION_SETTING = 284,        /* FUNCTION_SETTING  */
    USER_INSERTED_SETTING = 285,   /* USER_INSERTED_SETTING  */
    VARNAME = 286,                 /* VARNAME  */
    NUMBER = 287,                  /* NUMBER  */
    STRING = 288                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 156 "./fgl_parser.y"

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

#line 164 "fgl_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE fgllval;

int fglparse (void);

#endif /* !YY_FGL_FGL_PARSER_TAB_H_INCLUDED  */
