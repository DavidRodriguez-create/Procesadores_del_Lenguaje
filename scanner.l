%{
    

	#include "parser.tab.h"
	#include "tabla_de_cuadruplas.h"
    char *str_replace(char *orig, char *rep, char *with);
%}

DR_CIFRA	[0-9]
DR_LETRA	[a-zA-Z_]

DR_LETRAOCIFRA	{DR_LETRA}|{DR_CIFRA}
DR_IDENTIFICADOR	{DR_LETRA}{DR_LETRAOCIFRA}*

DR_LITERALENTERO	{DR_CIFRA}{DR_CIFRA}*((e|E)(\+|-)?{DR_CIFRA}{DR_CIFRA}*)?
DR_LITERALREAL		{DR_CIFRA}{DR_CIFRA}*(\.{DR_CIFRA}{DR_CIFRA}*)?((e|E)(\+|-)?{DR_CIFRA}{DR_CIFRA}*)?
DR_LITERALBOOLEANO	(?i:verdadero)|(?i:falso)
DR_LITERALCARACTER	\".\"
DR_LITERALCADENA	'([^']|\/')*'
DR_COMENTARIO		\{([^\}]|\/\})*\}

 //Palabras reservadas
DR_PR_ACCION	(?i:accion)
DR_PR_ALGORITMO	(?i:algoritmo)
DR_PR_BOOLEANO	(?i:booleano)
DR_PR_CADENA	(?i:cadena)
DR_PR_CARACTER	(?i:caracter)
DR_PR_CONST	(?i:const)
DR_PR_CONTINUAR	(?i:continuar)
DR_PR_DE	(?i:de)
DR_PR_DEV	(?i:dev)
DR_PR_ENT	(?i:ent)
DR_PR_ENTERO	(?i:entero)
DR_PR_ENTSAL	(?i:e\/s)
DR_PR_FACCION	(?i:faccion)
DR_PR_FALGORITMO	(?i:falgoritmo)
DR_PR_FCONST	(?i:fconst)
DR_PR_FFUNCION	(?i:ffuncion)
DR_PR_FMIENTRAS	(?i:fmientras)
DR_PR_FPARA	(?i:fpara)
DR_PR_FSI	(?i:fsi)
DR_PR_FTIPO	(?i:ftipo)
DR_PR_FTUPLA	(?i:ftupla)
DR_PR_FUNCION	(?i:funcion)
DR_PR_FVAR	(?i:fvar)
DR_PR_HACER	(?i:hacer)
DR_PR_HASTA	(?i:hasta)
DR_PR_MIENTRAS	(?i:mientras)
DR_PR_NO	(?i:no)
DR_PR_O	(?i:o)
DR_PR_PARA	(?i:para)
DR_PR_REAL	(?i:real)
DR_PR_REF	(?i:ref)
DR_PR_SAL	(?i:sal)
DR_PR_SI	(?i:si)
DR_PR_TABLA	(?i:tabla)
DR_PR_TIPO	(?i:tipo)
DR_PR_TUPLA	(?i:tupla)
DR_PR_VAR	(?i:var)
DR_PR_Y	(?i:y)

 // Otros Tokens
DR_OT_ASIGNACION :=
DR_OT_COMPOSICIONSECUENCIAL ;
DR_OT_DEFINICIONTIPOVARIABLE :
DR_OT_ENTONCES ->
DR_OT_INICIOARRAY \[
DR_OT_FINARRAY \]
DR_OT_CREACIONTIPO =
DR_OT_SEPARADOR ,
DR_OT_SINOSI \[\]
DR_OT_SUBRANGO \.\.

 // Operadores Relacionales
DR_OR_MAYOR	>
DR_OR_MENOR	<
DR_OR_DISTINTO	<>
DR_OR_MAYORIGUAL >=
DR_OR_MENORIGUAL <=
DR_OPREL DR_OR_MAYOR|DR_OR_MENOR|DR_OR_DISTINTO|DR_OR_MAYORIGUAL|DR_OR_MENORIGUAL|DR_OT_CREACIONTIPO

 // Operadores Aritmeticos
