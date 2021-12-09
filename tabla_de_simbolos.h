#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#include "definiciones.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"

#define MAX_TABLA_SIMBOLOS 1000

//tipos de variables
#define ENTERO 0
#define REAL 1
#define BOOLEANO 2
#define CARACTER 3
#define CADENA 4

//tipos de simbolos
#define TEMPORAL -1
#define VARIABLE 0
#define CONSTANTE 1
#define TIPO 2


//ambito 
#define LOCAL 0
#define ENTRADA 1
#define ENTRADASALIDA 2
#define SALIDA 3


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
void error(char * mensaje);
tabla_de_simbolos* nueva_tabla_de_simbolos();
simbolo* new_temp(tabla_de_simbolos* TS);
simbolo* nuevo_simbolo(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable, int ambito);
void ver_simbolo_por_pantalla(simbolo *sim);
int existe_simbolo(tabla_de_simbolos* TS, char* nombre);
simbolo* buscar_sim_nombre(tabla_de_simbolos* TS, char* nombre);
int buscar_sim_nombre_pos(tabla_de_simbolos* TS, char* nombre);
void imprime_tabla_simbolos(tabla_de_simbolos* TS);
void get_nombre_sim(char * nombre,simbolo * sim);
void get_nombre_tipo_sim(char * nombre, int tipo_sim);
void get_nombre_tipo_var(char * nombre, int tipo_var);
void modificar_sim();


//ver_simbolo_por_pantalla(tabla_simbolos->tabla[(tabla_simbolos->pos_libre)-1]);
/*
void new_temp(tabla);
void insertar_id_TS(tabla,valor); // crea simbolo y le inserta un valor
void modifica_tipo_TS(tabla,simbolo,valor); // modifica el tipo del simbolo
char* consulta_tipo_TS(tabla,simbolo) //devuelve el tipo del simbolo especificado
*/
// ------------------------

#endif
