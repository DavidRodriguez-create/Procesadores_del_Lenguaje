%{
	int yylex();
	void yyerror(const char *s);
	
	
%}

%token BT_ALGORITMO
%token BT_FALGORITMO
%token BT_IDENTIFICADOR
%token BT_COMENTARIO
%token BT_TIPO
%token BT_FTIPO
%token BT_CONST
%token BT_FCONST
%token BT_VAR
%token BT_FVAR
%token BT_TUPLA
%token BT_FTUPLA
%token BT_TABLA
%token BT_DE
%token BT_DEV
%token BT_REF
%token BT_TIPOBASE
%token BT_LITERALENTERO
%token BT_LITERALCARACTER
%token BT_VERDADERO
%token BT_FALSO
%token BT_LITERAL
%token BT_ENT
%token BT_SAL
%token BT_ENTSAL
%token BT_LITERALNUMERICO
%token BT_Y
%token BT_O
%token BT_NO
%token BT_CONTINUAR
%token BT_SI
%token BT_FSI
%token BT_MIENTRAS
%token BT_FMIENTRAS
%token BT_HACER
%token BT_PARA
%token BT_FPARA
%token BT_HASTA
%token BT_ACCION
%token BT_FACCION
%token BT_FUNCION
%token BT_FFUNCION

%token BT_CERO
%token BT_DOSCIENTOSCINCUENTAYCINCO

%token BT_PUNTO

%token BT_SUMA
%token BT_RESTA
%token BT_DIV
%token BT_MOD
%token BT_DIVREAL
%token BT_MULTIPLICACION
%token BT_INICIOPARENTESIS
%token BT_FINPARENTESIS


%token BT_ASIGNACION
%token BT_COMPOSICIONSECUENCIAL
%token BT_DEFINICIONTIPOVARIABLE
%token BT_ENTONCES
%token BT_INICIOARRAY
%token BT_FINARRAY
%token BT_CREACIONTIPO
%token BT_SEPARADOR
%token BT_SUBRANGO

%token BT_MAYOR
%token BT_MENOR
%token BT_IGUAL
%token BT_DISTINTO
%token BT_MAYORIGUAL
%token BT_MENORIGUAL

%token BT_SINOSI

%left BT_O
%left BT_Y
%right BT_NO

%left BT_MAYOR BT_MENOR BT_IGUAL BT_DISTINTO BT_MAYORIGUAL BT_MENORIGUAL 
%left BT_MOD BT_DIV
%left BT_SUMA BT_RESTA
%left BT_MULTIPLICACION BT_DIVREAL
%left BT_REF BT_INICIOARRAY BT_PUNTO



%%



descAlgoritmo : BT_ALGORITMO BT_IDENTIFICADOR BT_COMPOSICIONSECUENCIAL cabeceraAlgoritmo bloqueAlgoritmo BT_FALGORITMO


cabeceraAlgoritmo : defGlobales defAccionesFunciones defVariablesInteraccion BT_COMENTARIO
bloqueAlgoritmo : bloque BT_COMENTARIO
defGlobales : definicionTipo defGlobales | definicionConst defGlobales | /* */
defAccionesFunciones : defAccion defAccionesFunciones | defFuncion defAccionesFunciones | /* */
bloque : declaraciones instrucciones
declaraciones : definicionTipo declaraciones | definicionConst declaraciones | definicionVar declaraciones | /* */



definicionTipo : BT_TIPO listaDefsTipo BT_FTIPO
definicionConst : BT_CONST listaDefsConstantes BT_FCONST
definicionVar : BT_VAR listaDefsVariables BT_FVAR



listaDefsTipo : BT_IDENTIFICADOR BT_CREACIONTIPO defTipo BT_COMPOSICIONSECUENCIAL listaDefsTipo | /* */
defTipo : BT_TUPLA listaCampos BT_FTUPLA | BT_TABLA BT_INICIOARRAY expresionT BT_SUBRANGO expresionT BT_FINARRAY BT_DE defTipo
defTipo : BT_IDENTIFICADOR | expresionT BT_SUBRANGO expresionT | BT_REF defTipo | BT_TIPOBASE
expresionT : BT_LITERALENTERO | BT_LITERALCARACTER
listaCampos : BT_IDENTIFICADOR BT_ASIGNACION defTipo BT_COMPOSICIONSECUENCIAL listaCampos | /* */



