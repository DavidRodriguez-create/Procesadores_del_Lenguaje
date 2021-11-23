#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"

typedef struct variable{
  char tipo[20];
  int ambito;
} variable;

typedef struct simbolo{
  char nombre[20];
  char tipo[10];
  union{
    variable var;
  }var;
}simbolo;

typedef struct tabla_de_simbolos{
  simbolo tabla[1000];
};

//----------------------------FUNCIONES

void new_temp(tabla);
void insertar_id_TS(tabla,valor); // crea simbolo y le inserta un valor
void modifica_tipo_TS(tabla,simbolo,valor); // modifica el tipo del simbolo
char* consulta_tipo_TS(tabla,simbolo) //devuelve el tipo del simbolo especificado

// ------------------------

#endif
