/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "declare_list.y" /* yacc.c:339  */

	#include <stdio.h>
	int yylex();
	int yyparse();
	FILE *yyin;
	FILE *yyout;
	int lines;
	char *stack[1024][2];
	int i_stack=0;

#line 77 "declare_list.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "declare_list.tab.h".  */
#ifndef YY_YY_DECLARE_LIST_TAB_H_INCLUDED
# define YY_YY_DECLARE_LIST_TAB_H_INCLUDED
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
    T_STRING = 258,
    T_RET = 259,
    T_NAMESPACE = 260,
    T_NS_SEPARATOR = 261,
    T_ARRAY = 262,
    T_CLASS = 263,
    T_CLASS_C = 264,
    T_TRAIT_C = 265,
    T_FUNC_C = 266,
    T_METHOD_C = 267,
    T_LINE = 268,
    T_FILE = 269,
    T_DIR = 270,
    T_NS_C = 271,
    T_LNUMBER = 272,
    T_DNUMBER = 273,
    T_CONSTANT_ENCAPSED_STRING = 274,
    T_START_HEREDOC = 275,
    T_END_HEREDOC = 276,
    T_ENCAPSED_AND_WHITESPACE = 277,
    T_DTWO_POINTS = 278,
    T_SL = 279,
    T_SR = 280,
    T_LOGICAL_OR = 281,
    T_LOGICAL_XOR = 282,
    T_LOGICAL_AND = 283,
    T_BOOLEAN_OR = 284,
    T_BOOLEAN_AND = 285,
    T_IS_EQUAL = 286,
    T_IS_NOT_EQUAL = 287,
    T_IS_IDENTICAL = 288,
    T_IS_NOT_IDENTICAL = 289,
    T_IS_SMALLER_OR_EQUAL = 290,
    T_IS_GREATER_OR_EQUAL = 291,
    T_STATIC = 292,
    T_DOUBLE_ARROW = 293,
    T_POW = 294,
    T_END = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "declare_list.y" /* yacc.c:355  */

	int val;
	float f;
	char *text;

#line 164 "declare_list.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DECLARE_LIST_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "declare_list.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    51,    55,     2,
      43,    44,    49,    47,    42,    48,    57,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,     2,
      58,    41,    59,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,    53,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    74,    75,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   108,   111,   112,
     115,   116,   119,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   159,   160,   161,   162,
     165,   166,   167,   168,   171,   172
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRING", "T_RET", "T_NAMESPACE",
  "T_NS_SEPARATOR", "T_ARRAY", "T_CLASS", "T_CLASS_C", "T_TRAIT_C",
  "T_FUNC_C", "T_METHOD_C", "T_LINE", "T_FILE", "T_DIR", "T_NS_C",
  "T_LNUMBER", "T_DNUMBER", "T_CONSTANT_ENCAPSED_STRING",
  "T_START_HEREDOC", "T_END_HEREDOC", "T_ENCAPSED_AND_WHITESPACE",
  "T_DTWO_POINTS", "T_SL", "T_SR", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "T_IS_EQUAL",
  "T_IS_NOT_EQUAL", "T_IS_IDENTICAL", "T_IS_NOT_IDENTICAL",
  "T_IS_SMALLER_OR_EQUAL", "T_IS_GREATER_OR_EQUAL", "T_STATIC",
  "T_DOUBLE_ARROW", "T_POW", "T_END", "'='", "','", "'('", "')'", "'['",
  "']'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'|'", "'&'",
  "'^'", "'.'", "'<'", "'>'", "'?'", "':'", "$accept", "declare_list",
  "static_scalar", "common_scalar", "static_class_name_scalar",
  "namespace_name", "static_array_pair_list", "static_class_constant",
  "static_operation", "class_name", "non_empty_static_array_pair_list",
  "possible_comma", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    61,    44,    40,    41,    91,    93,    43,    45,    42,
      47,    37,    33,   126,   124,    38,    94,    46,    60,    62,
      63,    58
};
# endif

