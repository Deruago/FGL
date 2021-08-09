/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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
#line 1 "./fgl_parser.y"

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

#line 168 "fgl_parser.tab.c"

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
  YYSYMBOL_LEFT_SQUARE_BRACKET = 3,        /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 4,       /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_BRACKET = 5,               /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 6,              /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_PARANTHESIS = 7,           /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 8,          /* RIGHT_PARANTHESIS  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_DOT = 10,                       /* DOT  */
  YYSYMBOL_ARROW = 11,                     /* ARROW  */
  YYSYMBOL_COLON = 12,                     /* COLON  */
  YYSYMBOL_NEW = 13,                       /* NEW  */
  YYSYMBOL_DELETE = 14,                    /* DELETE  */
  YYSYMBOL_EXPAND = 15,                    /* EXPAND  */
  YYSYMBOL_WITH = 16,                      /* WITH  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_EQEQ = 18,                      /* EQEQ  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_GTE = 20,                       /* GTE  */
  YYSYMBOL_GT = 21,                        /* GT  */
  YYSYMBOL_LTE = 22,                       /* LTE  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_ADD = 24,                       /* ADD  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_TARGET_SETTING = 26,            /* TARGET_SETTING  */
  YYSYMBOL_INCLUDE_SETTING = 27,           /* INCLUDE_SETTING  */
  YYSYMBOL_MEMBER_SETTING = 28,            /* MEMBER_SETTING  */
  YYSYMBOL_FUNCTION_SETTING = 29,          /* FUNCTION_SETTING  */
  YYSYMBOL_USER_INSERTED_SETTING = 30,     /* USER_INSERTED_SETTING  */
  YYSYMBOL_VARNAME = 31,                   /* VARNAME  */
  YYSYMBOL_NUMBER = 32,                    /* NUMBER  */
  YYSYMBOL_STRING = 33,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_program = 35,                   /* program  */
  YYSYMBOL_deamerreserved_star__stmt__ = 36, /* deamerreserved_star__stmt__  */
  YYSYMBOL_stmt = 37,                      /* stmt  */
  YYSYMBOL_setting_rule = 38,              /* setting_rule  */
  YYSYMBOL_entry_manipulation_rule = 39,   /* entry_manipulation_rule  */
  YYSYMBOL_exit_manipulation_rule = 40,    /* exit_manipulation_rule  */
  YYSYMBOL_capture = 41,                   /* capture  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__flavor_capture____ = 42, /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____  */
  YYSYMBOL_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__ = 43, /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
  YYSYMBOL_manipulation = 44,              /* manipulation  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__instruction____ = 45, /* deamerreserved_arrow__deamerreserved_optional__instruction____  */
  YYSYMBOL_deamerreserved_star__COMMA__instruction__ = 46, /* deamerreserved_star__COMMA__instruction__  */
  YYSYMBOL_instruction = 47,               /* instruction  */
  YYSYMBOL_new_flavor = 48,                /* new_flavor  */
  YYSYMBOL_delete_flavor = 49,             /* delete_flavor  */
  YYSYMBOL_expand_flavor = 50,             /* expand_flavor  */
  YYSYMBOL_flavor_capture = 51,            /* flavor_capture  */
  YYSYMBOL_conditional_flavor = 52,        /* conditional_flavor  */
  YYSYMBOL_value = 53,                     /* value  */
  YYSYMBOL_user_defined_instruction = 54,  /* user_defined_instruction  */
  YYSYMBOL_object = 55,                    /* object  */
  YYSYMBOL_object_access = 56,             /* object_access  */
  YYSYMBOL_deamerreserved_arrow__member__ = 57, /* deamerreserved_arrow__member__  */
  YYSYMBOL_deamerreserved_star__DOT__member__ = 58, /* deamerreserved_star__DOT__member__  */
  YYSYMBOL_member = 59,                    /* member  */
  YYSYMBOL_deamerreserved_arrow__deamerreserved_optional__argument____ = 60, /* deamerreserved_arrow__deamerreserved_optional__argument____  */
  YYSYMBOL_deamerreserved_star__COMMA__argument__ = 61, /* deamerreserved_star__COMMA__argument__  */
  YYSYMBOL_argument = 62,                  /* argument  */
  YYSYMBOL_flavor = 63,                    /* flavor  */
  YYSYMBOL_flavor_specialization = 64      /* flavor_specialization  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   81

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  101

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   226,   226,   234,   238,   245,   249,   253,   260,   264,
     268,   272,   276,   283,   287,   294,   301,   308,   312,   319,
     323,   327,   334,   341,   345,   352,   356,   363,   367,   371,
     375,   382,   389,   396,   403,   407,   414,   418,   422,   426,
     430,   437,   441,   445,   452,   459,   466,   473,   480,   484,
     491,   495,   502,   506,   513,   517,   524,   531,   535,   542
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "COMMA", "DOT", "ARROW",
  "COLON", "NEW", "DELETE", "EXPAND", "WITH", "AND", "EQEQ", "EQ", "GTE",
  "GT", "LTE", "LT", "ADD", "MINUS", "TARGET_SETTING", "INCLUDE_SETTING",
  "MEMBER_SETTING", "FUNCTION_SETTING", "USER_INSERTED_SETTING", "VARNAME",
  "NUMBER", "STRING", "$accept", "program", "deamerreserved_star__stmt__",
  "stmt", "setting_rule", "entry_manipulation_rule",
  "exit_manipulation_rule", "capture",
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

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,    14,   -55,   -55,   -55,   -55,   -55,    18,   -55,     8,
     -55,   -55,   -55,    -9,    35,   -55,   -55,    21,    -4,   -55,
      -6,   -55,   -55,    30,   -55,   -55,   -55,   -55,    32,    17,
     -55,   -55,    14,    14,   -55,    17,    17,    17,    17,    17,
      10,   -55,    -1,    44,    47,    51,    52,    -4,    -4,   -55,
     -55,   -55,   -55,   -55,    30,   -12,    55,    55,   -55,    17,
     -55,   -55,    17,   -55,   -55,   -55,   -55,    53,    56,    57,
      59,    61,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      52,    31,    31,    31,   -55,   -12,   -55,   -55,    64,   -55,
     -55,    58,    61,    17,    60,   -55,    47,    65,    17,    66,
     -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    18,     8,    10,     9,    11,    12,     0,     2,     4,
       7,     5,     6,     0,    51,    42,    43,     0,    21,    35,
       0,    41,    46,    49,    34,     1,     3,    45,     0,    53,
      57,    16,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    47,     0,    51,    56,     0,    55,    21,    21,    36,
      38,    40,    37,    39,    49,    24,     0,     0,    14,    53,
      59,    50,     0,    52,    19,    20,    48,     0,     0,     0,
       0,    26,    27,    28,    29,    44,    30,    13,    15,    56,
      55,     0,     0,     0,    22,     0,    23,    54,    58,    31,
      32,     0,    26,     0,     0,    25,     0,     0,     0,     0,
      33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,    68,   -55,   -55,   -55,   -55,   -55,   -55,   -16,
      -3,   -55,   -19,   -10,   -55,   -55,   -55,    25,   -55,   -29,
     -55,   -55,   -55,   -55,    24,    39,   -55,     0,    19,   -54,
     -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    12,    13,    17,    34,
      58,    70,    86,    71,    72,    73,    74,    18,    19,    20,
      76,    28,    21,    22,    41,    23,    45,    63,    46,    24,
      30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      44,    67,    68,    69,    55,    32,    49,    50,    51,    52,
      53,     1,    35,    33,    36,    37,    38,    39,    25,    43,
      15,    16,    27,    56,    57,    31,    75,    89,    90,    91,
      79,    64,    65,    79,     2,     3,     4,     5,     6,   -58,
      40,    43,    29,    42,   -58,    14,    15,    16,    43,    15,
      16,    59,   -58,    77,    78,    60,    75,    47,    48,    61,
      55,    62,    88,    81,    96,    84,    82,    83,    94,    99,
      85,    93,    98,    95,   100,    92,    97,    26,    66,    54,
      87,    80
};

static const yytype_int8 yycheck[] =
{
      29,    13,    14,    15,     5,     9,    35,    36,    37,    38,
      39,     3,    18,    17,    20,    21,    22,    23,     0,    31,
      32,    33,    31,    24,    25,     4,    55,    81,    82,    83,
      59,    47,    48,    62,    26,    27,    28,    29,    30,     4,
      10,    31,     7,    11,     9,    31,    32,    33,    31,    32,
      33,     7,    17,    56,    57,     8,    85,    32,    33,     8,
       5,     9,    31,    10,    93,     6,    10,    10,    10,    98,
       9,     7,     7,    92,     8,    85,    16,     9,    54,    40,
      80,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    26,    27,    28,    29,    30,    35,    36,    37,
      38,    39,    40,    41,    31,    32,    33,    42,    51,    52,
      53,    56,    57,    59,    63,     0,    36,    31,    55,     7,
      64,     4,     9,    17,    43,    18,    20,    21,    22,    23,
      10,    58,    11,    31,    53,    60,    62,    51,    51,    53,
      53,    53,    53,    53,    59,     5,    24,    25,    44,     7,
       8,     8,     9,    61,    43,    43,    58,    13,    14,    15,
      45,    47,    48,    49,    50,    53,    54,    44,    44,    53,
      62,    10,    10,    10,     6,     9,    46,    61,    31,    63,
      63,    63,    47,     7,    10,    46,    53,    16,     7,    53,
       8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    38,    38,
      38,    38,    38,    39,    39,    40,    41,    42,    42,    43,
      43,    43,    44,    45,    45,    46,    46,    47,    47,    47,
      47,    48,    49,    50,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    55,    56,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    63,    63,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     5,     3,     2,     0,     3,
       3,     0,     3,     2,     0,     3,     0,     1,     1,     1,
       1,     3,     3,     8,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     3,     0,
       4,     1,     2,     0,     3,     0,     1,     2,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
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
  switch (yyn)
    {
  case 2: /* program: deamerreserved_star__stmt__  */
