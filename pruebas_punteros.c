// prueba punteros

#include <stdio.h>


union simbolo{
  variable var;
};

struct variable{
  char nombre[10];
  char tipo[10];
  int ambito;

} variable;

struct tabla{
  simbolo_en_tabla* primer_simbolo;
};

struct simbolo_en_tabla{
  simbolo_en_tabla* anterior_simbolo;
  simbolo_en_tabla* siguiente_simbolo;
  simbolo* simb;
}


tabla crear_tabla_de_simbolos(){
  tabla tabla_de_simbolos;
  tabla_de_simbolos->primer_simbolo = NULL;
  return tabla_de_simbolos;
};

void insertar_simbolo(tabla* t, simbolo* s){
  if (t->siguiente_simbolo==NULL) {

    simbolo_en_tabla st;
    st = malloc(struct(simbolo_en_tabla));
    st->anterior_simbolo = NULL;
    st->siguiente_simbolo = NULL;
    st->simb = s;

    t->primer_simbolo = &st;

  } else {
    simbolo_en_tabla st;
    st = malloc(struct(simbolo_en_tabla));
    st->anterior_simbolo = NULL;
    st->siguiente_simbolo = t->primer_simbolo;
    st->siguiente_simbolo->anterior_simbolo = &st;
    st->simb = s;
    t->primer_simbolo = st;
  }
};

int int main(int argc, char const *argv[]) {
  tablita = crear();
  simbolo s;
  s = malloc(struct(variable));
  s.nombre = "algoritmo";
  s.tipo = "char";
  s.ambito = 0;
  s->siguiente_simbolo = NULL
  insertar_simbolo(&tablita,&s);
  simbolo s2;
  s2 = malloc(struct(variable));
  s2.nombre = "algoritmo2";
  s2.tipo = "char";
  s2.ambito = 0;
  s2->siguiente_simbolo = NULL
  insertar_simbolo(&tablita,&s2);
  printf("%s\n",tablita->primer_simbolo.nombre);
  printf("%s\n",tablita->primer_simbolo->siguiente_simbolo.nombre);
  return 0;
};


/*listaDefsVariables : listaId BT_DEFINICIONTIPOVARIABLE defTipo BT_COMPOSICIONSECUENCIAL listaDefsVariables {}
|   {}
;

listaId : BT_IDENTIFICADOR BT_SEPARADOR listaId {}
| BT_IDENTIFICADOR {printf(" %s\n",yylval.str);}
;*/
/*
BISON:
    https://stackoverflow.com/questions/28786365/bison-union-use
    https://www.usna.edu/Users/cs/roche/courses/f18si413/lab/04/
STRDUP:
    https://www.geeksforgeeks.org/strdup-strdndup-functions-c/
*/