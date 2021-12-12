/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     BT_LITERALCARACTER = 275,
     BT_LITERALBOOLEANO = 276,
     BT_LITERAL = 277,
     BT_ENT = 278,
     BT_SAL = 279,
     BT_ENTSAL = 280,
     BT_LITERALNUMERICO = 281,
     BT_LITERALENTERO = 282,
     BT_LITERALREAL = 283,
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
/* Tokens.  */
#define BT_ALGORITMO 258
#define BT_FALGORITMO 259
#define BT_IDENTIFICADOR 260
#define BT_COMENTARIO 261
#define BT_TIPO 262
#define BT_FTIPO 263
#define BT_CONST 264
#define BT_FCONST 265
#define BT_VAR 266
#define BT_FVAR 267
#define BT_TUPLA 268
#define BT_FTUPLA 269
#define BT_TABLA 270
#define BT_DE 271
#define BT_DEV 272
#define BT_REF 273
#define BT_TIPOBASE 274
#define BT_LITERALCARACTER 275
#define BT_LITERALBOOLEANO 276
#define BT_LITERAL 277
#define BT_ENT 278
#define BT_SAL 279
#define BT_ENTSAL 280
#define BT_LITERALNUMERICO 281
#define BT_LITERALENTERO 282
#define BT_LITERALREAL 283
#define BT_Y 284
#define BT_O 285
#define BT_NO 286
#define BT_CONTINUAR 287
#define BT_SI 288
#define BT_FSI 289
#define BT_MIENTRAS 290
#define BT_FMIENTRAS 291
#define BT_HACER 292
#define BT_PARA 293
#define BT_FPARA 294
#define BT_HASTA 295
#define BT_ACCION 296
#define BT_FACCION 297
#define BT_FUNCION 298
#define BT_FFUNCION 299
#define BT_CERO 300
#define BT_DOSCIENTOSCINCUENTAYCINCO 301
#define BT_PUNTO 302
#define BT_SUMA 303
#define BT_RESTA 304
#define BT_DIV 305
#define BT_MOD 306
#define BT_DIVREAL 307
#define BT_MULTIPLICACION 308
#define BT_INICIOPARENTESIS 309
#define BT_FINPARENTESIS 310
#define BT_ASIGNACION 311
#define BT_COMPOSICIONSECUENCIAL 312
#define BT_DEFINICIONTIPOVARIABLE 313
#define BT_ENTONCES 314
#define BT_INICIOARRAY 315
#define BT_FINARRAY 316
#define BT_CREACIONTIPO 317
#define BT_SEPARADOR 318
#define BT_SUBRANGO 319
#define BT_MAYOR 320
#define BT_MENOR 321
#define BT_IGUAL 322
#define BT_DISTINTO 323
#define BT_MAYORIGUAL 324
#define BT_MENORIGUAL 325
#define BT_OPREL 326
#define BT_SINOSI 327




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include <ctype.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "tabla_de_simbolos.h"
	#include "tabla_de_cuadruplas.h"

	#define MAX_LISTA 1000

	int yylex();
	void yyerror(const char *s);
	extern FILE *yyin;
	tabla_de_simbolos* tabla_simbolos;
	tabla_de_cuadruplas* tabla_cuadruplas;
	int ambito = LOCAL;





