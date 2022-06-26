/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         fglparse
#define yylex           fgllex
#define yyerror         fglerror
#define yydebug         fgldebug
#define yynerrs         fglnerrs
#define yylval          fgllval
#define yychar          fglchar

/* First part of user prologue.  */
#line 5 "./fgl_parser.y"

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
#include "fgl/Ast/Node/NAMINGCONVENTION_SETTING.h"
#include "fgl/Ast/Node/DISPATCH_SETTING.h"
#include "fgl/Ast/Node/INHERITANCE_SETTING.h"
#include "fgl/Ast/Node/DEAMER_LANGUAGE_NAME_SETTING.h"
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

#line 174 "fgl_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "fgl_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_COMMENT = 3,                    /* COMMENT  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 4,        /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 5,       /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_BRACKET = 6,               /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 7,              /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 8,           /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 9,          /* RIGHT_PARANTHESIS  */
  YYSYMBOL_COMMA = 10,                     /* COMMA  */
  YYSYMBOL_DOT = 11,                       /* DOT  */
  YYSYMBOL_ARROW = 12,                     /* ARROW  */
  YYSYMBOL_COLON = 13,                     /* COLON  */
  YYSYMBOL_NEW = 14,                       /* NEW  */
  YYSYMBOL_DELETE = 15,                    /* DELETE  */
  YYSYMBOL_EXPAND = 16,                    /* EXPAND  */
  YYSYMBOL_WITH = 17,                      /* WITH  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_EQEQ = 19,                      /* EQEQ  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_GTE = 21,                       /* GTE  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LTE = 23,                       /* LTE  */
  YYSYMBOL_LT = 24,                        /* LT  */
  YYSYMBOL_ADD = 25,                       /* ADD  */
  YYSYMBOL_MINUS = 26,                     /* MINUS  */
  YYSYMBOL_TARGET_SETTING = 27,            /* TARGET_SETTING  */
  YYSYMBOL_INCLUDE_SETTING = 28,           /* INCLUDE_SETTING  */
  YYSYMBOL_MEMBER_SETTING = 29,            /* MEMBER_SETTING  */
  YYSYMBOL_FUNCTION_SETTING = 30,          /* FUNCTION_SETTING  */
  YYSYMBOL_NAMINGCONVENTION_SETTING = 31,  /* NAMINGCONVENTION_SETTING  */
  YYSYMBOL_DISPATCH_SETTING = 32,          /* DISPATCH_SETTING  */
  YYSYMBOL_INHERITANCE_SETTING = 33,       /* INHERITANCE_SETTING  */
  YYSYMBOL_DEAMER_LANGUAGE_NAME_SETTING = 34, /* DEAMER_LANGUAGE_NAME_SETTING  */
  YYSYMBOL_USER_INSERTED_SETTING = 35,     /* USER_INSERTED_SETTING  */
  YYSYMBOL_VARNAME = 36,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 37,                    /* NUMBER  */
  YYSYMBOL_STRING = 38,                    /* STRING  */
  YYSYMBOL_ESCAPE_CHARS = 39,              /* ESCAPE_CHARS  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_program = 41,                   /* program  */
  YYSYMBOL_deamerreserved_star__stmt__ = 42, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 43,                      /* stmt  */
  YYSYMBOL_setting_rule = 44,              /* setting_rule  */
  YYSYMBOL_entry_manipulation_rule = 45,   /* entry_manipulation_rule  */
  YYSYMBOL_exit_manipulation_rule = 46,    /* exit_manipulation_rule  */
  YYSYMBOL_capture = 47,                   /* capture  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__flavor_capture____ = 48, /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____  */
  YYSYMBOL_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__ = 49, /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
  YYSYMBOL_manipulation = 50,              /* manipulation  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__instruction____ = 51, /* deamerreserved_arrow__deamerreserved_optional__instruction____  */
  YYSYMBOL_deamerreserved_star__COMMA__instruction__ = 52, /* deamerreserved_star__COMMA__instruction__  */
  YYSYMBOL_instruction = 53,               /* instruction  */
  YYSYMBOL_new_flavor = 54,                /* new_flavor  */
  YYSYMBOL_delete_flavor = 55,             /* delete_flavor  */
  YYSYMBOL_expand_flavor = 56,             /* expand_flavor  */
  YYSYMBOL_flavor_capture = 57,            /* flavor_capture  */
  YYSYMBOL_conditional_flavor = 58,        /* conditional_flavor  */
  YYSYMBOL_value = 59,                     /* value  */
  YYSYMBOL_user_defined_instruction = 60,  /* user_defined_instruction  */
  YYSYMBOL_object = 61,                    /* object  */
  YYSYMBOL_object_access = 62,             /* object_access  */
  YYSYMBOL_deamerreserved_arrow__member__ = 63, /* deamerreserved_arrow__member__  */
  YYSYMBOL_deamerreserved_star__DOT__member__ = 64, /* deamerreserved_star__DOT__member__  */
  YYSYMBOL_member = 65,                    /* member  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__argument____ = 66, /* deamerreserved_arrow__deamerreserved_optional__argument____  */
  YYSYMBOL_deamerreserved_star__COMMA__argument__ = 67, /* deamerreserved_star__COMMA__argument__  */
  YYSYMBOL_argument = 68,                  /* argument  */
  YYSYMBOL_flavor = 69,                    /* flavor  */
  YYSYMBOL_flavor_specialization = 70      /* flavor_specialization  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   85

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   248,   248,   259,   265,   275,   281,   287,   297,   303,
     309,   315,   321,   327,   333,   339,   345,   355,   361,   371,
     381,   391,   397,   407,   413,   419,   429,   439,   445,   455,
     461,   471,   477,   483,   489,   499,   509,   519,   529,   535,
     545,   551,   557,   563,   569,   579,   585,   591,   601,   611,
     621,   631,   641,   647,   657,   663,   673,   679,   689,   695,
     705,   715,   721,   731
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "COMMENT",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "LEFT_BRACKET",
  "RIGHT_BRACKET", "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "COMMA", "DOT",
  "ARROW", "COLON", "NEW", "DELETE", "EXPAND", "WITH", "AND", "EQEQ", "EQ",
  "GTE", "GT", "LTE", "LT", "ADD", "MINUS", "TARGET_SETTING",
  "INCLUDE_SETTING", "MEMBER_SETTING", "FUNCTION_SETTING",
  "NAMINGCONVENTION_SETTING", "DISPATCH_SETTING", "INHERITANCE_SETTING",
  "DEAMER_LANGUAGE_NAME_SETTING", "USER_INSERTED_SETTING", "VARNAME",
  "NUMBER", "STRING", "ESCAPE_CHARS", "$accept", "program",
  "deamerreserved_star__stmt__", "stmt", "setting_rule",
  "entry_manipulation_rule", "exit_manipulation_rule", "capture",
  "deamerreserved_arrow__deamerreserved_optional__flavor_capture____",
  "deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__",
  "manipulation",
  "deamerreserved_arrow__deamerreserved_optional__instruction____",
  "deamerreserved_star__COMMA__instruction__", "instruction", "new_flavor",
  "delete_flavor", "expand_flavor", "flavor_capture", "conditional_flavor",
  "value", "user_defined_instruction", "object", "object_access",
  "deamerreserved_arrow__member__", "deamerreserved_star__DOT__member__",
  "member", "deamerreserved_arrow__deamerreserved_optional__argument____",
  "deamerreserved_star__COMMA__argument__", "argument", "flavor",
  "flavor_specialization", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       7,   -16,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     4,   -37,     7,   -37,   -37,   -37,   -18,     9,   -37,
     -37,    39,    -5,   -37,    24,   -37,   -37,    41,   -37,   -37,
     -37,   -37,    47,    13,   -37,   -37,   -16,   -16,   -37,    13,
      13,    13,    13,    13,    25,   -37,     6,    52,    53,    54,
      55,    -5,    -5,   -37,   -37,   -37,   -37,   -37,    41,   -13,
      60,    60,   -37,    13,   -37,   -37,    13,   -37,   -37,   -37,
     -37,    56,    57,    59,    64,    62,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,    55,    37,    37,    37,   -37,   -13,
     -37,   -37,    66,   -37,   -37,    65,    62,    13,    58,   -37,
      53,    69,    13,    70,   -37
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    22,     8,    10,     9,    11,    12,    14,    15,    13,
      16,     0,     2,     4,     7,     5,     6,     0,    55,    46,
      47,     0,    25,    39,     0,    45,    50,    53,    38,     1,
       3,    49,     0,    57,    61,    20,     0,     0,    21,     0,
       0,     0,     0,     0,     0,    51,     0,    55,    60,     0,
      59,    25,    25,    40,    42,    44,    41,    43,    53,    28,
       0,     0,    18,    57,    63,    54,     0,    56,    23,    24,
      52,     0,     0,     0,     0,    30,    31,    32,    33,    48,
      34,    17,    19,    60,    59,     0,     0,     0,    26,     0,
      27,    58,    62,    35,    36,     0,    30,     0,     0,    29,
       0,     0,     0,     0,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -37,   -37,    67,   -37,   -37,   -37,   -37,   -37,   -37,   -36,
      -3,   -37,   -15,   -11,   -37,   -37,   -37,    -8,   -37,   -33,
     -37,   -37,   -37,   -37,    26,    38,   -37,    -1,    19,   -32,
     -37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    16,    17,    21,    38,
      62,    74,    90,    75,    76,    77,    78,    22,    23,    24,
      80,    32,    25,    26,    45,    27,    49,    67,    50,    28,
      34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    71,    72,    73,    29,    36,    53,    54,    55,    56,
      57,     1,    59,    37,   -62,    68,    69,    33,    31,   -62,
      18,    19,    20,    47,    19,    20,    79,   -62,    51,    52,
      83,    60,    61,    83,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    39,    35,    40,    41,    42,    43,    47,
      19,    20,    44,    93,    94,    95,    79,    81,    82,    46,
      63,    47,    64,    65,   100,    66,    59,    85,    86,   103,
      87,    88,    89,    92,    97,   101,    98,   102,    96,   104,
      30,    99,    58,    91,    70,    84
};

static const yytype_int8 yycheck[] =
{
      33,    14,    15,    16,     0,    10,    39,    40,    41,    42,
      43,     4,     6,    18,     5,    51,    52,     8,    36,    10,
      36,    37,    38,    36,    37,    38,    59,    18,    36,    37,
      63,    25,    26,    66,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    19,     5,    21,    22,    23,    24,    36,
      37,    38,    11,    85,    86,    87,    89,    60,    61,    12,
       8,    36,     9,     9,    97,    10,     6,    11,    11,   102,
      11,     7,    10,    36,     8,    17,    11,     8,    89,     9,
      13,    96,    44,    84,    58,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    41,    42,    43,    44,    45,    46,    47,    36,    37,
      38,    48,    57,    58,    59,    62,    63,    65,    69,     0,
      42,    36,    61,     8,    70,     5,    10,    18,    49,    19,
      21,    22,    23,    24,    11,    64,    12,    36,    59,    66,
      68,    57,    57,    59,    59,    59,    59,    59,    65,     6,
      25,    26,    50,     8,     9,     9,    10,    67,    49,    49,
      64,    14,    15,    16,    51,    53,    54,    55,    56,    59,
      60,    50,    50,    59,    68,    11,    11,    11,     7,    10,
      52,    67,    36,    69,    69,    69,    53,     8,    11,    52,
      59,    17,     8,    59,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    45,    45,    46,
      47,    48,    48,    49,    49,    49,    50,    51,    51,    52,
      52,    53,    53,    53,    53,    54,    55,    56,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    61,
      62,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    69,    69,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     5,
       3,     2,     0,     3,     3,     0,     3,     2,     0,     3,
       0,     1,     1,     1,     1,     3,     3,     8,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     3,     0,     4,     1,     2,     0,     3,     0,
       1,     2,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* program: deamerreserved_star__stmt__  */
