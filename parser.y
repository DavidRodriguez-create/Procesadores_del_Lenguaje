%{
    #include <ctype.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "tabla_de_simbolos.h"
	#include "tabla_de_cuadruplas.h"

	int yylex();
	void yyerror(const char *s);
	extern FILE *yyin;
	tabla_de_simbolos* tabla_simbolos;
	tabla_de_cuadruplas* tabla_cuadruplas;
%}

%union {
	int intval;
	float floatval;
	char charval;
	char *strval;
	struct simbolo * simval;
	struct dir_elemento* dirval;
}

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
%token BT_LITERALCARACTER
%token BT_VERDADERO
%token BT_FALSO
%token BT_LITERAL
%token BT_ENT
%token BT_SAL
%token BT_ENTSAL
%token BT_LITERALNUMERICO
%token BT_LITERALENTERO
%token BT_LITERALREAL
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
%token BT_OPREL

%token BT_SINOSI

%left BT_O
%left BT_Y
%right BT_NO

%left BT_MAYOR BT_MENOR BT_IGUAL BT_DISTINTO BT_MAYORIGUAL BT_MENORIGUAL
%left BT_MOD BT_DIV
%left BT_SUMA BT_RESTA
%left BT_MULTIPLICACION BT_DIVREAL

%left BT_OPREL

%left BT_REF BT_INICIOARRAY BT_PUNTO


%type <strval> BT_IDENTIFICADOR
%type <strval> BT_TIPOBASE
%type <floatval> BT_LITERALREAL
%type <intval> BT_LITERALENTERO


%%



descAlgoritmo : BT_ALGORITMO BT_IDENTIFICADOR BT_COMPOSICIONSECUENCIAL cabeceraAlgoritmo bloqueAlgoritmo BT_FALGORITMO {printf("buenos dias\n");};

cabeceraAlgoritmo : defGlobales defAccionesFunciones defVariablesInteraccion BT_COMENTARIO {};
bloqueAlgoritmo : bloque BT_COMENTARIO {};
defGlobales : definicionTipo defGlobales {}
            | definicionConst defGlobales {}
            | /* */ {}
            ;
defAccionesFunciones : defAccion defAccionesFunciones {}
                     | defFuncion defAccionesFunciones {}
                     | /* */ {}
                     ;
bloque : declaraciones instrucciones {};
declaraciones : definicionTipo declaraciones {}
            | definicionConst declaraciones {}
            | definicionVar declaraciones {}
            | /* */ {}
            ;

definicionTipo : BT_TIPO listaDefsTipo BT_FTIPO {};
definicionConst : BT_CONST listaDefsConstantes BT_FCONST {};
definicionVar : BT_VAR listaDefsVariables BT_FVAR {};

listaDefsTipo : BT_IDENTIFICADOR BT_CREACIONTIPO defTipo BT_COMPOSICIONSECUENCIAL listaDefsTipo {}
							| /* */ {}
							;
defTipo : BT_TUPLA listaCampos BT_FTUPLA {}
	| BT_TABLA BT_INICIOARRAY expresionT BT_SUBRANGO expresionT BT_FINARRAY BT_DE defTipo {}
	| BT_IDENTIFICADOR {}
	| expresionT BT_SUBRANGO expresionT {}
	| BT_REF defTipo {}
	| BT_TIPOBASE { $<strval>$ = $<strval>1;}
	;
expresionT : BT_LITERALENTERO {}
	   | BT_LITERALCARACTER {}
					 ;
listaCampos : BT_IDENTIFICADOR BT_ASIGNACION defTipo BT_COMPOSICIONSECUENCIAL listaCampos {}
	    | /* */ {}
	    ;

listaDefsConstantes : BT_IDENTIFICADOR BT_ASIGNACION BT_LITERAL BT_COMPOSICIONSECUENCIAL listaDefsConstantes {}
		    | /* */ {}
		    ;

listaDefsVariables : listaId listaDefsVariables {}
		   | /* */ {}
		   ;
