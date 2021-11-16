#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"

struct variable{
  char nombre[10];
  char tipo[10];
  int ambito;
} variable;

union simbolo{
  variable var;
};

struct tabla{
  simbolo* primer_simbolo;
};

//----------------------------FUNCIONES



simbolo new_temp();
void insertar_id();
void insertar_lista_simbolos();
void modifica_tipo();

char* consulta_tipo()

// ------------------------

tabla crear_tabla_de_simbolos();

simbolo coger_simbolo(simbolo* s);

#endif
