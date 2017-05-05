/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parser.y" /* yacc.c:339  */

	#pragma warning(disable: 4996)
	extern int yylex();
	extern int linea ;
	extern char* gramaticas[50000];



#line 75 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    LITERAL = 258,
    INCLUDE = 259,
    DEFINE = 260,
    LEFT_BRACKET = 261,
    RIGHT_BRACKET = 262,
    COMMA = 263,
    LEFT_PARENTHESIS = 264,
    RIGHT_PARENTHESIS = 265,
    RIGHT_SBRACKET = 266,
    LEFT_SBRACKET = 267,
    SEMICOLON = 268,
    COLON = 269,
    EXCLAMATION = 270,
    PRIME = 271,
    INTERROGATION = 272,
    UP_ARROW = 273,
    DOT = 274,
    BIT_AND = 275,
    BIT_OR = 276,
    COMMENT = 277,
    PLUS = 278,
    MINUS = 279,
    DIV = 280,
    MOD = 281,
    MUL = 282,
    EQU = 283,
    LESS = 284,
    GREATER = 285,
    IDENTIFIER = 286,
    CONSTANT = 287,
    SIZEOF = 288,
    INTEGER = 289,
    PTR_OP = 290,
    INC_OP = 291,
    DEC_OP = 292,
    LEFT_OP = 293,
    RIGHT_OP = 294,
    LE_OP = 295,
    GE_OP = 296,
    EQ_OP = 297,
    NE_OP = 298,
    AND_OP = 299,
    OR_OP = 300,
    MUL_ASSIGN = 301,
    DIV_ASSIGN = 302,
    MOD_ASSIGN = 303,
    ADD_ASSIGN = 304,
    SUB_ASSIGN = 305,
    LEFT_ASSIGN = 306,
    RIGHT_ASSIGN = 307,
    AND_ASSIGN = 308,
    XOR_ASSIGN = 309,
    OR_ASSIGN = 310,
    TYPEDEF = 311,
    EXTERN = 312,
    STATIC = 313,
    AUTO = 314,
    REGISTER = 315,
    CHAR = 316,
    SHORT = 317,
    INT = 318,
    LONG = 319,
    SIGNED = 320,
    UNSIGNED = 321,
    FLOAT = 322,
    DOUBLE = 323,
    CONST = 324,
    VOLATILE = 325,
    VOID = 326,
    STRUCT = 327,
    UNION = 328,
    ENUM = 329,
    ELLIPSIS = 330,
    CASE = 331,
    DEFAULT = 332,
    IF = 333,
    ELSE = 334,
    SWITCH = 335,
    WHILE = 336,
    DO = 337,
    FOR = 338,
    GOTO = 339,
    CONTINUE = 340,
    BREAK = 341,
    RETURN = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2807

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  251
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  460

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    34,    35,    36,    37,    41,    42,    43,
      44,    45,    46,    47,    49,    50,    51,    52,    53,    54,
      55,    59,    60,    64,    65,    66,    67,    68,    69,    70,
      71,    75,    76,    77,    78,    79,    80,    84,    85,    86,
      87,    88,    89,    95,    96,    97,    98,   102,   103,   104,
     108,   109,   110,   114,   115,   116,   117,   118,   122,   123,
     124,   128,   129,   133,   134,   138,   139,   143,   144,   148,
     149,   153,   154,   158,   159,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   177,   178,   182,   186,
     187,   188,   192,   193,   194,   195,   196,   197,   201,   202,
     206,   207,   211,   212,   213,   214,   215,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   234,
     235,   236,   240,   241,   245,   246,   250,   254,   255,   256,
     257,   262,   263,   267,   268,   269,   273,   274,   275,   279,
     280,   284,   285,   289,   290,   294,   295,   296,   300,   301,
     302,   303,   305,   306,   308,   312,   313,   314,   315,   319,
     320,   324,   325,   330,   331,   337,   338,   339,   340,   341,
     342,   344,   345,   346,   347,   351,   352,   355,   356,   359,
     360,   365,   366,   367,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   383,   384,   385,   389,   390,   394,   395,
     396,   397,   398,   399,   403,   404,   405,   409,   410,   411,
     412,   416,   417,   418,   422,   423,   424,   428,   429,   433,
     434,   435,   439,   440,   441,   442,   443,   444,   448,   449,
     450,   451,   452,   456,   457,   458,   463,   464,   465,   466,
     467,   468,   471,   472,   475,   476,   477,   478,   482,   483,
     484,   485
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LITERAL", "INCLUDE", "DEFINE",
  "LEFT_BRACKET", "RIGHT_BRACKET", "COMMA", "LEFT_PARENTHESIS",
  "RIGHT_PARENTHESIS", "RIGHT_SBRACKET", "LEFT_SBRACKET", "SEMICOLON",
  "COLON", "EXCLAMATION", "PRIME", "INTERROGATION", "UP_ARROW", "DOT",
  "BIT_AND", "BIT_OR", "COMMENT", "PLUS", "MINUS", "DIV", "MOD", "MUL",
  "EQU", "LESS", "GREATER", "IDENTIFIER", "CONSTANT", "SIZEOF", "INTEGER",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "pointer_type", "type_qualifier_list", "parameter_type_list",
  "parameter_declaration", "identifier_list", "parameter_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration", "define",
  "define_continue", "function_definition", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -279

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-279)))

