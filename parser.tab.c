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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

    #include <ctype.h>
	#include <stdio.h>
	int yylex();
	void yyerror(const char *s);
	extern FILE *yyin;


#line 79 "parser.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BT_ALGORITMO = 258,
    BT_FALGORITMO = 259,
    BT_IDENTIFICADOR = 260,
    BT_COMENTARIO = 261,
    BT_TIPO = 262,
    BT_FTIPO = 263,
    BT_CONST = 264,
    BT_FCONST = 265,
    BT_VAR = 266,
    BT_FVAR = 267,
    BT_TUPLA = 268,
    BT_FTUPLA = 269,
    BT_TABLA = 270,
    BT_DE = 271,
    BT_DEV = 272,
    BT_REF = 273,
    BT_TIPOBASE = 274,
    BT_LITERALENTERO = 275,
    BT_LITERALCARACTER = 276,
    BT_VERDADERO = 277,
    BT_FALSO = 278,
    BT_LITERAL = 279,
    BT_ENT = 280,
    BT_SAL = 281,
    BT_ENTSAL = 282,
    BT_LITERALNUMERICO = 283,
    BT_Y = 284,
    BT_O = 285,
    BT_NO = 286,
    BT_CONTINUAR = 287,
    BT_SI = 288,
    BT_FSI = 289,
    BT_MIENTRAS = 290,
    BT_FMIENTRAS = 291,
    BT_HACER = 292,
    BT_PARA = 293,
    BT_FPARA = 294,
    BT_HASTA = 295,
    BT_ACCION = 296,
    BT_FACCION = 297,
    BT_FUNCION = 298,
    BT_FFUNCION = 299,
    BT_CERO = 300,
    BT_DOSCIENTOSCINCUENTAYCINCO = 301,
    BT_PUNTO = 302,
    BT_SUMA = 303,
    BT_RESTA = 304,
    BT_DIV = 305,
    BT_MOD = 306,
    BT_DIVREAL = 307,
    BT_MULTIPLICACION = 308,
    BT_INICIOPARENTESIS = 309,
    BT_FINPARENTESIS = 310,
    BT_ASIGNACION = 311,
    BT_COMPOSICIONSECUENCIAL = 312,
    BT_DEFINICIONTIPOVARIABLE = 313,
    BT_ENTONCES = 314,
    BT_INICIOARRAY = 315,
    BT_FINARRAY = 316,
    BT_CREACIONTIPO = 317,
    BT_SEPARADOR = 318,
    BT_SUBRANGO = 319,
    BT_MAYOR = 320,
    BT_MENOR = 321,
    BT_IGUAL = 322,
    BT_DISTINTO = 323,
    BT_MAYORIGUAL = 324,
    BT_MENORIGUAL = 325,
    BT_OPREL = 326,
    BT_SINOSI = 327
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 101 "parser.y"

	int val;
	char sym;
	char *str;

#line 210 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  226

