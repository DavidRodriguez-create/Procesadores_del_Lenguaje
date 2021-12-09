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
#define YYLAST   438

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

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
      99,   100,   106,   107,   110,   111,   116,   120,   122,   125,
     127,   131,   135,   136,   137,   138,   140,   142,   146,   150,
     154,   158,   162,   166,   170,   173,   175,   177,   179,   182,
     187,   192,   195,   197,   201,   205,   209,   213,   217,   221,
     222,   223,   225,   229,   234,   237,   242,   244,   246,   248,
     250,   252,   254,   258,   269,   279,   280,   282,   284,   292,
     304,   309,   316,   322,   329,   333,   335,   336,   341,   346,
     351,   356,   361,   365,   367
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
       5,    56,    22,    57,    88,    -1,    -1,    90,    89,    -1,
      -1,     5,    58,    85,    57,    -1,     5,    63,    90,    -1,
      92,    -1,    92,    93,    -1,    93,    -1,    23,    94,    89,
      -1,    24,    95,    89,    -1,    -1,    -1,    -1,   116,    -1,
     100,    -1,    97,    48,    97,    -1,    97,    49,    97,    -1,
      97,    53,    97,    -1,    97,    52,    97,    -1,    97,    50,
      97,    -1,    97,    51,    97,    -1,    54,    97,    55,    -1,
      49,    97,    -1,    26,    -1,    28,    -1,    27,    -1,    48,
      97,    -1,    97,    29,    98,    97,    -1,    97,    30,    98,
      97,    -1,    31,    97,    -1,    21,    -1,    97,    65,    97,
      -1,    97,    66,    97,    -1,    97,    67,    97,    -1,    97,
      68,    97,    -1,    97,    69,    97,    -1,    97,    70,    97,
      -1,    -1,    -1,     5,    -1,   100,    47,   100,    -1,   100,
      60,    97,    61,    -1,   100,    18,    -1,   102,    57,    98,
     101,    -1,   102,    -1,    32,    -1,   103,    -1,   104,    -1,
     106,    -1,   115,    -1,   100,    56,    97,    -1,    33,    97,
      59,    98,   101,    99,    98,   105,    98,    34,    -1,    72,
      97,    59,    98,   101,    99,    98,   105,    98,    -1,    -1,
     108,    -1,   107,    -1,    35,    97,    37,    98,   101,    99,
      36,    -1,    38,     5,    56,    97,    40,    97,    37,    99,
      98,   101,    39,    -1,    41,   111,    79,    42,    -1,    43,
     112,    79,    17,    97,    44,    -1,     5,    54,   113,    55,
      57,    -1,     5,    54,    89,    55,    17,    85,    -1,   114,
      57,   113,    -1,   114,    -1,    -1,    23,    90,    58,    85,
      -1,    24,    90,    58,    85,    -1,    25,    90,    58,    85,
      -1,     5,    54,   117,    55,    -1,     5,    54,   117,    55,
      -1,    97,    63,   117,    -1,    97,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   136,   137,   138,   139,   140,   142,   143,
     144,   146,   147,   148,   149,   150,   153,   154,   155,   157,
     158,   160,   161,   162,   163,   164,   165,   167,   168,   170,
     171,   174,   175,   178,   179,   181,   204,   210,   211,   212,
     215,   216,   218,   223,   229,   236,   237,   265,   376,   485,
     597,   725,   772,   818,   819,   847,   849,   857,   865,   893,
     938,   987,  1019,  1031,  1095,  1157,  1219,  1279,  1339,  1400,
    1404,  1408,  1411,  1412,  1413,  1418,  1426,  1432,  1433,  1437,
    1444,  1448,  1450,  1535,  1555,  1571,  1576,  1577,  1579,  1593,
    1621,  1622,  1623,  1624,  1625,  1626,  1627,  1629,  1630,  1631,
    1634,  1635,  1636,  1637,  1638
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
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      92,    93,    94,    95,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      99,   100,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   102,   103,   104,   105,   105,   106,   106,   107,   108,
     109,   110,   111,   112,   113,   113,   113,   114,   114,   114,
     115,   116,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     3,     3,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     2,     0,     4,     3,     1,     2,     1,
       3,     3,     0,     0,     0,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     2,     4,
       4,     2,     1,     3,     3,     3,     3,     3,     3,     0,
       0,     1,     3,     4,     2,     4,     1,     1,     1,     1,
       1,     1,     3,    10,     9,     0,     1,     1,     7,    11,
       4,     6,     5,     6,     3,     1,     0,     4,     4,     4,
       4,     4,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    32,    15,    10,
       7,     7,     0,     0,     0,     0,    44,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,    16,     0,    17,    34,     2,     4,    71,    77,     0,
       0,     0,     0,    11,    76,    78,    79,    80,    87,    86,
      81,    12,    13,    14,     0,    15,     0,    15,    42,    43,
       0,    37,    39,     8,     9,    23,    30,     0,     0,    26,
      28,    27,     0,     0,     0,     0,     0,    34,   104,    71,
      62,    55,    57,    56,     0,     0,     0,     0,     0,    46,
      45,     0,     0,    74,     0,     0,     0,    69,    96,     0,
      34,     0,    34,    34,     3,    38,     0,     0,     0,    25,
      20,     0,    32,     0,     0,    18,    33,   103,     0,   104,
      61,    58,    54,     0,    69,    69,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,    69,
       0,    71,    72,    82,     0,     0,     0,     0,     0,     0,
      95,    90,     0,     0,    40,    41,     0,    21,     0,    19,
      24,    31,     0,    36,   104,   100,     0,    53,     0,     0,
      47,    48,    51,    52,    50,    49,     0,    63,    64,    65,
      66,    67,    68,     0,     0,    73,    75,     0,     0,     0,
       0,    96,     0,     0,     0,     0,    35,   102,   101,    59,
      60,    70,    70,     0,     0,     0,     0,    92,    94,     0,
      91,    30,     0,    69,     0,     0,    97,    98,    99,    93,
      29,     0,    85,    88,    70,     0,     0,    69,    69,    22,
       0,     0,     0,    69,    83,     0,     0,    89,    70,    69,
      85,    69,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    72,    73,   107,    15,    76,    77,    60,    61,
      62,   102,   103,    34,   117,   145,   213,    89,    43,    44,
      45,    46,   227,    47,    48,    49,    26,    27,    55,    57,
     149,   150,    50,    90,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -196
