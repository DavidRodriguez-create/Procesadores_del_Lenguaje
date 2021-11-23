#ifndef TABLACUADRUPLAS_H
#define TABLACUADRUPLAS_H


#include "definiciones.h"
#include "tabla_de_simbolos.h"

#define MAXCUADRUPLAS 1000

typedef enum enumType {celda_TS, constant_bool, constant_int, contant_float} enumType;

typedef struct dir_elemento{
    enumType type;
    union {

        int constant_int;
        float contant_float;
        bool constant_bool; //E.TRUE ??????????
        simbolo *celda_TS;

    }val;
}dir_elemento;

typedef struct cuadrupla{
    int operador;
    dir_elemento *operando1;
    dir_elemento *operando2;
    dir_elemento *resultado;
}cuadrupla;

typedef struct tablaCuadruplas{
    cuadrupla *tabla[MAXCUADRUPLAS];
    int nextquad;
}tablaCuadruplas;

tablaCuadruplas inicializarTablaCuadruplas():

void gen(); //añadir cuadrupla a la tabla de cuádruplas
makelist()
merge()
backpatch()


#endif /* TABLACUADRUPLAS_H */