#define YYUNDEFTOK  2
#define YYMAXUTOK   327


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   113,   113,   115,   116,   117,   118,   119,   121,   122,
     123,   125,   126,   127,   128,   129,   132,   133,   134,   136,
     137,   139,   140,   142,   143,   144,   145,   147,   148,   150,
     151,   154,   155,   158,   159,   161,   162,   164,   165,   166,
     169,   170,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   198,   199,   200,   201,
     206,   207,   209,   210,   211,   212,   213,   215,   216,   217,
     218,   220,   221,   223,   224,   227,   228,   229,   230,   231,
     232,   233,   235,   236,   237,   240,   241,   242,   243,   244
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BT_ALGORITMO", "BT_FALGORITMO",
  "BT_IDENTIFICADOR", "BT_COMENTARIO", "BT_TIPO", "BT_FTIPO", "BT_CONST",
  "BT_FCONST", "BT_VAR", "BT_FVAR", "BT_TUPLA", "BT_FTUPLA", "BT_TABLA",
  "BT_DE", "BT_DEV", "BT_REF", "BT_TIPOBASE", "BT_LITERALENTERO",
  "BT_LITERALCARACTER", "BT_VERDADERO", "BT_FALSO", "BT_LITERAL", "BT_ENT",
  "BT_SAL", "BT_ENTSAL", "BT_LITERALNUMERICO", "BT_Y", "BT_O", "BT_NO",
  "BT_CONTINUAR", "BT_SI", "BT_FSI", "BT_MIENTRAS", "BT_FMIENTRAS",
  "BT_HACER", "BT_PARA", "BT_FPARA", "BT_HASTA", "BT_ACCION", "BT_FACCION",
  "BT_FUNCION", "BT_FFUNCION", "BT_CERO", "BT_DOSCIENTOSCINCUENTAYCINCO",
  "BT_PUNTO", "BT_SUMA", "BT_RESTA", "BT_DIV", "BT_MOD", "BT_DIVREAL",
  "BT_MULTIPLICACION", "BT_INICIOPARENTESIS", "BT_FINPARENTESIS",
  "BT_ASIGNACION", "BT_COMPOSICIONSECUENCIAL", "BT_DEFINICIONTIPOVARIABLE",
  "BT_ENTONCES", "BT_INICIOARRAY", "BT_FINARRAY", "BT_CREACIONTIPO",
  "BT_SEPARADOR", "BT_SUBRANGO", "BT_MAYOR", "BT_MENOR", "BT_IGUAL",
  "BT_DISTINTO", "BT_MAYORIGUAL", "BT_MENORIGUAL", "BT_OPREL", "BT_SINOSI",
  "$accept", "descAlgoritmo", "cabeceraAlgoritmo", "bloqueAlgoritmo",
  "defGlobales", "defAccionesFunciones", "bloque", "declaraciones",
  "definicionTipo", "definicionConst", "definicionVar", "listaDefsTipo",
  "defTipo", "expresionT", "listaCampos", "listaDefsConstantes",
  "listaDefsVariables", "listaId", "defVariablesInteraccion", "defEntrada",
  "defSalida", "expresion", "operando", "instrucciones", "instruccion",
  "asignacion", "alternativa", "listaOpciones", "iteracion",
  "itCotaVariable", "itCotaFija", "defAccion", "defFuncion",
  "cabeceraAccion", "cabeceraFuncion", "defParForm", "dParForm",
  "llamadaAccion", "llamadaFuncion", "parametrosReales", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327
};
# endif