#line 226 "./fgl_parser.y"
                                    {
		auto* const newNode = new fgl::ast::node::program({::fgl::ast::Type::program, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_deamerreserved_star__stmt__) });
		(yyval.fgl_program) = newNode;
		outputTree = new ::deamer::external::cpp::ast::Tree(newNode);
	}
#line 1307 "fgl_parser.tab.c"
    break;

  case 3: /* deamerreserved_star__stmt__: stmt deamerreserved_star__stmt__  */
#line 234 "./fgl_parser.y"
                                         {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].fgl_stmt), (yyvsp[0].fgl_deamerreserved_star__stmt__) });
		(yyval.fgl_deamerreserved_star__stmt__) = newNode;
	}
#line 1316 "fgl_parser.tab.c"
    break;

  case 4: /* deamerreserved_star__stmt__: %empty  */
#line 238 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__stmt__({::fgl::ast::Type::deamerreserved_star__stmt__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_star__stmt__) = newNode;
	}
#line 1325 "fgl_parser.tab.c"
    break;

  case 5: /* stmt: entry_manipulation_rule  */
#line 245 "./fgl_parser.y"
                                {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_entry_manipulation_rule) });
		(yyval.fgl_stmt) = newNode;
	}
#line 1334 "fgl_parser.tab.c"
    break;

  case 6: /* stmt: exit_manipulation_rule  */
