#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"

typedef enum enumVar {entero, booleano, caracter, real, cadena} enumVar;
typedef enum enumSimbolo {variable, constante, tipo} enumSimbolo;

typedef struct variable{
    enumVar type;
    int ambito;
} variable;

typedef struct simbolo{
    char nombre[20];
    enumSimbolo type;
    union{
        variable var;
    }val; //val de valor
}simbolo;

typedef struct tabla_de_simbolos{
  simbolo *tabla[1000];
}tabla_de_simbolos;

//----------------------------FUNCIONES

void new_temp(tabla);
void insertar_id_TS(tabla,valor); // crea simbolo y le inserta un valor
void modifica_tipo_TS(tabla,simbolo,valor); // modifica el tipo del simbolo
char* consulta_tipo_TS(tabla,simbolo) //devuelve el tipo del simbolo especificado

// ------------------------

char *str[5];


str = "hola"
#endif