#define YYPACT_NINF (-112)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,    10,    21,   -22,  -112,    63,    26,    38,    55,    64,
      63,    63,   -10,    47,     7,    92,   103,   108,   110,    71,
      55,    55,    55,   123,   130,    53,    64,    64,  -112,  -112,
     393,  -112,    96,  -112,    -2,   129,   103,  -112,  -112,    82,
    -112,    11,    11,   138,    -6,  -112,   101,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,   106,    55,   116,    55,
     103,   103,   156,   143,  -112,  -112,  -112,  -112,   150,   111,
     393,  -112,  -112,  -112,   122,   132,   146,   393,   103,  -112,
    -112,    11,   151,  -112,  -112,  -112,    11,    11,    11,    11,
      81,    -7,  -112,   124,   148,  -112,   207,    11,    11,    71,
      42,   174,   103,   200,  -112,  -112,  -112,  -112,   162,   205,
      98,  -112,    26,    98,    38,   173,  -112,   115,   176,    11,
     326,   -43,   -43,   158,    11,    11,    11,    11,    11,    11,
      11,    11,    71,    11,    11,    11,    11,    11,    11,    11,
      71,    11,  -112,  -112,   294,   185,  -112,   103,   103,   103,
     184,   190,  -112,   193,    11,   393,  -112,   202,  -112,  -112,
    -112,  -112,    11,  -112,   194,  -112,   326,   319,   -43,   -43,
     149,   149,   196,   196,   197,   -26,   -26,   -26,   -26,   -26,
     -26,  -112,   232,   192,  -112,   212,   213,   214,   216,    42,
     257,   235,   218,    98,  -112,  -112,    11,   242,  -112,    11,
     393,   393,   393,  -112,  -112,   393,  -112,   150,   217,   260,
    -112,   285,  -112,  -112,  -112,  -112,  -112,   261,    71,    71,
     393,   197,   241,  -112,  -112,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    34,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,    16,     0,    17,     0,     0,    34,     2,     4,    66,
      72,     0,     0,     0,     0,    11,    71,    73,    74,    75,
      82,    81,    76,    12,    13,    14,     0,    15,     0,    15,
      34,    34,     0,    37,    39,     8,     9,    23,    30,     0,
       0,    26,    27,    28,     0,     0,     0,     0,     0,    18,
      33,    99,    66,    58,    59,    52,     0,     0,     0,     0,
       0,    43,    42,     0,     0,    69,     0,     0,     0,     0,
      91,     0,    34,     0,    40,    41,     3,    38,     0,     0,
       0,    25,    20,     0,    32,     0,    36,    98,     0,    99,
      57,    53,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,    77,     0,    70,     0,     0,     0,
       0,    90,    85,     0,     0,     0,    21,     0,    19,    24,
      31,    35,    99,    95,     0,    50,    55,    56,    44,    45,
      48,    49,    47,    46,    80,    60,    61,    62,    63,    64,
      65,    54,     0,     0,    68,     0,     0,     0,     0,    91,
       0,     0,     0,     0,    97,    96,     0,     0,    83,     0,
       0,     0,     0,    87,    89,     0,    86,    30,     0,     0,
      78,     0,    92,    93,    94,    88,    29,     0,     0,     0,
       0,    80,     0,    22,    79,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -112,  -112,   114,   100,    58,    61,     8,    27,
    -112,   169,   -63,   -93,    75,   177,   -31,   -74,  -112,  -112,
     229,   -40,   -19,   -96,  -112,  -112,  -112,    72,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,   105,  -112,  -112,  -112,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    74,    75,   109,    15,    35,    36,    62,    63,
      64,   117,    91,    45,    46,    47,    48,   197,    49,    50,
      51,    26,    27,    57,    59,   150,   151,    52,    92,   118
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    90,    93,   146,   116,    80,     1,   111,   164,   130,
     131,    95,    95,    10,   115,     3,    82,   157,    10,    10,
     159,     4,   126,   127,   128,   129,   130,   131,   139,   104,
     105,    12,    11,    83,    84,     5,   174,    11,    11,    85,
      96,    96,    86,    14,   182,   139,   120,   121,   122,   123,
      97,   194,    30,    98,    98,    31,    77,   144,   145,    87,
      88,    78,     6,    32,     7,    89,    16,   147,   148,   149,
       6,   153,     7,   185,   186,   187,    39,   143,    60,    61,
      44,    53,    54,    55,   166,   167,   168,   169,   170,   171,
     172,   173,   192,   175,   176,   177,   178,   179,   180,   181,
     208,   183,    33,    40,    41,    23,    42,    24,    34,    43,
     124,   125,    37,    44,   191,   101,    38,   103,    72,    73,
      76,    44,   221,   222,    28,    29,    65,    66,    56,   126,
     127,   128,   129,   130,   131,    58,    81,   212,   213,   214,
     132,    79,   215,    94,   124,   125,   133,   134,   135,   136,
     137,   138,   139,   124,   125,   108,   209,   223,    99,   211,
     100,   140,   106,   126,   127,   128,   129,   130,   131,    61,
     102,   110,   126,   127,   128,   129,   130,   131,   162,   112,
     133,   134,   135,   136,   137,   138,   139,   124,   125,   133,
     134,   135,   136,   137,   138,   139,   113,   126,   127,    44,
      44,   130,   131,   114,   141,   119,   126,   127,   128,   129,
     130,   131,   142,   165,   124,   125,   152,   154,   155,   156,
     139,   124,   125,   133,   134,   135,   136,   137,   138,   139,
     161,   163,   199,   126,   127,   128,   129,   130,   131,   188,
     126,   127,   128,   129,   130,   131,   184,   189,   190,   195,
     133,   134,   135,   136,   137,   138,   139,   133,   134,   135,
     136,   137,   138,   139,   124,   125,   193,   139,   198,   196,
     200,   201,   202,   203,   205,   207,   210,   220,   217,   206,
     225,   158,   216,   126,   127,   128,   129,   130,   131,   124,
     125,   160,   107,   224,   204,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,     0,   126,   127,
     128,   129,   130,   131,   124,   125,     0,     0,     0,   218,
       0,     0,   219,   124,   125,   133,   134,   135,   136,   137,
     138,   139,     0,   126,   127,   128,   129,   130,   131,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   124,     0,
     133,   134,   135,   136,   137,   138,   139,     0,     0,   133,
     134,   135,   136,   137,   138,   139,     0,   126,   127,   128,
     129,   130,   131,     0,   126,   127,   128,   129,   130,   131,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   133,   134,   135,   136,   137,   138,   139,    67,     0,
       0,     0,     0,     0,     0,     0,    68,     0,    69,     0,
       0,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      19,    41,    42,    99,    78,    36,     3,    70,   119,    52,
      53,    18,    18,     5,    77,     5,     5,   110,    10,    11,
     113,     0,    48,    49,    50,    51,    52,    53,    71,    60,
      61,     5,     5,    22,    23,    57,   132,    10,    11,    28,
      47,    47,    31,     5,   140,    71,    86,    87,    88,    89,
      56,   162,    62,    60,    60,     8,    58,    97,    98,    48,
      49,    63,     7,    56,     9,    54,    11,    25,    26,    27,
       7,   102,     9,   147,   148,   149,     5,    96,    25,    26,
      99,    20,    21,    22,   124,   125,   126,   127,   128,   129,
     130,   131,   155,   133,   134,   135,   136,   137,   138,   139,
     193,   141,    10,    32,    33,    41,    35,    43,     5,    38,
      29,    30,     4,   132,   154,    57,     6,    59,    20,    21,
      24,   140,   218,   219,    10,    11,    26,    27,     5,    48,
      49,    50,    51,    52,    53,     5,    54,   200,   201,   202,
      59,    12,   205,     5,    29,    30,    65,    66,    67,    68,
      69,    70,    71,    29,    30,     5,   196,   220,    57,   199,
      54,    37,     6,    48,    49,    50,    51,    52,    53,    26,
      54,    60,    48,    49,    50,    51,    52,    53,    63,    57,
      65,    66,    67,    68,    69,    70,    71,    29,    30,    65,
      66,    67,    68,    69,    70,    71,    64,    48,    49,   218,
     219,    52,    53,    57,    56,    54,    48,    49,    50,    51,
      52,    53,     5,    55,    29,    30,    42,    17,    56,    14,
      71,    29,    30,    65,    66,    67,    68,    69,    70,    71,
      57,    55,    40,    48,    49,    50,    51,    52,    53,    55,
      48,    49,    50,    51,    52,    53,    61,    57,    55,    55,
      65,    66,    67,    68,    69,    70,    71,    65,    66,    67,
      68,    69,    70,    71,    29,    30,    64,    71,    36,    72,
      58,    58,    58,    57,    17,    57,    34,    16,    61,    44,
      39,   112,   207,    48,    49,    50,    51,    52,    53,    29,
      30,   114,    63,   221,   189,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    48,    49,
      50,    51,    52,    53,    29,    30,    -1,    -1,    -1,    59,
      -1,    -1,    37,    29,    30,    65,    66,    67,    68,    69,
      70,    71,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    29,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    48,    49,    50,
      51,    52,    53,    -1,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    74,     5,     0,    57,     7,     9,    75,    77,
      81,    82,     5,    84,     5,    88,    11,    76,    79,    80,
      81,    82,    83,    41,    43,    78,   104,   105,    77,    77,
      62,     8,    56,    10,     5,    89,    90,     4,     6,     5,
      32,    33,    35,    38,    95,    96,    97,    98,    99,   101,
     102,   103,   110,    80,    80,    80,     5,   106,     5,   107,
      25,    26,    91,    92,    93,    78,    78,     5,    13,    15,
      18,    19,    20,    21,    85,    86,    24,    58,    63,    12,
      89,    54,     5,    22,    23,    28,    31,    48,    49,    54,
      94,    95,   111,    94,     5,    18,    47,    56,    60,    57,
      54,    79,    54,    79,    89,    89,     6,    93,     5,    87,
      60,    85,    57,    64,    57,    85,    90,    94,   112,    54,
      94,    94,    94,    94,    29,    30,    48,    49,    50,    51,
      52,    53,    59,    65,    66,    67,    68,    69,    70,    71,
      37,    56,     5,    95,    94,    94,    96,    25,    26,    27,
     108,   109,    42,    89,    17,    56,    14,    86,    84,    86,
      88,    57,    63,    55,   112,    55,    94,    94,    94,    94,
      94,    94,    94,    94,    96,    94,    94,    94,    94,    94,
      94,    94,    96,    94,    61,    90,    90,    90,    55,    57,
      55,    94,    85,    64,   112,    55,    72,   100,    36,    40,
      58,    58,    58,    57,   108,    17,    44,    57,    86,    94,
      34,    94,    85,    85,    85,    85,    87,    61,    59,    37,
      16,    96,    96,    85,   100,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    75,    76,    77,    77,    77,    78,    78,
      78,    79,    80,    80,    80,    80,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      92,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    99,   100,
     100,   101,   101,   102,   103,   104,   105,   106,   107,   108,
     108,   108,   109,   109,   109,   110,   111,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     3,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     2,     0,     4,     3,     1,     2,     1,
       2,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     2,     3,     3,     3,     2,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     4,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     5,     9,     4,     6,     5,     6,     3,
       1,     0,     4,     4,     4,     4,     4,     3,     1,     0
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
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
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
  case 2:
#line 113 "parser.y"
                                                                                                                       {printf("buenos dias\n");}
#line 1590 "parser.tab.c"
    break;

  case 3:
#line 115 "parser.y"
                                                                                           {}
#line 1596 "parser.tab.c"
    break;

  case 4:
#line 116 "parser.y"
                                       {}
#line 1602 "parser.tab.c"
    break;

  case 5:
#line 117 "parser.y"
                                         {}
#line 1608 "parser.tab.c"
    break;

  case 6:
#line 118 "parser.y"
                                          {}
#line 1614 "parser.tab.c"
    break;

  case 7:
#line 119 "parser.y"
                    {}
#line 1620 "parser.tab.c"
    break;

  case 8:
#line 121 "parser.y"
                                                      {}
#line 1626 "parser.tab.c"
    break;

  case 9:
#line 122 "parser.y"
                                                       {}
#line 1632 "parser.tab.c"
    break;

  case 10:
#line 123 "parser.y"
                             {}
#line 1638 "parser.tab.c"
    break;

  case 11:
#line 125 "parser.y"
                                     {}
#line 1644 "parser.tab.c"
    break;

  case 12:
#line 126 "parser.y"
                                             {}
#line 1650 "parser.tab.c"
    break;

  case 13:
#line 127 "parser.y"
                                            {}