#line 249 "./fgl_parser.y"
                                 {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_exit_manipulation_rule) });
		(yyval.fgl_stmt) = newNode;
	}
#line 1343 "fgl_parser.tab.c"
    break;

  case 7: /* stmt: setting_rule  */
#line 253 "./fgl_parser.y"
                       {
		auto* const newNode = new fgl::ast::node::stmt({::fgl::ast::Type::stmt, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_setting_rule) });
		(yyval.fgl_stmt) = newNode;
	}
#line 1352 "fgl_parser.tab.c"
    break;

  case 8: /* setting_rule: TARGET_SETTING  */
#line 260 "./fgl_parser.y"
                       {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::TARGET_SETTING({::fgl::ast::Type::TARGET_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_setting_rule) = newNode;
	}
#line 1361 "fgl_parser.tab.c"
    break;

  case 9: /* setting_rule: MEMBER_SETTING  */
#line 264 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::MEMBER_SETTING({::fgl::ast::Type::MEMBER_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_setting_rule) = newNode;
	}
#line 1370 "fgl_parser.tab.c"
    break;

  case 10: /* setting_rule: INCLUDE_SETTING  */
#line 268 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::INCLUDE_SETTING({::fgl::ast::Type::INCLUDE_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_setting_rule) = newNode;
	}