/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "parser.y"
{
	int intval;
	float floatval;
	char charval;
	char *strval;
	struct simbolo * simval;
	struct dir_elemento* dirval;
	struct expresion* expval;
	struct lista* listval;
}
/* Line 193 of yacc.c.  */
#line 271 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 284 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    15,    18,    21,    24,    25,    28,
      31,    32,    35,    38,    41,    44,    45,    49,    53,    58,
      64,    65,    69,    78,    80,    84,    87,    89,    91,    93,
      99,   100,   106,   112,   113,   116,   117,   122,   126,   128,
     131,   133,   137,   141,   142,   143,   144,   146,   148,   152,
     156,   160,   164,   168,   172,   176,   179,   181,   183,   185,
     188,   193,   198,   201,   203,   207,   211,   215,   219,   223,
     227,   228,   229,   231,   235,   240,   243,   248,   250,   252,
     254,   256,   258,   260,   264,   274,   283,   284,   286,   288,
     296,   308,   313,   320,   326,   333,   337,   339,   340,   345,
     350,   355,   360,   365,   369,   371
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      74,     0,    -1,     3,     5,    57,    75,    76,     4,    -1,
      77,    78,    91,     6,    -1,    79,     6,    -1,    81,    77,
      -1,    82,    77,    -1,    -1,   109,    78,    -1,   110,    78,
      -1,    -1,    80,   101,    -1,    81,    80,    -1,    82,    80,
      -1,    83,    80,    -1,    -1,     7,    84,     8,    -1,     9,
      88,    10,    -1,    11,    96,    89,    12,    -1,     5,    62,
      85,    57,    84,    -1,    -1,    13,    87,    14,    -1,    15,
      60,    86,    64,    86,    61,    16,    85,    -1,     5,    -1,
      86,    64,    86,    -1,    18,    85,    -1,    19,    -1,    27,
      -1,    20,    -1,     5,    56,    85,    57,    87,    -1,    -1,
       5,    56,    27,    57,    88,    -1,     5,    56,    28,    57,
      88,    -1,    -1,    90,    89,    -1,    -1,     5,    58,    85,
      57,    -1,     5,    63,    90,    -1,    92,    -1,    92,    93,
      -1,    93,    -1,    23,    94,    89,    -1,    24,    95,    89,
      -1,    -1,    -1,    -1,   116,    -1,   100,    -1,    97,    48,
      97,    -1,    97,    49,    97,    -1,    97,    53,    97,    -1,
      97,    52,    97,    -1,    97,    50,    97,    -1,    97,    51,
      97,    -1,    54,    97,    55,    -1,    49,    97,    -1,    26,
      -1,    28,    -1,    27,    -1,    48,    97,    -1,    97,    29,
      98,    97,    -1,    97,    30,    98,    97,    -1,    31,    97,
      -1,    21,    -1,    97,    65,    97,    -1,    97,    66,    97,
      -1,    97,    67,    97,    -1,    97,    68,    97,    -1,    97,
      69,    97,    -1,    97,    70,    97,    -1,    -1,    -1,     5,
      -1,   100,    47,   100,    -1,   100,    60,    97,    61,    -1,
     100,    18,    -1,   102,    57,    98,   101,    -1,   102,    -1,
      32,    -1,   103,    -1,   104,    -1,   106,    -1,   115,    -1,
     100,    56,    97,    -1,    33,    97,    59,    98,   101,    99,
      98,   105,    34,    -1,    72,    97,    59,    98,   101,    99,
      98,   105,    -1,    -1,   108,    -1,   107,    -1,    35,    98,
      97,    37,    98,   101,    36,    -1,    38,     5,    56,    97,
      40,    97,    37,    99,    98,   101,    39,    -1,    41,   111,
      79,    42,    -1,    43,   112,    79,    17,    97,    44,    -1,
       5,    54,   113,    55,    57,    -1,     5,    54,    89,    55,
      17,    85,    -1,   114,    57,   113,    -1,   114,    -1,    -1,
      23,    90,    58,    85,    -1,    24,    90,    58,    85,    -1,
      25,    90,    58,    85,    -1,     5,    54,   117,    55,    -1,
       5,    54,   117,    55,    -1,    97,    63,   117,    -1,    97,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   136,   139,   143,   144,   145,   147,   148,
     149,   151,   162,   163,   164,   165,   168,   169,   170,   172,
     173,   175,   176,   177,   178,   179,   180,   182,   183,   185,
     186,   189,   192,   196,   201,   202,   204,   232,   242,   243,
     244,   247,   248,   250,   255,   261,   268,   269,   311,   485,
     657,   835,  1018,  1071,  1124,  1125,  1153,  1155,  1163,  1171,
    1200,  1245,  1294,  1326,  1338,  1402,  1464,  1526,  1586,  1646,
    1707,  1711,  1715,  1718,  1719,  1720,  1725,  1733,  1739,  1745,
    1749,  1756,  1760,  1762,  1861,  1880,  1897,  1901,  1902,  1904,
    1921,  1949,  1950,  1951,  1952,  1953,  1954,  1955,  1957,  1958,
    1959,  1962,  1963,  1964,  1965,  1966
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BT_ALGORITMO", "BT_FALGORITMO",
  "BT_IDENTIFICADOR", "BT_COMENTARIO", "BT_TIPO", "BT_FTIPO", "BT_CONST",
  "BT_FCONST", "BT_VAR", "BT_FVAR", "BT_TUPLA", "BT_FTUPLA", "BT_TABLA",
  "BT_DE", "BT_DEV", "BT_REF", "BT_TIPOBASE", "BT_LITERALCARACTER",
  "BT_LITERALBOOLEANO", "BT_LITERAL", "BT_ENT", "BT_SAL", "BT_ENTSAL",
  "BT_LITERALNUMERICO", "BT_LITERALENTERO", "BT_LITERALREAL", "BT_Y",
  "BT_O", "BT_NO", "BT_CONTINUAR", "BT_SI", "BT_FSI", "BT_MIENTRAS",
  "BT_FMIENTRAS", "BT_HACER", "BT_PARA", "BT_FPARA", "BT_HASTA",
  "BT_ACCION", "BT_FACCION", "BT_FUNCION", "BT_FFUNCION", "BT_CERO",
  "BT_DOSCIENTOSCINCUENTAYCINCO", "BT_PUNTO", "BT_SUMA", "BT_RESTA",
  "BT_DIV", "BT_MOD", "BT_DIVREAL", "BT_MULTIPLICACION",
  "BT_INICIOPARENTESIS", "BT_FINPARENTESIS", "BT_ASIGNACION",
  "BT_COMPOSICIONSECUENCIAL", "BT_DEFINICIONTIPOVARIABLE", "BT_ENTONCES",
  "BT_INICIOARRAY", "BT_FINARRAY", "BT_CREACIONTIPO", "BT_SEPARADOR",
  "BT_SUBRANGO", "BT_MAYOR", "BT_MENOR", "BT_IGUAL", "BT_DISTINTO",
  "BT_MAYORIGUAL", "BT_MENORIGUAL", "BT_OPREL", "BT_SINOSI", "$accept",
  "descAlgoritmo", "cabeceraAlgoritmo", "bloqueAlgoritmo", "defGlobales",
  "defAccionesFunciones", "bloque", "declaraciones", "definicionTipo",
  "definicionConst", "definicionVar", "listaDefsTipo", "defTipo",
  "expresionT", "listaCampos", "listaDefsConstantes", "listaDefsVariables",
  "listaId", "defVariablesInteraccion", "defEntrada", "defSalida",
  "TIPO_ENTRADA", "TIPO_SALIDA", "TIPO_LOCAL", "expresion", "M", "N",
  "operando", "instrucciones", "instruccion", "asignacion", "alternativa",
  "listaOpciones", "iteracion", "itCotaVariable", "itCotaFija",
  "defAccion", "defFuncion", "cabeceraAccion", "cabeceraFuncion",
  "defParForm", "dParForm", "llamadaAccion", "llamadaFuncion",
  "parametrosReales", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    76,    77,    77,    77,    78,    78,
      78,    79,    80,    80,    80,    80,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      91,    92,    93,    94,    95,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      98,    99,   100,   100,   100,   100,   101,   101,   102,   102,
     102,   102,   102,   103,   104,   105,   105,   106,   106,   107,
     108,   109,   110,   111,   112,   113,   113,   113,   114,   114,
     114,   115,   116,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     5,     0,     2,     0,     4,     3,     1,     2,
       1,     3,     3,     0,     0,     0,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     2,
       4,     4,     2,     1,     3,     3,     3,     3,     3,     3,
       0,     0,     1,     3,     4,     2,     4,     1,     1,     1,
       1,     1,     1,     3,     9,     8,     0,     1,     1,     7,
      11,     4,     6,     5,     6,     3,     1,     0,     4,     4,
       4,     4,     4,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    33,    15,    10,
       7,     7,     0,     0,     0,     0,    45,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,    16,     0,    17,    35,     2,     4,    72,    78,     0,
      70,     0,     0,    11,    77,    79,    80,    81,    88,    87,
      82,    12,    13,    14,     0,    15,     0,    15,    43,    44,
       0,    38,    40,     8,     9,    23,    30,     0,     0,    26,
      28,    27,     0,     0,     0,     0,     0,     0,    35,   105,
      72,    63,    56,    58,    57,     0,     0,     0,     0,     0,
      47,    46,     0,     0,    75,     0,     0,     0,    70,    97,
       0,    35,     0,    35,    35,     3,    39,     0,     0,     0,
      25,    20,     0,    33,    33,     0,     0,    18,    34,   104,
       0,   105,    62,    59,    55,     0,    70,    70,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    83,     0,     0,     0,     0,
       0,     0,    96,    91,     0,     0,    41,    42,     0,    21,
       0,    19,    24,    31,    32,     0,    37,   105,   101,     0,
      54,     0,     0,    48,    49,    52,    53,    51,    50,     0,
      64,    65,    66,    67,    68,    69,    70,     0,    74,    76,
       0,     0,     0,     0,    97,     0,     0,     0,     0,    36,
     103,   102,    60,    61,    71,     0,     0,     0,     0,     0,
      93,    95,     0,    92,    30,     0,    70,     0,     0,    98,
      99,   100,    94,    29,     0,    86,    89,    71,     0,     0,
       0,    70,    22,     0,    84,     0,    70,     0,     0,    90,
      71,    70,    86,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    72,    73,   108,    15,    77,    78,    60,    61,
      62,   103,   104,    34,   119,    92,   216,    90,    43,    44,
      45,    46,   230,    47,    48,    49,    26,    27,    55,    57,
     151,   152,    50,    91,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
      10,    41,    52,    48,  -221,    57,    62,    67,   102,    65,
      57,    57,    50,   116,    71,   119,  -221,   127,   126,    36,
     102,   102,   102,   133,   134,     2,    65,    65,  -221,  -221,
      60,  -221,    15,  -221,   136,  -221,  -221,    88,  -221,   109,
    -221,   138,   -16,  -221,    87,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,    94,   102,    95,   102,  -221,  -221,
     145,   129,  -221,  -221,  -221,  -221,   149,    96,    60,  -221,
    -221,  -221,   104,    91,   105,   107,   -30,   147,   136,   109,
     111,  -221,  -221,  -221,  -221,   109,   109,   109,   109,   144,
     -15,  -221,   109,   113,  -221,   165,   109,   109,  -221,   -13,
     137,   136,   154,   136,   136,  -221,  -221,   120,   161,   -12,
    -221,    62,   -12,    67,    67,    60,   136,  -221,  -221,   172,
     123,   109,   256,   -17,   -17,   178,  -221,  -221,   109,   109,
     109,   109,   109,   109,  -221,   109,   109,   109,   109,   109,
     109,   220,   109,  -221,  -221,   365,   230,    36,   136,   136,
     136,   125,   124,  -221,   128,   109,  -221,  -221,    60,  -221,
     118,  -221,  -221,  -221,  -221,   130,  -221,   109,  -221,   135,
    -221,   109,   109,   -17,   -17,     8,     8,  -221,  -221,    36,
      33,    33,    33,    33,    33,    33,  -221,   263,  -221,  -221,
     131,   140,   141,   143,   -13,   167,   290,   148,   -12,  -221,
    -221,  -221,   256,   371,  -221,    36,   109,    60,    60,    60,
    -221,  -221,    60,  -221,   149,   156,  -221,   152,   315,  -221,
    -221,  -221,  -221,  -221,   169,   132,  -221,  -221,    60,   109,
     181,  -221,  -221,   340,  -221,    36,  -221,   179,    36,  -221,
    -221,  -221,   132,  -221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,    78,    89,    66,    98,    11,    13,
    -221,   121,   -62,   -95,    -8,    12,   -74,  -111,  -221,  -221,
     173,  -221,  -221,  -221,   -38,   -64,  -220,   -19,  -128,  -221,
    -221,  -221,    -6,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
      58,  -221,  -221,  -221,  -112
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      42,    89,    94,    94,   118,   166,   110,   231,    70,   169,
     148,   149,   150,     1,   160,    71,    10,   162,    11,   189,
     241,    10,    10,    11,    11,    58,    59,   154,   115,   156,
     157,    95,    95,   116,   147,   132,   133,   190,   191,   192,
      96,    37,    74,    75,    97,    97,     3,   122,   123,   124,
     125,   204,     4,   165,   141,   200,   128,   129,   145,   146,
     132,   133,   171,   172,     6,    65,     7,    12,    38,    39,
     179,    40,    14,    66,    41,    67,   144,   217,    68,    69,
      70,   128,   129,   130,   131,   132,   133,    71,    28,    29,
     173,   174,   175,   176,   177,   178,   197,   180,   181,   182,
     183,   184,   185,   215,   187,     5,    23,   237,    24,     6,
     240,     7,    30,    16,    80,    63,    64,   196,    51,    52,
      53,   100,   205,   102,    31,   163,   164,    32,    42,    33,
      81,    35,    36,   202,   203,    82,    83,    84,    54,    56,
      85,    76,    79,    93,    98,   219,   220,   221,    99,   101,
     222,   105,   225,    59,   107,   112,   109,    86,    87,   117,
      42,   111,   113,    88,   114,   121,   232,   235,   218,   142,
     143,   155,   238,   126,   127,   159,   158,   242,   168,   153,
     193,   194,   198,   195,   212,   228,    42,   199,   226,   207,
     201,   233,   128,   129,   130,   131,   132,   133,   208,   209,
     210,   126,   127,   134,   229,   214,   223,   126,   127,   135,
     136,   137,   138,   139,   140,   234,    42,   224,   239,    42,
     128,   129,   130,   131,   132,   133,   128,   129,   130,   131,
     132,   133,   161,   170,   106,   167,   243,   135,   136,   137,
     138,   139,   140,   135,   136,   137,   138,   139,   140,   126,
     127,     0,   211,     0,     0,     0,     0,   186,     0,   126,
     127,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,     0,   135,   136,   137,   138,   139,
     140,   188,   126,   127,     0,   135,   136,   137,   138,   139,
     140,     0,     0,   206,   128,   129,   130,   131,   132,   133,
       0,   128,   129,   130,   131,   132,   133,     0,     0,   126,
     127,   135,   136,   137,   138,   139,   140,     0,   135,   136,
     137,   138,   139,   140,   213,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   126,   127,     0,     0,     0,     0,
       0,     0,   227,     0,     0,   135,   136,   137,   138,   139,
     140,     0,     0,   128,   129,   130,   131,   132,   133,   126,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,     0,     0,   128,   129,
     130,   131,   132,   133,   126,   127,     0,     0,     0,   236,
     126,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     140,     0,     0,   128,   129,   130,   131,   132,   133,   128,
     129,   130,   131,   132,   133,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   135,   136,   137,   138,
     139,   140
};

