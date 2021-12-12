%{
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



%}

%union {
	int intval;
	float floatval;
	char charval;
	char *strval;
	struct simbolo * simval;
	struct dir_elemento* dirval;
	struct expresion* expval;
	struct lista* listval;
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
%token BT_LITERALBOOLEANO
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

%left BT_MAYOR BT_MENOR BT_CREACIONTIPO BT_DISTINTO BT_MAYORIGUAL BT_MENORIGUAL
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

cabeceraAlgoritmo : defGlobales defAccionesFunciones defVariablesInteraccion BT_COMENTARIO {
	
};
bloqueAlgoritmo : bloque BT_COMENTARIO {
	

};
defGlobales : definicionTipo defGlobales {}
            | definicionConst defGlobales {}
            | /* */ {}
            ;
defAccionesFunciones : defAccion defAccionesFunciones {}
                     | defFuncion defAccionesFunciones {}
                     | /* */ {}
                     ;
bloque : declaraciones instrucciones {
	if ($<listval>2 != NULL){
		backpatch(tabla_cuadruplas,$<listval>2,tabla_cuadruplas->next_quad);
	}
	
	generarOutputs(tabla_simbolos,tabla_cuadruplas);
	

	
	
};
declaraciones : definicionTipo declaraciones {}
            | definicionConst declaraciones {}
            | definicionVar declaraciones {}
            | /* */ {}
            ;

definicionTipo : BT_TIPO listaDefsTipo BT_FTIPO {};
definicionConst : BT_CONST listaDefsConstantes BT_FCONST {};
definicionVar : BT_VAR TIPO_LOCAL listaDefsVariables BT_FVAR {};

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

listaDefsConstantes : BT_IDENTIFICADOR BT_ASIGNACION BT_LITERALENTERO BT_COMPOSICIONSECUENCIAL listaDefsConstantes {
					nuevo_simbolo_constante_entero(tabla_simbolos, $<strval>1, CONSTANTE, ENTERO, LOCAL,$<intval>3);
			}
			|BT_IDENTIFICADOR BT_ASIGNACION BT_LITERALREAL BT_COMPOSICIONSECUENCIAL listaDefsConstantes {

				nuevo_simbolo_constante_real(tabla_simbolos, $<strval>1,$<floatval>3);
			}
		    |BT_IDENTIFICADOR BT_ASIGNACION BT_LITERALBOOLEANO BT_COMPOSICIONSECUENCIAL listaDefsConstantes {

				nuevo_simbolo_constante_bool(tabla_simbolos, $<strval>1,$<strval>3);
			}
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
        	printf("\nERROR def tipo\n");
        }

		simbolo * s = nuevo_simbolo(tabla_simbolos, $<strval>1, VARIABLE, tipo_variable,ambito);
		dir_elemento * dir = nuevo_dir_elemento_celda_TS(s);

        $<intval>$ = tipo_variable;
		if (ambito == ENTRADA ){
			gen(tabla_cuadruplas,INPUT,NULL,NULL,dir);
		}
		

		}
        | BT_IDENTIFICADOR BT_SEPARADOR listaId {
        simbolo * s =  nuevo_simbolo(tabla_simbolos, $<strval>1, VARIABLE, $<intval>3,ambito);
		dir_elemento * dir = nuevo_dir_elemento_celda_TS(s);
        $<intval>$ = $<intval>3;
		if (ambito == ENTRADA ){
			gen(tabla_cuadruplas,INPUT,NULL,NULL,dir);
		}

        }

defVariablesInteraccion : defEntrada {}
			| defEntrada defSalida {}
			| defSalida {}
			;

defEntrada : BT_ENT TIPO_ENTRADA listaDefsVariables {};
defSalida : BT_SAL TIPO_SALIDA listaDefsVariables {};

TIPO_ENTRADA: /* */ {

	ambito = ENTRADA;

}
TIPO_SALIDA: /* */ {

	ambito = SALIDA;

}

TIPO_LOCAL: /* */ {

	ambito = LOCAL;

}


