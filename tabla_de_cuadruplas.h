#ifndef TABLACUADRUPLAS_H
#define TABLACUADRUPLAS_H


#include "definiciones.h"
#include "tabla_de_simbolos.h"

#define MAXCUADRUPLAS 1000

typedef enum enumTipo {simbolo, booleano, entero, real} enumTipo;


typedef struct dir_elemento{
    enumTipo tipo;
    union {

        int constante_entera;
        float contante_real;
        bool constante_bool; //E.TRUE ??????????
        struct simbolo* simbolo;

    }valor;


}dir_elemento;

typedef struct cuadrupla{
    char *operador;
    dir_elemento *operando1;
    dir_elemento *operando2;
    dir_elemento *resultado;
}cuadrupla;

typedef struct tablaCuadruplas{
    cuadrupla *tabla[MAXCUADRUPLAS];
    int nextquad;
}tablaCuadruplas;

tablaCuadruplas inicializarTablaCuadruplas():

void gen (tablaCuadruplas,cuadrupla); //añadir cuadrupla a la tabla de cuádruplas
makelist()
merge()
backpatch()


#endif /* TABLACUADRUPLAS_H */