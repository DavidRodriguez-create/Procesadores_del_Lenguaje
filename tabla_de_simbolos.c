
#include "tabla_de_simbolos.h"

tabla crear(){
  tabla tabla_de_simbolos;
  tabla_de_simbolos->primer_simbolo = NULL;
  return tabla_de_simbolos;
}

void insertar_simbolo(tabla** t, simbolo* s){
  tabla_de_simbolos->primer_simbolo = s;
}

simbolo coger_simbolo(simbolo* s);