static const yytype_int16 yycheck[] =
{
      19,    39,    18,    18,    78,   116,    68,   227,    20,   121,
      23,    24,    25,     3,   109,    27,     5,   112,     5,   147,
     240,    10,    11,    10,    11,    23,    24,   101,    58,   103,
     104,    47,    47,    63,    98,    52,    53,   148,   149,   150,
      56,     5,    27,    28,    60,    60,     5,    85,    86,    87,
      88,   179,     0,   115,    92,   167,    48,    49,    96,    97,
      52,    53,   126,   127,     7,     5,     9,     5,    32,    33,
     134,    35,     5,    13,    38,    15,    95,   205,    18,    19,
      20,    48,    49,    50,    51,    52,    53,    27,    10,    11,
     128,   129,   130,   131,   132,   133,   158,   135,   136,   137,
     138,   139,   140,   198,   142,    57,    41,   235,    43,     7,
     238,     9,    62,    11,     5,    26,    27,   155,    20,    21,
      22,    55,   186,    57,     8,   113,   114,    56,   147,    10,
      21,     4,     6,   171,   172,    26,    27,    28,     5,     5,
      31,     5,    54,     5,    57,   207,   208,   209,    54,    54,
     212,     6,   216,    24,     5,    64,    60,    48,    49,    12,
     179,    57,    57,    54,    57,    54,   228,   231,   206,    56,
       5,    17,   236,    29,    30,    14,    56,   241,    55,    42,
      55,    57,    64,    55,    17,    16,   205,    57,    36,    58,
      55,   229,    48,    49,    50,    51,    52,    53,    58,    58,
      57,    29,    30,    59,    72,    57,   214,    29,    30,    65,
      66,    67,    68,    69,    70,    34,   235,    61,    39,   238,
      48,    49,    50,    51,    52,    53,    48,    49,    50,    51,
      52,    53,   111,    55,    61,    63,   242,    65,    66,    67,
      68,    69,    70,    65,    66,    67,    68,    69,    70,    29,
      30,    -1,   194,    -1,    -1,    -1,    -1,    37,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    65,    66,    67,    68,    69,
      70,    61,    29,    30,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    40,    48,    49,    50,    51,    52,    53,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    29,
      30,    65,    66,    67,    68,    69,    70,    -1,    65,    66,
      67,    68,    69,    70,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    48,    49,    50,    51,    52,    53,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    -1,    -1,    48,    49,
      50,    51,    52,    53,    29,    30,    -1,    -1,    -1,    59,
      29,    -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    48,    49,    50,    51,    52,    53,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    65,    66,    67,    68,
      69,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    74,     5,     0,    57,     7,     9,    75,    77,
      81,    82,     5,    84,     5,    88,    11,    76,    79,    80,
      81,    82,    83,    41,    43,    78,   109,   110,    77,    77,
      62,     8,    56,    10,    96,     4,     6,     5,    32,    33,
      35,    38,   100,   101,   102,   103,   104,   106,   107,   108,
     115,    80,    80,    80,     5,   111,     5,   112,    23,    24,
      91,    92,    93,    78,    78,     5,    13,    15,    18,    19,
      20,    27,    85,    86,    27,    28,     5,    89,    90,    54,
       5,    21,    26,    27,    28,    31,    48,    49,    54,    97,
     100,   116,    98,     5,    18,    47,    56,    60,    57,    54,
      79,    54,    79,    94,    95,     6,    93,     5,    87,    60,
      85,    57,    64,    57,    57,    58,    63,    12,    89,    97,
     117,    54,    97,    97,    97,    97,    29,    30,    48,    49,
      50,    51,    52,    53,    59,    65,    66,    67,    68,    69,
      70,    97,    56,     5,   100,    97,    97,    98,    23,    24,
      25,   113,   114,    42,    89,    17,    89,    89,    56,    14,
      86,    84,    86,    88,    88,    85,    90,    63,    55,   117,
      55,    98,    98,    97,    97,    97,    97,    97,    97,    98,
      97,    97,    97,    97,    97,    97,    37,    97,    61,   101,
      90,    90,    90,    55,    57,    55,    97,    85,    64,    57,
     117,    55,    97,    97,   101,    98,    40,    58,    58,    58,
      57,   113,    17,    44,    57,    86,    99,   101,    97,    85,
      85,    85,    85,    87,    61,    98,    36,    37,    16,    72,
     105,    99,    85,    97,    34,    98,    59,   101,    98,    39,
     101,    99,    98,   105
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 134 "parser.y"
    {printf("buenos dias\n");;}
    break;

  case 3:
#line 136 "parser.y"
    {
	
;}
    break;

  case 4:
#line 139 "parser.y"
    {
	

;}
    break;

  case 5:
#line 143 "parser.y"
    {;}
    break;

  case 6:
#line 144 "parser.y"
    {;}
    break;

  case 7:
#line 145 "parser.y"
    {;}
    break;

  case 8:
#line 147 "parser.y"
    {;}
    break;

  case 9:
#line 148 "parser.y"
    {;}
    break;

  case 10:
#line 149 "parser.y"
    {;}
    break;

  case 11:
#line 151 "parser.y"
    {
	if ((yyvsp[(2) - (2)].listval) != NULL){
		backpatch(tabla_cuadruplas,(yyvsp[(2) - (2)].listval),tabla_cuadruplas->next_quad);
	}
	
	generarOutputs(tabla_simbolos,tabla_cuadruplas);
	

	
	
;}
    break;

  case 12:
#line 162 "parser.y"
    {;}
    break;

  case 13:
#line 163 "parser.y"
    {;}
    break;

  case 14:
#line 164 "parser.y"
    {;}
    break;

  case 15:
#line 165 "parser.y"
    {;}
    break;

  case 16:
#line 168 "parser.y"
    {;}
    break;

  case 17:
#line 169 "parser.y"
    {;}
    break;

  case 18:
#line 170 "parser.y"
    {;}
    break;

  case 19:
#line 172 "parser.y"
    {;}
    break;

  case 20:
#line 173 "parser.y"
    {;}
    break;

  case 21:
#line 175 "parser.y"
    {;}
    break;

  case 22:
#line 176 "parser.y"
    {;}
    break;

  case 23:
#line 177 "parser.y"
    {;}
    break;

  case 24:
#line 178 "parser.y"
    {;}
    break;

  case 25:
#line 179 "parser.y"
    {;}
    break;

  case 26:
#line 180 "parser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 27:
#line 182 "parser.y"
    {;}
    break;

  case 28:
#line 183 "parser.y"
    {;}
    break;

  case 29:
#line 185 "parser.y"
    {;}
    break;

  case 30:
#line 186 "parser.y"
    {;}
    break;

  case 31:
#line 189 "parser.y"
    {
					nuevo_simbolo_constante_entero(tabla_simbolos, (yyvsp[(1) - (5)].strval), CONSTANTE, ENTERO, LOCAL,(yyvsp[(3) - (5)].intval));
			;}
    break;

  case 32:
#line 192 "parser.y"
    {

				nuevo_simbolo_constante_real(tabla_simbolos, (yyvsp[(1) - (5)].strval),(yyvsp[(3) - (5)].floatval));
			;}
    break;

  case 33:
#line 196 "parser.y"
    {;}
    break;

  case 34:
#line 201 "parser.y"
    {;}
    break;

  case 35:
#line 202 "parser.y"
    {;}
    break;

  case 36:
#line 205 "parser.y"
    {
		int tipo_variable;
		if (strcasecmp((yyvsp[(3) - (4)].strval),"entero")==0){
			tipo_variable = ENTERO;
		} else if (strcasecmp((yyvsp[(3) - (4)].strval),"real")==0) {
			tipo_variable = REAL;
		} else if (strcasecmp((yyvsp[(3) - (4)].strval),"booleano")==0) {
			tipo_variable = BOOLEANO;
	    } else if (strcasecmp((yyvsp[(3) - (4)].strval),"caracter")==0) {
			tipo_variable = CARACTER;
	    } else if (strcasecmp((yyvsp[(3) - (4)].strval),"cadena")==0) {
			tipo_variable = CADENA;
        } else {
        	tipo_variable = -1;
        	printf("\nERROR def tipo\n");
        }

		simbolo * s = nuevo_simbolo(tabla_simbolos, (yyvsp[(1) - (4)].strval), VARIABLE, tipo_variable,ambito);
		dir_elemento * dir = nuevo_dir_elemento_celda_TS(s);

        (yyval.intval) = tipo_variable;
		if (ambito == ENTRADA ){
			gen(tabla_cuadruplas,INPUT,NULL,NULL,dir);
		}
		

		;}
    break;

  case 37:
#line 232 "parser.y"
    {
        simbolo * s =  nuevo_simbolo(tabla_simbolos, (yyvsp[(1) - (3)].strval), VARIABLE, (yyvsp[(3) - (3)].intval),ambito);
		dir_elemento * dir = nuevo_dir_elemento_celda_TS(s);
        (yyval.intval) = (yyvsp[(3) - (3)].intval);
		if (ambito == ENTRADA ){
			gen(tabla_cuadruplas,INPUT,NULL,NULL,dir);
		}

        ;}
    break;

  case 38:
#line 242 "parser.y"
    {;}
    break;

  case 39:
#line 243 "parser.y"
    {;}
    break;

  case 40:
#line 244 "parser.y"
    {;}
    break;

  case 41:
#line 247 "parser.y"
    {;}
    break;

  case 42:
#line 248 "parser.y"
    {;}
    break;

  case 43:
#line 250 "parser.y"
    {

	ambito = ENTRADA;

;}
    break;

  case 44:
#line 255 "parser.y"
    {

	ambito = SALIDA;

;}
    break;

  case 45:
#line 261 "parser.y"
    {

	ambito = LOCAL;

;}
    break;

  case 46:
#line 268 "parser.y"
    {;}
    break;

  case 47:
#line 269 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( (yyvsp[(1) - (1)].simval));
		dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
		int tipo_simbolo = (yyvsp[(1) - (1)].simval)->tipo;

		if (tipo_simbolo == CONSTANTE){
			ex1->dir = dir_temporal;
			ex1->lista_true = NULL;
			ex1->lista_false = NULL;
			(yyval.expval) = ex1;
			

		}else{
			int tipo = (yyvsp[(1) - (1)].simval)->val.var.tipo;

			if (tipo == BOOLEANO){
				ex1->dir = dir_temporal;
				ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
				ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
				(yyval.expval) = ex1;
				gen(tabla_cuadruplas,OP_IGUAL,dir_temporal,dir_true,NULL);
				gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

			}else if (tipo == ENTERO || tipo == REAL){
				ex1->dir = dir_temporal;
				ex1->lista_true = NULL;
				ex1->lista_false = NULL;
				(yyval.expval) = ex1;

			}else{
				printf(RED"\nError en la variable %s : Tipo incorrecto\n"RESET, (yyvsp[(1) - (1)].simval)->nombre);
			}
		}


		



    ;}
    break;

  case 48:
#line 311 "parser.y"
    {

		int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
				if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE ){
					int tipo = ENTERO;
					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp2,dir_temporal,dir_temporal);

					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == ENTERO){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1,dir_temporal,dir_temporal);
					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1,exp2,dir_temporal);
					}else{
						tipo = ENTERO;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);

					}
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

				}else if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes");
					}

				}else if (exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
						
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

			}else{
				error("Error en expresion BT_SUMA expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, dir_temporal, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

        
		}else{

            error("Error en expresion BT_SUMA  expresion: Tipo incorrecto");
        }
		//	gen(tabla_cuadruplas, $<intval>2, exp1, exp2, sim_temporal);


    ;}
    break;

  case 49:
#line 485 "parser.y"
    {
    	int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){
            if(exp_tipo == CELDA_TS){
				if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE ){
					int tipo = ENTERO;
					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp2,dir_temporal,dir_temporal);

					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == ENTERO){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1,dir_temporal,dir_temporal);
					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1,exp2,dir_temporal);
					}else{
						tipo = ENTERO;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);

					}
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;
				}else if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes");
					}

				}else if (exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
						
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


				
			}else{
				error("Error en expresion BT_RESTA expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
									
						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, dir_temporal, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE  && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

        
		}else{

            error("Error en expresion BT_RESTA expresion: Tipo incorrecto");
        }

    ;}
    break;

  case 50:
#line 657 "parser.y"
    {

     	int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE ){
				
					int tipo = ENTERO;
					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp2,dir_temporal,dir_temporal);

					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == ENTERO){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1,dir_temporal,dir_temporal);
					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1,exp2,dir_temporal);
					}else{
						tipo = ENTERO;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);

					}
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

				}else if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes");
					}

				}else if (exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
						
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


				
			}else{
				error("Error en expresion BT_MULTIPLICACION expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){

            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){

            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else{

            error("Error en expresion BT_MULTIPLICACION expresion: Tipo incorrecto");
        }
    ;}
    break;

  case 51:
#line 835 "parser.y"
    {
    	


		int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* dir_temporal2  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE ){
					int tipo = ENTERO;
					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == REAL){
						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,exp2,dir_temporal);

					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == ENTERO){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, exp1,dir_temporal,dir_temporal);

					}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL){
						tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1,exp2,dir_temporal);
					}else{
						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						dir_temporal2->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal2);
						gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,dir_temporal2,dir_temporal);

					}
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;
				}else if (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes");
					}

				}else if (exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
						
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;


				
			}else{
				error("Error en expresion BT_DIVREAL expresion: Tipo incorrecto");
			}
		}else if ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT  ){

            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        }else if ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT){

			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;


		}else if ( ((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == VARIABLE  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else{

            error("Error en expresion BT_DIVREAL expresion: Tipo incorrecto");
        }
    ;}
    break;

  case 52:
#line 1018 "parser.y"
    {
    	
			int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
			int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
			dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if ((exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)){

						dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
						gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						(yyval.expval) = ex1;

					}else{
						error("Error expresion BT_DIV expresion: tipos incorrectos");
					}					


				}else if (exp_tipo == CONSTANTE_INT){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

				}else{
					error("Error expresion BT_DIV expresion: tipos incorrectos");
				}

			}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) |
			          ((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					  ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) ){

							dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
							gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
							ex1->dir = dir_temporal;
							(yyval.expval) = ex1;

			}else{
				error("Error expresion BT_DIV expresion: tipos incorrectos");
			}

		;}
    break;

  case 53:
#line 1071 "parser.y"
    {
			int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
			int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
			dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if ((exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)){

							dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
							gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
							ex1->dir = dir_temporal;
							(yyval.expval) = ex1;

					}else{
						error("Error expresion BT_MOD expresion: tipos incorrectos");
					}					


				}else if (exp_tipo == CONSTANTE_INT){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					(yyval.expval) = ex1;

				}else{
					error("Error expresion BT_MOD expresion: tipos incorrectos");
				}

			}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == VARIABLE && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) |
			          ((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					  ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) ){


				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

			}else{
				error("Error expresion BT_MOD expresion: tipos incorrectos");
			}

    ;}
    break;

  case 54:
#line 1124 "parser.y"
    { (yyval.expval) = (yyvsp[(2) - (3)].expval); ;}
    break;

  case 55:
#line 1125 "parser.y"
    {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = (yyvsp[(2) - (2)].expval)->dir;
		if (exp1->tipo == CELDA_TS){
			if ((exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO )){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else if ((exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL )){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else{
				printf("\nError BT_RESTA expresion: tipo incorrecto\n");
			}
		}else if (exp1->tipo == CONSTANTE_INT){
			dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
		} else if (exp1->tipo == CONSTANTE_FLOAT){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
		} else {
			error("Error BT_RESTA expresion: tipo incorrecto");
		}

		ex1->dir = dir_temporal;
        (yyval.expval) = ex1;

    ;}
    break;

  case 56:
#line 1153 "parser.y"
    {
    ;}
    break;

  case 57:
#line 1155 "parser.y"
    {

		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_real((yyvsp[(1) - (1)].floatval));
		ex1->dir = dir_temporal;
		(yyval.expval) = ex1;

    ;}
    break;

  case 58:
#line 1163 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
  		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_entero((yyvsp[(1) - (1)].intval));
    	ex1->dir = dir_temporal;
        (yyval.expval) = ex1;
    
    ;}
    break;

  case 59:
#line 1171 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = (yyvsp[(2) - (2)].expval)->dir;
		if (exp1->tipo == CELDA_TS){

			if ((exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == ENTERO )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO )){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
			}else if ((exp1->val.celda_TS->tipo == VARIABLE && exp1->val.celda_TS->val.var.tipo == REAL )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL )){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
			}else{
				printf("\nError OP_SUMA_UNARIA expresion: tipo incorrecto\n");
			}
		}else if (exp1->tipo == CONSTANTE_INT){
			dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
		} else if (exp1->tipo == CONSTANTE_FLOAT){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
		} else {
			error("Error en OP_SUMA_UNARIA: tipo incorrecto");
		}

		ex1->dir = dir_temporal;
		(yyval.expval) = ex1;
    ;}
    break;

  case 60:
#line 1200 "parser.y"
    {
        int exp_tipo = (yyvsp[(1) - (4)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(4) - (4)].expval)->dir->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
                if ( ((yyvsp[(1) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO && (yyvsp[(4) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) ){

                    backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(3) - (4)].intval));
                    (yyval.expval)->lista_false = merge((yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(4) - (4)].expval)->lista_false);
                    (yyval.expval)->lista_true = (yyvsp[(4) - (4)].expval)->lista_true;
                    (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

                }else{
                    error("Error en expresion BT_Y M expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_BOOL){

                backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(3) - (4)].intval));
                (yyval.expval)->lista_false = merge((yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(4) - (4)].expval)->lista_false);
                (yyval.expval)->lista_true = (yyvsp[(4) - (4)].expval)->lista_true;
                (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

            }else{
                error("Error en expresion BT_Y M expresion : Tipo incorrecto en expresion");
            }
        }else if ((exp_tipo == CELDA_TS && (yyvsp[(1) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) && exp_tipo2 == CONSTANTE_BOOL ){
            backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(3) - (4)].intval));
            (yyval.expval)->lista_false = merge((yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(4) - (4)].expval)->lista_false);
            (yyval.expval)->lista_true = (yyvsp[(4) - (4)].expval)->lista_true;
            (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

        }else if ((exp_tipo2 == CELDA_TS && (yyvsp[(4) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) && exp_tipo == CONSTANTE_BOOL){
            backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(3) - (4)].intval));
            (yyval.expval)->lista_false = merge((yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(4) - (4)].expval)->lista_false);
            (yyval.expval)->lista_true = (yyvsp[(4) - (4)].expval)->lista_true;
            (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;


        }else{

            error("Error en expresion BT_Y M expresion: Tipo incorrecto");
        }

    ;}
    break;

  case 61:
#line 1245 "parser.y"
    {

		int exp_tipo = (yyvsp[(1) - (4)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(4) - (4)].expval)->dir->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
                if ( ((yyvsp[(1) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO && (yyvsp[(4) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) ){

                    backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(3) - (4)].intval));
					(yyval.expval)->lista_false =  (yyvsp[(4) - (4)].expval)->lista_false;
					(yyval.expval)->lista_true = merge((yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(4) - (4)].expval)->lista_true);
					(yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

                }else{
                    error("Error en expresion BT_Y M expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_BOOL){

                backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(3) - (4)].intval));
				(yyval.expval)->lista_false =  (yyvsp[(4) - (4)].expval)->lista_false;
				(yyval.expval)->lista_true = merge((yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(4) - (4)].expval)->lista_true);
				(yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

            }else{
                error("Error en expresion BT_Y M expresion : Tipo incorrecto en expresion");
            }
        }else if ((exp_tipo == CELDA_TS && (yyvsp[(1) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) && exp_tipo2 == CONSTANTE_BOOL ){
            backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(3) - (4)].intval));
            (yyval.expval)->lista_false =  (yyvsp[(4) - (4)].expval)->lista_false;
            (yyval.expval)->lista_true = merge((yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(4) - (4)].expval)->lista_true);
            (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;

        }else if ((exp_tipo2 == CELDA_TS && (yyvsp[(4) - (4)].expval)->dir->val.celda_TS->val.var.tipo == BOOLEANO) && exp_tipo == CONSTANTE_BOOL){
            backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].expval)->lista_false,(yyvsp[(3) - (4)].intval));
            (yyval.expval)->lista_false =  (yyvsp[(4) - (4)].expval)->lista_false;
            (yyval.expval)->lista_true = merge((yyvsp[(1) - (4)].expval)->lista_true,(yyvsp[(4) - (4)].expval)->lista_true);
            (yyval.expval)->dir = (yyvsp[(1) - (4)].expval)->dir;


        }else{

            error("Error en expresion BT_Y M expresion: Tipo incorrecto");
        }




    ;}
    break;

  case 62:
#line 1294 "parser.y"
    {

		int exp_tipo = (yyvsp[(2) - (2)].expval)->dir->tipo;
        expresion* ex1 = (expresion*) malloc(sizeof(expresion));
    	dir_elemento* exp1 = (yyvsp[(2) - (2)].expval)->dir;
    	

		if ( exp_tipo == CELDA_TS ){
			int tipo = exp1->val.celda_TS->val.var.tipo;
			if (tipo == BOOLEANO){
				ex1->dir = exp1;
				ex1->lista_true = (yyvsp[(2) - (2)].expval)->lista_false;
				ex1->lista_false = (yyvsp[(2) - (2)].expval)->lista_true;
				(yyval.expval) = ex1;

			}else{
				error("Error BT_NO expresion: Tipo incorrecto");
			}


		}else if (exp_tipo == CONSTANTE_BOOL){
			ex1->dir = exp1;
			ex1->lista_true = (yyvsp[(2) - (2)].expval)->lista_false;
			ex1->lista_false = (yyvsp[(2) - (2)].expval)->lista_true;
			(yyval.expval) = ex1;

		}else{
			error("Error BT_NO expresion: Tipo incorrecto");
		}
    	

    ;}
    break;

  case 63:
#line 1326 "parser.y"
    {
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano((yyvsp[(1) - (1)].strval));
		dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		ex1->dir = dir_temporal;
		ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
		ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
		(yyval.expval) = ex1;
		gen(tabla_cuadruplas,OP_IGUAL,dir_temporal,dir_true,NULL);
		gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

    ;}
    break;

  case 64:
#line 1338 "parser.y"
    {
		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MAYOR  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MAYOR  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_MAYOR  expresion: Tipo incorrecto");
        }





    ;}
    break;

  case 65:
#line 1402 "parser.y"
    {

		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MENOR  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MENOR  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_MENOR  expresion: Tipo incorrecto");
        }


    ;}
    break;

  case 66:
#line 1464 "parser.y"
    {

		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_IGUAL  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_IGUAL  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_IGUAL  expresion: Tipo incorrecto");
        }


    ;}
    break;

  case 67:
#line 1526 "parser.y"
    {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_DISTINTO  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_DISTINTO  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_DISTINTO expresion: Tipo incorrecto");
        }


	;}
    break;

  case 68:
#line 1586 "parser.y"
    {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MAYORIGUAL  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MAYORIGUAL  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_MAYORIGUAL  expresion: Tipo incorrecto");
        }


	;}
    break;

  case 69:
#line 1646 "parser.y"
    {

		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if ((tipo == ENTERO && tipo2 == ENTERO) || ( tipo == REAL && tipo2 == REAL )){

                    ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MENORIGUAL   expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					(yyval.expval) = ex1;
					gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MENORIGUAL   expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            ex1->dir = dir_temporal;
			ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
			ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
			(yyval.expval) = ex1;
			gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);


        }else{

            error("Error en expresion BT_MENORIGUAL  expresion: Tipo incorrecto");
        }
	;}
    break;

  case 70:
#line 1707 "parser.y"
    {
	(yyval.intval) = tabla_cuadruplas->next_quad;
;}
    break;

  case 71:
#line 1711 "parser.y"
    {
	(yyval.listval) = makelist(tabla_cuadruplas->next_quad);
	gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
;}
    break;

  case 72:
#line 1715 "parser.y"
    {
	(yyval.simval) = buscar_sim_nombre(tabla_simbolos, (yyvsp[(1) - (1)].strval) );
	;}
    break;

  case 73:
#line 1718 "parser.y"
    {;}
    break;

  case 74:
#line 1719 "parser.y"
    {;}
    break;

  case 75:
#line 1720 "parser.y"
    {;}
    break;

  case 76:
#line 1725 "parser.y"
    {

                if((yyvsp[(1) - (4)].listval) != NULL){
                    backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].listval),(yyvsp[(3) - (4)].intval));
                }
                (yyval.listval) = (yyvsp[(4) - (4)].listval);

            ;}
    break;

  case 77:
#line 1733 "parser.y"
    {

                 (yyval.listval) = (yyvsp[(1) - (1)].listval);

            ;}
    break;

  case 78:
#line 1739 "parser.y"
    {

			(yyval.listval) = makelist(tabla_cuadruplas->next_quad);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

			;}
    break;

  case 79:
#line 1745 "parser.y"
    {
                (yyval.listval) = NULL;

            ;}
    break;

  case 80:
#line 1749 "parser.y"
    {



            (yyval.listval) = (yyvsp[(1) - (1)].listval);

            ;}
    break;

  case 81:
#line 1756 "parser.y"
    {

				(yyval.listval) = (yyvsp[(1) - (1)].listval);
			;}
    break;

  case 82:
#line 1760 "parser.y"
    {;}
    break;

  case 83:
#line 1762 "parser.y"
    {
		dir_elemento* res = nuevo_dir_elemento_celda_TS((yyvsp[(1) - (3)].simval));
		if (res->val.celda_TS->tipo == CONSTANTE){
			error("Error en operando BT_ASIGNACION expresion : No se puede asignar a una constante");
		}else{

			int res_simbolo_tipo = res->val.celda_TS->val.var.tipo;
			int exp_tipo = (yyvsp[(3) - (3)].expval)->dir->tipo;

			if(exp_tipo == CELDA_TS){
				int exp_simbolo_tipo;
				
				if ((yyvsp[(3) - (3)].expval)->dir->val.celda_TS->tipo == VARIABLE |(yyvsp[(3) - (3)].expval)->dir->val.celda_TS->tipo == TEMPORAL ){
					exp_simbolo_tipo = (yyvsp[(3) - (3)].expval)->dir->val.celda_TS->val.var.tipo;

				}else{
			
					exp_simbolo_tipo = (yyvsp[(3) - (3)].expval)->dir->val.celda_TS->val.cons.tipo;
				}
				

				if (exp_simbolo_tipo == BOOLEANO){
					dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
					dir_elemento* dir_false =  nuevo_dir_elemento_constante_booleano("falso");

					backpatch(tabla_cuadruplas,(yyvsp[(3) - (3)].expval)->lista_false,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), dir_false, NULL, res);

					dir_elemento* dir_quad = nuevo_dir_elemento_pos_quad(tabla_cuadruplas->next_quad + 2);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,dir_quad);


					backpatch(tabla_cuadruplas,(yyvsp[(3) - (3)].expval)->lista_true,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas,(yyvsp[(2) - (3)].intval),dir_true,NULL,res);
				}
				else if (exp_simbolo_tipo == res_simbolo_tipo){
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].expval)->dir, NULL, res);
				}
				else if (exp_simbolo_tipo == ENTERO && res_simbolo_tipo == REAL && ((yyvsp[(3) - (3)].expval)->dir->val.celda_TS->tipo == VARIABLE |(yyvsp[(3) - (3)].expval)->dir->val.celda_TS->tipo == TEMPORAL)){
					dir_elemento* dir_temporal = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,(yyvsp[(3) - (3)].expval)->dir,NULL,dir_temporal);
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), dir_temporal, NULL, res);
				}
				else{
					printf("%d\n",exp_simbolo_tipo);
					printf("%d\n",res_simbolo_tipo);
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo expresion incompatible con operando ");
				}

			}
			else if (exp_tipo == CONSTANTE_INT){
				if (res_simbolo_tipo == ENTERO){
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].expval)->dir, NULL, res);
				}
				else if (res_simbolo_tipo == REAL){
					dir_elemento* dir_temporal = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,(yyvsp[(3) - (3)].expval)->dir,NULL,dir_temporal);
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), dir_temporal, NULL, res);
				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_INT incompatible con operando");
				}
			}
			else if (exp_tipo == CONSTANTE_FLOAT){
				if (res_simbolo_tipo == REAL){
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].expval)->dir, NULL, res);
				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_FLOAT incompatible con operando");
				}
			}
			else if (exp_tipo == CONSTANTE_BOOL){
				if (res_simbolo_tipo == BOOLEANO){
					dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
					dir_elemento* dir_false =  nuevo_dir_elemento_constante_booleano("falso");

					backpatch(tabla_cuadruplas,(yyvsp[(3) - (3)].expval)->lista_false,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), dir_false, NULL, res);

					dir_elemento* dir_quad = nuevo_dir_elemento_pos_quad(tabla_cuadruplas->next_quad + 2);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,dir_quad);


					backpatch(tabla_cuadruplas,(yyvsp[(3) - (3)].expval)->lista_true,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas,(yyvsp[(2) - (3)].intval),dir_true,NULL,res);

				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_BOOL incompatible con operando");
				}
			}
			else{
				error("Error en asignacion: operando BT_ASIGNACION expresion");
			}
		}