static const yytype_int16 yypact[] =
{
       5,    35,    56,    13,  -196,    14,    68,    74,     4,    -7,
      14,    14,    -1,   126,    50,    66,  -196,   128,   135,    39,
       4,     4,     4,   143,   144,    40,    -7,    -7,  -196,  -196,
      98,  -196,   130,  -196,   145,  -196,  -196,    97,  -196,    11,
      11,   150,     6,  -196,    99,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,   104,     4,   105,     4,  -196,  -196,
     154,   137,  -196,  -196,  -196,  -196,   157,   106,    98,  -196,
    -196,  -196,   110,   107,   111,   -54,   158,   145,    11,   115,
    -196,  -196,  -196,  -196,    11,    11,    11,    11,   124,    -6,
    -196,   170,   122,  -196,   174,    11,    11,  -196,    85,   138,
     145,   164,   145,   145,  -196,  -196,   131,   168,   -17,  -196,
      68,   -17,    74,    98,   145,  -196,  -196,   179,   140,    11,
     368,    76,    76,   204,  -196,  -196,    11,    11,    11,    11,
      11,    11,  -196,    11,    11,    11,    11,    11,    11,  -196,
      11,  -196,  -196,   339,   231,    39,   145,   145,   145,   141,
     127,  -196,   142,    11,  -196,  -196,    98,  -196,   121,  -196,
    -196,  -196,   146,  -196,    11,  -196,   147,  -196,    11,    11,
      76,    76,    71,    71,  -196,  -196,    39,    34,    34,    34,
      34,    34,    34,    39,   237,  -196,  -196,   148,   152,   153,
     155,    85,   169,   264,   159,   -17,  -196,  -196,  -196,   368,
     345,  -196,  -196,    11,    98,    98,    98,  -196,  -196,    98,
    -196,   157,   163,  -196,   162,   289,  -196,  -196,  -196,  -196,
    -196,   185,   132,  -196,  -196,    98,    11,  -196,  -196,  -196,
     314,   171,    39,  -196,  -196,   175,    39,  -196,  -196,  -196,
     132,  -196,  -196
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,  -196,   129,   119,    57,   116,    17,    20,
    -196,   133,   -62,   -91,    15,   103,   -22,   -79,  -196,  -196,
     180,  -196,  -196,  -196,   -38,  -106,  -195,   -19,  -131,  -196,
    -196,  -196,   -15,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
      59,  -196,  -196,  -196,  -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      42,    88,    91,    70,   113,   166,   109,   214,     1,   114,
      71,     6,    93,     7,   186,    16,    79,   158,   168,   169,
     160,     6,    10,     7,    93,    11,   176,    10,    10,   228,
      11,    11,    80,   183,    23,   163,    24,    81,    82,    83,
       3,    94,    84,   239,    37,   201,   120,   121,   122,   123,
     197,   162,   202,    94,    96,   116,     4,   143,   144,    85,
      86,    30,    95,    58,    59,    87,    96,   187,   188,   189,
       5,    38,    39,    12,    40,   142,    33,    41,   152,    14,
     154,   155,   126,   127,   128,   129,   130,   131,   170,   171,
     172,   173,   174,   175,   194,   177,   178,   179,   180,   181,
     182,   235,   184,    65,   212,   238,    32,   222,   146,   147,
     148,    66,    99,    67,   101,   193,    68,    69,    70,   126,
     127,   231,   232,   130,   131,    71,    42,   236,   130,   131,
     199,   200,    35,   240,    31,   242,    51,    52,    53,    28,
      29,    36,   216,   217,   218,    63,    64,   219,    54,    56,
      75,    78,    74,   124,   125,    92,    97,    42,    98,   100,
     104,    59,   106,   229,    42,   215,   108,   110,   112,   119,
     115,   111,   126,   127,   128,   129,   130,   131,   140,   141,
     151,   153,   157,   132,   191,   195,   209,   156,   230,   133,
     134,   135,   136,   137,   138,   165,   190,   192,   223,   124,
     125,   225,   198,   196,   226,   234,   204,   139,   124,   125,
     205,   206,   207,    42,   237,   161,   211,    42,   126,   127,
     128,   129,   130,   131,   221,   241,   220,   126,   127,   128,
     129,   130,   131,   124,   125,   133,   134,   135,   136,   137,
     138,   105,   164,   159,   133,   134,   135,   136,   137,   138,
     208,     0,   126,   127,   128,   129,   130,   131,     0,   167,
     124,   125,     0,     0,     0,     0,   124,   125,     0,   133,
     134,   135,   136,   137,   138,     0,     0,   203,     0,   126,
     127,   128,   129,   130,   131,   126,   127,   128,   129,   130,
     131,     0,   185,   124,   125,     0,   133,   134,   135,   136,
     137,   138,   133,   134,   135,   136,   137,   138,   210,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   124,   125,
       0,     0,     0,     0,     0,     0,   224,     0,     0,   133,
     134,   135,   136,   137,   138,     0,     0,   126,   127,   128,
     129,   130,   131,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
       0,     0,   126,   127,   128,   129,   130,   131,   124,   125,
       0,     0,     0,   233,   124,     0,     0,     0,     0,   133,
     134,   135,   136,   137,   138,     0,     0,   126,   127,   128,
     129,   130,   131,   126,   127,   128,   129,   130,   131,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     133,   134,   135,   136,   137,   138,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138
};