DR_OA_SUMA	\+
DR_OA_RESTA	-
DR_OA_DIV	(?i:div)
DR_OA_MOD	(?i:mod)
DR_OA_DIVREAL	\/
DR_OA_MULTIPLICACION	\*
DR_OA_INICIOPARENTESIS \(
DR_OA_FINPARENTESIS \)
	//{DR_LITERALBOOLEANO}	{printf("DR_LITERALBOOLEANO "); return BT_LITERALBOOLEANO;}
	//{DR_LITERALCADENA}	{printf("DR_LITERALCADENA "); return BT_LITERALCADENA;}
	//{DR_LITERALREAL}	{printf("DR_LITERALREAL "); return BT_LITERALREAL;}

 // en la parte de abajo la ordenacion importa (arriba importante)
%%
{DR_LITERALBOOLEANO}	{printf("DR_LITERALBOOLEANO ");
                        yylval.strval = strdup(yytext);
                        return BT_LITERALBOOLEANO;
                        }
{DR_LITERALCARACTER}	{printf("DR_LITERALCARACTER "); return BT_LITERALCARACTER;}
{DR_LITERALCADENA}	{printf("DR_LITERALCADENA ");}
{DR_LITERALENTERO}	{printf("DR_LITERALENTERO ");
       
                        yylval.intval = (int)atof(strdup(yytext));
                     
        
                      return BT_LITERALENTERO;}
{DR_LITERALREAL}	{printf("DR_LITERALREAL "); 
                     yylval.floatval = atof(strdup(yytext));
                    return BT_LITERALREAL;}
{DR_COMENTARIO}	{printf("DR_COMENTARIO "); return BT_COMENTARIO;}

{DR_PR_ACCION}	{printf("DR_PR_ACCION "); return BT_ACCION;}
{DR_PR_ALGORITMO}	{printf("DR_PR_ALGORITMO "); return BT_ALGORITMO;}
{DR_PR_BOOLEANO}	{printf("DR_PR_BOOLEANO ");
                    yylval.strval = strdup(yytext);
                    return BT_TIPOBASE;}
{DR_PR_CADENA}	{printf("DR_PR_CADENA ");
                 yylval.strval = strdup(yytext);
                 return BT_TIPOBASE;}
{DR_PR_CARACTER}	{printf("DR_PR_CARACTER ");
                     yylval.strval = strdup(yytext);
                     return BT_TIPOBASE;}
{DR_PR_ENTERO}	{printf("DR_PR_ENTERO ");
                 yylval.strval = strdup(yytext);
                 return BT_TIPOBASE;  }
{DR_PR_REAL}	{printf("DR_PR_REAL ");
                 yylval.strval = strdup(yytext);
                 return BT_TIPOBASE; }

{DR_PR_CONST}	{printf("DR_PR_CONST "); return BT_CONST;}
{DR_PR_CONTINUAR}	{printf("DR_PR_CONTINUAR "); return BT_CONTINUAR;}
{DR_PR_DE}	{printf("DR_PR_DE "); return BT_DE;}
{DR_PR_DEV}	{printf("DR_PR_DEV "); return BT_DEV;}
{DR_PR_ENT}	{printf("DR_PR_ENT "); return BT_ENT;}

{DR_PR_ENTSAL}	{printf("DR_PR_ENTSAL "); return BT_ENTSAL;}
{DR_PR_FACCION}	{printf("DR_PR_FACCION "); return BT_FACCION;}
{DR_PR_FALGORITMO}	{printf("DR_PR_FALGORITMO "); return BT_FALGORITMO;}
{DR_PR_FCONST}	{printf("DR_PR_FCONST "); return BT_FCONST;}
{DR_PR_FFUNCION}	{printf("DR_PR_FFUNCION "); return BT_FFUNCION;}
{DR_PR_FMIENTRAS}	{printf("DR_PR_FMIENTRAS "); return BT_FMIENTRAS;}
{DR_PR_FPARA}	{printf("DR_PR_FPARA "); return BT_FPARA;}
{DR_PR_FSI}	{printf("DR_PR_FSI "); return BT_FSI;}
{DR_PR_FTIPO}	{printf("DR_PR_FTIPO "); return BT_FTIPO;}
{DR_PR_FTUPLA}	{printf("DR_PR_FTUPLA "); return BT_FTUPLA;}
{DR_PR_FUNCION}	{printf("DR_PR_FUNCION "); return BT_FUNCION;}
{DR_PR_FVAR}	{printf("DR_PR_FVAR "); return BT_FVAR;}
{DR_PR_HACER}	{printf("DR_PR_HACER "); return BT_HACER;}
{DR_PR_HASTA}	{printf("DR_PR_HASTA "); return BT_HASTA;}
{DR_PR_MIENTRAS}	{printf("DR_PR_MIENTRAS "); return BT_MIENTRAS;}
{DR_PR_NO}	{printf("DR_PR_NO "); return BT_NO;}
{DR_PR_O}	{printf("DR_PR_O "); return BT_O;}
{DR_PR_PARA}	{printf("DR_PR_PARA "); return BT_PARA;}
{DR_PR_REF}	{printf("DR_PR_REF "); return BT_REF;}
{DR_PR_SAL}	{printf("DR_PR_SAL "); return BT_SAL;}
{DR_PR_SI}	{printf("DR_PR_SI "); return BT_SI;}
{DR_PR_TABLA}	{printf("DR_PR_TABLA "); return BT_TABLA;}
{DR_PR_TIPO}	{printf("DR_PR_TIPO "); return BT_TIPO;}
{DR_PR_TUPLA}	{printf("DR_PR_TUPLA "); return BT_TUPLA;}
{DR_PR_VAR}	{printf("DR_PR_VAR "); return BT_VAR;}
{DR_PR_Y}	{printf("DR_PR_Y "); return BT_Y;}