#line 1656 "parser.tab.c"
    break;

  case 14:
#line 128 "parser.y"
                                          {}
#line 1662 "parser.tab.c"
    break;

  case 15:
#line 129 "parser.y"
                    {}
#line 1668 "parser.tab.c"
    break;

  case 16:
#line 132 "parser.y"
                                                {}
#line 1674 "parser.tab.c"
    break;

  case 17:
#line 133 "parser.y"
                                                         {}
#line 1680 "parser.tab.c"
    break;

  case 18:
#line 134 "parser.y"
                                                  {}
#line 1686 "parser.tab.c"
    break;

  case 19:
#line 136 "parser.y"
                                                                                                {}
#line 1692 "parser.tab.c"
    break;

  case 20:
#line 137 "parser.y"
                                                                {}
#line 1698 "parser.tab.c"
    break;

  case 21:
#line 139 "parser.y"
                                         {}
#line 1704 "parser.tab.c"
    break;

  case 22:
#line 140 "parser.y"
                                                                                              {}
#line 1710 "parser.tab.c"
    break;

  case 23:
#line 142 "parser.y"
                           {printf(" %s\n",yylval.str);}
#line 1716 "parser.tab.c"
    break;

  case 24:
#line 143 "parser.y"
                                            {}
#line 1722 "parser.tab.c"
    break;

  case 25:
#line 144 "parser.y"
                         {}
#line 1728 "parser.tab.c"
    break;

  case 26:
#line 145 "parser.y"
                      {}
#line 1734 "parser.tab.c"
    break;

  case 27:
#line 147 "parser.y"
                              {}
#line 1740 "parser.tab.c"
    break;

  case 28:
#line 148 "parser.y"
                                {}
#line 1746 "parser.tab.c"
    break;

  case 29:
#line 150 "parser.y"
                                                                                          {}
#line 1752 "parser.tab.c"
    break;

  case 30:
#line 151 "parser.y"
                    {}
#line 1758 "parser.tab.c"
    break;

  case 31:
#line 154 "parser.y"
                                                                                                             {}
#line 1764 "parser.tab.c"
    break;

  case 32:
#line 155 "parser.y"
                            {}
#line 1770 "parser.tab.c"
    break;

  case 33:
#line 158 "parser.y"
                                                {}
#line 1776 "parser.tab.c"
    break;

  case 34:
#line 159 "parser.y"
                           {}
#line 1782 "parser.tab.c"
    break;

  case 35:
#line 161 "parser.y"
                                                                                      {}
#line 1788 "parser.tab.c"
    break;

  case 36:
#line 162 "parser.y"
                                                {}
#line 1794 "parser.tab.c"
    break;

  case 37:
#line 164 "parser.y"
                                     {}
#line 1800 "parser.tab.c"
    break;

  case 38:
#line 165 "parser.y"
                                               {}
#line 1806 "parser.tab.c"
    break;

  case 39:
#line 166 "parser.y"
                                    {}
#line 1812 "parser.tab.c"
    break;

  case 40:
#line 169 "parser.y"
                                       {}
#line 1818 "parser.tab.c"
    break;

  case 41:
#line 170 "parser.y"
                                      {}
#line 1824 "parser.tab.c"
    break;

  case 42:
#line 173 "parser.y"
                           {}
#line 1830 "parser.tab.c"
    break;

  case 43:
#line 174 "parser.y"
               {}
#line 1836 "parser.tab.c"
    break;

  case 44:
#line 175 "parser.y"
                                  {}
#line 1842 "parser.tab.c"
    break;

  case 45:
#line 176 "parser.y"
                                   {}
#line 1848 "parser.tab.c"
    break;

  case 46:
#line 177 "parser.y"
                                            {}
#line 1854 "parser.tab.c"
    break;

  case 47:
#line 178 "parser.y"
                                     {}
#line 1860 "parser.tab.c"
    break;

  case 48:
#line 179 "parser.y"
                                 {}
#line 1866 "parser.tab.c"
    break;

  case 49:
#line 180 "parser.y"
                                 {}
#line 1872 "parser.tab.c"
    break;

  case 50:
#line 181 "parser.y"
                                                     {}
#line 1878 "parser.tab.c"
    break;

  case 51:
#line 182 "parser.y"
                         {}
#line 1884 "parser.tab.c"
    break;

  case 52:
#line 183 "parser.y"
                         {}
#line 1890 "parser.tab.c"
    break;

  case 53:
#line 184 "parser.y"
                        {}
#line 1896 "parser.tab.c"
    break;

  case 54:
#line 185 "parser.y"
                                   {}
#line 1902 "parser.tab.c"
    break;

  case 55:
#line 186 "parser.y"
                               {}
#line 1908 "parser.tab.c"
    break;

  case 56:
#line 187 "parser.y"
                               {}
#line 1914 "parser.tab.c"
    break;

  case 57:
#line 188 "parser.y"
                      {}
#line 1920 "parser.tab.c"
    break;

  case 58:
#line 189 "parser.y"
                   {}
#line 1926 "parser.tab.c"
    break;

  case 59:
#line 190 "parser.y"
               {}
#line 1932 "parser.tab.c"
    break;

  case 60:
#line 191 "parser.y"
                                   {}
#line 1938 "parser.tab.c"
    break;

  case 61:
#line 192 "parser.y"
                                   {}
#line 1944 "parser.tab.c"
    break;

  case 62:
#line 193 "parser.y"
                                   {}
#line 1950 "parser.tab.c"
    break;

  case 63:
#line 194 "parser.y"
                                      {}
#line 1956 "parser.tab.c"
    break;

  case 64:
#line 195 "parser.y"
                                        {}
#line 1962 "parser.tab.c"
    break;

  case 65:
#line 196 "parser.y"
                                        {}
#line 1968 "parser.tab.c"
    break;

  case 66:
#line 198 "parser.y"
                            {}
