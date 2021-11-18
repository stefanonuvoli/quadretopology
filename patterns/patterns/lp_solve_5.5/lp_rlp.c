/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 24 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define scanner yyscanner
#define PARM yyget_extra(yyscanner)
#define YYSTYPE int
#define YY_EXTRA_TYPE parse_parm *
#define YY_FATAL_ERROR(msg) lex_fatal_error(PARM, yyscanner, msg)
#undef YY_INPUT
#define YY_INPUT(buf,result,max_size) result = lp_input((void *) PARM, buf, max_size);
#define yyerror read_error

#include "lpkit.h"
#include "yacc_read.h"

typedef struct parse_vars_s
{
  read_modeldata_func *lp_input;
  void *userhandle;
  char HadVar, HadVar0, HadVar1, HadVar2, HasAR_M_OP, HadConstraint, Had_lineair_sum, Had_lineair_sum0, do_add_row, HadSign, OP, Sign, isign, isign0, make_neg;
  char state, state0;
  char Within_int_decl;  /* TRUE when we are within an char declaration */
  char Within_bin_decl;  /* TRUE when we are within an bin declaration */
  char Within_sec_decl;  /* TRUE when we are within a sec declaration */
  char Within_sos_decl;  /* TRUE when we are within a sos declaration */
  char Within_sos_decl1;
  char Within_free_decl; /* TRUE when we are within a free declaration */
  short SOStype, SOStype0;        /* SOS type */
  int SOSNr;
  int SOSweight;         /* SOS weight */
  char *Last_var, *Last_var0;
  REAL f, f0, f1;
} parse_vars;

#ifdef FORTIFY
# include "lp_fortify.h"
#endif

/* let's please C++ users */
#ifdef __cplusplus
extern "C" {
#endif

#if defined MSDOS || defined __MSDOS__ || defined WINDOWS || defined _WINDOWS || defined WIN32 || defined _WIN32
#define YY_NO_UNISTD_H

static int isatty(int f)
{
  return(FALSE);
}

#if !defined _STDLIB_H
# define _STDLIB_H
#endif
#endif

static int __WINAPI lp_input_yyin(void *fpin, char *buf, int max_size)
{
  int result;

  result = fread( (char*)buf, sizeof(char), max_size, (FILE *)fpin);

  return(result);
}

static int __WINAPI lp_input(void *vpp, char *buf, int max_size)
{
  parse_parm *pp = (parse_parm *) vpp;
  parse_vars *pv = (parse_vars *) pp->parse_vars;
  int result;

  result = pv->lp_input(pv->userhandle, buf, max_size);
  if (result < 0)
    lex_fatal_error(pp, pp->scanner, "read() in flex scanner failed");
  return(result);
}

#ifdef __cplusplus
};
#endif

#include "lp_rlp.h"

#undef yylval


#line 159 "y.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    CONS = 259,
    INTCONS = 260,
    VARIABLECOLON = 261,
    INF = 262,
    SEC_INT = 263,
    SEC_BIN = 264,
    SEC_SEC = 265,
    SEC_SOS = 266,
    SOSDESCR = 267,
    SEC_FREE = 268,
    TOK_SIGN = 269,
    AR_M_OP = 270,
    RE_OPEQ = 271,
    RE_OPLE = 272,
    RE_OPGE = 273,
    END_C = 274,
    COMMA = 275,
    COLON = 276,
    MINIMISE = 277,
    MAXIMISE = 278,
    UNDEFINED = 279
  };
#endif
/* Tokens.  */
#define VAR 258
#define CONS 259
#define INTCONS 260
#define VARIABLECOLON 261
#define INF 262
#define SEC_INT 263
#define SEC_BIN 264
#define SEC_SEC 265
#define SEC_SOS 266
#define SOSDESCR 267
#define SEC_FREE 268
#define TOK_SIGN 269
#define AR_M_OP 270
#define RE_OPEQ 271
#define RE_OPLE 272
#define RE_OPGE 273
#define END_C 274
#define COMMA 275
#define COLON 276
#define MINIMISE 277
#define MAXIMISE 278
#define UNDEFINED 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (parse_parm *parm, void *scanner);





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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