#line 1379 "fgl_parser.tab.c"
    break;

  case 11: /* setting_rule: FUNCTION_SETTING  */
#line 272 "./fgl_parser.y"
                           {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::FUNCTION_SETTING({::fgl::ast::Type::FUNCTION_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_setting_rule) = newNode;
	}
#line 1388 "fgl_parser.tab.c"
    break;

  case 12: /* setting_rule: USER_INSERTED_SETTING  */
#line 276 "./fgl_parser.y"
                                {
		auto* const newNode = new fgl::ast::node::setting_rule({::fgl::ast::Type::setting_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::USER_INSERTED_SETTING({::fgl::ast::Type::USER_INSERTED_SETTING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_setting_rule) = newNode;
	}
#line 1397 "fgl_parser.tab.c"
    break;

  case 13: /* entry_manipulation_rule: capture object ARROW ADD manipulation  */
#line 283 "./fgl_parser.y"
                                              {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-4].fgl_capture), (yyvsp[-3].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new fgl::ast::node::ADD({::fgl::ast::Type::ADD, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_entry_manipulation_rule) = newNode;
	}
#line 1406 "fgl_parser.tab.c"
    break;

  case 14: /* entry_manipulation_rule: capture object ARROW manipulation  */
#line 287 "./fgl_parser.y"
                                            {
		auto* const newNode = new fgl::ast::node::entry_manipulation_rule({::fgl::ast::Type::entry_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-3].fgl_capture), (yyvsp[-2].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_entry_manipulation_rule) = newNode;
	}
#line 1415 "fgl_parser.tab.c"
    break;

  case 15: /* exit_manipulation_rule: capture object ARROW MINUS manipulation  */
#line 294 "./fgl_parser.y"
                                                {
		auto* const newNode = new fgl::ast::node::exit_manipulation_rule({::fgl::ast::Type::exit_manipulation_rule, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-4].fgl_capture), (yyvsp[-3].fgl_object), new fgl::ast::node::ARROW({::fgl::ast::Type::ARROW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new fgl::ast::node::MINUS({::fgl::ast::Type::MINUS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_manipulation) });
		(yyval.fgl_exit_manipulation_rule) = newNode;
	}
#line 1424 "fgl_parser.tab.c"
    break;

  case 16: /* capture: LEFT_SQUARE_BRACKET deamerreserved_arrow__deamerreserved_optional__flavor_capture____ RIGHT_SQUARE_BRACKET  */
#line 301 "./fgl_parser.y"
                                                                                                                   {
		auto* const newNode = new fgl::ast::node::capture({::fgl::ast::Type::capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::LEFT_SQUARE_BRACKET({::fgl::ast::Type::LEFT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____), new fgl::ast::node::RIGHT_SQUARE_BRACKET({::fgl::ast::Type::RIGHT_SQUARE_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_capture) = newNode;
	}
#line 1433 "fgl_parser.tab.c"
    break;

  case 17: /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____: flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 308 "./fgl_parser.y"
                                                                                              {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____) = newNode;
	}
#line 1442 "fgl_parser.tab.c"
    break;

  case 18: /* deamerreserved_arrow__deamerreserved_optional__flavor_capture____: %empty  */
#line 312 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__flavor_capture____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__flavor_capture____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__flavor_capture____) = newNode;
	}
#line 1451 "fgl_parser.tab.c"
    break;

  case 19: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: COMMA flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 319 "./fgl_parser.y"
                                                                                                    {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;
	}
#line 1460 "fgl_parser.tab.c"
    break;

  case 20: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: AND flavor_capture deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__  */
#line 323 "./fgl_parser.y"
                                                                                                    {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::AND({::fgl::ast::Type::AND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_flavor_capture), (yyvsp[0].fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;
	}
#line 1469 "fgl_parser.tab.c"
    break;

  case 21: /* deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__: %empty  */
#line 327 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__({::fgl::ast::Type::deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_star__deamerreserved_or__COMMA__AND____flavor_capture__) = newNode;
	}
#line 1478 "fgl_parser.tab.c"
    break;

  case 22: /* manipulation: LEFT_BRACKET deamerreserved_arrow__deamerreserved_optional__instruction____ RIGHT_BRACKET  */
#line 334 "./fgl_parser.y"
                                                                                                  {
		auto* const newNode = new fgl::ast::node::manipulation({::fgl::ast::Type::manipulation, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::LEFT_BRACKET({::fgl::ast::Type::LEFT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__instruction____), new fgl::ast::node::RIGHT_BRACKET({::fgl::ast::Type::RIGHT_BRACKET, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_manipulation) = newNode;
	}
#line 1487 "fgl_parser.tab.c"
    break;

  case 23: /* deamerreserved_arrow__deamerreserved_optional__instruction____: instruction deamerreserved_star__COMMA__instruction__  */
#line 341 "./fgl_parser.y"
                                                              {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].fgl_instruction), (yyvsp[0].fgl_deamerreserved_star__COMMA__instruction__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__instruction____) = newNode;
	}
#line 1496 "fgl_parser.tab.c"
    break;

  case 24: /* deamerreserved_arrow__deamerreserved_optional__instruction____: %empty  */
#line 345 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__instruction____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__instruction____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__instruction____) = newNode;
	}
#line 1505 "fgl_parser.tab.c"
    break;

  case 25: /* deamerreserved_star__COMMA__instruction__: COMMA instruction deamerreserved_star__COMMA__instruction__  */
#line 352 "./fgl_parser.y"
                                                                    {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_instruction), (yyvsp[0].fgl_deamerreserved_star__COMMA__instruction__) });
		(yyval.fgl_deamerreserved_star__COMMA__instruction__) = newNode;
	}
#line 1514 "fgl_parser.tab.c"
    break;

  case 26: /* deamerreserved_star__COMMA__instruction__: %empty  */
#line 356 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__instruction__({::fgl::ast::Type::deamerreserved_star__COMMA__instruction__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_star__COMMA__instruction__) = newNode;
	}
#line 1523 "fgl_parser.tab.c"
    break;

  case 27: /* instruction: new_flavor  */
#line 363 "./fgl_parser.y"
                   {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_new_flavor) });
		(yyval.fgl_instruction) = newNode;
	}
#line 1532 "fgl_parser.tab.c"
    break;

  case 28: /* instruction: delete_flavor  */
#line 367 "./fgl_parser.y"
                        {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_delete_flavor) });
		(yyval.fgl_instruction) = newNode;
	}
