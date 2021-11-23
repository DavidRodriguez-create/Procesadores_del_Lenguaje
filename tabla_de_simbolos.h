#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"

typedef struct variable{
  char tipo[20];
  int ambito;
} variable;

typedef struct simbolo{
  char[20] nombre;
  char[10] tipo;
  union{
    variable var;
  };
};

typedef struct tabla_de_simbolos{
  simbolo[1000] tabla;
};

//----------------------------FUNCIONES

void new_temp(tabla);
void insertar_id(tabla,valor); // crea simbolo y le inserta un valor
void modifica_tipo(tabla,simbolo,valor); // modifica el tipo del simbolo
char* consulta_tipo(tabla,simbolo) //devuelve el tipo del simbolo especificado

// ------------------------

#endif