#define YYTABLE_NINF -251

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2069,    22,    27,   460,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,     5,  -279,   525,    52,  -279,
    1270,  1270,  -279,    13,   292,  -279,  1270,  2138,   542,    47,
      26,  -279,  1219,  -279,  -279,  -279,    60,   242,  -279,    92,
      80,   113,  -279,   131,  2138,   460,  -279,  -279,  -279,   292,
     906,   117,  1868,  2258,   108,  -279,   129,  -279,   292,   573,
    2578,  -279,   525,   109,  -279,  1099,  1887,  2290,  -279,   153,
    -279,  -279,    26,  -279,  -279,    -7,   142,   142,   142,  -279,
    -279,  -279,   123,   191,  -279,    80,  -279,  -279,  1099,  -279,
     906,   550,  -279,   322,   906,   906,  -279,  1364,  -279,   554,
    -279,   166,  -279,  -279,   655,  -279,    62,   173,  -279,   145,
     180,   213,  1580,  -279,  -279,  -279,    19,  -279,  -279,    73,
     356,  -279,  2610,  2642,  2642,     6,   311,  -279,  2674,  -279,
     325,   232,   229,   331,   250,   193,   211,   216,   215,     7,
    -279,   253,   209,   129,  1959,  2322,   674,  -279,  1580,  -279,
      56,  2674,   263,   274,   289,   293,  1184,   298,   279,   300,
     314,  2354,   465,  -279,  -279,   206,   257,  -279,  -279,  -279,
     759,   844,  -279,  -279,  -279,  -279,  2386,  -279,  -279,  -279,
     410,  1099,  2706,  -279,   528,    92,   346,   353,  -279,   324,
    1887,  -279,  -279,   310,   335,  -279,  -279,  -279,  2674,  -279,
      80,   426,   416,  -279,  -279,  1868,  2674,   220,  -279,   365,
     654,  1436,  2738,     6,    12,   377,   354,   736,  -279,  -279,
    -279,  1291,  -279,  -279,   364,   272,   391,  2674,   311,  1652,
    -279,  -279,  -279,   451,  2418,  2674,   376,   381,  -279,  -279,
    -279,  2674,  2674,  2674,  2674,  2674,  2674,  2674,  2674,  2674,
    2674,  2674,  2674,  2674,  2674,  2674,  2674,  2674,  2674,  2674,
    -279,  -279,  -279,   409,  -279,   444,  2205,     4,  1184,   445,
    1184,  2674,  2674,  2674,   456,   405,  1508,   475,  -279,  -279,
    -279,   245,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  2674,  2674,  -279,   461,  -279,   929,  -279,
    -279,  1099,  -279,   487,  1978,  -279,  -279,  -279,   466,   479,
    -279,  -279,  -279,  -279,   865,  -279,  2674,  -279,   554,     4,
    1724,  -279,  -279,   197,   492,  -279,  -279,  2450,  2674,  2674,
       6,   493,  2770,  -279,  -279,   367,  -279,   155,  -279,  -279,
    -279,  -279,  -279,   325,   325,   232,   232,   229,   229,   229,
     229,   331,   331,   250,   193,   211,   216,    65,   215,  -279,
    -279,  -279,  1184,  -279,   448,   453,   454,   495,  1099,  2482,
    -279,  -279,  -279,  -279,  -279,  -279,  2514,  -279,   498,  -279,
     476,  -279,  -279,  2147,   197,   499,  -279,   514,  -279,  2674,
     159,   334,  -279,  -279,   515,  -279,  1796,  -279,  2674,  -279,
    -279,  2674,  -279,  1184,  1184,  1184,  2674,  1014,  2674,  2546,
    -279,  -279,  2050,   478,  1436,   517,  -279,  -279,  -279,  -279,
    -279,  -279,     6,   519,  -279,  -279,   467,  -279,  -279,   457,
    1184,   458,  1184,   469,  -279,   109,  -279,   520,  -279,  1184,
     526,  -279,  1184,  -279,  1184,  -279,  -279,  -279,  -279,  -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     235,     0,     0,     0,   160,   159,   148,   102,   103,   104,
     105,   106,   108,   109,   110,   111,   114,   115,   112,   113,
     143,   144,   107,   122,   123,     0,   237,     0,     0,    98,
      92,    94,   116,     0,   179,   117,    96,   100,   146,     0,
     155,   118,     0,   233,   236,   239,     0,   247,   238,     0,
       0,   138,    89,     0,   100,     0,    91,    93,    95,   127,
       0,   121,     0,     0,   181,   180,   182,    97,   129,     0,
       0,   211,     0,   100,   251,     0,     0,     0,   147,   145,
     161,   157,   156,     1,   234,     0,   247,   247,   247,   242,
     243,   149,   141,     0,   139,     0,    90,   249,     0,    99,
     128,     0,   124,   179,   130,     0,     4,     0,   189,     2,
       3,     0,     6,   174,   167,   168,   181,     0,   177,   163,
       0,     0,     0,   185,    36,    35,    31,    33,    34,    32,
       0,     2,     0,     0,     0,     7,    23,    37,     0,    46,
      47,    50,    53,    58,    61,    63,    65,    67,    69,    71,
      88,     0,     0,   183,     0,     0,     0,   207,     0,   217,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    73,    86,     0,     0,   214,   198,   199,
       0,     0,   200,   201,   202,   203,     0,   193,   101,   212,
     199,   213,     0,   154,     2,   168,     0,     0,   151,     0,
       0,   162,   158,     0,     0,   244,   245,   246,     0,   136,
       0,     0,   199,   120,   125,     0,     0,     0,   131,   133,
       0,     0,     0,     7,     0,   181,   169,     0,   165,   166,
     190,     0,   184,    11,     2,     0,   118,     0,    24,     0,
      28,    25,    26,     0,     0,     0,     0,     0,    16,    17,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,     8,   191,     0,   187,     0,   207,   100,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   229,   230,
     231,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     0,     0,   218,     2,   209,     0,   208,
     215,   216,   196,     0,     0,   152,   153,   150,     0,     0,
     142,   140,   137,   134,     0,   126,     0,   119,     2,   100,
       0,     5,   170,     0,   118,   164,   178,     0,     0,     0,
       2,   118,     0,     9,    12,     0,    21,     0,    14,    15,
      44,    45,    43,    48,    49,    51,    52,    54,    55,    56,
      57,    59,    60,    62,    64,    66,    68,     0,    70,   192,
     188,   204,     0,   206,     0,     0,     0,     0,     0,     0,
     228,   232,    74,    87,   210,   194,     0,   175,   176,   240,
       0,   132,   135,   181,     2,   118,   173,     0,   171,     0,
      47,     0,    39,    38,     0,    29,     0,    18,     0,    13,
      10,     0,   205,     0,     0,     0,     0,     0,   200,     0,
     195,   197,     0,     0,     0,     0,    29,   172,    40,    41,
      42,    30,     2,   118,    22,    72,   219,   221,   222,     0,
       0,     0,     0,     0,   241,   100,    30,     0,    19,     0,
       0,   227,     0,   224,     0,    20,   220,   223,   226,   225
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,    54,   414,  -279,   184,  -279,  -103,  -206,  -190,   144,
     238,   283,   284,   287,   294,   281,  -279,   -56,   -65,  -279,
     260,    87,    15,    50,   -25,   509,  -279,    67,  -279,  -279,
     463,   -84,   269,  -279,   241,  -279,   480,   361,    24,     1,
       2,     0,  -279,  -279,   -60,  -225,   264,   270,    51,   143,
     -55,  -176,  -279,   118,  -279,   151,   -24,   -46,  -278,  -279,
    -279,  -279,  -279,   545,   544,   341,  -279
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   135,   136,   345,   172,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   173,   174,   303,
     175,   151,    71,    72,    28,    29,    30,    31,    32,    33,
     101,   102,    34,   217,   218,    35,    93,    94,    36,    73,
      38,   152,    40,    82,   117,   118,   197,   119,    41,   120,
      66,   188,   313,   177,   178,   179,   311,   191,   182,   183,
     184,   185,    42,    43,    48,    90,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    37,    53,    39,    49,   187,   336,   150,   379,   153,
     312,    50,   203,    75,    91,    26,   196,   214,   204,    60,
     304,   150,   331,   181,   268,    45,     4,    39,    54,  -160,
      98,  -160,    70,     5,    64,   250,    51,    39,    39,    78,
      81,    79,    39,    37,    61,   180,     4,    53,   353,   354,
      27,    46,   269,     5,    39,    39,     3,    26,    47,    64,
      55,   153,   116,   115,    80,    56,   355,   356,    64,   176,
     278,   215,    39,   304,    63,   176,    39,   195,     6,   411,
      57,    58,   202,  -159,   104,  -159,    67,  -148,  -160,  -160,
     189,    85,    27,     6,   273,    20,    21,   235,   176,   150,
     418,   419,    91,   116,   219,   150,   201,   225,   195,    64,
     181,    92,   114,   189,   116,   228,   113,    62,    79,    95,
      63,   187,   176,   105,   104,   104,   114,   100,   104,   104,
     113,   400,   180,   235,   308,   243,   214,    70,   154,    55,
     196,   155,  -159,  -159,    96,    86,   104,   401,   350,   351,
     352,   208,   150,   231,    39,   115,   176,   114,   176,   277,
     150,   223,   200,   304,   199,    77,   410,   100,   100,   429,
     153,   100,   100,   236,    87,   227,    88,    65,    79,   346,
     176,   176,   104,   230,   251,   252,   253,   400,    74,   100,
     232,   176,   176,    49,    64,   189,   235,   336,   209,   210,
      39,   115,    65,   401,   114,    97,   271,   396,   113,   236,
     421,    65,   106,   264,   304,   116,   195,     4,   237,   305,
     233,   225,   329,   243,     5,   100,   190,    79,   324,   265,
     271,    39,   115,   325,   337,   402,   403,   266,   382,   383,
     131,   110,   275,   112,   104,    86,    65,   137,   279,   212,
     114,   104,   226,   304,   113,   254,   255,   229,   381,   267,
     106,   137,   378,   104,   270,   114,   192,   256,   257,   113,
     150,   114,   236,    47,    87,   223,    88,   280,   334,   271,
      55,   114,   338,   281,   285,   113,   176,   100,   306,   110,
     341,   112,   262,   263,   100,   320,   428,   343,   282,   310,
      59,    62,   283,   323,    63,    68,   100,   286,   176,   310,
     287,   176,     4,   288,    39,   115,   240,   241,   242,     5,
     244,   187,   137,   245,    39,   219,   189,   289,   393,   103,
     246,   215,   417,   397,    63,   317,   216,   226,   153,   137,
     404,   318,     4,   434,   430,   137,   247,   248,   249,     5,
     251,   252,   253,     6,   104,   435,   315,   254,   255,   106,
     258,   259,   121,   316,   114,   237,   319,   224,   113,    59,
     103,   260,   261,    68,   103,   408,     4,   409,   176,   326,
     106,   395,   224,     5,     4,   332,   107,   131,   110,    63,
     112,     5,   137,   189,   425,  -148,   371,   100,   373,   235,
     137,   339,   357,   358,   359,   360,   240,   348,   306,   110,
    -250,   112,   349,   392,  -250,  -250,  -248,   176,   224,   369,
    -248,  -248,    39,   115,   225,   445,   310,   205,   206,   207,
     104,   291,   447,   322,   210,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   224,   137,   106,   370,   304,   433,   413,   372,
     237,   304,   304,   414,   415,   304,   304,   450,   452,     3,
     278,   226,   114,   100,   114,   236,   113,   304,   223,   454,
       4,   224,   131,   110,   342,   112,   377,     5,   380,   103,
     412,     6,  -148,   292,   385,   386,   389,   224,   390,   224,
     361,   362,   398,   405,   416,   347,   422,   423,   444,   426,
     137,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   137,   137,   137,   427,   431,   407,   446,   367,   448,
     455,   436,   437,   438,     3,   310,   314,    62,    52,   457,
      63,   374,   375,   376,   238,     4,   449,   363,     4,   364,
     368,    76,     5,   365,    77,     5,     6,   213,   451,  -148,
     453,   366,     4,    62,    99,   391,    63,   456,   220,     5,
     458,   321,   459,     6,     4,   211,   106,   137,   387,   156,
     157,     5,   158,   137,   388,  -148,   159,    84,   124,   125,
     224,    89,     0,   126,     0,   137,   127,   128,     0,     0,
     129,   130,     0,     0,   160,   110,   132,   112,     0,   133,
     134,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,   161,
     162,   163,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   327,     0,     0,   215,     0,   224,    63,     0,     0,
       0,     0,     0,     0,     0,     4,   439,   106,   441,   443,
     156,   276,     5,   158,   224,     0,     6,   159,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   160,   110,   132,   112,     0,
     133,   134,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     161,   162,   163,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   106,     0,     0,   156,   307,   333,   158,     0,
       0,     0,   159,     0,   124,   125,     0,     0,     0,   126,
       0,     0,   127,   128,     0,     0,   129,   130,     0,     0,
     160,   110,   132,   112,     0,   133,   134,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   161,   162,   163,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   106,     0,     0,
     156,   309,     0,   158,     0,     0,     0,   159,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     3,   160,   110,   132,   112,   216,
     133,   134,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     6,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     161,   162,   163,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   106,     0,     0,   156,   384,     0,   158,     0,
       0,     0,   159,     0,   124,   125,     0,     0,     0,   126,
       0,     0,   127,   128,     0,     0,   129,   130,     0,     0,
     160,   110,   132,   112,     0,   133,   134,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   161,   162,   163,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   106,     0,     0,
     156,     0,     0,   158,   440,     0,     0,   159,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   160,   110,   132,   112,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     161,   162,   163,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   106,     0,     0,   156,     0,     0,   158,     0,
       0,     0,   159,     0,   124,   125,     0,     0,     0,   126,
       0,     0,   127,   128,     0,     0,   129,   130,     0,     0,
     160,   110,   132,   112,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,   161,   162,   163,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   106,     0,     0,
     156,     0,     0,   122,     0,     0,     0,   159,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   284,   110,   132,   112,    83,
     133,   134,     0,     1,     2,     0,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,   163,     0,   164,   165,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   106,     0,     0,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     0,   109,   110,   111,   112,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   335,   106,     0,     0,
     121,     0,     0,   221,   108,     0,    63,     0,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   109,   110,   222,   112,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   106,
       0,     0,   121,     0,     0,   221,   108,     0,    63,     0,
       0,   124,   125,     0,     0,     0,   126,     0,     0,   127,
     128,     0,     0,   129,   130,     0,     0,   328,   110,   222,
     112,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   106,     0,     0,   121,     0,     0,   158,     0,     0,
       0,   159,     0,   124,   125,     0,     0,     0,   126,     0,
       0,   127,   128,     0,     0,   129,   130,     0,     0,   306,
     110,   132,   112,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   106,     0,     0,   121,     0,     0,   158,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
     126,     0,     0,   127,   128,     0,     0,   129,   130,     0,
       0,   234,   110,   132,   112,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   106,     0,     0,   121,     0,
       0,   122,     0,     0,     0,     0,     0,   124,   125,     0,
       0,     0,   126,     0,     0,   127,   128,     0,     0,   129,
     130,     0,     0,   340,   110,   132,   112,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   106,     0,     0,
     121,     0,     0,   122,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   394,   110,   132,   112,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   106,
       0,     0,   121,     0,     0,   122,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,   126,     0,     0,   127,
     128,     0,     0,   129,   130,     0,     0,   432,   110,   132,
     112,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   106,     0,     0,     0,     0,     0,   107,   108,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     4,     0,
     106,     0,     0,     0,     0,     5,   192,   193,     0,   109,
     110,   111,   112,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,   194,   110,
     111,   112,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   106,     0,     0,     0,     0,     0,   192,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,   106,     0,     0,     0,     0,     5,   192,     0,     0,
     109,   110,   111,   112,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,   194,
     110,   111,   112,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   106,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     1,     2,     0,     0,     5,     3,     0,
       0,   109,   110,   111,   112,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    69,     0,     0,     3,     0,     0,
     106,     0,     0,   121,     0,     0,   424,   399,     4,    63,
       0,     0,   124,   125,     0,     5,    70,   126,     0,     6,
     127,   128,     0,     0,   129,   130,     0,     0,   131,   110,
     132,   112,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   -11,   -11,     0,     0,   -11,   -11,     0,
       0,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,     0,     0,     0,     0,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   106,     0,     0,   121,     0,     0,   122,     0,   123,
       0,     0,     0,   124,   125,     0,     0,     0,   126,     0,
       0,   127,   128,     0,     0,   129,   130,     0,     0,   131,
     110,   132,   112,   106,   133,   134,   121,     0,     0,   122,
       0,   198,     0,     0,     0,   124,   125,     0,     0,     0,
     126,     0,     0,   127,   128,     0,     0,   129,   130,     0,
       0,   131,   110,   132,   112,   106,   133,   134,   121,     0,
       0,   122,     0,   274,     0,     0,     0,   124,   125,     0,
       0,     0,   126,     0,     0,   127,   128,     0,     0,   129,
     130,     0,     0,   131,   110,   132,   112,   106,   133,   134,
     121,     0,     0,   122,     0,     0,     0,   290,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   131,   110,   132,   112,   106,
     133,   134,   186,   233,     0,   122,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,   126,     0,     0,   127,
     128,     0,     0,   129,   130,     0,     0,   131,   110,   132,
     112,   106,   133,   134,   121,     0,     0,   122,   344,     0,
       0,     0,     0,   124,   125,     0,     0,     0,   126,     0,
       0,   127,   128,     0,     0,   129,   130,     0,     0,   131,
     110,   132,   112,   106,   133,   134,   121,     0,     0,   122,
     399,     0,     0,     0,     0,   124,   125,     0,     0,     0,
     126,     0,     0,   127,   128,     0,     0,   129,   130,     0,
       0,   131,   110,   132,   112,   106,   133,   134,   121,     0,
       0,   122,     0,     0,     0,   159,     0,   124,   125,     0,
       0,     0,   126,     0,     0,   127,   128,     0,     0,   129,
     130,     0,     0,   131,   110,   132,   112,   106,   133,   134,
     186,   420,     0,   122,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   131,   110,   132,   112,   106,
     133,   134,   121,     0,     0,   122,   442,     0,     0,     0,
       0,   124,   125,     0,     0,     0,   126,     0,     0,   127,
     128,     0,     0,   129,   130,     0,     0,   131,   110,   132,
     112,   106,   133,   134,   186,     0,     0,   122,     0,     0,
       0,     0,     0,   124,   125,     0,     0,     0,   126,     0,
       0,   127,   128,     0,     0,   129,   130,     0,     0,   131,
     110,   132,   112,   106,   133,   134,   121,     0,     0,   239,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
     126,     0,     0,   127,   128,     0,     0,   129,   130,     0,
       0,   131,   110,   132,   112,   106,   133,   134,   121,     0,
       0,   237,     0,     0,     0,     0,     0,   124,   125,     0,
       0,     0,   126,     0,     0,   127,   128,     0,     0,   129,
     130,     0,     0,   131,   110,   132,   112,   106,   133,   134,
     121,     0,     0,   122,     0,     0,     0,     0,     0,   124,
     125,     0,     0,     0,   126,     0,     0,   127,   128,     0,
       0,   129,   130,     0,     0,   131,   110,   132,   112,   106,
     133,   134,   121,     0,     0,   158,     0,     0,     0,     0,
       0,   124,   125,     0,     0,     0,   126,     0,     0,   127,
     128,     0,     0,   129,   130,     0,     0,   306,   110,   132,
     112,   106,   133,   134,   121,     0,     0,   330,     0,     0,
       0,     0,     0,   124,   125,     0,     0,     0,   126,     0,
       0,   127,   128,     0,     0,   129,   130,     0,     0,   131,
     110,   132,   112,   106,   133,   134,   121,     0,     0,   406,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
     126,     0,     0,   127,   128,     0,     0,   129,   130,     0,
       0,   131,   110,   132,   112,     0,   133,   134
};

