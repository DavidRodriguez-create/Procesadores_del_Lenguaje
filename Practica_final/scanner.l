DR_CIFRA	[0-9]
DR_LETRA	[a-zA-Z_]

DR_LETRAOCIFRA	{DR_LETRA}|{DR_CIFRA}
DR_IDENTIFICADOR	{DR_LETRA}{DR_LETRAOCIFRA}*

DR_LITERALENTERO	(\+|-)?{DR_CIFRA}{DR_CIFRA}*((e|E)(\+|-)?{DR_CIFRA}{DR_CIFRA}*)?
DR_LITERALREAL	(\+|-)?{DR_CIFRA}{DR_CIFRA}*(\.{DR_CIFRA}{DR_CIFRA}*)?((e|E)(\+|-)?{DR_CIFRA}{DR_CIFRA}*)?
DR_LITERALBOOLEANO	(?i:verdadero)|(?i:falso)
DR_LITERALCARACTER	\".\"
DR_LITERALCADENA	'([^']|\/')*'
DR_COMENTARIO	\{([^\}]|\/\})*\}

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
DR_PR_ES	(?i:e\/s)
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
 //DR_OR_IGUAL	=
 //{DR_OR_IGUAL}	{printf("DR_OR_IGUAL ");}
DR_OR_MAYOR	>
DR_OR_MENOR	<
DR_OR_DISTINTO	<>
DR_OR_MAYORIGUAL >=
DR_OR_MENORIGUAL <=
	//El DR_OR_IGUAL no esta en DR_OR ya que hay conflicto sintactico con DR_OT_CREACIONTIPO
	//DR_OR DR_OR_MAYOR|DR_OR_MENOR|DR_OR_DISTINTO|DR_OR_MAYORIGUAL|DR_OR_MENORIGUAL

 // Operadores Aritmeticos
DR_OA_SUMA	\+
DR_OA_RESTA	-
DR_OA_DIV	(?i:div)
DR_OA_MOD	(?i:mod)
DR_OA_DIVREAL	\/
DR_OA_MULTIPLICACION	\*
DR_OA_INICIOPARENTESIS \(
DR_OA_FINPARENTESIS \)


 // en la parte de abajo la ordenacion importa (arriba importante)
%%
{DR_LITERALBOOLEANO}	{printf("DR_LITERALBOOLEANO ");}
{DR_LITERALCARACTER}	{printf("DR_LITERALCARACTER ");}
{DR_LITERALCADENA}	{printf("DR_LITERALCADENA ");}
{DR_LITERALENTERO}	{printf("DR_LITERALENTERO ");}
{DR_LITERALREAL}	{printf("DR_LITERALREAL ");}
{DR_COMENTARIO}	{printf("DR_COMENTARIO ");}

