

union simbolo{
  variable var;

};;

struct variable{
  char nombre[50];
  char tipo[50];
  int ambito;
} variable;

struct constante{
  char nombre[50];
  char tipo[50];
  int ambito;
} constante;

struct accion{
  char nombre[50];
  variable parametros[50];
} accion;

struct funcion{
  char nombre[50];
  variable parametros[50];
  char tipo[50];
} funcion;

struct etiquetas{
  char nombre[50];
  char tipo[50];
  int ambito;
} etiquetas;

//----------------------------FUNCIONES

tabla crear();

void insertar_simbolo();

simbolo coger_simbolo();

# END