{DR_OT_ASIGNACION}	{printf("DR_OT_ASIGNACION ");
                    yylval.intval = OP_ASIGNACION;
                    return BT_ASIGNACION;}
{DR_OT_COMPOSICIONSECUENCIAL}	{printf("DR_OT_COMPOSICIONSECUENCIAL "); return BT_COMPOSICIONSECUENCIAL;}
{DR_OT_DEFINICIONTIPOVARIABLE}	{printf("DR_OT_DEFINICIONTIPOVARIABLE "); return BT_DEFINICIONTIPOVARIABLE;}
{DR_OT_ENTONCES}	{printf("DR_OT_ENTONCES "); return BT_ENTONCES;}
{DR_OT_INICIOARRAY}	{printf("DR_OT_INICIOARRAY "); return BT_INICIOARRAY;}
{DR_OT_FINARRAY}	{printf("DR_OT_FINARRAY "); return BT_FINARRAY;}
{DR_OT_CREACIONTIPO}	{printf("DR_OT_CREACIONTIPO "); return BT_CREACIONTIPO;}
{DR_OT_SEPARADOR}	{printf("DR_OT_SEPARADOR "); return BT_SEPARADOR;}
{DR_OT_SINOSI}	{printf("DR_OT_SINOSI "); return BT_SINOSI;}
{DR_OT_SUBRANGO}	{printf("DR_OT_SUBRANGO "); return BT_SUBRANGO;}

{DR_OR_MAYOR}	{printf("DR_OR_MAYOR "); return BT_MAYOR;}
{DR_OR_MENOR}	{printf("DR_OR_MENOR "); return BT_MENOR;}
{DR_OR_DISTINTO}	{printf("DR_OR_DISTINTO "); return BT_DISTINTO;}
{DR_OR_MAYORIGUAL}	{printf("DR_OR_MAYORIGUAL "); return BT_MAYORIGUAL;}
{DR_OR_MENORIGUAL}	{printf("DR_OR_MENORIGUAL "); return BT_MENORIGUAL;}

{DR_OA_SUMA}	{printf("DR_OA_SUMA ");
                yylval.intval = OP_SUMA;
                return BT_SUMA;}
{DR_OA_RESTA}	{printf("DR_OA_RESTA ");
                yylval.intval = OP_RESTA;
                return BT_RESTA;}
{DR_OA_DIV}		{printf("DR_OA_DIV ");
                yylval.intval = OP_DIV;
                return BT_DIV;}
{DR_OA_MOD}		{printf("DR_OA_MOD ");
                yylval.intval = OP_MOD;
                return BT_MOD;}
{DR_OA_DIVREAL}	{printf("DR_OA_DIVREAL ");
                yylval.intval = OP_DIVREAL;
                return BT_DIVREAL;}
{DR_OA_MULTIPLICACION}	{printf("DR_OA_MULTIPLICACION ");
                yylval.intval = OP_MULTIPLICACION;
                return BT_MULTIPLICACION;}
{DR_OA_INICIOPARENTESIS}	{printf("DR_OA_INICIOPARENTESIS "); return BT_INICIOPARENTESIS;}
{DR_OA_FINPARENTESIS}		{printf("DR_OA_FINPARENTESIS "); return BT_FINPARENTESIS;}

{DR_IDENTIFICADOR}      {printf("DR_IDENTIFICADOR ");
                         yylval.strval = strdup(yytext);
                         return BT_IDENTIFICADOR;}

%%
