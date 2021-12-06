/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 20 "parser.y"
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
/* Line 1529 of yacc.c.  */
#line 204 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