static const yytype_int16 yycheck[] =
{
       0,     0,    27,     3,     3,    70,   231,    63,   286,    64,
     186,     6,    19,    37,    10,     0,    76,   101,    25,     6,
       8,    77,    10,    69,    17,     3,    20,    27,    27,    10,
      54,    12,    28,    27,    34,   138,    31,    37,    38,    38,
      40,    39,    42,    42,    31,    69,    20,    72,   254,   255,
       0,    29,    45,    27,    54,    55,     9,    42,    31,    59,
       8,   116,    62,    62,    40,    13,   256,   257,    68,    69,
      14,     9,    72,     8,    12,    75,    76,    76,    31,    14,
      30,    31,    82,    10,    60,    12,    36,    31,    69,    70,
      75,    31,    42,    31,   154,    69,    70,   122,    98,   155,
     378,   379,    10,   103,   103,   161,    82,   107,   107,   109,
     156,    31,    62,    98,   114,   114,    62,     9,   116,     6,
      12,   186,   122,     6,   100,   101,    76,    60,   104,   105,
      76,   337,   156,   158,   180,   135,   220,    28,     9,     8,
     200,    12,    69,    70,    13,     3,   122,   337,   251,   252,
     253,    28,   208,     8,   154,   154,   156,   107,   158,   158,
     216,   107,     9,     8,    77,    12,    11,   100,   101,    10,
     225,   104,   105,   122,    32,     9,    34,    34,   176,   244,
     180,   181,   158,    10,    25,    26,    27,   393,    37,   122,
      10,   191,   192,   192,   194,   180,   221,   422,     7,     8,
     200,   200,    59,   393,   154,    54,   152,    10,   154,   158,
     386,    68,     3,    20,     8,   215,   215,    20,     9,    13,
       7,   221,   221,   223,    27,   158,    75,   225,     8,    18,
     176,   231,   231,    13,   234,   338,   339,    21,   303,   304,
      31,    32,   155,    34,   220,     3,   103,    63,   161,    98,
     200,   227,   109,     8,   200,    23,    24,   114,    13,    44,
       3,    77,   286,   239,    11,   215,     9,    38,    39,   215,
     326,   221,   221,    31,    32,   221,    34,    14,   227,   225,
       8,   231,    10,     9,   166,   231,   286,   220,    31,    32,
     239,    34,    42,    43,   227,   208,   399,   243,     9,   181,
      31,     9,     9,   216,    12,    36,   239,     9,   308,   191,
      31,   311,    20,    13,   314,   314,   132,   133,   134,    27,
       9,   386,   138,    12,   324,   324,   311,    13,   328,    60,
      19,     9,   378,   333,    12,    11,    14,   194,   393,   155,
     340,    31,    20,   408,    10,   161,    35,    36,    37,    27,
      25,    26,    27,    31,   330,   411,    10,    23,    24,     3,
      29,    30,     6,    10,   314,     9,    31,   107,   314,   100,
     101,    40,    41,   104,   105,     8,    20,    10,   378,    14,
       3,   330,   122,    27,    20,    31,     9,    31,    32,    12,
      34,    27,   208,   378,   394,    31,   278,   330,   280,   424,
     216,    10,   258,   259,   260,   261,   222,    31,    31,    32,
       0,    34,    31,   326,     4,     5,     0,   417,   158,    10,
       4,     5,   422,   422,   424,   424,   308,    86,    87,    88,
     406,   171,   432,     7,     8,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   192,   269,     3,    11,     8,   406,    10,    14,
       9,     8,     8,    10,    10,     8,     8,    10,    10,     9,
      14,   328,   422,   406,   424,   424,   422,     8,   424,    10,
      20,   221,    31,    32,    33,    34,    81,    27,    13,   220,
     372,    31,    31,    28,     7,     8,    30,   237,    19,   239,
     262,   263,    10,    10,     9,   245,     8,    31,    30,    10,
     326,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   337,   338,   339,    10,    10,   342,    10,   268,    10,
      10,   413,   414,   415,     9,   417,     8,     9,    13,    13,
      12,   281,   282,   283,   130,    20,    79,   264,    20,   265,
     269,     9,    27,   266,    12,    27,    31,     7,   440,    31,
     442,   267,    20,     9,    55,   324,    12,   449,   105,    27,
     452,   210,   454,    31,    20,    95,     3,   393,   314,     6,
       7,    27,     9,   399,   314,    31,    13,    42,    15,    16,
     330,    47,    -1,    20,    -1,   411,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    32,    33,    34,    -1,    36,
      37,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,     7,    -1,    -1,     9,    -1,   406,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,   416,     3,   418,   419,
       6,     7,    27,     9,   424,    -1,    31,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,     7,    31,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,     7,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,     9,    31,    32,    33,    34,    14,
      36,    37,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,     7,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,    -1,    -1,     9,    10,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,     3,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     0,
      36,    37,    -1,     4,     5,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     3,    -1,    -1,
       6,    -1,    -1,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    10,    -1,    12,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      -1,    13,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     3,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,     3,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,     3,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       3,    -1,    -1,    -1,    -1,    27,     9,    10,    -1,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,     3,    -1,    -1,    -1,    -1,    27,     9,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,     4,     5,    -1,    -1,    27,     9,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     6,    -1,    -1,     9,    -1,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    20,    12,
      -1,    -1,    15,    16,    -1,    27,    28,    20,    -1,    31,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,
      33,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     8,     9,    -1,    -1,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     3,    -1,    -1,     6,    -1,    -1,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,     3,    36,    37,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,     3,    36,    37,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    31,    32,    33,    34,     3,
      36,    37,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    -1,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,
      34,     3,    36,    37,     6,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,
      32,    33,    34,     3,    36,    37,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      20,    -1,    -1,    23,    24,    -1,    -1,    27,    28,    -1,
      -1,    31,    32,    33,    34,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     9,    20,    27,    31,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,   110,   111,   112,   113,
     114,   115,   116,   117,   120,   123,   126,   127,   128,   129,
     130,   136,   150,   151,   154,     3,    29,    31,   152,   127,
       6,    31,    13,   112,   127,     8,    13,   111,   111,   120,
       6,    31,     9,    12,   129,   137,   138,   111,   120,     6,
      28,   110,   111,   127,   143,   144,     9,    12,   127,   128,
     126,   129,   131,     0,   151,    31,     3,    32,    34,   152,
     153,    10,    31,   124,   125,     6,    13,   143,   144,   113,
     115,   118,   119,   120,   126,     6,     3,     9,    10,    31,
      32,    33,    34,    89,   111,   127,   129,   132,   133,   135,
     137,     6,     9,    11,    15,    16,    20,    23,    24,    27,
      28,    31,    33,    36,    37,    89,    90,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   109,   129,   138,     9,    12,     6,     7,     9,    13,
      31,    76,    77,    78,    80,    81,    82,    83,    84,    85,
      86,    87,    92,   105,   106,   108,   129,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     6,   106,   139,   110,
     143,   145,     9,    10,    31,   127,   132,   134,    11,   109,
       9,   126,   129,    19,    25,   153,   153,   153,    28,     7,
       8,   124,   143,     7,   119,     9,    14,   121,   122,   127,
     118,     9,    33,    89,   108,   129,   137,     9,   127,   137,
      10,     8,    10,     7,    31,   112,   136,     9,    90,     9,
      92,    92,    92,   129,     9,    12,    19,    35,    36,    37,
      94,    25,    26,    27,    23,    24,    38,    39,    29,    30,
      40,    41,    42,    43,    20,    18,    21,    44,    17,    45,
      11,    89,    10,   132,    11,   109,     7,   127,    14,   109,
      14,     9,     9,     9,    31,   141,     9,    31,    13,    13,
      13,   108,    28,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   107,     8,    13,    31,     7,   145,     7,
     141,   144,   139,   140,     8,    10,    10,    11,    31,    31,
     109,   125,     7,   109,     8,    13,    14,     7,    31,   127,
       9,    10,    31,    31,   136,    75,   133,   129,    10,    10,
      31,   136,    33,    89,    10,    91,   106,   108,    31,    31,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    99,   100,   101,   102,   108,   103,    10,
      11,   141,    14,   141,   108,   108,   108,    81,   144,   146,
      13,    13,   106,   106,     7,     7,     8,   134,   135,    30,
      19,   122,   109,   129,    31,   136,    10,   129,    10,    10,
      95,    96,    94,    94,   129,    10,     9,    92,     8,    10,
      11,    14,   141,    10,    10,    10,     9,   145,   146,   146,
       7,   139,     8,    31,     9,   129,    10,    10,    94,    10,
      10,    10,    31,   136,   106,   105,   141,   141,   141,   108,
      10,   108,    10,   108,    30,   127,    10,   129,    10,    79,
      10,   141,    10,   141,    10,    10,   141,    13,   141,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   110,
     110,   110,   111,   111,   111,   111,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   120,
     120,   121,   121,   122,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   139,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   142,   142,   142,   143,   143,   143,
     143,   144,   144,   144,   145,   145,   145,   146,   146,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   149,   149,   150,   150,   150,   151,   151,   151,   151,
     151,   151,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     2,     3,
       4,     2,     3,     4,     3,     3,     2,     2,     4,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     2,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       5,     5,     5,     3,     3,     3,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     3,     2,     1,     2,
       1,     1,     3,     1,     2,     3,     4,     5,     2,     1,
       3,     1,     3,     1,     1,     2,     1,     2,     1,     3,
       4,     3,     4,     4,     3,     1,     2,     2,     3,     1,
       1,     1,     2,     1,     3,     2,     2,     1,     1,     2,
       3,     4,     5,     4,     1,     3,     3,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     3,
       4,     1,     2,     2,     1,     2,     2,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     7,     6,     3,     2,
       2,     2,     3,     1,     2,     0,     1,     1,     2,     2,
       6,     8,     2,     2,     2,     2,     2,     0,     4,     3,
       3,     2
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
#line 33 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s primary_expression: IDENTIFIER FINAL\n",linea, gramaticas );}
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 34 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: CONSTANT FINAL\n",linea,  gramaticas );}
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 35 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  LITERAL FINAL\n",linea, gramaticas );}
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: LEFT_PARENTHESIS FINAL expression RIGHT_PARETHESIS\n",linea, gramaticas);}
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 37 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  primary_expression: INTEGER FINAL\n",linea, gramaticas );}
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression\n",linea, gramaticas );}
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: pointer primary_expression\n",linea, gramaticas);}
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 43 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: primary_expression pointer primary_expression \n",linea, gramaticas );}
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 44 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 45 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_SBRACKET expression LEFT_SBRACKET\n",linea, gramaticas);}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 46 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression RIGHT_PARENTHESIS argument_expression_list LEFT_PARENTHESIS\n",linea, gramaticas);}
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 49 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DOT IDENTIFIER\n",linea, gramaticas);}
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 50 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression PTR_OP IDENTIFIER\n",linea, gramaticas);}
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 51 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression INC_OP\n",linea, gramaticas );}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 52 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  postfix_expression: postfix_expression DEC_OP\n",linea, gramaticas );}
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 53 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 54 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 55 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 59 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: assignment_expression\n",linea, gramaticas);}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 60 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  argument_expression_list: argument_expression_list COMMA assignment_expression\n",linea, gramaticas);}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: postfix_expression\n",linea, gramaticas );}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 65 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression:pointer postfix_expression\n",linea, gramaticas);}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 66 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: INC_OP unary_expression\n",linea, gramaticas );}
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 67 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: DEC_OP unary_expression\n",linea, gramaticas );}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 68 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: unary_operator cast_expression\n",linea, gramaticas );}
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 69 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF unary_expression\n",linea, gramaticas );}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 70 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 71 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 75 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: BIT_AND\n",linea, gramaticas );}
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 76 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MUL\n",linea, gramaticas );}
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 77 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PLUS\n",linea, gramaticas );}
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 78 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: MINUS\n",linea, gramaticas );}
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 79 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: PRIME\n",linea, gramaticas );}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 80 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_operator: EXCLAMATION\n",linea, gramaticas);}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 84 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: unary_expression\n",linea, gramaticas);}
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 85 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 86 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 87 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 88 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 89 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  cast_expression: LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS cast_expression\n",linea, gramaticas);}
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MUL cast_expression\n",linea, gramaticas );}
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression DIV cast_expression\n",linea, gramaticas );}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 97 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: multiplicative_expression MOD cast_expression\n",linea,gramaticas );}
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 98 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  multiplicative_expression: cast_expression\n",linea, gramaticas);}
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 102 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: multiplicative_expression\n",linea,gramaticas );}
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 103 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression PLUS multiplicative_expression\n",linea,gramaticas) ;}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 104 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  additive_expression: additive_expression MINUS multiplicative_expression\n",linea, gramaticas) ;}
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: additive_expression\n",linea, gramaticas );}
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression LEFT_OP additive_expression\n",linea, gramaticas);}
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 110 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  shift_expression: shift_expression RIGHT_OP additive_expression \n",linea, gramaticas);}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 114 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: shift_expression\n",linea, gramaticas);}
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 115 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LESS shift_expression\n",linea, gramaticas);}
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 116 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GREATER shift_expression\n",linea, gramaticas );}
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 117 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression LE_OP shift_expression\n",linea, gramaticas);}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 118 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  relational_expression: relational_expression GE_OP shift_expression\n",linea, gramaticas );}
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 122 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: relational_expression\n",linea, gramaticas);}
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 123 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression EQ_OP relational_expression\n",linea, gramaticas );}
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 124 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  equality_expression: equality_expression NE_OP relational_expression\n",linea, gramaticas);}
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 128 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: equality_expression\n",linea, gramaticas );}
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 129 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  and_expression: and_expression BIT_AND equality_expression\n",linea, gramaticas);}
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: and_expression\n",linea, gramaticas );}
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  exclusive_or_expression: exclusive_or_expression UP_ARROW and_expression\n",linea, gramaticas );}
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 138 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: exclusive_or_expression\n",linea, gramaticas);}
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 139 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  inclusive_or_expression: inclusive_or_expression BIT_OR exclusive_or_expression\n",linea, gramaticas );}
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 143 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: inclusive_or_expression\n",linea,gramaticas );}
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 144 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n",linea, gramaticas);}
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_and_expression\n",linea,gramaticas);}
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 149 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  logical_or_expression: logical_or_expression OR_OP logical_and_expression\n",linea, gramaticas );}
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 153 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression\n",linea, gramaticas);}
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 154 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  conditional_expression: logical_or_expression INTERROGATION expression COLON conditional_expression\n",linea,gramaticas);}
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 158 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: conditional_expression\n",linea, gramaticas);}
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 159 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_expression: unary_expression assignment_operator assignment_expression\n",linea,gramaticas);}
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: EQU\n",linea, gramaticas);}
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 164 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MUL_ASSIGN\n",linea,gramaticas );}
#line 2556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 165 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: DIV_ASSIGN\n",linea,gramaticas);}
#line 2562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 166 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: MOD_ASSIGN\n",linea,gramaticas);}
#line 2568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: ADD_ASSIGN\n",linea, gramaticas);}
#line 2574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: SUB_ASSIGN\n",linea, gramaticas);}
#line 2580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 169 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: LEFT_ASSIGN\n",linea, gramaticas);}
#line 2586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 170 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: RIGHT_ASSIGN\n",linea,gramaticas);}
#line 2592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: AND_ASSIGN\n",linea, gramaticas);}
#line 2598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: XOR_ASSIGN\n",linea, gramaticas);}
#line 2604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 173 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  assignment_operator: OR_ASSIGN\n",linea, gramaticas);}
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 177 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: assignment_expression\n",linea, gramaticas);}
#line 2616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 178 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression: expression COMMA assignment_expression\n",linea,gramaticas);}
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 182 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  constant_expression: conditional_expression\n",linea, gramaticas );}
#line 2628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 187 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration: declaration_specifiers init_declarator_list SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 2640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 188 "parser.y" /* yacc.c:1646  */
    {memset(gramaticas,0,sizeof(gramaticas));}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 192 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier \n",linea, gramaticas);}