#line 1541 "fgl_parser.tab.c"
    break;

  case 29: /* instruction: expand_flavor  */
#line 371 "./fgl_parser.y"
                        {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_expand_flavor) });
		(yyval.fgl_instruction) = newNode;
	}
#line 1550 "fgl_parser.tab.c"
    break;

  case 30: /* instruction: user_defined_instruction  */
#line 375 "./fgl_parser.y"
                                   {
		auto* const newNode = new fgl::ast::node::instruction({::fgl::ast::Type::instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_user_defined_instruction) });
		(yyval.fgl_instruction) = newNode;
	}
#line 1559 "fgl_parser.tab.c"
    break;

  case 31: /* new_flavor: NEW DOT flavor  */
#line 382 "./fgl_parser.y"
                       {
		auto* const newNode = new fgl::ast::node::new_flavor({::fgl::ast::Type::new_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::NEW({::fgl::ast::Type::NEW, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_flavor) });
		(yyval.fgl_new_flavor) = newNode;
	}
#line 1568 "fgl_parser.tab.c"
    break;

  case 32: /* delete_flavor: DELETE DOT flavor  */
#line 389 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::delete_flavor({::fgl::ast::Type::delete_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::DELETE({::fgl::ast::Type::DELETE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_flavor) });
		(yyval.fgl_delete_flavor) = newNode;
	}