#define YYPACT_NINF -19

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-19)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -13,     1,   132,   -19,    31,   -19,    29,    41,     3,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -17,   -19,   132,   132,   132,   132,   132,   132,   348,
     -19,   -19,    -4,   -19,   -19,    52,    36,    41,    81,   132,
     -19,    57,   -18,   200,    33,    38,   348,   348,   348,   348,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,    79,    98,    99,   132,
      94,    59,   -19,   -19,   132,   -19,   132,   -19,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   237,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   132,   162,   -19,   -19,   274,   -19,
     348,   311,   -19,   348,   132,   -19,   132,   348,   348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    28,     0,     0,     0,
      13,    21,    23,    22,    18,    19,    20,    24,    15,    16,
      17,     0,    66,     0,    30,     0,     0,     0,     0,     2,
       5,     6,     7,    12,    14,     0,     0,     0,     9,    30,
      26,     0,     0,    73,     0,    74,    63,    64,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       8,     0,    25,    65,     0,    11,    75,    31,    45,    46,
      50,    48,    49,    52,    51,    55,    56,    53,    54,    59,
      60,    37,     0,    34,    35,    36,    38,    39,    42,    43,
      44,    47,    57,    58,     0,     0,    29,    32,     3,    10,
      72,    71,    33,    61,     0,     4,     0,    62,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -19,   -19,    -3,   -19,   -19,    37,    66,   -19,   -19,   -19,
     -19,   -19
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    43,    30,    31,    32,    44,    33,    34,    35,
      45,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,     4,    77,     1,    40,    41,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   -67,
      42,    63,    46,    47,    48,    49,    83,    64,     3,    65,
      66,    67,    68,    69,    36,    37,    70,    71,    72,    73,
      74,    75,    76,     5,     6,    38,    39,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   115,    80,    78,   118,    79,    82,    85,
      86,   120,     6,   121,     7,     8,     9,    77,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      77,   116,   117,   119,   -69,    81,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,    22,   -68,     0,     0,
       0,   127,    23,   128,    24,     0,    25,    26,     0,     0,
       0,    27,    28,     0,     0,     6,     0,     7,     8,     9,
     114,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,    24,     0,    25,
      26,     0,     0,     0,    27,    28,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,    63,     0,     0,     0,     0,     0,    64,     0,    65,
      66,    67,    68,    69,     0,     0,    70,    71,    72,    73,
      74,    75,    76,   124,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    84,    63,
       0,     0,     0,     0,     0,    64,     0,    65,    66,    67,
      68,    69,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,    63,     0,     0,     0,
       0,     0,    64,   122,    65,    66,    67,    68,    69,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,    63,   125,     0,     0,     0,     0,    64,
       0,    65,    66,    67,    68,    69,     0,     0,    70,    71,
      72,    73,    74,    75,    76,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,   126,
      63,     0,     0,     0,     0,     0,    64,     0,    65,    66,
      67,    68,    69,     0,     0,    70,    71,    72,    73,    74,
      75,    76,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,    63,     0,     0,
       0,     0,     0,    64,     0,    65,    66,    67,    68,    69,
       0,     0,    70,    71,    72,    73,    74,    75,    76
};