static const yytype_int16 yycheck[] =
{
      19,    39,    40,    20,    58,   119,    68,   202,     3,    63,
      27,     7,    18,     9,   145,    11,     5,   108,   124,   125,
     111,     7,     5,     9,    18,     5,   132,    10,    11,   224,
      10,    11,    21,   139,    41,   114,    43,    26,    27,    28,
       5,    47,    31,   238,     5,   176,    84,    85,    86,    87,
     164,   113,   183,    47,    60,    77,     0,    95,    96,    48,
      49,    62,    56,    23,    24,    54,    60,   146,   147,   148,
      57,    32,    33,     5,    35,    94,    10,    38,   100,     5,
     102,   103,    48,    49,    50,    51,    52,    53,   126,   127,
     128,   129,   130,   131,   156,   133,   134,   135,   136,   137,
     138,   232,   140,     5,   195,   236,    56,   213,    23,    24,
      25,    13,    55,    15,    57,   153,    18,    19,    20,    48,
      49,   227,   228,    52,    53,    27,   145,   233,    52,    53,
     168,   169,     4,   239,     8,   241,    20,    21,    22,    10,
      11,     6,   204,   205,   206,    26,    27,   209,     5,     5,
       5,    54,    22,    29,    30,     5,    57,   176,    54,    54,
       6,    24,     5,   225,   183,   203,    60,    57,    57,    54,
      12,    64,    48,    49,    50,    51,    52,    53,    56,     5,
      42,    17,    14,    59,    57,    64,    17,    56,   226,    65,
      66,    67,    68,    69,    70,    55,    55,    55,    36,    29,
      30,    16,    55,    57,    72,    34,    58,    37,    29,    30,
      58,    58,    57,   232,    39,   112,    57,   236,    48,    49,
      50,    51,    52,    53,    61,   240,   211,    48,    49,    50,
      51,    52,    53,    29,    30,    65,    66,    67,    68,    69,
      70,    61,    63,   110,    65,    66,    67,    68,    69,    70,
     191,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      29,    30,    -1,    -1,    -1,    -1,    29,    30,    -1,    65,
      66,    67,    68,    69,    70,    -1,    -1,    40,    -1,    48,
      49,    50,    51,    52,    53,    48,    49,    50,    51,    52,
      53,    -1,    61,    29,    30,    -1,    65,    66,    67,    68,
      69,    70,    65,    66,    67,    68,    69,    70,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    -1,    48,    49,    50,
      51,    52,    53,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,    48,    49,    50,    51,    52,    53,    29,    30,
      -1,    -1,    -1,    59,    29,    -1,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    -1,    -1,    48,    49,    50,
      51,    52,    53,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    68,    69,    70,
      65,    66,    67,    68,    69,    70,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70
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
      20,    27,    85,    86,    22,     5,    89,    90,    54,     5,
      21,    26,    27,    28,    31,    48,    49,    54,    97,   100,
     116,    97,     5,    18,    47,    56,    60,    57,    54,    79,
      54,    79,    94,    95,     6,    93,     5,    87,    60,    85,
      57,    64,    57,    58,    63,    12,    89,    97,   117,    54,
      97,    97,    97,    97,    29,    30,    48,    49,    50,    51,
      52,    53,    59,    65,    66,    67,    68,    69,    70,    37,
      56,     5,   100,    97,    97,    98,    23,    24,    25,   113,
     114,    42,    89,    17,    89,    89,    56,    14,    86,    84,
      86,    88,    85,    90,    63,    55,   117,    55,    98,    98,
      97,    97,    97,    97,    97,    97,    98,    97,    97,    97,
      97,    97,    97,    98,    97,    61,   101,    90,    90,    90,
      55,    57,    55,    97,    85,    64,    57,   117,    55,    97,
      97,   101,   101,    40,    58,    58,    58,    57,   113,    17,
      44,    57,    86,    99,    99,    97,    85,    85,    85,    85,
      87,    61,    98,    36,    37,    16,    72,   105,    99,    85,
      97,    98,    98,    59,    34,   101,    98,    39,   101,    99,
      98,   105,    98
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
    {;}
    break;

  case 4:
#line 137 "parser.y"
    {;}
    break;

  case 5:
#line 138 "parser.y"
    {;}
    break;

  case 6:
#line 139 "parser.y"
    {;}
    break;

  case 7:
#line 140 "parser.y"
    {;}
    break;

  case 8:
#line 142 "parser.y"
    {;}
    break;

  case 9:
#line 143 "parser.y"
    {;}
    break;

  case 10:
#line 144 "parser.y"
    {;}
    break;

  case 11:
#line 146 "parser.y"
    {;}
    break;

  case 12:
#line 147 "parser.y"
    {;}
    break;

  case 13:
#line 148 "parser.y"
    {;}
    break;

  case 14:
#line 149 "parser.y"
    {;}
    break;

  case 15:
#line 150 "parser.y"
    {;}
    break;

  case 16:
#line 153 "parser.y"
    {;}
    break;

  case 17:
#line 154 "parser.y"
    {;}
    break;

  case 18:
#line 155 "parser.y"
    {;}
    break;

  case 19:
#line 157 "parser.y"
    {;}
    break;

  case 20:
#line 158 "parser.y"
    {;}
    break;

  case 21:
#line 160 "parser.y"
    {;}
    break;

  case 22:
#line 161 "parser.y"
    {;}
    break;

  case 23:
#line 162 "parser.y"
    {;}
    break;

  case 24:
#line 163 "parser.y"
    {;}
    break;

  case 25:
#line 164 "parser.y"
    {;}
    break;

  case 26:
#line 165 "parser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 27:
#line 167 "parser.y"
    {;}
    break;

  case 28:
#line 168 "parser.y"
    {;}
    break;

  case 29:
#line 170 "parser.y"
    {;}
    break;

  case 30:
#line 171 "parser.y"
    {;}
    break;

  case 31:
#line 174 "parser.y"
    {;}
    break;

  case 32:
#line 175 "parser.y"
    {;}
    break;

  case 33:
#line 178 "parser.y"
    {;}
    break;

  case 34:
#line 179 "parser.y"
    {;}
    break;

  case 35:
#line 182 "parser.y"
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

		nuevo_simbolo(tabla_simbolos, (yyvsp[(1) - (4)].strval), VARIABLE, tipo_variable,ambito);

        (yyval.intval) = tipo_variable;

		;}
    break;

  case 36:
#line 204 "parser.y"
    {
        nuevo_simbolo(tabla_simbolos, (yyvsp[(1) - (3)].strval), VARIABLE, (yyvsp[(3) - (3)].intval),ambito);
        (yyval.intval) = (yyvsp[(3) - (3)].intval);

        ;}
    break;

  case 37:
#line 210 "parser.y"
    {;}
    break;

  case 38:
#line 211 "parser.y"
    {;}
    break;

  case 39:
#line 212 "parser.y"
    {;}
    break;

  case 40:
#line 215 "parser.y"
    {;}
    break;

  case 41:
#line 216 "parser.y"
    {;}
    break;

  case 42:
#line 218 "parser.y"
    {

	ambito = ENTRADA;

;}
    break;

  case 43:
#line 223 "parser.y"
    {

	ambito = SALIDA;

;}
    break;

  case 44:
#line 229 "parser.y"
    {

	ambito = LOCAL;

;}
    break;

  case 45:
#line 236 "parser.y"
    {;}
    break;

  case 46:
#line 237 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( (yyvsp[(1) - (1)].simval));
		dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
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



    ;}
    break;

  case 47:
#line 265 "parser.y"
    {

		int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
				
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
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)  ){
            dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
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

  case 48:
#line 376 "parser.y"
    {
    	int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
        int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
		dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
        if (exp_tipo == exp_tipo2 ){
            if(exp_tipo == CELDA_TS){
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
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)  ){
            dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
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
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)  ){
            dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        }else if ( ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
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

  case 50:
#line 597 "parser.y"
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


		}else if ( ((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;
		
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			(yyval.expval) = ex1;

        
		}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
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

  case 51:
#line 725 "parser.y"
    {
    	
			int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
			int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
			dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO){

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

			}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)  ){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

			}else{
				error("Error expresion BT_DIV expresion: tipos incorrectos");
			}

		;}
    break;

  case 52:
#line 772 "parser.y"
    {
			int exp_tipo = (yyvsp[(1) - (3)].expval)->dir->tipo;
			int exp_tipo2 = (yyvsp[(3) - (3)].expval)->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = (yyvsp[(1) - (3)].expval)->dir;
			dir_elemento* exp2 = (yyvsp[(3) - (3)].expval)->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO){

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

			}else if (((exp_tipo == CELDA_TS && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)  ){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				(yyval.expval) = ex1;

			}else{
				error("Error expresion BT_MOD expresion: tipos incorrectos");
			}

    ;}
    break;

  case 53:
#line 818 "parser.y"
    { (yyval.expval) = (yyvsp[(2) - (3)].expval); ;}
    break;

  case 54:
#line 819 "parser.y"
    {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = (yyvsp[(2) - (2)].expval)->dir;
		if (exp1->tipo == CELDA_TS){
			if (exp1->val.celda_TS->val.var.tipo == ENTERO){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else if ( exp1->val.celda_TS->val.var.tipo == REAL){
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

  case 55:
#line 847 "parser.y"
    {
    ;}
    break;

  case 56:
#line 849 "parser.y"
    {

		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_real((yyvsp[(1) - (1)].floatval));
		ex1->dir = dir_temporal;
		(yyval.expval) = ex1;

    ;}
    break;

  case 57:
#line 857 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
  		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_entero((yyvsp[(1) - (1)].intval));
    	ex1->dir = dir_temporal;
        (yyval.expval) = ex1;
    
    ;}
    break;

  case 58:
#line 865 "parser.y"
    {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = (yyvsp[(2) - (2)].expval)->dir;
		if (exp1->tipo == CELDA_TS){
			if (exp1->val.celda_TS->val.var.tipo == ENTERO){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
			}else if ( exp1->val.celda_TS->val.var.tipo == REAL){
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

  case 59:
#line 893 "parser.y"
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

  case 60:
#line 938 "parser.y"
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

  case 61:
#line 987 "parser.y"
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

  case 62:
#line 1019 "parser.y"
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

  case 63:
#line 1031 "parser.y"
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

  case 64:
#line 1095 "parser.y"
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

  case 65:
#line 1157 "parser.y"
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

  case 66:
#line 1219 "parser.y"
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

  case 67:
#line 1279 "parser.y"
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

  case 68:
#line 1339 "parser.y"
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

  case 69:
#line 1400 "parser.y"
    {
	(yyval.intval) = tabla_cuadruplas->next_quad;
;}
    break;

  case 70:
#line 1404 "parser.y"
    {
	(yyval.listval) = makelist(tabla_cuadruplas->next_quad);
	gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
;}
    break;

  case 71:
#line 1408 "parser.y"
    {
	(yyval.simval) = buscar_sim_nombre(tabla_simbolos, (yyvsp[(1) - (1)].strval) );
	;}
    break;

  case 72:
#line 1411 "parser.y"
    {;}
    break;

  case 73:
#line 1412 "parser.y"
    {;}
    break;

  case 74:
#line 1413 "parser.y"
    {;}
    break;

  case 75:
#line 1418 "parser.y"
    {

                if((yyvsp[(1) - (4)].listval) != NULL){
                    backpatch(tabla_cuadruplas,(yyvsp[(1) - (4)].listval),(yyvsp[(3) - (4)].intval));
                }
                (yyval.listval) = (yyvsp[(4) - (4)].listval);

            ;}
    break;

  case 76:
#line 1426 "parser.y"
    {

                 (yyval.listval) = (yyvsp[(1) - (1)].listval);

            ;}
    break;

  case 77:
#line 1432 "parser.y"
    {;}
    break;

  case 78:
#line 1433 "parser.y"
    {
                (yyval.listval) = NULL;

            ;}
    break;

  case 79:
#line 1437 "parser.y"
    {



            (yyval.listval) = (yyvsp[(1) - (1)].listval);

            ;}
    break;

  case 80:
#line 1444 "parser.y"
    {

				(yyval.listval) = (yyvsp[(1) - (1)].listval)
			;}
    break;

  case 81:
#line 1448 "parser.y"
    {;}
    break;

  case 82:
#line 1450 "parser.y"
    {
		dir_elemento* res = nuevo_dir_elemento_celda_TS((yyvsp[(1) - (3)].simval));


		int res_simbolo_tipo = res->val.celda_TS->val.var.tipo;
		int exp_tipo = (yyvsp[(3) - (3)].expval)->dir->tipo;

		if(exp_tipo == CELDA_TS){
			int exp_simbolo_tipo = (yyvsp[(3) - (3)].expval)->dir->val.celda_TS->val.var.tipo;

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
				error("Aqui estas");
				gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].expval)->dir, NULL, res);
			}
			else if (exp_simbolo_tipo == ENTERO && res_simbolo_tipo == REAL){
				dir_elemento* dir_temporal = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
                gen(tabla_cuadruplas, OP_INTTOREAL,(yyvsp[(3) - (3)].expval)->dir,NULL,dir_temporal);
				gen(tabla_cuadruplas, (yyvsp[(2) - (3)].intval), dir_temporal, NULL, res);
			}
			else{
				error("Error en asignacion: operando BT_ASIGNACION expresion, tipo expresion incompatible con operando");
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
		;}
    break;

  case 83:
#line 1535 "parser.y"
    {
    backpatch(tabla_cuadruplas,(yyvsp[(2) - (10)].expval)->lista_true,(yyvsp[(4) - (10)].intval));



    if ((yyvsp[(8) - (10)].listval) == NULL){

        backpatch(tabla_cuadruplas,(yyvsp[(6) - (10)].listval),(yyvsp[(7) - (10)].intval));
        backpatch(tabla_cuadruplas,(yyvsp[(2) - (10)].expval)->lista_false,(yyvsp[(9) - (10)].intval));
        (yyval.listval) = merge((yyvsp[(2) - (10)].expval)->lista_false,merge((yyvsp[(5) - (10)].listval),(yyvsp[(6) - (10)].listval)));
    }else{
         backpatch(tabla_cuadruplas,(yyvsp[(6) - (10)].listval),(yyvsp[(9) - (10)].intval));
         backpatch(tabla_cuadruplas,(yyvsp[(2) - (10)].expval)->lista_false,(yyvsp[(7) - (10)].intval));
         (yyval.listval) = merge((yyvsp[(2) - (10)].expval)->lista_false,merge((yyvsp[(5) - (10)].listval),(yyvsp[(8) - (10)].listval)));
    }




;}
    break;

  case 84:
#line 1555 "parser.y"
    {
                backpatch(tabla_cuadruplas,(yyvsp[(2) - (9)].expval)->lista_true,(yyvsp[(4) - (9)].intval));

                if ((yyvsp[(8) - (9)].listval) == NULL){

                    backpatch(tabla_cuadruplas,(yyvsp[(6) - (9)].listval),(yyvsp[(7) - (9)].intval));
                    backpatch(tabla_cuadruplas,(yyvsp[(2) - (9)].expval)->lista_false,(yyvsp[(9) - (9)].intval));
                    (yyval.listval) = merge((yyvsp[(2) - (9)].expval)->lista_false,merge((yyvsp[(5) - (9)].listval),(yyvsp[(6) - (9)].listval)));
                }else{
                    backpatch(tabla_cuadruplas,(yyvsp[(6) - (9)].listval),(yyvsp[(9) - (9)].intval));
                    backpatch(tabla_cuadruplas,(yyvsp[(2) - (9)].expval)->lista_false,(yyvsp[(7) - (9)].intval));
                    (yyval.listval) = merge((yyvsp[(2) - (9)].expval)->lista_false,merge((yyvsp[(5) - (9)].listval),(yyvsp[(8) - (9)].listval)));
                }


                ;}
    break;

  case 85:
#line 1571 "parser.y"
    {
                    (yyval.listval) = NULL;

			  ;}
    break;

  case 86:
#line 1576 "parser.y"
    { (yyval.listval) = (yyvsp[(1) - (1)].listval) ;}
    break;

  case 87:
#line 1577 "parser.y"
    { (yyval.listval) = (yyvsp[(1) - (1)].listval) ;}
    break;

  case 88:
#line 1579 "parser.y"
    {

	backpatch(tabla_cuadruplas,(yyvsp[(2) - (7)].expval)->lista_true,(yyvsp[(4) - (7)].intval));
	if ((yyvsp[(5) - (7)].listval) != NULL) {
		backpatch(tabla_cuadruplas,merge((yyvsp[(6) - (7)].listval),(yyvsp[(7) - (7)].listval)),(yyvsp[(4) - (7)].intval));
	} else {
		backpatch(tabla_cuadruplas,(yyvsp[(6) - (7)].listval),(yyvsp[(4) - (7)].intval));
	}
	(yyval.listval) = (yyvsp[(2) - (7)].expval)->lista_false;




;}
    break;

  case 89:
#line 1593 "parser.y"
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

  case 90:
#line 1621 "parser.y"
    {;}
    break;

  case 91:
#line 1622 "parser.y"
    {;}
    break;

  case 92:
#line 1623 "parser.y"
    {;}
    break;

  case 93:
#line 1624 "parser.y"
    {;}
    break;

  case 94:
#line 1625 "parser.y"
    {;}
    break;

  case 95:
#line 1626 "parser.y"
    {;}
    break;

  case 96:
#line 1627 "parser.y"
    {;}
    break;

  case 97:
#line 1629 "parser.y"
    {;}
    break;

  case 98:
#line 1630 "parser.y"
    {;}
    break;

  case 99:
#line 1631 "parser.y"
    {;}
    break;

  case 100:
#line 1634 "parser.y"
    {;}
    break;

  case 101:
#line 1635 "parser.y"
    {;}
    break;

  case 102:
#line 1636 "parser.y"
    {;}
    break;

  case 103:
#line 1637 "parser.y"
    {;}
    break;

  case 104:
#line 1638 "parser.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 3623 "parser.tab.c"
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


#line 1641 "parser.y"


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

