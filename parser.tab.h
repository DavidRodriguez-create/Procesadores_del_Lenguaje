/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 103 "parser.y"

	int intval;
	float floatval;
	char charval;
	char *strval;

#line 137 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