;}
    break;

  case 84:
#line 1861 "parser.y"
    {
    backpatch(tabla_cuadruplas,(yyvsp[(2) - (9)].expval)->lista_true,(yyvsp[(4) - (9)].intval));
	backpatch(tabla_cuadruplas,(yyvsp[(2) - (9)].expval)->lista_false,(yyvsp[(7) - (9)].intval));
	

	if ((yyvsp[(8) - (9)].listval) == NULL){

        //backpatch(tabla_cuadruplas,$<listval>6,$<intval>7);
		(yyval.listval) = merge((yyvsp[(5) - (9)].listval),(yyvsp[(6) - (9)].listval));
    }else{
         //backpatch(tabla_cuadruplas,$<listval>6,$<intval>9);
         
         (yyval.listval) = merge((yyvsp[(6) - (9)].listval),merge((yyvsp[(5) - (9)].listval),(yyvsp[(8) - (9)].listval)));
    }	




;}
    break;

  case 85:
#line 1880 "parser.y"
    {

					backpatch(tabla_cuadruplas,(yyvsp[(2) - (8)].expval)->lista_true,(yyvsp[(4) - (8)].intval));
					backpatch(tabla_cuadruplas,(yyvsp[(2) - (8)].expval)->lista_false,(yyvsp[(7) - (8)].intval));
					

					if ((yyvsp[(8) - (8)].listval) == NULL){

						//backpatch(tabla_cuadruplas,$<listval>6,$<intval>7);
						(yyval.listval) = merge((yyvsp[(5) - (8)].listval),(yyvsp[(6) - (8)].listval));
					}else{
						
						(yyval.listval) = merge((yyvsp[(6) - (8)].listval),merge((yyvsp[(5) - (8)].listval),(yyvsp[(8) - (8)].listval)));
					}	


				;}
    break;

  case 86:
#line 1897 "parser.y"
    {
					(yyval.listval) = NULL;

				;}
    break;

  case 87:
#line 1901 "parser.y"
    { (yyval.listval) = (yyvsp[(1) - (1)].listval); ;}
    break;

  case 88:
#line 1902 "parser.y"
    { (yyval.listval) = (yyvsp[(1) - (1)].listval); ;}
    break;

  case 89:
#line 1904 "parser.y"
    {

	backpatch(tabla_cuadruplas,(yyvsp[(3) - (7)].expval)->lista_true,(yyvsp[(5) - (7)].intval));
	if ((yyvsp[(6) - (7)].listval) != NULL) {
		//backpatch(tabla_cuadruplas,merge($<listval>6,$<listval>7),$<intval>4);
		backpatch(tabla_cuadruplas,(yyvsp[(6) - (7)].listval),(yyvsp[(2) - (7)].intval));
	} else {
		//backpatch(tabla_cuadruplas,$<listval>6,$<intval>4);

		gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,nuevo_dir_elemento_constante_entero((yyvsp[(2) - (7)].intval)));
	}
	(yyval.listval) = (yyvsp[(3) - (7)].expval)->lista_false;




;}
    break;

  case 90:
#line 1921 "parser.y"
    {

	if ((yyvsp[(10) - (11)].listval) != NULL){
		backpatch(tabla_cuadruplas,(yyvsp[(8) - (11)].listval),tabla_cuadruplas->next_quad);

	}
	
	dir_elemento* uno  =  nuevo_dir_elemento_constante_entero(1);
	simbolo * s = nuevo_simbolo(tabla_simbolos, (yyvsp[(2) - (11)].strval), VARIABLE, ENTERO,ambito);
	dir_elemento* dir =   nuevo_dir_elemento_celda_TS(s);
	gen(tabla_cuadruplas,OP_SUMA,dir,uno,dir);
	
	dir_elemento* next =  nuevo_dir_elemento_constante_entero(tabla_cuadruplas->next_quad + 2);	
	gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,next);
	backpatch(tabla_cuadruplas,(yyvsp[(8) - (11)].listval),tabla_cuadruplas->next_quad);
	gen(tabla_cuadruplas,OP_ASIGNACION,(yyvsp[(4) - (11)].expval)->dir, NULL,dir );
	dir_elemento* m_quad =  nuevo_dir_elemento_constante_entero((yyvsp[(9) - (11)].intval) );	
	gen(tabla_cuadruplas,OP_MENORIGUAL,dir, (yyvsp[(4) - (11)].expval)->dir, m_quad );

	(yyval.listval) = makelist(tabla_cuadruplas->next_quad);
	gen(tabla_cuadruplas, OP_GOTO, NULL, NULL, NULL);




;}
    break;

  case 91:
#line 1949 "parser.y"
    {;}
    break;

  case 92:
#line 1950 "parser.y"
    {;}
    break;

  case 93:
#line 1951 "parser.y"
    {;}
    break;

  case 94:
#line 1952 "parser.y"
    {;}
    break;

  case 95:
#line 1953 "parser.y"
    {;}
    break;

  case 96:
#line 1954 "parser.y"
    {;}
    break;

  case 97:
#line 1955 "parser.y"
    {;}
    break;

  case 98:
#line 1957 "parser.y"
    {;}
    break;

  case 99:
#line 1958 "parser.y"
    {;}
    break;

  case 100:
#line 1959 "parser.y"
    {;}
    break;

  case 101:
#line 1962 "parser.y"
    {;}
    break;

  case 102:
#line 1963 "parser.y"
    {;}
    break;

  case 103:
#line 1964 "parser.y"
    {;}
    break;

  case 104:
#line 1965 "parser.y"
    {;}
    break;

  case 105:
#line 1966 "parser.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 3956 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1969 "parser.y"


int main(int argc, char **argv){
	#ifdef YYDEBUG
		int yydebug = 1;
	#endif
	++argv, --argc;
	if(argc > 0)
		yyin = fopen(argv[0],"r");
	else
		yyin = stdin;

	tabla_simbolos = nueva_tabla_de_simbolos();
	tabla_cuadruplas = nueva_tabla_de_cuadruplas();

	yyparse();

	imprime_tabla_simbolos(tabla_simbolos);
	imprime_tabla_cuadruplas(tabla_cuadruplas);
	generar_codigo_tres_direcciones(tabla_cuadruplas);
}

void yyerror(const char *s){
	printf("ERROR %s\n", s);
}