#line 1974 "parser.tab.c"
    break;

  case 67:
#line 199 "parser.y"
                                 {}
#line 1980 "parser.tab.c"
    break;

  case 68:
#line 200 "parser.y"
                                                    {}
#line 1986 "parser.tab.c"
    break;

  case 69:
#line 201 "parser.y"
                      {}
#line 1992 "parser.tab.c"
    break;

  case 70:
#line 206 "parser.y"
                                                                   {}
#line 1998 "parser.tab.c"
    break;

  case 71:
#line 207 "parser.y"
                          {}
#line 2004 "parser.tab.c"
    break;

  case 72:
#line 209 "parser.y"
                           {}
#line 2010 "parser.tab.c"
    break;

  case 73:
#line 210 "parser.y"
                         {}
#line 2016 "parser.tab.c"
    break;

  case 74:
#line 211 "parser.y"
                          {}
#line 2022 "parser.tab.c"
    break;

  case 75:
#line 212 "parser.y"
                        {}
#line 2028 "parser.tab.c"
    break;

  case 76:
#line 213 "parser.y"
                            {}
#line 2034 "parser.tab.c"
    break;

  case 77:
#line 215 "parser.y"
                                              {}
#line 2040 "parser.tab.c"
    break;

  case 78:
#line 216 "parser.y"
                                                                             {}
#line 2046 "parser.tab.c"
    break;

  case 79:
#line 217 "parser.y"
                                                                            {}
#line 2052 "parser.tab.c"
    break;

  case 80:
#line 218 "parser.y"
                                  {}
#line 2058 "parser.tab.c"
    break;

  case 81:
#line 220 "parser.y"
                       {}
#line 2064 "parser.tab.c"
    break;

  case 82:
#line 221 "parser.y"
                                   {}
#line 2070 "parser.tab.c"
    break;

  case 83:
#line 223 "parser.y"
                                                                           {}
#line 2076 "parser.tab.c"
    break;

  case 84:
#line 224 "parser.y"
                                                                                                                 {}
#line 2082 "parser.tab.c"
    break;

  case 85:
#line 227 "parser.y"
                                                       {}
#line 2088 "parser.tab.c"
    break;

  case 86:
#line 228 "parser.y"
                                                                            {}
#line 2094 "parser.tab.c"
    break;

  case 87:
#line 229 "parser.y"
                                                                                                           {}
#line 2100 "parser.tab.c"
    break;

  case 88:
#line 230 "parser.y"
                                                                                                          {}
#line 2106 "parser.tab.c"
    break;

  case 89:
#line 231 "parser.y"
                                                          {}
#line 2112 "parser.tab.c"
    break;

  case 90:
#line 232 "parser.y"
                              {}
#line 2118 "parser.tab.c"
    break;

  case 91:
#line 233 "parser.y"
                           {}
#line 2124 "parser.tab.c"
    break;

  case 92:
#line 235 "parser.y"
                                                            {}
#line 2130 "parser.tab.c"
    break;

  case 93:
#line 236 "parser.y"
                                                                    {}
#line 2136 "parser.tab.c"
    break;

  case 94:
#line 237 "parser.y"
                                                                       {}
#line 2142 "parser.tab.c"
    break;

  case 95:
#line 240 "parser.y"
                                                                                       {}
#line 2148 "parser.tab.c"
    break;

  case 96:
#line 241 "parser.y"
                                                                                        {}
#line 2154 "parser.tab.c"
    break;

  case 97:
#line 242 "parser.y"
                                                           {}
#line 2160 "parser.tab.c"
    break;

  case 98:
#line 243 "parser.y"
                                             {}
#line 2166 "parser.tab.c"
    break;

  case 99:
#line 244 "parser.y"
                                         {}
#line 2172 "parser.tab.c"
    break;


#line 2176 "parser.tab.c"

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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 247 "parser.y"


int main(int argc, char **argv){

	#ifdef YYDEBUG
		int yydebug = 1;
	#endif
	++argv, --argc;

	if(argc > 0)
		yyin = fopen(argv[0],"r");
	else
		yyin = stdin;
	yyparse();
}

void yyerror(const char *s){
	printf("ERROR %s\n", s);
}