#line 1577 "fgl_parser.tab.c"
    break;

  case 33: /* expand_flavor: EXPAND DOT flavor DOT WITH LEFT_PARANTHESIS value RIGHT_PARANTHESIS  */
#line 396 "./fgl_parser.y"
                                                                            {
		auto* const newNode = new fgl::ast::node::expand_flavor({::fgl::ast::Type::expand_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::EXPAND({::fgl::ast::Type::EXPAND, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-7].Terminal)}), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-6].Terminal)}), (yyvsp[-5].fgl_flavor), new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-4].Terminal)}), new fgl::ast::node::WITH({::fgl::ast::Type::WITH, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_value), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_expand_flavor) = newNode;
	}
#line 1586 "fgl_parser.tab.c"
    break;

  case 34: /* flavor_capture: flavor  */
#line 403 "./fgl_parser.y"
               {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_flavor) });
		(yyval.fgl_flavor_capture) = newNode;
	}
#line 1595 "fgl_parser.tab.c"
    break;

  case 35: /* flavor_capture: conditional_flavor  */
#line 407 "./fgl_parser.y"
                             {
		auto* const newNode = new fgl::ast::node::flavor_capture({::fgl::ast::Type::flavor_capture, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_conditional_flavor) });
		(yyval.fgl_flavor_capture) = newNode;
	}
#line 1604 "fgl_parser.tab.c"
    break;

  case 36: /* conditional_flavor: value EQEQ value  */
#line 414 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].fgl_value), new fgl::ast::node::EQEQ({::fgl::ast::Type::EQEQ, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;
	}
#line 1613 "fgl_parser.tab.c"
    break;

  case 37: /* conditional_flavor: value LTE value  */
#line 418 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].fgl_value), new fgl::ast::node::LTE({::fgl::ast::Type::LTE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;
	}
#line 1622 "fgl_parser.tab.c"
    break;

  case 38: /* conditional_flavor: value GTE value  */
#line 422 "./fgl_parser.y"
                          {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].fgl_value), new fgl::ast::node::GTE({::fgl::ast::Type::GTE, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;
	}
#line 1631 "fgl_parser.tab.c"
    break;

  case 39: /* conditional_flavor: value LT value  */
#line 426 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {3, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].fgl_value), new fgl::ast::node::LT({::fgl::ast::Type::LT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;
	}
#line 1640 "fgl_parser.tab.c"
    break;

  case 40: /* conditional_flavor: value GT value  */
#line 430 "./fgl_parser.y"
                         {
		auto* const newNode = new fgl::ast::node::conditional_flavor({::fgl::ast::Type::conditional_flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {4, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-2].fgl_value), new fgl::ast::node::GT({::fgl::ast::Type::GT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_value) });
		(yyval.fgl_conditional_flavor) = newNode;
	}
#line 1649 "fgl_parser.tab.c"
    break;

  case 41: /* value: object_access  */
#line 437 "./fgl_parser.y"
                      {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_object_access) });
		(yyval.fgl_value) = newNode;
	}
#line 1658 "fgl_parser.tab.c"
    break;

  case 42: /* value: NUMBER  */