#define YYUNDEFTOK  2
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   116,   116,   120,   120,   145,   149,   153,   156,   170,
     171,   201,   202,   205,   206,   210,   212,   211,   224,   232,
     242,   223,   288,   298,   311,   297,   342,   355,   364,   366,
     365,   376,   376,   400,   401,   405,   444,   452,   451,   470,
     470,   470,   473,   475,   489,   489,   492,   500,   510,   517,
     526,   547,   548,   551,   552,   555,   555,   555,   555,   555,
     560,   559,   570,   570,   598,   599,   602,   604,   603,   614,
     626,   624,   643,   650,   660,   661,   664,   665,   670,   671,
     674,   703,   724,   749,   770,   772,   777,   779,   784,   786
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "CONS", "INTCONS",
  "VARIABLECOLON", "INF", "SEC_INT", "SEC_BIN", "SEC_SEC", "SEC_SOS",
  "SOSDESCR", "SEC_FREE", "TOK_SIGN", "AR_M_OP", "RE_OPEQ", "RE_OPLE",
  "RE_OPGE", "END_C", "COMMA", "COLON", "MINIMISE", "MAXIMISE",
  "UNDEFINED", "$accept", "EMPTY", "inputfile", "$@1",
  "objective_function", "real_of", "lineair_sum", "constraints",
  "x_constraints", "constraint", "$@2", "real_constraint", "$@3", "$@4",
  "$@5", "optionalrange", "$@6", "$@7", "x_lineair_sum2", "x_lineair_sum3",
  "$@8", "x_lineair_sum", "$@9", "x_lineair_sum1", "x_lineair_term",
  "x_lineair_term1", "$@10", "RE_OP", "cons_term", "REALCONS", "x_SIGN",
  "optional_AR_M_OP", "RHS_STORE", "int_bin_sec_sos_free_declarations",
  "real_int_bin_sec_sos_free_decls", "SEC_INT_BIN_SEC_SOS_FREE",
  "int_bin_sec_sos_free_declaration", "$@11",
  "xx_int_bin_sec_sos_free_declaration", "$@12",
  "x_int_bin_sec_sos_free_declaration", "optionalsos", "$@13",
  "optionalsostype", "$@14", "optionalSOSweight", "vars", "x_vars",
  "optionalcomma", "variable", "variablecolon", "sosweight", "sosdescr",
  "onevarwithoptionalweight", "INTCONSorVARIABLE",
  "x_onevarwithoptionalweight", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279
};
# endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -85,    13,    46,   -85,     2,     2,   -85,    32,   -85,     7,
     -85,    26,   -85,   -85,   -85,   -85,    64,    40,    27,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,    42,   -85,     3,
      -2,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    40,
     -85,   -85,   -85,   -85,    67,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,    59,   -85,    52,     0,    84,   -85,   -85,   -85,
      22,   -85,   -85,   -85,   -85,   -85,   -85,    60,    35,   -85,
      67,   -85,   -85,   -85,   -85,    82,    87,   -85,    74,   -85,
     -85,    22,   -85,    75,   -85,   -85,    73,   -85,   -85,   -85,
     -85,   -85,    -5,   -85,   -85,   -85,   -85,   -85,    76,   -85,
     -85,    82,   -85,    82,    91,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,    31,     1,    31,    31,     9,     2,     7,     0,
      10,     2,     6,     5,    16,    29,    11,     2,    12,    13,
      15,    18,    27,    28,     8,    47,    46,     2,    33,     2,
      31,     2,    55,    56,    57,    58,    59,    51,     4,    52,
      60,    53,    26,    14,     0,    34,    45,    44,    49,    48,
      35,    36,    37,    17,    50,    30,    54,    62,    39,    40,
      41,    19,     0,    64,     2,    61,    31,    38,    67,    66,
       2,    65,    20,     2,     2,    81,    74,     2,     2,    76,
       2,    83,    68,    80,    84,     2,     0,    69,     0,    79,
      78,     0,    22,     0,    23,     2,     0,    85,    70,    63,
      77,    21,     2,    82,    86,     2,    81,    87,     2,    43,
      24,     0,    88,     0,     0,    72,    71,     2,    42,     2,
      73,    25,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,    -7,   -85,   -85,   -85,    85,   -85,   -85,   -85,    81,
     -85,    72,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    34,
     -85,    70,   -85,   -85,    77,   -85,   -85,    23,   -85,   -84,
       4,   -85,   -12,   -85,   -85,   -85,    68,   -85,    43,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     6,
       8,   -10,    28,    24,   -85,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     1,     2,     7,     8,     9,    17,    18,    19,
      30,    20,    44,    66,    80,    93,   102,   117,    21,    22,
      31,    23,    11,    27,    28,    50,    62,    61,   110,    51,
      29,    52,    55,    38,    39,    40,    41,    57,    63,    64,
      65,    70,    73,    88,   108,   116,    77,    78,    91,    84,
      85,   104,    82,    79,    97,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      16,    95,   109,   -62,    26,    15,   -62,    46,    47,    25,
      37,    42,   -62,     3,    -2,    -2,    -2,   -62,    48,   -62,
      26,    -2,    49,    42,    54,    74,    24,   118,    75,   119,
     -31,   -31,   -31,    14,    15,   -31,   -31,   -31,    14,    15,
      25,   -31,   -31,    -2,    -2,    -2,   -31,   -31,    32,    33,
      34,    35,   -75,    36,   -75,    89,    25,    69,   -32,   -32,
     -32,   -32,    67,    76,    68,    -2,    81,    83,     4,     5,
      87,    90,    10,    92,    10,    10,   105,    86,    81,   106,
     -26,   -26,   -26,    58,    59,    60,    46,    47,   103,    12,
      13,    15,    98,    99,   101,    26,   120,   114,    83,    43,
      72,   115,    53,    94,    45,   121,   111,    56,    71,   122,
      54,   112,   103,    96,   113,   100
};