listaId : BT_IDENTIFICADOR BT_DEFINICIONTIPOVARIABLE defTipo BT_COMPOSICIONSECUENCIAL
		{
		int tipo_variable;
		if (strcasecmp($<strval>3,"entero")==0){
			tipo_variable = ENTERO;
		} else if (strcasecmp($<strval>3,"real")==0) {
			tipo_variable = REAL;
		} else if (strcasecmp($<strval>3,"booleano")==0) {
			tipo_variable = BOOLEANO;
	    } else if (strcasecmp($<strval>3,"caracter")==0) {
			tipo_variable = CARACTER;
	    } else if (strcasecmp($<strval>3,"cadena")==0) {
			tipo_variable = CADENA;
        } else {
        	tipo_variable = -1;
        	printf("ERROR def tipo\n");
        }

		nuevo_simbolo(tabla_simbolos, $<strval>1, VARIABLE, tipo_variable);

        $<intval>$ = tipo_variable;

		}
        | BT_IDENTIFICADOR BT_SEPARADOR listaId {
        nuevo_simbolo(tabla_simbolos, $<strval>1, VARIABLE, $<intval>3);
        $<intval>$ = $<intval>3;

        }

defVariablesInteraccion : defEntrada {}
			| defEntrada defSalida {}
			| defSalida {}
			;

defEntrada : BT_ENT listaDefsVariables {};
defSalida : BT_SAL listaDefsVariables {};