#line 2652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 193 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: storage_class_specifier declaration_specifiers\n",linea, gramaticas);}
#line 2658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier\n",linea, gramaticas);}
#line 2664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_specifier declaration_specifiers {\n",linea, gramaticas);}
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 196 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier\n",linea, gramaticas );}
#line 2676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 197 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_specifiers: type_qualifier declaration_specifiers\n",linea, gramaticas );}
#line 2682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 201 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator\n",linea, gramaticas );}
#line 2688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 202 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator_list: init_declarator_list COMMA init_declarator\n",linea,gramaticas);}
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 206 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator\n",linea, gramaticas );}
#line 2700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  init_declarator: declarator EQU initializer\n",linea, gramaticas );}
#line 2706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 211 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: TYPEDEF\n",linea, gramaticas);}
#line 2712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: EXTERN\n",linea, gramaticas);}
#line 2718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: STATIC\n",linea,gramaticas);}
#line 2724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 214 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: AUTO\n",linea, gramaticas);}
#line 2730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 215 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  storage_class_specifier: REGISTER\n",linea, gramaticas);}
#line 2736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 219 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: VOID\n",linea, gramaticas);}
#line 2742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 220 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: CHAR\n",linea, gramaticas);}
#line 2748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 221 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SHORT\n",linea, gramaticas);}
#line 2754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 222 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: INT\n",linea, gramaticas);}
#line 2760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 223 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: LONG\n",linea, gramaticas);}
#line 2766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 224 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: FLOAT\n",linea, gramaticas);}
#line 2772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 225 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: DOUBLE\n",linea, gramaticas);}
#line 2778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 226 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: SIGNED\n",linea, gramaticas);}
#line 2784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 227 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: UNSIGNED\n",linea, gramaticas);}
#line 2790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 228 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: struct_or_union_specifier\n",linea, gramaticas );}
#line 2796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 229 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: enum_specifier\n",linea, gramaticas );}
#line 2802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 230 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_specifier: TYPE_NAME\n",linea,gramaticas);}
#line 2808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 234 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER LEFT_BRACKET struct_declaration_list RIGHT_BRACKET \n",linea, gramaticas );}
#line 2814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 235 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union LEFT_BRACKET struct_declaration_list RIGHT_BRACKET\n",linea,gramaticas );}
#line 2820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 236 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union_specifier: struct_or_union IDENTIFIER\n",linea, gramaticas);}
#line 2826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 240 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: STRUCT\n",linea, gramaticas);}
#line 2832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 241 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_or_union: UNION\n",linea, gramaticas);}
#line 2838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 245 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration\n",linea, gramaticas );}
#line 2844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 246 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration_list: struct_declaration_list struct_declaration\n",linea, gramaticas );}
#line 2850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 250 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 2856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 254 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier specifier_qualifier_list\n",linea, gramaticas );}
#line 2862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 255 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_specifier\n",linea, gramaticas );}
#line 2868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 256 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier specifier_qualifier_list\n",linea,gramaticas);}
#line 2874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 257 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  specifier_qualifier_list: type_qualifier\n",linea, gramaticas );}
#line 2880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 262 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator\n",linea, gramaticas );}
#line 2886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 263 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator_list: struct_declarator_list COMMA struct_declarator\n",linea, gramaticas );}
#line 2892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 267 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator\n",linea, gramaticas );}
#line 2898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 268 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: COLON constant_expression \n",linea, gramaticas );}
#line 2904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 269 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  struct_declarator: declarator COLON constant_expression \n",linea, gramaticas);}
#line 2910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 273 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM LEFT_BRACKET enumerator_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 2916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 274 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER LEFT_BRACKET enumerator_list RIGHT_BRACKET \n",linea,gramaticas);}
#line 2922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 275 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enum_specifier: ENUM IDENTIFIER\n",linea, gramaticas );}
#line 2928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 279 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator\n",linea, gramaticas);}
#line 2934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 280 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator_list: enumerator_list COMMA enumerator\n",linea, gramaticas );}
#line 2940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 284 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER\n",linea, gramaticas);}
#line 2946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 285 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  enumerator: IDENTIFIER EQU constant_expression\n",linea,gramaticas);}
#line 2952 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 289 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: CONST\n",linea,gramaticas);}
#line 2958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 290 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier: VOLATILE\n",linea, gramaticas);}
#line 2964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 294 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: pointer direct_declarator \n",linea, gramaticas );}
#line 2970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 295 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: direct_declarator\n",linea, gramaticas );}
#line 2976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 296 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declarator: declarator direct_declarator\n",linea, gramaticas );}
#line 2982 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 300 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: IDENTIFIER\n",linea, gramaticas);}
#line 2988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 301 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: LEFT_PARENTHESIS declarator RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 2994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 302 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET\n",linea,gramaticas);}
#line 3000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 303 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 305 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 306 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS identifier_list RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 308 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_declarator: direct_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas);}
#line 3024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 312 "parser.y" /* yacc.c:1646  */
    { printf("%d con %s  pointer: MUL\n",linea, gramaticas);}