#line 248 "./fgl_parser.y"
                                     {
		auto* const newNode = new fgl::ast::node::program({::fgl::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_deamerreserved_star__stmt__) });
		(yyval.fgl_program) = newNode;

		// Ignored, Deleted, tokens are deleted
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1824 "fgl_parser.tab.c"
    break;

  case 3: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 259 "./fgl_parser.y"
                                          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].fgl_stmt), (yyvsp[0].fgl_deamerreserved_star__stmt__) });
		(yyval.fgl_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1835 "fgl_parser.tab.c"
    break;

  case 4: /* deamerreserved_star__stmt__: %empty  */
#line 265 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_star__stmt__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1846 "fgl_parser.tab.c"
    break;

  case 5: /* stmt: entry_manipulation_rule  */
#line 275 "./fgl_parser.y"
                                 {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_entry_manipulation_rule) });
		(yyval.fgl_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1857 "fgl_parser.tab.c"
    break;

  case 6: /* stmt: exit_manipulation_rule  */
#line 281 "./fgl_parser.y"
                                  {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_exit_manipulation_rule) });
		(yyval.fgl_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1868 "fgl_parser.tab.c"
    break;

  case 7: /* stmt: setting_rule  */
#line 287 "./fgl_parser.y"
                        {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_setting_rule) });
		(yyval.fgl_stmt) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1879 "fgl_parser.tab.c"
    break;

  case 8: /* setting_rule: TARGET_SETTING  */
