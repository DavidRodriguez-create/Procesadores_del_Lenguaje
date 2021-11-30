#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX_TABLA_SIMBOLOS 1000

//tipos de variables
#define ENTERO 0
#define REAL 1
#define BOOLEANO 2
#define CARACTER 3
#define CADENA 4

//tipos de simbolos
#define VARIABLE 0
#define CONSTANTE 1
#define TIPO 2

typedef struct variable{
    int tipo;
    int ambito;
} variable;

typedef struct simbolo{
    int id;
    char nombre[20];
    int tipo;
    union{
        variable var;
    }val; //val de valor
}simbolo;

typedef struct tabla_de_simbolos{
    int pos_libre; //primera posicion libre de la tabla
    simbolo *tabla[MAX_TABLA_SIMBOLOS];
}tabla_de_simbolos;

//----------------------------FUNCIONES

tabla_de_simbolos* nueva_tabla_de_simbolos();
simbolo* new_temp(tabla_de_simbolos* TS);
simbolo* nuevo_simbolo(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable);
void ver_simbolo_por_pantalla(simbolo *sim);
int existe_simbolo(tabla_de_simbolos* TS, char* nombre);
//ver_simbolo_por_pantalla(tabla_simbolos->tabla[(tabla_simbolos->pos_libre)-1]);
/*
void new_temp(tabla);
void insertar_id_TS(tabla,valor); // crea simbolo y le inserta un valor
void modifica_tipo_TS(tabla,simbolo,valor); // modifica el tipo del simbolo
char* consulta_tipo_TS(tabla,simbolo) //devuelve el tipo del simbolo especificado
*/
// ------------------------

#endif