#line 3030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 313 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list\n",linea, gramaticas );}
#line 3036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 314 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL pointer\n",linea, gramaticas );}
#line 3042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 315 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  pointer: MUL type_qualifier_list pointer\n",linea,gramaticas);}
#line 3048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 324 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier\n",linea,gramaticas );}
#line 3054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 325 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_qualifier_list: type_qualifier_list type_qualifier\n",linea, gramaticas );}
#line 3060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 330 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list\n",linea, gramaticas );}
#line 3066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 331 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_type_list: parameter_list COMMA ELLIPSIS\n",linea, gramaticas);}
#line 3072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 337 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers declarator\n",linea, gramaticas );}
#line 3078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 338 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 339 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers\n",linea, gramaticas );}
#line 3090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 341 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas );}
#line 3096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 342 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_declaration: declaration_specifiers abstract_declarator\n",linea, gramaticas
	 );}
#line 3103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 344 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 345 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 346 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  unary_expression: SIZEOF LEFT_PARENTHESIS type_name RIGHT_PARENTHESIS\n",linea, gramaticas );}
#line 3121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 351 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 352 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  identifier_list: IDENTIFIER\n",linea, gramaticas);}
#line 3133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 355 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_declaration\n",linea, gramaticas);}
#line 3139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 356 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  parameter_list: parameter_list COMMA parameter_declaration\n",linea, gramaticas);}
#line 3145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 359 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list\n",linea, gramaticas);}
#line 3151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 360 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  type_name: specifier_qualifier_list abstract_declarator\n",linea, gramaticas);}
#line 3157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 365 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer\n",linea, gramaticas);}
#line 3163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 366 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: direct_abstract_declarator\n",linea, gramaticas );}
#line 3169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 367 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  abstract_declarator: pointer direct_abstract_declarator\n",linea, gramaticas);}
#line 3175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 371 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS abstract_declarator RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 372 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator:  LEFT_SBRACKET RIGHT_SBRACKET \n",linea, gramaticas);}
#line 3187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 373 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 374 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET RIGHT_SBRACKET\n",linea, gramaticas );}
#line 3199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 375 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_SBRACKET constant_expression RIGHT_SBRACKET \n",linea, gramaticas );}
#line 3205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 376 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea, gramaticas);}
#line 3211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 377 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS \n",linea, gramaticas );}
#line 3217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 378 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS RIGHT_PARENTHESIS\n",linea,gramaticas );}
#line 3223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 379 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESIS parameter_type_list RIGHT_PARENTHESIS\n",linea,  gramaticas  );}
#line 3229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 383 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: assignment_expression\n",linea, gramaticas );}
#line 3235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 384 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list RIGHT_BRACKET\n",linea,  gramaticas );}
#line 3241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 385 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer: LEFT_BRACKET initializer_list COMMA RIGHT_BRACKET\n",linea, gramaticas );}
#line 3247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 389 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer\n",linea, gramaticas);}
#line 3253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 390 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  initializer_list: initializer_list COMMA initializer \n",linea, gramaticas);}
#line 3259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 394 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: labeled_statement\n",linea, gramaticas );}
#line 3265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 395 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: compound_statement\n",linea, gramaticas);}
#line 3271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 396 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: expression_statement\n",linea,gramaticas );}
#line 3277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 397 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: selection_statement\n",linea, gramaticas);}
#line 3283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 398 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: iteration_statement\n",linea, gramaticas );}
#line 3289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 399 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement: jump_statement\n",linea, gramaticas );}
#line 3295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 403 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: IDENTIFIER COLON statement \n",linea, gramaticas );}
#line 3301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 404 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: CASE constant_expression COLON statement\n",linea, gramaticas );}
#line 3307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 405 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  labeled_statement: DEFAULT COLON statement\n",linea, gramaticas );}
#line 3313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 409 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET RIGHT_BRACKET\n",linea, gramaticas);}
#line 3319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 410 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET statement_list RIGHT_BRACKET\n",linea, gramaticas );}
#line 3325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 411 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 412 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  compound_statement: LEFT_BRACKET declaration_list statement_list RIGHT_BRACKET\n",linea, gramaticas);}
#line 3337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 416 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration\n",linea, gramaticas );}
#line 3343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 417 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  declaration_list: declaration_list declaration\n",linea, gramaticas);}
#line 3349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 422 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement\n",linea, gramaticas );}
#line 3355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 423 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  statement_list: statement_list statement\n",linea, gramaticas);}
#line 3361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 428 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 429 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  expression_statement: expression SEMICOLON \n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 433 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea,gramaticas);}
#line 3379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 434 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: IF LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement ELSE statement\n",linea, gramaticas);}
#line 3385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 435 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  selection_statement: SWITCH LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 439 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 440 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: DO statement WHILE LEFT_PARENTHESIS expression RIGHT_PARENTHESIS SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 441 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement RIGHT_PARENTHESIS statement\n",linea, gramaticas );}
#line 3409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 442 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 443 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 444 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  iteration_statement: FOR LEFT_PARENTHESIS expression_statement expression_statement expression RIGHT_PARENTHESIS statement\n",linea, gramaticas);}
#line 3427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 448 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: GOTO IDENTIFIER SEMICOLON\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 449 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: CONTINUE SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 450 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: BREAK SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 451 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 452 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  jump_statement: RETURN expression SEMICOLON\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 456 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a external_declaration\n",linea, gramaticas);memset(gramaticas,0,sizeof(gramaticas));}
#line 3463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 457 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  translation_unit: Entre a ciclo translation_unit\n",linea, gramaticas );memset(gramaticas,0,sizeof(gramaticas));}
#line 3469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 458 "parser.y" /* yacc.c:1646  */
    {printf("%d  translation_unit: Archivo Vacío\n",linea );memset(gramaticas,0,sizeof(gramaticas));}