#line 441 "./fgl_parser.y"
                 {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::NUMBER({::fgl::ast::Type::NUMBER, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_value) = newNode;
	}
#line 1667 "fgl_parser.tab.c"
    break;

  case 43: /* value: STRING  */
#line 445 "./fgl_parser.y"
                 {
		auto* const newNode = new fgl::ast::node::value({::fgl::ast::Type::value, ::deamer::external::cpp::ast::NodeValue::nonterminal, {2, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::STRING({::fgl::ast::Type::STRING, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_value) = newNode;
	}
#line 1676 "fgl_parser.tab.c"
    break;

  case 44: /* user_defined_instruction: value  */
#line 452 "./fgl_parser.y"
              {
		auto* const newNode = new fgl::ast::node::user_defined_instruction({::fgl::ast::Type::user_defined_instruction, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_value) });
		(yyval.fgl_user_defined_instruction) = newNode;
	}
#line 1685 "fgl_parser.tab.c"
    break;

  case 45: /* object: VARNAME  */
#line 459 "./fgl_parser.y"
                {
		auto* const newNode = new fgl::ast::node::object({::fgl::ast::Type::object, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_object) = newNode;
	}
#line 1694 "fgl_parser.tab.c"
    break;

  case 46: /* object_access: deamerreserved_arrow__member__  */
#line 466 "./fgl_parser.y"
                                       {
		auto* const newNode = new fgl::ast::node::object_access({::fgl::ast::Type::object_access, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_deamerreserved_arrow__member__) });
		(yyval.fgl_object_access) = newNode;
	}
#line 1703 "fgl_parser.tab.c"
    break;

  case 47: /* deamerreserved_arrow__member__: member deamerreserved_star__DOT__member__  */
#line 473 "./fgl_parser.y"
                                                  {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__member__({::fgl::ast::Type::deamerreserved_arrow__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].fgl_member), (yyvsp[0].fgl_deamerreserved_star__DOT__member__) });
		(yyval.fgl_deamerreserved_arrow__member__) = newNode;
	}
#line 1712 "fgl_parser.tab.c"
    break;

  case 48: /* deamerreserved_star__DOT__member__: DOT member deamerreserved_star__DOT__member__  */
#line 480 "./fgl_parser.y"
                                                      {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::DOT({::fgl::ast::Type::DOT, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_member), (yyvsp[0].fgl_deamerreserved_star__DOT__member__) });
		(yyval.fgl_deamerreserved_star__DOT__member__) = newNode;
	}
#line 1721 "fgl_parser.tab.c"
    break;

  case 49: /* deamerreserved_star__DOT__member__: %empty  */
#line 484 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__DOT__member__({::fgl::ast::Type::deamerreserved_star__DOT__member__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_star__DOT__member__) = newNode;
	}
#line 1730 "fgl_parser.tab.c"
    break;

  case 50: /* member: VARNAME LEFT_PARANTHESIS deamerreserved_arrow__deamerreserved_optional__argument____ RIGHT_PARANTHESIS  */
#line 491 "./fgl_parser.y"
                                                                                                               {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-3].Terminal)}), new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_deamerreserved_arrow__deamerreserved_optional__argument____), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_member) = newNode;
	}
#line 1739 "fgl_parser.tab.c"
    break;

  case 51: /* member: VARNAME  */
#line 495 "./fgl_parser.y"
                  {
		auto* const newNode = new fgl::ast::node::member({::fgl::ast::Type::member, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_member) = newNode;
	}
#line 1748 "fgl_parser.tab.c"
    break;

  case 52: /* deamerreserved_arrow__deamerreserved_optional__argument____: argument deamerreserved_star__COMMA__argument__  */
#line 502 "./fgl_parser.y"
                                                        {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[-1].fgl_argument), (yyvsp[0].fgl_deamerreserved_star__COMMA__argument__) });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__argument____) = newNode;
	}
#line 1757 "fgl_parser.tab.c"
    break;

  case 53: /* deamerreserved_arrow__deamerreserved_optional__argument____: %empty  */