static const yytype_int8 yycheck[] =
{
       3,     0,     6,     3,    21,    22,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    23,
      23,    39,    25,    26,    27,    28,    44,    45,    41,    47,
      48,    49,    50,    51,     3,     6,    54,    55,    56,    57,
      58,    59,    60,    42,     3,     8,    43,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    37,    23,    79,    41,    21,    46,
      42,    84,     3,    86,     5,     6,     7,     6,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       6,     3,     3,    44,    23,    39,    -1,    -1,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    37,    23,    -1,    -1,
      -1,   124,    43,   126,    45,    -1,    47,    48,    -1,    -1,
      -1,    52,    53,    -1,    -1,     3,    -1,     5,     6,     7,
      61,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    47,
      48,    -1,    -1,    -1,    52,    53,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,
      50,    51,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    47,    48,    49,    50,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    63,    41,     0,    42,     3,     5,     6,     7,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    37,    43,    45,    47,    48,    52,    53,    64,
      65,    66,    67,    69,    70,    71,     3,     6,    67,    43,
      21,    22,    64,    64,    68,    72,    64,    64,    64,    64,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    39,    45,    47,    48,    49,    50,    51,
      54,    55,    56,    57,    58,    59,    60,     6,    23,    41,
      67,    68,    21,    44,    38,    46,    42,    73,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    61,    64,     3,     3,    64,    44,
      64,    64,    46,    64,    61,    40,    38,    64,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    67,    67,
      68,    68,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     6,     1,     1,     1,     3,     2,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     1,     3,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     5,     2,     2,     3,     1,     1,     3,     2,
       5,     3,     3,     1,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 73 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_STRING", (yyvsp[-2].text)); }
#line 1407 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_STRING", (yyvsp[-2].text)); }
#line 1413 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_STRING", (yyvsp[-3].text));printStack(); return 0; }
#line 1419 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1425 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 81 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1431 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 82 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1437 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1443 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1449 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_ARRAY", (yyvsp[-3].text)); }
#line 1455 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 86 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1461 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 87 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1467 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1473 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 89 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1479 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_LNUMBER", (yyvsp[0].text)); }
#line 1485 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_DNUMBER", (yyvsp[0].text)); }
#line 1491 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_CONSTANT_ENCAPSED_STRING", (yyvsp[0].text)); }
#line 1497 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 97 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_LINE", (yyvsp[0].text)); }
#line 1503 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 98 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_FILE", (yyvsp[0].text)); }
#line 1509 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 99 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_DIR", (yyvsp[0].text)); }
#line 1515 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_TRAIT_C", (yyvsp[0].text)); }
#line 1521 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_METHOD_C", (yyvsp[0].text)); }
#line 1527 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 102 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_FUNC_C", (yyvsp[0].text)); }
#line 1533 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_NS_C", (yyvsp[0].text)); }
#line 1539 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 104 "declare_list.y" /* yacc.c:1646  */
    { pushStack("asd", (yyvsp[-2].text)); }
#line 1545 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 105 "declare_list.y" /* yacc.c:1646  */
    { pushStack("asdzxc", (yyvsp[-1].text)); }
#line 1551 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1557 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_STRING", (yyvsp[0].text)); }
#line 1563 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_NS_SEPARATOR", (yyvsp[-1].text)); pushStack("T_STRING", (yyvsp[0].text)); }
#line 1569 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 115 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1575 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1581 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_DTWO_POINTS", (yyvsp[-1].text)); pushStack("T_STRING", (yyvsp[0].text)); }
#line 1587 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 122 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1593 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 123 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1599 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 124 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1605 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1611 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1617 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1623 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 128 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1629 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1635 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1641 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 131 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1647 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 132 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1653 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 133 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1659 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 134 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1665 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 135 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1671 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 136 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1677 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 137 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1683 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 138 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1689 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 139 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1695 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 140 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1701 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 141 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1707 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 142 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1713 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 143 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1719 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 144 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1725 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 145 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1731 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1737 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 147 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1743 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 148 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1749 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 149 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1755 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 150 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1761 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 151 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1767 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 152 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1773 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 153 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1779 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 154 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1785 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 159 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1791 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 160 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1797 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 161 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1803 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 162 "declare_list.y" /* yacc.c:1646  */
    {  }
#line 1809 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 165 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_DOUBLE_ARROW", (yyvsp[-1].text)); }
#line 1815 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 166 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1821 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 167 "declare_list.y" /* yacc.c:1646  */
    { pushStack("T_DOUBLE_ARROW", (yyvsp[-1].text)); }
#line 1827 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 168 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1833 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1839 "declare_list.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 172 "declare_list.y" /* yacc.c:1646  */
    { }
#line 1845 "declare_list.tab.c" /* yacc.c:1646  */
    break;


#line 1849 "declare_list.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (yymsgp);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
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
#line 175 "declare_list.y" /* yacc.c:1906  */


int yyerror(char *s) {
	printf("Error: %s en línea %d\n", s, lines);
	return 0;
}

int yywrap() {
	return 1;
}

void pushStack(char *t, char *s) {
	stack[i_stack][0] = (char*) malloc(strlen(t) + 1);
	stack[i_stack][1] = (char*) malloc(strlen(s) + 1);
	strcpy(stack[i_stack][0], t);
	strcpy(stack[i_stack++][1], s);
}

void printStack() {
	int i;
	for(i=i_stack-1; i>=0; --i) {
		printf("[%s]: %s\n", stack[i][0], stack[i][1]);
	}
	printf("\n");
}