#line 3475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 463 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: function_definition\n",linea, gramaticas);}
#line 3481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 464 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: declaration\n",linea, gramaticas);}
#line 3487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 465 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: DEFINE define\n",linea, gramaticas);}
#line 3493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 466 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 467 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 468 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  external_declaration: INCLUDE LITERALn\n",linea, gramaticas);}
#line 3511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 471 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define\n",linea, gramaticas);}
#line 3517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 472 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define: IDENTIFIER define_continue\n",linea, gramaticas);}
#line 3523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 475 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue: LITERAL define_continue\n",linea, gramaticas);}
#line 3529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 476 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:CONSTANT define_continue\n",linea, gramaticas);}
#line 3535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 477 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  define_continue:  INTEGER define_continue\n",linea, gramaticas);}
#line 3541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 482 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator declaration_list compound_statement\n",linea,gramaticas);}
#line 3547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 483 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declaration_specifiers declarator compound_statement \n",linea, gramaticas);}
#line 3553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 484 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator declaration_list compound_statement\n",linea, gramaticas );}
#line 3559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 485 "parser.y" /* yacc.c:1646  */
    {printf("%d con %s  function_definition: declarator compound_statement\n",linea,gramaticas);}
#line 3565 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 3569 "parser.tab.c" /* yacc.c:1646  */
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
#line 488 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