expresion : llamadaFuncion {}
    | operando {
    	dir_elemento* exp1 = nuevo_dir_elemento_celda_TS($<simval>1);
    	$<dirval>$ = exp1;
    }
    | expresion BT_SUMA expresion {

    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<dirval>1;
		dir_elemento* exp2 = $<dirval>3;
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

	$<dirval>$ = dir_temporal;
//	gen(tabla_cuadruplas, $<intval>2, exp1, exp2, sim_temporal);


    }
    | expresion BT_RESTA expresion {
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<dirval>1;
		dir_elemento* exp2 = $<dirval>3;
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
		$<dirval>$ = dir_temporal;

    }
    | expresion BT_MULTIPLICACION expresion {
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<dirval>1;
		dir_elemento* exp2 = $<dirval>3;
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
		$<dirval>$ = dir_temporal;
    }
    | expresion BT_DIVREAL expresion {
	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
	dir_elemento* dir_temporal2  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
	dir_elemento* exp1 = $<dirval>1;
	dir_elemento* exp2 = $<dirval>3;
	if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO){

		dir_temporal->val.celda_TS->val.var.tipo = REAL;
		dir_temporal2->val.celda_TS->val.var.tipo = REAL;
		gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
		gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal2);
		gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,dir_temporal2,dir_temporal);

	}else if(exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == ENTERO){
		dir_temporal->val.celda_TS->val.var.tipo = REAL;
		gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
		gen(tabla_cuadruplas, OP_DIVREAL, exp1,dir_temporal,dir_temporal);


	}else if(exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == REAL){
		dir_temporal->val.celda_TS->val.var.tipo = REAL;
		gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
		gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal ,exp2,dir_temporal);
	}else{
		dir_temporal->val.celda_TS->val.var.tipo = REAL;
		gen(tabla_cuadruplas, OP_DIVREAL, exp1 ,exp2,dir_temporal);
	}
	$<dirval>$ = dir_temporal;
    }
    | expresion BT_DIV expresion {
	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
	dir_elemento* exp1 = $<dirval>1;
	dir_elemento* exp2 = $<dirval>3;
	if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO){

		dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
		gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);

	}else{
		printf("Error expresion BT_DIV expresion: tipos incorrectos");
	}

	$<dirval>$ = dir_temporal;

    }
    | expresion BT_MOD expresion {
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<dirval>1;
		dir_elemento* exp2 = $<dirval>3;
		if (exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO){

			dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);

		}else{
			printf("Error expresion BT_MOD expresion: tipos incorrectos");
		}

		$<dirval>$ = dir_temporal;
    }
    | BT_INICIOPARENTESIS expresion BT_FINPARENTESIS { $<dirval>$ = $<dirval>2; }
    | BT_RESTA expresion {

		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<dirval>2;
		if (exp1->tipo == CELDA_TS){
			if (exp1->val.celda_TS->val.var.tipo == ENTERO){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else if ( exp1->val.celda_TS->val.var.tipo == REAL){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else{
				printf("Error BT_RESTA expresion: tipo incorrecto");
			}
		}else if (exp1->tipo == CONSTANTE_INT){
			dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
		} else if (exp1->tipo == CONSTANTE_FLOAT){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
		} else {
			printf("Error BT_RESTA expresion: tipo incorrecto");
		}

		$<dirval>$ = dir_temporal;

    }
    | BT_LITERALNUMERICO {
    
    
    
    
    
    }
    |BT_LITERALREAL {
    dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_real($<floatval>1);
    $<dirval>$ = dir_temporal;
    
    
    
    }
    |BT_LITERALENTERO{
  		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_entero($<intval>1);
    	$<dirval>$ = dir_temporal;
    
    }
    | BT_SUMA expresion {
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
	dir_elemento* exp1 = $<dirval>2;
	if (exp1->tipo == CELDA_TS){
		if (exp1->val.celda_TS->val.var.tipo == ENTERO){
			dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
			gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
		}else if ( exp1->val.celda_TS->val.var.tipo == REAL){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
		}else{
			printf("Error OP_SUMA_UNARIA expresion: tipo incorrecto");
		}
	}else if (exp1->tipo == CONSTANTE_INT){
		dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
		gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
	} else if (exp1->tipo == CONSTANTE_FLOAT){
		dir_temporal->val.celda_TS->val.var.tipo = REAL;
		gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
	} else {
		printf("Error en OP_SUMA_UNARIA: tipo incorrecto");
	}

	$<dirval>$ = dir_temporal;
    }
    | expresion BT_OPREL expresion {}

    | expresion BT_Y expresion {}
    | expresion BT_O expresion {}
    | BT_NO expresion {}
    | BT_VERDADERO {}
    | BT_FALSO {}
    | expresion BT_MAYOR expresion {}
    | expresion BT_MENOR expresion {}
    | expresion BT_IGUAL expresion {}
    | expresion BT_DISTINTO expresion {}
    | expresion BT_MAYORIGUAL expresion {}
    | expresion BT_MENORIGUAL expresion {}
    ;
operando : BT_IDENTIFICADOR {
	$<simval>$ = buscar_sim_nombre(tabla_simbolos, $<strval>1 );
	}
    | operando BT_PUNTO operando {}
    | operando BT_INICIOARRAY expresion BT_FINARRAY {}
    | operando BT_REF {}
    ;



instrucciones : instruccion BT_COMPOSICIONSECUENCIAL instrucciones {}
            | instruccion {}
            ;
instruccion : BT_CONTINUAR {}
            | asignacion {}
            | alternativa {}
            | iteracion {}
            | llamadaAccion {}
            ;
asignacion : operando BT_ASIGNACION expresion {
		dir_elemento* res = nuevo_dir_elemento_celda_TS($<simval>1);
		gen(tabla_cuadruplas, $<intval>2, $<dirval>3, NULL, res);
		};
alternativa : BT_SI expresion BT_ENTONCES instrucciones listaOpciones BT_FSI {};
listaOpciones : BT_SINOSI expresion BT_ENTONCES instrucciones listaOpciones {}
			  | /* */ {}
			  ;
iteracion : itCotaFija {}
		  | itCotaVariable {}
		  ;
itCotaVariable : BT_MIENTRAS expresion BT_HACER instrucciones BT_FMIENTRAS {};
itCotaFija : BT_PARA BT_IDENTIFICADOR BT_ASIGNACION expresion BT_HASTA expresion BT_HACER instrucciones BT_FPARA {};


defAccion : BT_ACCION cabeceraAccion bloque BT_FACCION {};
defFuncion : BT_FUNCION cabeceraFuncion bloque BT_DEV expresion BT_FFUNCION {};
cabeceraAccion : BT_IDENTIFICADOR BT_INICIOPARENTESIS defParForm BT_FINPARENTESIS BT_COMPOSICIONSECUENCIAL {};
cabeceraFuncion : BT_IDENTIFICADOR BT_INICIOPARENTESIS listaDefsVariables BT_FINPARENTESIS BT_DEV defTipo {};
defParForm : dParForm BT_COMPOSICIONSECUENCIAL defParForm {}
		   | dParForm {}
		   | /* */ {}
		   ;
dParForm : BT_ENT listaId BT_DEFINICIONTIPOVARIABLE defTipo {}
		 | BT_SAL listaId BT_DEFINICIONTIPOVARIABLE defTipo {}
		 | BT_ENTSAL listaId BT_DEFINICIONTIPOVARIABLE defTipo {}
		 ;

llamadaAccion : BT_IDENTIFICADOR BT_INICIOPARENTESIS parametrosReales BT_FINPARENTESIS {};
llamadaFuncion : BT_IDENTIFICADOR BT_INICIOPARENTESIS parametrosReales BT_FINPARENTESIS {};
parametrosReales : expresion BT_SEPARADOR parametrosReales {}
				 | expresion {}
				 | /* */ {}
				 ;

%%

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