#line 297 "./fgl_parser.y"
                        {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::TARGET_SETTING({::fgl::ast::Type::TARGET_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1890 "fgl_parser.tab.c"
    break;

  case 9: /* setting_rule: MEMBER_SETTING  */
#line 303 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::MEMBER_SETTING({::fgl::ast::Type::MEMBER_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1901 "fgl_parser.tab.c"
    break;

  case 10: /* setting_rule: INCLUDE_SETTING  */
#line 309 "./fgl_parser.y"
                           {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::INCLUDE_SETTING({::fgl::ast::Type::INCLUDE_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1912 "fgl_parser.tab.c"
    break;

  case 11: /* setting_rule: FUNCTION_SETTING  */
#line 315 "./fgl_parser.y"
                            {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::FUNCTION_SETTING({::fgl::ast::Type::FUNCTION_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1923 "fgl_parser.tab.c"
    break;

  case 12: /* setting_rule: NAMINGCONVENTION_SETTING  */
#line 321 "./fgl_parser.y"
                                    {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::NAMINGCONVENTION_SETTING({::fgl::ast::Type::NAMINGCONVENTION_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1934 "fgl_parser.tab.c"
    break;

  case 13: /* setting_rule: DEAMER_LANGUAGE_NAME_SETTING  */
#line 327 "./fgl_parser.y"
                                        {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 5, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::DEAMER_LANGUAGE_NAME_SETTING({::fgl::ast::Type::DEAMER_LANGUAGE_NAME_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1945 "fgl_parser.tab.c"
    break;

  case 14: /* setting_rule: DISPATCH_SETTING  */
#line 333 "./fgl_parser.y"
                            {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 6, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::DISPATCH_SETTING({::fgl::ast::Type::DISPATCH_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1956 "fgl_parser.tab.c"
    break;

  case 15: /* setting_rule: INHERITANCE_SETTING  */
#line 339 "./fgl_parser.y"
                               {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 7, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::INHERITANCE_SETTING({::fgl::ast::Type::INHERITANCE_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1967 "fgl_parser.tab.c"
    break;

  case 16: /* setting_rule: USER_INSERTED_SETTING  */
#line 345 "./fgl_parser.y"
                                 {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 8, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::USER_INSERTED_SETTING({::fgl::ast::Type::USER_INSERTED_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_setting_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1978 "fgl_parser.tab.c"
    break;

  case 17: /* entry_manipulation_rule: capture object ARROW ADD manipulation  */
#line 355 "./fgl_parser.y"
                                               {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-4].fgl_capture), (yyvsp[-3].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), new fgl::ast::node::ADD({::fgl::ast::Type::ADD, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_entry_manipulation_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 1989 "fgl_parser.tab.c"
    break;

  case 18: /* entry_manipulation_rule: capture object ARROW manipulation  */
#line 361 "./fgl_parser.y"
                                             {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-3].fgl_capture), (yyvsp[-2].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_entry_manipulation_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2000 "fgl_parser.tab.c"
    break;

  case 19: /* exit_manipulation_rule: capture object ARROW MINUS manipulation  */
#line 371 "./fgl_parser.y"
                                                 {
		auto* const newNode = new fgl::ast::node::exit_manipulation_rule({::fgl::ast::Type::exit_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-4].fgl_capture), (yyvsp[-3].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), new fgl::ast::node::MINUS({::fgl::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_exit_manipulation_rule) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2011 "fgl_parser.tab.c"
    break;

  case 20: /* capture: LEFT_SQUARE_BRACKET deamerreserved_arrow__deamerreserved_optional__flavor_capture____ RIGHT_SQUARE_BRACKET  */
#line 381 "./fgl_parser.y"
                                                                                                                    {
		auto* const newNode = new fgl::ast::node::capture({::fgl::ast::Type::capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_SQUARE_BRACKET({::fgl::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____), new fgl::ast::node::RIGHT_SQUARE_BRACKET({::fgl::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_capture) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2022 "fgl_parser.tab.c"
    break;

  case 21: /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____: flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 391 "./fgl_parser.y"
                                                                                               {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2033 "fgl_parser.tab.c"
    break;

  case 22: /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____: %empty  */
#line 397 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2044 "fgl_parser.tab.c"
    break;

  case 23: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: COMMA flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 407 "./fgl_parser.y"
                                                                                                     {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2055 "fgl_parser.tab.c"
    break;

  case 24: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: AND flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 413 "./fgl_parser.y"
                                                                                                     {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::AND({::fgl::ast::Type::AND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2066 "fgl_parser.tab.c"
    break;

  case 25: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: %empty  */
#line 419 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2077 "fgl_parser.tab.c"
    break;

  case 26: /* manipulation: LEFT_BRACKET deamerreserved_arrow__deamerreserved_optional__instruction____ RIGHT_BRACKET  */
#line 429 "./fgl_parser.y"
                                                                                                   {
		auto* const newNode = new fgl::ast::node::manipulation({::fgl::ast::Type::manipulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_BRACKET({::fgl::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__instruction____), new fgl::ast::node::RIGHT_BRACKET({::fgl::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_manipulation) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2088 "fgl_parser.tab.c"
    break;

  case 27: /* deamerreserved_arrow__deamerreserved_optional__instruction____: instruction deamerreserved_star__COMMA__instruction__  */
#line 439 "./fgl_parser.y"
                                                               {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].fgl_instruction), (yyvsp[0].fgl_deamerreserved_star__COMMA__instruction__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__instruction____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2099 "fgl_parser.tab.c"
    break;

  case 28: /* deamerreserved_arrow__deamerreserved_optional__instruction____: %empty  */
#line 445 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__instruction____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2110 "fgl_parser.tab.c"
    break;

  case 29: /* deamerreserved_star__COMMA__instruction__: COMMA instruction deamerreserved_star__COMMA__instruction__  */
#line 455 "./fgl_parser.y"
                                                                     {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_instruction), (yyvsp[0].fgl_deamerreserved_star__COMMA__instruction__) });
		(yyval.fgl_deamerreserved_star__COMMA__instruction__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2121 "fgl_parser.tab.c"
    break;

  case 30: /* deamerreserved_star__COMMA__instruction__: %empty  */
#line 461 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_star__COMMA__instruction__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2132 "fgl_parser.tab.c"
    break;

  case 31: /* instruction: new_flavor  */
#line 471 "./fgl_parser.y"
                    {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_new_flavor) });
		(yyval.fgl_instruction) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2143 "fgl_parser.tab.c"
    break;

  case 32: /* instruction: delete_flavor  */
#line 477 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_delete_flavor) });
		(yyval.fgl_instruction) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2154 "fgl_parser.tab.c"
    break;

  case 33: /* instruction: expand_flavor  */
#line 483 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_expand_flavor) });
		(yyval.fgl_instruction) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2165 "fgl_parser.tab.c"
    break;

  case 34: /* instruction: user_defined_instruction  */
#line 489 "./fgl_parser.y"
                                    {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_user_defined_instruction) });
		(yyval.fgl_instruction) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2176 "fgl_parser.tab.c"
    break;

  case 35: /* new_flavor: NEW DOT flavor  */
#line 499 "./fgl_parser.y"
                        {
		auto* const newNode = new fgl::ast::node::new_flavor({::fgl::ast::Type::new_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::NEW({::fgl::ast::Type::NEW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_flavor) });
		(yyval.fgl_new_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2187 "fgl_parser.tab.c"
    break;

  case 36: /* delete_flavor: DELETE DOT flavor  */
#line 509 "./fgl_parser.y"
                           {
		auto* const newNode = new fgl::ast::node::delete_flavor({::fgl::ast::Type::delete_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::DELETE({::fgl::ast::Type::DELETE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_flavor) });
		(yyval.fgl_delete_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2198 "fgl_parser.tab.c"
    break;

  case 37: /* expand_flavor: EXPAND DOT flavor DOT WITH LEFT_PARANTHESIS value RIGHT_PARANTHESIS  */
#line 519 "./fgl_parser.y"
                                                                             {
		auto* const newNode = new fgl::ast::node::expand_flavor({::fgl::ast::Type::expand_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::EXPAND({::fgl::ast::Type::EXPAND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-7].Terminal) }), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-6].Terminal) }), (yyvsp[-5].fgl_flavor), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal) }), new fgl::ast::node::WITH({::fgl::ast::Type::WITH, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_value), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_expand_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2209 "fgl_parser.tab.c"
    break;

  case 38: /* flavor_capture: flavor  */
#line 529 "./fgl_parser.y"
                {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_flavor) });
		(yyval.fgl_flavor_capture) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2220 "fgl_parser.tab.c"
    break;

  case 39: /* flavor_capture: conditional_flavor  */
#line 535 "./fgl_parser.y"
                              {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_conditional_flavor) });
		(yyval.fgl_flavor_capture) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2231 "fgl_parser.tab.c"
    break;

  case 40: /* conditional_flavor: value EQEQ value  */
#line 545 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].fgl_value), new fgl::ast::node::EQEQ({::fgl::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2242 "fgl_parser.tab.c"
    break;

  case 41: /* conditional_flavor: value LTE value  */
#line 551 "./fgl_parser.y"
                           {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].fgl_value), new fgl::ast::node::LTE({::fgl::ast::Type::LTE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2253 "fgl_parser.tab.c"
    break;

  case 42: /* conditional_flavor: value GTE value  */
#line 557 "./fgl_parser.y"
                           {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].fgl_value), new fgl::ast::node::GTE({::fgl::ast::Type::GTE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2264 "fgl_parser.tab.c"
    break;

  case 43: /* conditional_flavor: value LT value  */
#line 563 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 3, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].fgl_value), new fgl::ast::node::LT({::fgl::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2275 "fgl_parser.tab.c"
    break;

  case 44: /* conditional_flavor: value GT value  */
#line 569 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 4, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[-2].fgl_value), new fgl::ast::node::GT({::fgl::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2286 "fgl_parser.tab.c"
    break;

  case 45: /* value: object_access  */
#line 579 "./fgl_parser.y"
                       {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_object_access) });
		(yyval.fgl_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2297 "fgl_parser.tab.c"
    break;

  case 46: /* value: NUMBER  */
#line 585 "./fgl_parser.y"
                  {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::NUMBER({::fgl::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2308 "fgl_parser.tab.c"
    break;

  case 47: /* value: STRING  */
#line 591 "./fgl_parser.y"
                  {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 2, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::STRING({::fgl::ast::Type::STRING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_value) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2319 "fgl_parser.tab.c"
    break;

  case 48: /* user_defined_instruction: value  */
#line 601 "./fgl_parser.y"
               {
		auto* const newNode = new fgl::ast::node::user_defined_instruction({::fgl::ast::Type::user_defined_instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_value) });
		(yyval.fgl_user_defined_instruction) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2330 "fgl_parser.tab.c"
    break;

  case 49: /* object: VARNAME  */
#line 611 "./fgl_parser.y"
                 {
		auto* const newNode = new fgl::ast::node::object({::fgl::ast::Type::object, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_object) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2341 "fgl_parser.tab.c"
    break;

  case 50: /* object_access: deamerreserved_arrow__member__  */
#line 621 "./fgl_parser.y"
                                        {
		auto* const newNode = new fgl::ast::node::object_access({::fgl::ast::Type::object_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_deamerreserved_arrow__member__) });
		(yyval.fgl_object_access) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2352 "fgl_parser.tab.c"
    break;

  case 51: /* deamerreserved_arrow__member__: member deamerreserved_star__DOT__member__  */
#line 631 "./fgl_parser.y"
                                                   {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__member__({::fgl::ast::Type::deamerreserved_arrow__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].fgl_member), (yyvsp[0].fgl_deamerreserved_star__DOT__member__) });
		(yyval.fgl_deamerreserved_arrow__member__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2363 "fgl_parser.tab.c"
    break;

  case 52: /* deamerreserved_star__DOT__member__: DOT member deamerreserved_star__DOT__member__  */
#line 641 "./fgl_parser.y"
                                                       {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_member), (yyvsp[0].fgl_deamerreserved_star__DOT__member__) });
		(yyval.fgl_deamerreserved_star__DOT__member__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2374 "fgl_parser.tab.c"
    break;

  case 53: /* deamerreserved_star__DOT__member__: %empty  */
#line 647 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_star__DOT__member__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2385 "fgl_parser.tab.c"
    break;

  case 54: /* member: VARNAME LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__argument____ RIGHT_PARANTHESIS  */
#line 657 "./fgl_parser.y"
                                                                                                                {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal) }), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__argument____), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_member) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2396 "fgl_parser.tab.c"
    break;

  case 55: /* member: VARNAME  */
#line 663 "./fgl_parser.y"
                   {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_member) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2407 "fgl_parser.tab.c"
    break;

  case 56: /* deamerreserved_arrow__deamerreserved_optional__argument____: argument deamerreserved_star__COMMA__argument__  */
#line 673 "./fgl_parser.y"
                                                         {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { (yyvsp[-1].fgl_argument), (yyvsp[0].fgl_deamerreserved_star__COMMA__argument__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__argument____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2418 "fgl_parser.tab.c"
    break;

  case 57: /* deamerreserved_arrow__deamerreserved_optional__argument____: %empty  */
#line 679 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__argument____) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2429 "fgl_parser.tab.c"
    break;

  case 58: /* deamerreserved_star__COMMA__argument__: COMMA argument deamerreserved_star__COMMA__argument__  */
#line 689 "./fgl_parser.y"
                                                               {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_argument), (yyvsp[0].fgl_deamerreserved_star__COMMA__argument__) });
		(yyval.fgl_deamerreserved_star__COMMA__argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2440 "fgl_parser.tab.c"
    break;

  case 59: /* deamerreserved_star__COMMA__argument__: %empty  */
#line 695 "./fgl_parser.y"
           {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::translation }}, {  });
		(yyval.fgl_deamerreserved_star__COMMA__argument__) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2451 "fgl_parser.tab.c"
    break;

  case 60: /* argument: value  */
#line 705 "./fgl_parser.y"
               {
		auto* const newNode = new fgl::ast::node::argument({::fgl::ast::Type::argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { (yyvsp[0].fgl_value) });
		(yyval.fgl_argument) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2462 "fgl_parser.tab.c"
    break;

  case 61: /* flavor: VARNAME flavor_specialization  */
#line 715 "./fgl_parser.y"
                                       {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal) }), (yyvsp[0].fgl_flavor_specialization) });
		(yyval.fgl_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2473 "fgl_parser.tab.c"
    break;

  case 62: /* flavor: VARNAME  */
#line 721 "./fgl_parser.y"
                   {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 1, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_flavor) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2484 "fgl_parser.tab.c"
    break;

  case 63: /* flavor_specialization: LEFT_PARANTHESIS value RIGHT_PARANTHESIS  */
#line 731 "./fgl_parser.y"
                                                  {
		auto* const newNode = new fgl::ast::node::flavor_specialization({::fgl::ast::Type::flavor_specialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, { 0, ::deamer::external::cpp::ast::ProductionRuleType::user }}, { new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal) }), (yyvsp[-1].fgl_value), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal) }) });
		(yyval.fgl_flavor_specialization) = newNode;

		// Ignored, Deleted, tokens are deleted
	}
#line 2495 "fgl_parser.tab.c"
    break;


#line 2499 "fgl_parser.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 741 "./fgl_parser.y"


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