#line 506 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_arrow__deamerreserved_optional__argument____({::fgl::ast::Type::deamerreserved_arrow__deamerreserved_optional__argument____, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_arrow__deamerreserved_optional__argument____) = newNode;
	}
#line 1766 "fgl_parser.tab.c"
    break;

  case 54: /* deamerreserved_star__COMMA__argument__: COMMA argument deamerreserved_star__COMMA__argument__  */
#line 513 "./fgl_parser.y"
                                                              {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::COMMA({::fgl::ast::Type::COMMA, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_argument), (yyvsp[0].fgl_deamerreserved_star__COMMA__argument__) });
		(yyval.fgl_deamerreserved_star__COMMA__argument__) = newNode;
	}
#line 1775 "fgl_parser.tab.c"
    break;

  case 55: /* deamerreserved_star__COMMA__argument__: %empty  */
#line 517 "./fgl_parser.y"
          {
		auto* const newNode = new fgl::ast::node::deamerreserved_star__COMMA__argument__({::fgl::ast::Type::deamerreserved_star__COMMA__argument__, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, {  });
		(yyval.fgl_deamerreserved_star__COMMA__argument__) = newNode;
	}
#line 1784 "fgl_parser.tab.c"
    break;

  case 56: /* argument: value  */
#line 524 "./fgl_parser.y"
              {
		auto* const newNode = new fgl::ast::node::argument({::fgl::ast::Type::argument, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { (yyvsp[0].fgl_value) });
		(yyval.fgl_argument) = newNode;
	}
#line 1793 "fgl_parser.tab.c"
    break;

  case 57: /* flavor: VARNAME flavor_specialization  */
#line 531 "./fgl_parser.y"
                                      {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-1].Terminal)}), (yyvsp[0].fgl_flavor_specialization) });
		(yyval.fgl_flavor) = newNode;
	}
#line 1802 "fgl_parser.tab.c"
    break;

  case 58: /* flavor: VARNAME  */
#line 535 "./fgl_parser.y"
                  {
		auto* const newNode = new fgl::ast::node::flavor({::fgl::ast::Type::flavor, ::deamer::external::cpp::ast::NodeValue::nonterminal, {1, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::VARNAME({::fgl::ast::Type::VARNAME, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_flavor) = newNode;
	}
#line 1811 "fgl_parser.tab.c"
    break;

  case 59: /* flavor_specialization: LEFT_PARANTHESIS value RIGHT_PARANTHESIS  */
#line 542 "./fgl_parser.y"
                                                 {
		auto* const newNode = new fgl::ast::node::flavor_specialization({::fgl::ast::Type::flavor_specialization, ::deamer::external::cpp::ast::NodeValue::nonterminal, {0, ::deamer::external::cpp::ast::ProductionRuleType::user}}, { new fgl::ast::node::LEFT_PARANTHESIS({::fgl::ast::Type::LEFT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[-2].Terminal)}), (yyvsp[-1].fgl_value), new fgl::ast::node::RIGHT_PARANTHESIS({::fgl::ast::Type::RIGHT_PARANTHESIS, ::deamer::external::cpp::ast::NodeValue::terminal, (yyvsp[0].Terminal)}) });
		(yyval.fgl_flavor_specialization) = newNode;
	}
#line 1820 "fgl_parser.tab.c"
    break;


#line 1824 "fgl_parser.tab.c"

      default: break;
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
      yyerror (YY_("syntax error"));
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

  return yyresult;
}

#line 548 "./fgl_parser.y"


void fglerror(const char* s)
{
	std::cout << "Syntax error on line: " << s << '\n';
}

deamer::external::cpp::ast::Tree* fgl::parser::Parser::Parse(const std::string& text) const
{
	outputTree = nullptr;
	YY_BUFFER_STATE buf;
	buf = fgl_scan_string(text.c_str());
	fglparse();
	fgl_delete_buffer(buf);
	fgllex_destroy();

	return outputTree;
}