{DR_PR_ACCION}	{printf("DR_PR_ACCION ");}
{DR_PR_ALGORITMO}	{printf("DR_PR_ALGORITMO ");}
{DR_PR_BOOLEANO}	{printf("DR_PR_BOOLEANO ");}
{DR_PR_CADENA}	{printf("DR_PR_CADENA ");}
{DR_PR_CARACTER}	{printf("DR_PR_CARACTER ");}
{DR_PR_CONST}	{printf("DR_PR_CONST ");}
{DR_PR_CONTINUAR}	{printf("DR_PR_CONTINUAR ");}
{DR_PR_DE}	{printf("DR_PR_DE ");}
{DR_PR_DEV}	{printf("DR_PR_DEV ");}
{DR_PR_ENT}	{printf("DR_PR_ENT ");}
{DR_PR_ENTERO}	{printf("DR_PR_ENTERO ");}
{DR_PR_ES}	{printf("DR_PR_ES ");}
{DR_PR_FACCION}	{printf("DR_PR_FACCION ");}
{DR_PR_FALGORITMO}	{printf("DR_PR_FALGORITMO ");}
{DR_PR_FCONST}	{printf("DR_PR_FCONST ");}
{DR_PR_FFUNCION}	{printf("DR_PR_FFUNCION ");}
{DR_PR_FMIENTRAS}	{printf("DR_PR_FMIENTRAS ");}
{DR_PR_FPARA}	{printf("DR_PR_FPARA ");}
{DR_PR_FSI}	{printf("DR_PR_FSI ");}
{DR_PR_FTIPO}	{printf("DR_PR_FTIPO ");}
{DR_PR_FTUPLA}	{printf("DR_PR_FTUPLA ");}
{DR_PR_FUNCION}	{printf("DR_PR_FUNCION ");}
{DR_PR_FVAR}	{printf("DR_PR_FVAR ");}
{DR_PR_HACER}	{printf("DR_PR_HACER ");}
{DR_PR_HASTA}	{printf("DR_PR_HASTA ");}
{DR_PR_MIENTRAS}	{printf("DR_PR_MIENTRAS ");}
{DR_PR_NO}	{printf("DR_PR_NO ");}
{DR_PR_O}	{printf("DR_PR_O ");}
{DR_PR_PARA}	{printf("DR_PR_PARA ");}
{DR_PR_REAL}	{printf("DR_PR_REAL ");}
{DR_PR_REF}	{printf("DR_PR_REF ");}
{DR_PR_SAL}	{printf("DR_PR_SAL ");}
{DR_PR_SI}	{printf("DR_PR_SI ");}
{DR_PR_TABLA}	{printf("DR_PR_TABLA ");}
{DR_PR_TIPO}	{printf("DR_PR_TIPO ");}
{DR_PR_TUPLA}	{printf("DR_PR_TUPLA ");}
{DR_PR_VAR}	{printf("DR_PR_VAR ");}
{DR_PR_Y}	{printf("DR_PR_Y ");}

{DR_OT_ASIGNACION}	{printf("DR_OT_ASIGNACION ");}
{DR_OT_COMPOSICIONSECUENCIAL}	{printf("DR_OT_COMPOSICIONSECUENCIAL ");}
{DR_OT_DEFINICIONTIPOVARIABLE}	{printf("DR_OT_DEFINICIONTIPOVARIABLE ");}
{DR_OT_ENTONCES}	{printf("DR_OT_ENTONCES ");}
{DR_OT_INICIOARRAY}	{printf("DR_OT_INICIOARRAY ");}
{DR_OT_FINARRAY}	{printf("DR_OT_FINARRAY ");}
{DR_OT_CREACIONTIPO}	{printf("DR_OT_CREACIONTIPO ");}
{DR_OT_SEPARADOR}	{printf("DR_OT_SEPARADOR ");}
{DR_OT_SINOSI}	{printf("DR_OT_SINOSI ");}
{DR_OT_SUBRANGO}	{printf("DR_OT_SUBRANGO ");}

{DR_OR_MAYOR}	{printf("DR_OR_MAYOR ");}
{DR_OR_MENOR}	{printf("DR_OR_MENOR ");}
{DR_OR_DISTINTO}	{printf("DR_OR_DISTINTO ");}
{DR_OR_MAYORIGUAL}	{printf("DR_OR_MAYORIGUAL ");}
{DR_OR_MENORIGUAL}	{printf("DR_OR_MENORIGUAL ");}

{DR_OA_SUMA}	{printf("DR_OA_SUMA ");}
{DR_OA_RESTA}	{printf("DR_OA_RESTA ");}
{DR_OA_DIV}		{printf("DR_OA_DIV ");}
{DR_OA_MOD}		{printf("DR_OA_MOD ");}
{DR_OA_DIVREAL}	{printf("DR_OA_DIVREAL ");}
{DR_OA_MULTIPLICACION}	{printf("DR_OA_MULTIPLICACION ");}
{DR_OA_INICIOPARENTESIS}	{printf("DR_OA_INICIOPARENTESIS ");}
{DR_OA_FINPARENTESIS}		{printf("DR_OA_FINPARENTESIS ");}

{DR_IDENTIFICADOR}		{printf("DR_IDENTIFICADOR ");}

%%

int main(int argc, char **argv){
	
	++argv, --argc;
	
	if(argc > 0)
		yyin = fopen(argv[0],"r");
	else
		yyin = stdin;
	yylex();
}




