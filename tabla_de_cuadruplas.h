#ifndef TABLACUADRUPLAS_H
#define TABLACUADRUPLAS_H


#include "definiciones.h"
#include "tabla_de_simbolos.h"
#include <stdbool.h>

#define MAX_TABLA_CUADRUPLAS 1000




#define OP_ASIGNACION 1

// Operadores aritmeticos
#define OP_SUMA_UNARIA 2
#define OP_SUMA 3
#define OP_SUMA_REAL 4
#define OP_RESTA_UNARIA 5
#define OP_RESTA 6
#define OP_RESTA_REAL 7
#define OP_MULTIPLICACION 8
#define OP_MULTIPLICACION_REAL 9
#define OP_DIVREAL 10
#define OP_MOD 11
#define OP_DIV 12

#define OP_INTTOREAL 13

#define OP_MAYOR 14
#define OP_MENOR 15
#define OP_DISTINTO 16
#define OP_MAYORIGUAL 17
#define OP_MENORIGUAL 18
#define OP_IGUAL 19
#define OP_GOTO 20

//~ #define op_mayor 5
//~ #define op_menor 6
//~ #define op_distinto 7
//~ #define op_mayorigual 8
//~ #define op_menorigual 9
//~ #define op_igual 10
//~ #define op_goto  11

// TIPOS DIR_ELEMENTO

#define CONSTANTE_INT 0
#define CONSTANTE_FLOAT 1
#define CONSTANTE_BOOL 2
#define CELDA_TS 3
#define POS_QUAD 4



typedef struct dir_elemento{
    int tipo;
    union {
        int cons_int;
        float cons_float;
        bool cons_bool;
        int pos_quad;
        simbolo *celda_TS;
    }val;
}dir_elemento;

typedef struct lista{
    int elem;
    struct lista * sig;

}lista;

typedef struct expresion{
    dir_elemento *dir;
    struct lista *lista_true;
    struct lista *lista_false;

}expresion;

/////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct cuadrupla{
    int operador;
    dir_elemento *operando1;
    dir_elemento *operando2;
    dir_elemento *resultado;
}cuadrupla;

typedef struct tabla_de_cuadruplas{
    cuadrupla *tabla[MAX_TABLA_CUADRUPLAS];
    int next_quad;
}tabla_de_cuadruplas;

tabla_de_cuadruplas* nueva_tabla_de_cuadruplas();
dir_elemento* nuevo_dir_elemento_celda_TS(simbolo* sim);
cuadrupla* gen(tabla_de_cuadruplas* TC, int op, dir_elemento *op1, dir_elemento *op2, dir_elemento *res);
dir_elemento* nuevo_dir_elemento_celda_TS(simbolo* sim);
void imprime_tabla_cuadruplas(tabla_de_cuadruplas* TC);
dir_elemento*  operacion_aritmetica (int op,dir_elemento* exp1,dir_elemento* exp2,tabla_de_simbolos * tabla_simbolos,tabla_de_cuadruplas* tabla_cuadruplas);
void get_nombre_dir(char * nombre, dir_elemento * dir);
void get_nombre_operador(char * nombre, int op);
void generar_codigo_tres_direcciones(tabla_de_cuadruplas* tc);
dir_elemento* nuevo_dir_elemento_constante_entero(int num);
dir_elemento* nuevo_dir_elemento_constante_booleano(char* nombre);
dir_elemento* nuevo_dir_elemento_constante_real(float num);
lista *makelist(int pos_quad);
lista *merge(lista* l1, lista* l2);
void backpatch(tabla_de_cuadruplas* TC, lista* l,int pos);
/*
tablaCuadruplas inicializarTablaCuadruplas();
void gen(); //añadir cuadrupla a la tabla de cuádruplas
makelist();
enum_tipo
merge();
backpatch();
*/

#endif /* TABLACUADRUPLAS_H */