static const yytype_int8 yycheck[] =
{
       7,    85,     7,     3,    11,     7,     6,     4,     5,    14,
      17,    18,    12,     0,    16,    17,    18,    17,    15,    19,
      27,    19,    29,    30,    31,     3,    19,   111,     6,   113,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
      14,    14,    15,    16,    17,    18,    14,    15,     8,     9,
      10,    11,    17,    13,    19,    20,    14,    64,    16,    17,
      18,    19,     3,    70,    12,    19,    73,    74,    22,    23,
      77,    78,     2,    80,     4,     5,     3,    17,    85,     6,
      16,    17,    18,    16,    17,    18,     4,     5,    95,     4,
       5,     7,     5,    19,    19,   102,     5,    21,   105,    18,
      66,   108,    30,    80,    27,   117,   102,    39,    65,   119,
     117,   105,   119,    85,   106,    91
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    28,     0,    22,    23,    26,    29,    30,    31,
      46,    47,    30,    30,     6,     7,    26,    32,    33,    34,
      36,    43,    44,    46,    19,    14,    26,    48,    49,    55,
      35,    45,     8,     9,    10,    11,    13,    26,    58,    59,
      60,    61,    26,    34,    37,    49,     4,     5,    15,    26,
      50,    54,    56,    36,    26,    57,    61,    62,    16,    17,
      18,    52,    51,    63,    64,    65,    38,     3,    12,    26,
      66,    63,    44,    67,     3,     6,    26,    71,    72,    78,
      39,    26,    77,    26,    74,    75,    17,    26,    68,    20,
      26,    73,    26,    40,    52,    54,    77,    79,     5,    19,
      78,    19,    41,    26,    76,     3,     6,    80,    69,     7,
      53,    55,    74,    75,    21,    26,    70,    42,    54,    54,
       5,    57,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    25,    26,    28,    27,    29,    29,    29,    30,    31,
      31,    32,    32,    33,    33,    34,    35,    34,    37,    38,
      39,    36,    40,    41,    42,    40,    43,    43,    44,    45,
      44,    47,    46,    48,    48,    49,    50,    51,    50,    52,
      52,    52,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    58,    58,    59,    59,    60,    60,    60,    60,    60,
      62,    61,    64,    63,    65,    65,    66,    67,    66,    68,
      69,    68,    70,    70,    71,    71,    72,    72,    73,    73,
      74,    75,    76,    77,    78,    78,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     2,     1,     0,     3,     0,     0,
       0,     8,     1,     0,     0,     5,     1,     1,     1,     0,
       3,     0,     2,     1,     2,     2,     1,     0,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     3,     0,     5,     1,     2,     1,     0,     3,     1,
       0,     4,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     0,     1,     1,     2,     3,     2,     2,     2,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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
        yyerror (parm, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, parm, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, parse_parm *parm, void *scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (parm);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, parse_parm *parm, void *scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, parm, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, parse_parm *parm, void *scanner)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , parm, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parm, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, parse_parm *parm, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (parm);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (parse_parm *parm, void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 3:
#line 120 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->isign = 0;
  pv->make_neg = 0;
  pv->Sign = 0;
  pv->HadConstraint = FALSE;
  pv->HadVar = pv->HadVar0 = FALSE;
}
#line 1542 "y.tab.c"
    break;

  case 5:
#line 146 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  set_obj_dir(PARM, TRUE);
}
#line 1550 "y.tab.c"
    break;

  case 6:
#line 150 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  set_obj_dir(PARM, FALSE);
}
#line 1558 "y.tab.c"
    break;

  case 8:
#line 158 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  add_row(pp);
  pv->HadConstraint = FALSE;
  pv->HadVar = pv->HadVar0 = FALSE;
  pv->isign = 0;
  pv->make_neg = 0;
}
#line 1573 "y.tab.c"
    break;

  case 16:
#line 212 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(!add_constraint_name(pp, pv->Last_var))
    YYABORT;
  pv->HadConstraint = TRUE;
}
#line 1586 "y.tab.c"
    break;

  case 18:
#line 224 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->HadVar1 = pv->HadVar0;
  pv->HadVar0 = FALSE;
}
#line 1598 "y.tab.c"
    break;

  case 19:
#line 232 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(!store_re_op(pp, pv->OP, (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum))
    YYABORT;
  pv->make_neg = 1;
  pv->f1 = 0;
}
#line 1612 "y.tab.c"
    break;

  case 20:
#line 242 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->Had_lineair_sum0 = pv->Had_lineair_sum;
  pv->Had_lineair_sum = TRUE;
  pv->HadVar2 = pv->HadVar0;
  pv->HadVar0 = FALSE;
  pv->do_add_row = FALSE;
  if(pv->HadConstraint && !pv->HadVar ) {
    /* it is a range */
    /* already handled */
  }
  else if(!pv->HadConstraint && pv->HadVar) {
    /* it is a bound */

    if(!store_bounds(pp, TRUE))
      YYABORT;
  }
  else {
    /* it is a row restriction */
    if(pv->HadConstraint && pv->HadVar)
      store_re_op(pp, '\0', (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum); /* makes sure that data stored in temporary buffers is treated correctly */
    pv->do_add_row = TRUE;
  }
}
#line 1643 "y.tab.c"
    break;

  case 21:
#line 270 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((!pv->HadVar) && (!pv->HadConstraint)) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }
  if(pv->do_add_row)
    add_row(pp);
  pv->HadConstraint = FALSE;
  pv->HadVar = pv->HadVar0 = FALSE;
  pv->isign = 0;
  pv->make_neg = 0;
  null_tmp_store(pp, TRUE);
}
#line 1664 "y.tab.c"
    break;

  case 22:
#line 289 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((!pv->HadVar1) && (pv->Had_lineair_sum0))
    if(!negate_constraint(pp))
      YYABORT;
}
#line 1677 "y.tab.c"
    break;

  case 23:
#line 298 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->make_neg = 0;
  pv->isign = 0;
  if(pv->HadConstraint)
    pv->HadVar = pv->Had_lineair_sum = FALSE;
  pv->HadVar0 = FALSE;
  if(!store_re_op(pp, (char) ((pv->OP == '<') ? '>' : (pv->OP == '>') ? '<' : pv->OP), (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum))
    YYABORT;
}
#line 1694 "y.tab.c"
    break;

  case 24:
#line 311 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->f -= pv->f1;
}
#line 1705 "y.tab.c"
    break;

  case 25:
#line 318 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((pv->HadVar1) || (!pv->HadVar2) || (pv->HadVar0)) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }

  if(pv->HadConstraint && !pv->HadVar ) {
    /* it is a range */
    /* already handled */
    if(!negate_constraint(pp))
      YYABORT;
  }
  else if(!pv->HadConstraint && pv->HadVar) {
    /* it is a bound */

    if(!store_bounds(pp, TRUE))
      YYABORT;
  }
}
#line 1732 "y.tab.c"
    break;

  case 26:
#line 343 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  /* to allow a range */
  /* constraint: < max */
  if(!pv->HadConstraint) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }
  pv->Had_lineair_sum = FALSE;
}
#line 1749 "y.tab.c"
    break;

  case 27:
#line 356 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->Had_lineair_sum = TRUE;
}
#line 1760 "y.tab.c"
    break;

  case 29:
#line 366 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->isign = pv->Sign;
}
#line 1771 "y.tab.c"
    break;

  case 31:
#line 376 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->state = pv->state0 = 0;
}
#line 1782 "y.tab.c"
    break;

  case 32:
#line 383 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if (pv->state == 1) {
    /* RHS_STORE */
    if (    (pv->isign0 || !pv->make_neg)
        && !(pv->isign0 && !pv->make_neg)) /* but not both! */
      pv->f0 = -pv->f0;
    if(pv->make_neg)
      pv->f1 += pv->f0;
    if(!rhs_store(pp, pv->f0, (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum))
      YYABORT;
  }
}
#line 1802 "y.tab.c"
    break;

  case 35:
#line 407 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if ((pv->HadSign || pv->state == 1) && (pv->state0 == 1)) {
    /* RHS_STORE */
    if (    (pv->isign0 || !pv->make_neg)
        && !(pv->isign0 && !pv->make_neg)) /* but not both! */
      pv->f0 = -pv->f0;
    if(pv->make_neg)
      pv->f1 += pv->f0;
    if(!rhs_store(pp, pv->f0, (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum))
      YYABORT;
  }
  if (pv->state == 1) {
    pv->f0 = pv->f;
    pv->isign0 = pv->isign;
  }
  if (pv->state == 2) {
    if((pv->HadSign) || (pv->state0 != 1)) {
     pv->isign0 = pv->isign;
     pv->f0 = 1.0;
    }
    if (    (pv->isign0 || pv->make_neg)
        && !(pv->isign0 && pv->make_neg)) /* but not both! */
      pv->f0 = -pv->f0;
    if(!var_store(pp, pv->Last_var, pv->f0, (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum)) {
      yyerror(pp, pp->scanner, "var_store failed");
      YYABORT;
    }
    pv->HadConstraint |= pv->HadVar;
    pv->HadVar = pv->HadVar0 = TRUE;
  }
  pv->state0 = pv->state;
}
#line 1842 "y.tab.c"
    break;

  case 36:
#line 445 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->state = 1;
}
#line 1853 "y.tab.c"
    break;

  case 37:
#line 452 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if ((pv->HasAR_M_OP) && (pv->state != 1)) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }
}
#line 1867 "y.tab.c"
    break;

  case 38:
#line 462 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->state = 2;
}
#line 1878 "y.tab.c"
    break;

  case 43:
#line 476 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->isign = pv->Sign;
}
#line 1889 "y.tab.c"
    break;

  case 46:
#line 493 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->isign = 0;
  pv->HadSign = FALSE;
}
#line 1901 "y.tab.c"
    break;

  case 47:
#line 501 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->isign = pv->Sign;
  pv->HadSign = TRUE;
}
#line 1913 "y.tab.c"
    break;

  case 48:
#line 511 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->HasAR_M_OP = FALSE;
}
#line 1924 "y.tab.c"
    break;

  case 49:
#line 518 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->HasAR_M_OP = TRUE;
}
#line 1935 "y.tab.c"
    break;

  case 50:
#line 527 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if (    (pv->isign || !pv->make_neg)
      && !(pv->isign && !pv->make_neg)) /* but not both! */
    pv->f = -pv->f;
  if(!rhs_store(pp, pv->f, (int) pv->HadConstraint, (int) pv->HadVar, (int) pv->Had_lineair_sum))
    YYABORT;
  pv->isign = 0;
}
#line 1951 "y.tab.c"
    break;

  case 60:
#line 560 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  pv->Within_sos_decl1 = pv->Within_sos_decl;
}
#line 1962 "y.tab.c"
    break;

  case 62:
#line 570 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((!pv->Within_int_decl) && (!pv->Within_sec_decl) && (!pv->Within_sos_decl1) && (!pv->Within_free_decl)) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }
  pv->SOStype = pv->SOStype0;
  check_int_sec_sos_free_decl(pp, (int) pv->Within_int_decl, (int) pv->Within_sec_decl, (int) (pv->Within_sos_decl1 = (pv->Within_sos_decl1 ? 1 : 0)), (int) pv->Within_free_decl);
}
#line 1978 "y.tab.c"
    break;

  case 63:
#line 585 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((pv->Within_sos_decl1) && (pv->SOStype == 0))
  {
    yyerror(pp, pp->scanner, "Unsupported SOS type (0)");
    YYABORT;
  }
}
#line 1993 "y.tab.c"
    break;

  case 67:
#line 604 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  FREE(pv->Last_var0);
  pv->Last_var0 = strdup(pv->Last_var);
}
#line 2005 "y.tab.c"
    break;

  case 69:
#line 615 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(pv->Within_sos_decl1) {
    set_sos_type(pp, pv->SOStype);
    set_sos_weight(pp, (double) pv->SOSweight, 1);
  }
}
#line 2019 "y.tab.c"
    break;

  case 70:
#line 626 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if((pv->Within_sos_decl1) && (!pv->SOStype))
  {
    set_sos_type(pp, pv->SOStype = (short) (pv->f + .1));
  }
  else
  {
    yyerror(pp, pp->scanner, "SOS type not expected");
    YYABORT;
  }
}
#line 2038 "y.tab.c"
    break;

  case 72:
#line 644 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  set_sos_weight(pp, (double) pv->SOSweight, 1);
}
#line 2049 "y.tab.c"
    break;

  case 73:
#line 652 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  set_sos_weight(pp, pv->f, 1);
}
#line 2060 "y.tab.c"
    break;

  case 80:
#line 675 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(pv->Within_sos_decl1 == 1)
  {
    char buf[16];

    pv->SOSweight++;
    sprintf(buf, "SOS%d", pv->SOSweight);
    storevarandweight(pp, buf);

    check_int_sec_sos_free_decl(pp, (int) pv->Within_int_decl, (int) pv->Within_sec_decl, 2, (int) pv->Within_free_decl);
    pv->Within_sos_decl1 = 2;
    pv->SOSNr = 0;
  }

  storevarandweight(pp, pv->Last_var);

  if(pv->Within_sos_decl1 == 2)
  {
    pv->SOSNr++;
    set_sos_weight(pp, (double) pv->SOSNr, 2);
  }
}
#line 2090 "y.tab.c"
    break;

  case 81:
#line 703 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(!pv->Within_sos_decl1) {
    yyerror(pp, pp->scanner, "parse error");
    YYABORT;
  }
  if(pv->Within_sos_decl1 == 1) {
    FREE(pv->Last_var0);
    pv->Last_var0 = strdup(pv->Last_var);
  }
  if(pv->Within_sos_decl1 == 2)
  {
    storevarandweight(pp, pv->Last_var);
    pv->SOSNr++;
    set_sos_weight(pp, (double) pv->SOSNr, 2);
  }
}
#line 2114 "y.tab.c"
    break;

  case 82:
#line 725 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(pv->Within_sos_decl1 == 1)
  {
    char buf[16];

    pv->SOSweight++;
    sprintf(buf, "SOS%d", pv->SOSweight);
    storevarandweight(pp, buf);

    check_int_sec_sos_free_decl(pp, (int) pv->Within_int_decl, (int) pv->Within_sec_decl, 2, (int) pv->Within_free_decl);
    pv->Within_sos_decl1 = 2;
    pv->SOSNr = 0;

    storevarandweight(pp, pv->Last_var0);
    pv->SOSNr++;
  }

  set_sos_weight(pp, pv->f, 2);
}
#line 2141 "y.tab.c"
    break;

  case 83:
#line 750 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"
{ /* SOS name */
  parse_parm *pp = PARM;
  parse_vars *pv = (parse_vars *) pp->parse_vars;

  if(pv->Within_sos_decl1 == 1)
  {
    parse_parm *pp = PARM;
    parse_vars *pv = (parse_vars *) pp->parse_vars;

    storevarandweight(pp, pv->Last_var0);
    set_sos_type(pp, pv->SOStype);
    check_int_sec_sos_free_decl(pp, (int) pv->Within_int_decl, (int) pv->Within_sec_decl, 2, (int) pv->Within_free_decl);
    pv->Within_sos_decl1 = 2;
    pv->SOSNr = 0;
    pv->SOSweight++;
  }
}
#line 2163 "y.tab.c"
    break;


#line 2167 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parm, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (parm, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, parm, scanner);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, parm, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parm, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parm, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, parm, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 794 "../SkinMixer/libs/quadretopology/patterns/patterns/lp_solve_5.5/lp_rlp.y"


static void yy_delete_allocated_memory(parse_parm *pp)
{
  parse_vars *pv = (parse_vars *) pp->parse_vars;
  /* free memory allocated by flex. Otherwise some memory is not freed.
     This is a bit tricky. There is not much documentation about this, but a lot of
     reports of memory that keeps allocated */

  /* If you get errors on this function call, just comment it. This will only result
     in some memory that is not being freed. */

# if defined YY_CURRENT_BUFFER
    /* flex defines the macro YY_CURRENT_BUFFER, so you should only get here if lp_rlp.h is
       generated by flex */
    /* lex doesn't define this macro and thus should not come here, but lex doesn't has
       this memory leak also ...*/

#  if 0
    /* older versions of flex */
    yy_delete_buffer(YY_CURRENT_BUFFER); /* comment this line if you have problems with it */
    yy_init = 1; /* make sure that the next time memory is allocated again */
    yy_start = 0;
#  else
    /* As of version 2.5.9 Flex  */
    yylex_destroy(pp->scanner); /* comment this line if you have problems with it */
#  endif
# endif

  FREE(pv->Last_var);
  FREE(pv->Last_var0);
}

static int parse(parse_parm *pp)
{
  return(yyparse(pp, pp->scanner));
}

lprec *read_lp1(lprec *lp, void *userhandle, read_modeldata_func read_modeldata, int verbose, char *lp_name)
{
  parse_vars *pv;
  lprec *lp1 = NULL;

  CALLOC(pv, 1, parse_vars);
  if (pv != NULL) {
    parse_parm pp;

    memset(&pp, 0, sizeof(pp));
    pp.parse_vars = (void *) pv;

    yylex_init(&pp.scanner);
    yyset_extra(&pp, pp.scanner);

    yyset_in((FILE *) userhandle, pp.scanner);
    yyset_out(NULL, pp.scanner);
    pv->lp_input = read_modeldata;
    pv->userhandle = userhandle;
    lp1 = yacc_read(lp, verbose, lp_name, parse, &pp, yy_delete_allocated_memory);
    FREE(pv);
  }
  return(lp1);
}

lprec * __WINAPI read_lp(FILE *filename, int verbose, char *lp_name)
{
  return(read_lp1(NULL, filename, lp_input_yyin, verbose, lp_name));
}

lprec * __WINAPI read_lpex(void *userhandle, read_modeldata_func read_modeldata, int verbose, char *lp_name)
{
  return(read_lp1(NULL, userhandle, read_modeldata, verbose, lp_name));
}

lprec *read_LP1(lprec *lp, char *filename, int verbose, char *lp_name)
{
  FILE *fpin;

  if((fpin = fopen(filename, "r")) != NULL) {
    lp = read_lp1(lp, fpin, lp_input_yyin, verbose, lp_name);
    fclose(fpin);
  }
  else
    lp = NULL;
  return(lp);
}

lprec * __WINAPI read_LP(char *filename, int verbose, char *lp_name)
{
  return(read_LP1(NULL, filename, verbose, lp_name));
}

MYBOOL __WINAPI LP_readhandle(lprec **lp, FILE *filename, int verbose, char *lp_name)
{
  if(lp != NULL)
    *lp = read_lp1(*lp, filename, lp_input_yyin, verbose, lp_name);

  return((lp != NULL) && (*lp != NULL));
}