expresion : llamadaFuncion {}
    | operando {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( $<simval>1);
		dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
		int tipo_simbolo = $<simval>1->tipo;

		if (tipo_simbolo == CONSTANTE){
			if ($<simval>1->val.cons.tipo == BOOLEANO){

				ex1->dir = dir_temporal;
				ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
				ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
				$<expval>$ = ex1;
				gen(tabla_cuadruplas,OP_IGUAL,dir_temporal,dir_true,NULL);
				gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

			}else{
				ex1->dir = dir_temporal;
				ex1->lista_true = NULL;
				ex1->lista_false = NULL;
				$<expval>$ = ex1;
			}
			
			

		}else{
			int tipo = $<simval>1->val.var.tipo;

			if (tipo == BOOLEANO){
				ex1->dir = dir_temporal;
				ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
				ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
				$<expval>$ = ex1;
				gen(tabla_cuadruplas,OP_IGUAL,dir_temporal,dir_true,NULL);
				gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

			}else if (tipo == ENTERO || tipo == REAL){
				ex1->dir = dir_temporal;
				ex1->lista_true = NULL;
				ex1->lista_false = NULL;
				$<expval>$ = ex1;

			}else{
				printf(RED"\nError en la variable %s : Tipo incorrecto\n"RESET, $<simval>1->nombre);
			}
		}


		



    }
    | expresion BT_SUMA expresion {

		int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>3->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
				if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) ){
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
					$<expval>$ = ex1;

				}else if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes");
					}

				}else if ((exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
						
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_SUMA expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

			}else{
				error("Error en expresion BT_SUMA expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_SUMA, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){
			dir_temporal->val.celda_TS->val.var.tipo = REAL;
			if (exp_tipo2 == CONSTANTE_INT){
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, dir_temporal, dir_temporal);
			}else{
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal, exp2, dir_temporal);
			}
			
			
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL)  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, dir_temporal, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, exp1, dir_temporal, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_SUMA_REAL, dir_temporal, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

        
		}else{

            error("Error en expresion BT_SUMA  expresion: Tipo incorrecto");
        }
		//	gen(tabla_cuadruplas, $<intval>2, exp1, exp2, sim_temporal);


    }
    | expresion BT_RESTA expresion {
    	int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>3->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
        if (exp_tipo == exp_tipo2 ){
            if(exp_tipo == CELDA_TS){
				if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL)&& (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) ){
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
					$<expval>$ = ex1;
				}else if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE ){
					
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes");
					}

				}else if ((exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
						
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_RESTA expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


				
			}else{
				error("Error en expresion BT_RESTA expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL)  && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_RESTA, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){
									
						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				if (exp_tipo2 == CONSTANTE_INT){
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, dir_temporal, dir_temporal);
				}else{
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal, exp2, dir_temporal);
				}
			
			
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, dir_temporal, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL)  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_RESTA_REAL, exp1, dir_temporal, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_RESTA_REAL, dir_temporal, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

        
		}else{
            error("Error en expresion BT_RESTA expresion: Tipo incorrecto HOLAAAA");
        }

    }
    | expresion BT_MULTIPLICACION expresion {

     	int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>3->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) ){
				
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
					$<expval>$ = ex1;

				}else if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes");
					}

				}else if ((exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo == ENTERO && exp1->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
						
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes HOLAAAAA");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_MULTIPLICACION expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


				
			}else{
				error("Error en expresion BT_MULTIPLICACION expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) ){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_MULTIPLICACION, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				if (exp_tipo2 == CONSTANTE_INT){
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, dir_temporal, dir_temporal);
				}else{
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal, exp2, dir_temporal);
				}
			
			
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL)  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, dir_temporal, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL)  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){

            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){

            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_MULTIPLICACION_REAL, dir_temporal, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;

        
		}else{

            error("Error en expresion BT_MULTIPLICACION expresion: Tipo incorrecto");
        }
    }
    | expresion BT_DIVREAL expresion {
    	


		int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>3->dir->tipo;
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* dir_temporal2  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) ){
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
					$<expval>$ = ex1;
				}else if ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE ){
					if ((exp1->val.celda_TS->val.var.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp2->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp1->val.celda_TS->val.var.tipo== ENTERO && exp2->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,exp2,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes");
					}

				}else if ((exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->tipo == CONSTANTE){

					if ((exp2->val.celda_TS->val.var.tipo== REAL && exp1->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else if (exp2->val.celda_TS->val.var.tipo== ENTERO && exp1->val.celda_TS->val.cons.tipo == REAL){
						int tipo = REAL;
						dir_temporal->val.celda_TS->val.var.tipo = tipo;
						gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
						gen(tabla_cuadruplas, OP_DIVREAL, exp1,dir_temporal,dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
						
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes");
					}


				}else{
					if ((exp1->val.celda_TS->val.cons.tipo== REAL && exp2->val.celda_TS->val.cons.tipo == REAL)){
						dir_temporal->val.celda_TS->val.var.tipo = exp1->val.celda_TS->val.cons.tipo;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;
					}else{
						error("Error en expresion BT_DIVREAL expresion: No se puede modificar tipo en constantes");
					}
				}
			}else if (exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_INT){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				dir_temporal2->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
				gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal2);
				gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,dir_temporal2,dir_temporal);

				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


			}else if ( exp_tipo == CONSTANTE_FLOAT && exp_tipo2 == CONSTANTE_FLOAT ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;


				
			}else{
				error("Error en expresion BT_DIVREAL expresion: Tipo incorrecto");
			}
		}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					dir_temporal2->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal2);
					gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal,dir_temporal2,dir_temporal);

					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        }else if ( ((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
					((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
					((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

						dir_temporal->val.celda_TS->val.var.tipo = REAL;
						gen(tabla_cuadruplas, OP_DIVREAL, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;


        }else if((exp_tipo == CONSTANTE_INT && exp_tipo2 == CONSTANTE_FLOAT ) | (exp_tipo2 == CONSTANTE_INT && exp_tipo == CONSTANTE_FLOAT) ){

				dir_temporal->val.celda_TS->val.var.tipo = REAL;
				if (exp_tipo2 == CONSTANTE_INT){
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
				}else{
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal, exp2, dir_temporal);
				}
			
			
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;
		
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL)  && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE  && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS  &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_INT) |
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE  && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_INT)){

					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
					gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

        
		}else if (((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL)  && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp2,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, exp1, dir_temporal, dir_temporal);
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;

        
		}else if (((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_FLOAT)){
            dir_temporal->val.celda_TS->val.var.tipo = REAL;
			gen(tabla_cuadruplas, OP_INTTOREAL,exp1,NULL,dir_temporal);
			gen(tabla_cuadruplas, OP_DIVREAL, dir_temporal, exp2, dir_temporal);
			ex1->dir = dir_temporal;
			$<expval>$ = ex1;

        
		}else{

            error("Error en expresion BT_DIVREAL expresion: Tipo incorrecto");
        }
    }
    | expresion BT_DIV expresion {
    	
			int exp_tipo = $<expval>1->dir->tipo;
			int exp_tipo2 = $<expval>3->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = $<expval>1->dir;
			dir_elemento* exp2 = $<expval>3->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)){

						dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
						gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
						ex1->dir = dir_temporal;
						$<expval>$ = ex1;

					}else{
						error("Error expresion BT_DIV expresion: tipos incorrectos");
					}					


				}else if (exp_tipo == CONSTANTE_INT){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

				}else{
					error("Error expresion BT_DIV expresion: tipos incorrectos");
				}

			}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) |
			          ((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					  ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) ){

							dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
							gen(tabla_cuadruplas, OP_DIV, exp1, exp2, dir_temporal);
							ex1->dir = dir_temporal;
							$<expval>$ = ex1;

			}else{
				error("Error expresion BT_DIV expresion: tipos incorrectos");
			}

		}
	| expresion BT_MOD expresion {
			int exp_tipo = $<expval>1->dir->tipo;
			int exp_tipo2 = $<expval>3->dir->tipo;
			dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
			expresion* ex1 = (expresion*) malloc(sizeof(expresion));
			dir_elemento* exp1 = $<expval>1->dir;
			dir_elemento* exp2 = $<expval>3->dir;
			if (exp_tipo == exp_tipo2 ){

				if(exp_tipo == CELDA_TS){

					if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)){

							dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
							gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
							ex1->dir = dir_temporal;
							$<expval>$ = ex1;

					}else{
						error("Error expresion BT_MOD expresion: tipos incorrectos");
					}					


				}else if (exp_tipo == CONSTANTE_INT){

					dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
					gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
					ex1->dir = dir_temporal;
					$<expval>$ = ex1;

				}else{
					error("Error expresion BT_MOD expresion: tipos incorrectos");
				}

			}else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) |
			          ((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
					  ((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT) ){


				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_MOD, exp1, exp2, dir_temporal);
				ex1->dir = dir_temporal;
				$<expval>$ = ex1;

			}else{
				error("Error expresion BT_MOD expresion: tipos incorrectos");
			}

    }
    | BT_INICIOPARENTESIS expresion BT_FINPARENTESIS { $<expval>$ = $<expval>2; }
    | BT_RESTA expresion {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<expval>2->dir;
		if (exp1->tipo == CELDA_TS){
			if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO )){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_RESTA_UNARIA, exp1, NULL, dir_temporal);
			}else if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL )){
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
        $<expval>$ = ex1;

    }
    | BT_LITERALNUMERICO {
    }
    | BT_LITERALREAL {

		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_real($<floatval>1);
		ex1->dir = dir_temporal;
		$<expval>$ = ex1;

    }
    | BT_LITERALENTERO{

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
  		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_entero($<intval>1);
    	ex1->dir = dir_temporal;
        $<expval>$ = ex1;
    
    }
    | BT_SUMA expresion {

    	expresion* ex1 = (expresion*) malloc(sizeof(expresion));
    	dir_elemento* dir_temporal  =  nuevo_dir_elemento_celda_TS( new_temp(tabla_simbolos));
		dir_elemento* exp1 = $<expval>2->dir;
		if (exp1->tipo == CELDA_TS){

			if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO )){
				dir_temporal->val.celda_TS->val.var.tipo = ENTERO;
				gen(tabla_cuadruplas, OP_SUMA_UNARIA, exp1, NULL, dir_temporal);
			}else if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL )| (exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL )){
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
		$<expval>$ = ex1;
    }
    | expresion BT_Y M expresion {
        int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>4->dir->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
                if ( (($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO)|
				   ($<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO)|
				    ($<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO)|
					(($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO)){


						backpatch(tabla_cuadruplas,$<expval>1->lista_true,$<intval>3);
						$<expval>$->lista_false = merge($<expval>1->lista_false,$<expval>4->lista_false);
						$<expval>$->lista_true = $<expval>4->lista_true;
						$<expval>$->dir = $<expval>1->dir;

                }else{
                    error("Error en expresion BT_Y M expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_BOOL){

                backpatch(tabla_cuadruplas,$<expval>1->lista_true,$<intval>3);
                $<expval>$->lista_false = merge($<expval>1->lista_false,$<expval>4->lista_false);
                $<expval>$->lista_true = $<expval>4->lista_true;
                $<expval>$->dir = $<expval>1->dir;

            }else{
                error("Error en expresion BT_Y M expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && ($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO) | 
					(exp_tipo == CELDA_TS && $<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO)) 
					&& exp_tipo2 == CONSTANTE_BOOL ){

					backpatch(tabla_cuadruplas,$<expval>1->lista_true,$<intval>3);
					$<expval>$->lista_false = merge($<expval>1->lista_false,$<expval>4->lista_false);
					$<expval>$->lista_true = $<expval>4->lista_true;
					$<expval>$->dir = $<expval>1->dir;

        }else if (((exp_tipo2 == CELDA_TS && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO) |
				(exp_tipo2 == CELDA_TS && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO))
				&& exp_tipo == CONSTANTE_BOOL){

				backpatch(tabla_cuadruplas,$<expval>1->lista_true,$<intval>3);
				$<expval>$->lista_false = merge($<expval>1->lista_false,$<expval>4->lista_false);
				$<expval>$->lista_true = $<expval>4->lista_true;
				$<expval>$->dir = $<expval>1->dir;


        }else{

            error("Error en expresion BT_Y M expresion: Tipo incorrecto");
        }

    }
    | expresion BT_O M expresion {

		int exp_tipo = $<expval>1->dir->tipo;
        int exp_tipo2 = $<expval>4->dir->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){
                if ( (($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO)|
				   ($<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO)|
				    ($<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO)|
					(($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO)){

						backpatch(tabla_cuadruplas,$<expval>1->lista_false,$<intval>3);
						$<expval>$->lista_false =  $<expval>4->lista_false;
						$<expval>$->lista_true = merge($<expval>1->lista_true,$<expval>4->lista_true);
						$<expval>$->dir = $<expval>1->dir;

                }else{
                    error("Error en expresion BT_Y M expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_BOOL){

                backpatch(tabla_cuadruplas,$<expval>1->lista_false,$<intval>3);
				$<expval>$->lista_false =  $<expval>4->lista_false;
				$<expval>$->lista_true = merge($<expval>1->lista_true,$<expval>4->lista_true);
				$<expval>$->dir = $<expval>1->dir;

            }else{
                error("Error en expresion BT_Y M expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && ($<expval>1->dir->val.celda_TS->tipo == VARIABLE| $<expval>1->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>1->dir->val.celda_TS->val.var.tipo == BOOLEANO) | 
					(exp_tipo == CELDA_TS && $<expval>1->dir->val.celda_TS->tipo == CONSTANTE && $<expval>1->dir->val.celda_TS->val.cons.tipo == BOOLEANO)) 
					&& exp_tipo2 == CONSTANTE_BOOL ){

						backpatch(tabla_cuadruplas,$<expval>1->lista_false,$<intval>3);
						$<expval>$->lista_false =  $<expval>4->lista_false;
						$<expval>$->lista_true = merge($<expval>1->lista_true,$<expval>4->lista_true);
						$<expval>$->dir = $<expval>1->dir;

        }else if (((exp_tipo2 == CELDA_TS && ($<expval>4->dir->val.celda_TS->tipo == VARIABLE| $<expval>4->dir->val.celda_TS->tipo == TEMPORAL) && $<expval>4->dir->val.celda_TS->val.var.tipo == BOOLEANO) |
				(exp_tipo2 == CELDA_TS && $<expval>4->dir->val.celda_TS->tipo == CONSTANTE && $<expval>4->dir->val.celda_TS->val.cons.tipo == BOOLEANO))
				&& exp_tipo == CONSTANTE_BOOL){

					backpatch(tabla_cuadruplas,$<expval>1->lista_false,$<intval>3);
					$<expval>$->lista_false =  $<expval>4->lista_false;
					$<expval>$->lista_true = merge($<expval>1->lista_true,$<expval>4->lista_true);
					$<expval>$->dir = $<expval>1->dir;


        }else{

            error("Error en expresion BT_Y M expresion: Tipo incorrecto");
        }




    }
    | BT_NO expresion {

		int exp_tipo = $<expval>2->dir->tipo;
        expresion* ex1 = (expresion*) malloc(sizeof(expresion));
    	dir_elemento* exp1 = $<expval>2->dir;
    	

		if ( exp_tipo == CELDA_TS ){
		
			if ( (($<expval>2->dir->val.celda_TS->tipo == VARIABLE| $<expval>2->dir->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == BOOLEANO) |
				($<expval>2->dir->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == BOOLEANO) ){
				ex1->dir = exp1;
				ex1->lista_true = $<expval>2->lista_false;
				ex1->lista_false = $<expval>2->lista_true;
				$<expval>$ = ex1;

			}else{
				error("Error BT_NO expresion: Tipo incorrecto");
			}


		}else if (exp_tipo == CONSTANTE_BOOL){
			ex1->dir = exp1;
			ex1->lista_true = $<expval>2->lista_false;
			ex1->lista_false = $<expval>2->lista_true;
			$<expval>$ = ex1;

		}else{
			error("Error BT_NO expresion: Tipo incorrecto");
		}
    	

    }
    | BT_LITERALBOOLEANO {
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano($<strval>1);
		dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		ex1->dir = dir_temporal;
		ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
		ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
		$<expval>$ = ex1;
		gen(tabla_cuadruplas,OP_IGUAL,dir_temporal,dir_true,NULL);
		gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

    }
    | expresion BT_MAYOR  expresion {
		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){


				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){

							ex1->dir = dir_temporal;
							ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
							ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
							$<expval>$ = ex1;
							gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
							gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MAYOR  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MAYOR  expresion : Tipo incorrecto en expresion");
            }
			
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{

            error("Error en expresion BT_MAYOR  expresion: Los operandos tienen que ser del mis tipo");
        }





    }
    | expresion BT_MENOR  expresion {

		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){


							ex1->dir = dir_temporal;
							ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
							ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
							$<expval>$ = ex1;
							gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
							gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MENOR  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MENOR  expresion : Tipo incorrecto en expresion HOLAAAA");
            }
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){


					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MENOR,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{
			
	
            error("Error en expresion BT_MENOR  expresion: Tipo incorrecto HOLLAA");
        }


    }
    | expresion BT_CREACIONTIPO expresion {

		
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   ((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					   (exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){

							ex1->dir = dir_temporal;
							ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
							ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
							$<expval>$ = ex1;
							gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
							gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_IGUAL  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_IGUAL  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){


					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_IGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{

            error("Error en expresion BT_IGUAL  expresion: Tipo incorrecto");
        }


    }
    | expresion BT_DISTINTO expresion {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){

							ex1->dir = dir_temporal;
							ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
							ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
							$<expval>$ = ex1;
							gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
							gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_DISTINTO  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_DISTINTO  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){


					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_DISTINTO,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{

            error("Error en expresion BT_DISTINTO expresion: Tipo incorrecto");
        }


	}
    | expresion BT_MAYORIGUAL  expresion {
		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){


						ex1->dir = dir_temporal;
						ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
						ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
						$<expval>$ = ex1;
						gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
						gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

                }else{
                    error("Error en expresion BT_MAYORIGUAL  expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MAYORIGUAL  expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){


					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MAYORIGUAL,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{

            error("Error en expresion BT_MAYORIGUAL  expresion: Tipo incorrecto");
        }


	}
    | expresion BT_MENORIGUAL  expresion {

		expresion* ex1 = (expresion*) malloc(sizeof(expresion));
		//solo nos interesa el tipo
		dir_elemento* dir_temporal  =  nuevo_dir_elemento_constante_booleano("verdadero");
		dir_elemento* exp1 = $<expval>1->dir;
		dir_elemento* exp2 = $<expval>3->dir;
		int exp_tipo = exp1->tipo;
        int exp_tipo2 = exp2->tipo;
        if (exp_tipo == exp_tipo2 ){

            if(exp_tipo == CELDA_TS){

				int tipo = exp1->val.celda_TS->val.var.tipo;
				int tipo2 = exp2->val.celda_TS->val.var.tipo;
				if (((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == ENTERO && exp2->val.celda_TS->val.cons.tipo == ENTERO)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == ENTERO && exp2->val.celda_TS->val.var.tipo == ENTERO)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					((exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.var.tipo == REAL && exp2->val.celda_TS->val.cons.tipo == REAL)|
					(exp1->val.celda_TS->tipo == CONSTANTE && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.cons.tipo == REAL && exp2->val.celda_TS->val.var.tipo == REAL)){

						ex1->dir = dir_temporal;
						ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
						ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
						$<expval>$ = ex1;
						gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
						gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
                }else{
                    error("Error en expresion BT_MENORIGUAL   expresion: Tipo incorrecto");
                }
            }else if (exp_tipo == CONSTANTE_INT | exp_tipo == CONSTANTE_FLOAT){

               		ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
            }else{
                error("Error en expresion BT_MENORIGUAL   expresion : Tipo incorrecto en expresion");
            }
        }else if (((exp_tipo == CELDA_TS && (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo2 == CELDA_TS && (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo2 == CELDA_TS && exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo == CONSTANTE_INT)|
				((exp_tipo == CELDA_TS && exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == ENTERO) && exp_tipo2 == CONSTANTE_INT) | 
				((exp_tipo == CELDA_TS &&  (exp1->val.celda_TS->tipo == VARIABLE | exp1->val.celda_TS->tipo == TEMPORAL) && exp1->val.celda_TS->val.var.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT)| 
				((exp_tipo2 == CELDA_TS &&  (exp2->val.celda_TS->tipo == VARIABLE | exp2->val.celda_TS->tipo == TEMPORAL) && exp2->val.celda_TS->val.var.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo2 == CELDA_TS &&  exp2->val.celda_TS->tipo == CONSTANTE && exp2->val.celda_TS->val.cons.tipo == REAL) && exp_tipo == CONSTANTE_FLOAT)|
				((exp_tipo == CELDA_TS &&  exp1->val.celda_TS->tipo == CONSTANTE && exp1->val.celda_TS->val.cons.tipo == REAL) && exp_tipo2 == CONSTANTE_FLOAT) ){

					ex1->dir = dir_temporal;
					ex1->lista_true = makelist(tabla_cuadruplas->next_quad);
					ex1->lista_false = makelist(tabla_cuadruplas->next_quad + 1);
					$<expval>$ = ex1;
					gen(tabla_cuadruplas,OP_MENORIGUAL ,exp1,exp2,NULL);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

        }else{

            error("Error en expresion BT_MENORIGUAL  expresion: Tipo incorrecto");
        }
	}
    ;

M : /* */ {
	$<intval>$ = tabla_cuadruplas->next_quad;
};

N : /* */ {
	$<listval>$ = makelist(tabla_cuadruplas->next_quad);
	gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);
};
operando : BT_IDENTIFICADOR {
	$<simval>$ = buscar_sim_nombre(tabla_simbolos, $<strval>1 );
	}
    | operando BT_PUNTO operando {}
    | operando BT_INICIOARRAY expresion BT_FINARRAY {}
    | operando BT_REF {}
    ;



instrucciones : instruccion BT_COMPOSICIONSECUENCIAL M instrucciones {

                if($<listval>1 != NULL){
                    backpatch(tabla_cuadruplas,$<listval>1,$<intval>3);
                }
                $<listval>$ = $<listval>4;

            }
            | instruccion {

                 $<listval>$ = $<listval>1;

            }
            ;
instruccion : BT_CONTINUAR {

			$<listval>$ = makelist(tabla_cuadruplas->next_quad);
			gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,NULL);

			}
            | asignacion {
                $<listval>$ = NULL;

            }
            | alternativa {



            $<listval>$ = $<listval>1;

            }
            | iteracion {

				$<listval>$ = $<listval>1;
			}
            | llamadaAccion {}
            ;
asignacion : operando BT_ASIGNACION expresion {
		dir_elemento* res = nuevo_dir_elemento_celda_TS($<simval>1);
		if (res->val.celda_TS->tipo == CONSTANTE){
			error("Error en operando BT_ASIGNACION expresion : No se puede asignar a una constante");
		}else{

			int res_simbolo_tipo = res->val.celda_TS->val.var.tipo;
			int exp_tipo = $<expval>3->dir->tipo;

			if(exp_tipo == CELDA_TS){
				int exp_simbolo_tipo;
				
				if ($<expval>3->dir->val.celda_TS->tipo == VARIABLE |$<expval>3->dir->val.celda_TS->tipo == TEMPORAL ){
					exp_simbolo_tipo = $<expval>3->dir->val.celda_TS->val.var.tipo;
					

				}else{
			
					exp_simbolo_tipo = $<expval>3->dir->val.celda_TS->val.cons.tipo;
				}
				

				if (exp_simbolo_tipo == BOOLEANO){
					dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
					dir_elemento* dir_false =  nuevo_dir_elemento_constante_booleano("falso");

					backpatch(tabla_cuadruplas,$<expval>3->lista_false,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas, $<intval>2, dir_false, NULL, res);

					dir_elemento* dir_quad = nuevo_dir_elemento_pos_quad(tabla_cuadruplas->next_quad + 2);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,dir_quad);


					backpatch(tabla_cuadruplas,$<expval>3->lista_true,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas,$<intval>2,dir_true,NULL,res);
				}
				else if (exp_simbolo_tipo == res_simbolo_tipo){
					gen(tabla_cuadruplas, $<intval>2, $<expval>3->dir, NULL, res);
				}
				else if (exp_simbolo_tipo == ENTERO && res_simbolo_tipo == REAL && ($<expval>3->dir->val.celda_TS->tipo == VARIABLE |$<expval>3->dir->val.celda_TS->tipo == TEMPORAL)){
					dir_elemento* dir_temporal = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,$<expval>3->dir,NULL,dir_temporal);
					gen(tabla_cuadruplas, $<intval>2, dir_temporal, NULL, res);
				}
				else{
					
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo expresion incompatible con operando ");
				}

			}
			else if (exp_tipo == CONSTANTE_INT){
				if (res_simbolo_tipo == ENTERO){
					gen(tabla_cuadruplas, $<intval>2, $<expval>3->dir, NULL, res);
				}
				else if (res_simbolo_tipo == REAL){
					dir_elemento* dir_temporal = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
					dir_temporal->val.celda_TS->val.var.tipo = REAL;
					gen(tabla_cuadruplas, OP_INTTOREAL,$<expval>3->dir,NULL,dir_temporal);
					gen(tabla_cuadruplas, $<intval>2, dir_temporal, NULL, res);
				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_INT incompatible con operando");
				}
			}
			else if (exp_tipo == CONSTANTE_FLOAT){
				if (res_simbolo_tipo == REAL){
					gen(tabla_cuadruplas, $<intval>2, $<expval>3->dir, NULL, res);
				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_FLOAT incompatible con operando");
				}
			}
			else if (exp_tipo == CONSTANTE_BOOL){
				if (res_simbolo_tipo == BOOLEANO){
					dir_elemento* dir_true =  nuevo_dir_elemento_constante_booleano("verdadero");
					dir_elemento* dir_false =  nuevo_dir_elemento_constante_booleano("falso");

					backpatch(tabla_cuadruplas,$<expval>3->lista_false,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas, $<intval>2, dir_false, NULL, res);

					dir_elemento* dir_quad = nuevo_dir_elemento_pos_quad(tabla_cuadruplas->next_quad + 2);
					gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,dir_quad);


					backpatch(tabla_cuadruplas,$<expval>3->lista_true,tabla_cuadruplas->next_quad);
					gen(tabla_cuadruplas,$<intval>2,dir_true,NULL,res);

				}
				else{
					error("Error en asignacion: operando BT_ASIGNACION expresion, tipo CONSTANTE_BOOL incompatible con operando");
				}
			}
			else{
				error("Error en asignacion: operando BT_ASIGNACION expresion");
			}
		}
};
		
alternativa : BT_SI expresion BT_ENTONCES M instrucciones N M listaOpciones  BT_FSI {
    backpatch(tabla_cuadruplas,$<expval>2->lista_true,$<intval>4);
	backpatch(tabla_cuadruplas,$<expval>2->lista_false,$<intval>7);
	

	if ($<listval>8 == NULL){

        //backpatch(tabla_cuadruplas,$<listval>6,$<intval>7);
		$<listval>$ = merge($<listval>5,$<listval>6);
    }else{
         //backpatch(tabla_cuadruplas,$<listval>6,$<intval>9);
         
         $<listval>$ = merge($<listval>6,merge($<listval>5,$<listval>8));
    }	




};
listaOpciones : BT_SINOSI expresion BT_ENTONCES M instrucciones N M listaOpciones  {

					backpatch(tabla_cuadruplas,$<expval>2->lista_true,$<intval>4);
					backpatch(tabla_cuadruplas,$<expval>2->lista_false,$<intval>7);
					

					if ($<listval>8 == NULL){

						//backpatch(tabla_cuadruplas,$<listval>6,$<intval>7);
						$<listval>$ = merge($<listval>5,$<listval>6);
					}else{
						
						$<listval>$ = merge($<listval>6,merge($<listval>5,$<listval>8));
					}	


				}
				| /* */ {
					$<listval>$ = NULL;

				};
iteracion : itCotaFija { $<listval>$ = $<listval>1; }
		  | itCotaVariable { $<listval>$ = $<listval>1; }
		  ;
itCotaVariable : BT_MIENTRAS M expresion BT_HACER M instrucciones BT_FMIENTRAS {

	backpatch(tabla_cuadruplas,$<expval>3->lista_true,$<intval>5);
	if ($<listval>6 != NULL) {
		//backpatch(tabla_cuadruplas,merge($<listval>6,$<listval>7),$<intval>4);
		backpatch(tabla_cuadruplas,$<listval>6,$<intval>2);
	} else {
		//backpatch(tabla_cuadruplas,$<listval>6,$<intval>4);

		gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,nuevo_dir_elemento_constante_entero($<intval>2));
	}
	$<listval>$ = $<expval>3->lista_false;




};
itCotaFija : BT_PARA BT_IDENTIFICADOR BT_ASIGNACION expresion BT_HASTA expresion BT_HACER N M instrucciones  BT_FPARA {

	if ($<listval>10 != NULL){
		backpatch(tabla_cuadruplas,$<listval>8,tabla_cuadruplas->next_quad);

	}
	
	dir_elemento* uno  =  nuevo_dir_elemento_constante_entero(1);


	simbolo* s = buscar_sim_nombre(tabla_simbolos, $<strval>2);
	if (s->tipo == CONSTANTE){
		yyerror("No se puede asignar una constante en un buqle for");
	}else{

		if (s == NULL){
			s = nuevo_simbolo(tabla_simbolos, $<strval>2, VARIABLE, ENTERO,ambito);
		}

		dir_elemento* dir =   nuevo_dir_elemento_celda_TS(s);
		gen(tabla_cuadruplas,OP_SUMA,dir,uno,dir);
		
		dir_elemento* next =  nuevo_dir_elemento_constante_entero(tabla_cuadruplas->next_quad + 2);	
		gen(tabla_cuadruplas,OP_GOTO,NULL,NULL,next);
		backpatch(tabla_cuadruplas,$<listval>8,tabla_cuadruplas->next_quad);
		gen(tabla_cuadruplas,OP_ASIGNACION,$<expval>4->dir, NULL,dir );
		dir_elemento* m_quad =  nuevo_dir_elemento_constante_entero($<intval>9 );	
		gen(tabla_cuadruplas,OP_MENORIGUAL,dir, $<expval>4->dir, m_quad );

		$<listval>$ = makelist(tabla_cuadruplas->next_quad);
		gen(tabla_cuadruplas, OP_GOTO, NULL, NULL, NULL);


	}
	


};


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
	printf(RED "\n\nERROR:  %s\n"RESET, s);
}