listaDefsConstantes : BT_IDENTIFICADOR BT_ASIGNACION BT_LITERAL BT_COMPOSICIONSECUENCIAL listaDefsConstantes | /* */

listaDefsVariables : listaId BT_DEFINICIONTIPOVARIABLE defTipo BT_COMPOSICIONSECUENCIAL listaDefsVariables | /* */
listaId : BT_IDENTIFICADOR BT_SEPARADOR listaId | BT_IDENTIFICADOR

defVariablesInteraccion : defEntrada | defEntrada defSalida | defSalida
defEntrada : BT_ENT listaDefsVariables
defSalida : BT_SAL listaDefsVariables



expresion : llamadaFuncion | operando 
expresion:  expresion BT_SUMA expresion | expresion BT_RESTA expresion | expresion BT_MULTIPLICACION expresion | expresion BT_DIVREAL expresion
expresion : expresion BT_DIV expresion | expresion BT_MOD expresion | BT_INICIOPARENTESIS expresion BT_FINPARENTESIS | BT_RESTA expresion
expresion : BT_LITERALNUMERICO
expresion : expresion BT_Y expresion | expresion BT_O expresion | BT_NO expresion | BT_VERDADERO | BT_FALSO
expresion : expresion BT_MAYOR expresion | expresion BT_MENOR expresion | expresion BT_IGUAL expresion | expresion BT_DISTINTO expresion | expresion BT_MAYORIGUAL expresion | expresion BT_MENORIGUAL expresion 
operando : BT_IDENTIFICADOR | operando BT_PUNTO operando | operando BT_INICIOARRAY expresion BT_FINARRAY | operando BT_REF



instrucciones : instruccion BT_COMPOSICIONSECUENCIAL instrucciones | instruccion
instruccion : BT_CONTINUAR | asignacion | alternativa | iteracion | llamadaAccion
asignacion : operando BT_ASIGNACION expresion
alternativa : BT_SI expresion BT_ENTONCES instrucciones listaOpciones BT_FSI
listaOpciones : BT_SINOSI expresion BT_ENTONCES instrucciones listaOpciones | /* */
iteracion : itCotaFija | itCotaVariable
itCotaVariable : BT_MIENTRAS expresion BT_HACER instrucciones BT_FMIENTRAS
itCotaFija : BT_PARA BT_IDENTIFICADOR BT_ASIGNACION expresion BT_HASTA expresion BT_HACER instrucciones BT_FPARA



defAccion : BT_ACCION cabeceraAccion bloque BT_FACCION
defFuncion : BT_FUNCION cabeceraFuncion bloque BT_DEV expresion BT_FFUNCION
cabeceraAccion : BT_IDENTIFICADOR BT_INICIOPARENTESIS defParForm BT_FINPARENTESIS BT_COMPOSICIONSECUENCIAL
cabeceraFuncion : BT_IDENTIFICADOR BT_INICIOPARENTESIS listaDefsVariables BT_FINPARENTESIS BT_DEV defTipo;
defParForm : dParForm BT_COMPOSICIONSECUENCIAL defParForm | dParForm | /* */
dParForm : BT_ENT listaId BT_DEFINICIONTIPOVARIABLE defTipo | BT_SAL listaId BT_DEFINICIONTIPOVARIABLE defTipo | BT_ENTSAL listaId BT_DEFINICIONTIPOVARIABLE defTipo

llamadaAccion : BT_IDENTIFICADOR BT_ASIGNACION BT_INICIOPARENTESIS parametrosReales BT_FINPARENTESIS
llamadaFuncion : BT_IDENTIFICADOR BT_ASIGNACION BT_INICIOPARENTESIS parametrosReales BT_FINPARENTESIS
parametrosReales : expresion BT_SEPARADOR parametrosReales | expresion | /* */


%%


void yyerror(const char *s){

}


