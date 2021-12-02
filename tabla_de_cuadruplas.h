#ifndef TABLACUADRUPLAS_H
#define TABLACUADRUPLAS_H


#include "definiciones.h"
#include "tabla_de_simbolos.h"
#include <stdbool.h>

#define MAX_TABLA_CUADRUPLAS 1000




#define OP_ASIGNACION 4
//~ #define op_mayor 5
//~ #define op_menor 6
//~ #define op_distinto 7
//~ #define op_mayorigual 8
//~ #define op_menorigual 9
//~ #define op_igual 10
//~ #define op_goto  11
#define OP_SUMA 12
#define OP_RESTA 13
#define OP_MULTIPLICACION 14
#define OP_DIVREAL 15
#define OP_MOD 16
#define OP_DIV 17

// TIPOS DIR_ELEMENTO
#define CELDA_TS 0
#define CONSTANTE_INT 1
#define CONSTANTE_FLOAT 2
#define CONSTANTE_BOOL 3


typedef struct dir_elemento{
    int tipo;
    union {
        //int cons_int;
        //float cons_float;
        //bool cons_bool; //E.TRUE ??????????
        simbolo *celda_TS;
    }val;
}dir_elemento;

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

/*
tablaCuadruplas inicializarTablaCuadruplas();
void gen(); //añadir cuadrupla a la tabla de cuádruplas
makelist();
enum_tipo
merge();
backpatch();
*/

#endif /* TABLACUADRUPLAS_H */
