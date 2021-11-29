
#include "tabla_de_simbolos.h"
#include <stdlib.h>
#include <string.h>

tabla_de_simbolos* nueva_tabla_de_simbolos(){
    tabla_de_simbolos *TS = (tabla_de_simbolos*) malloc(sizeof(tabla_de_simbolos));
    TS->pos_libre = 0;
    return TS;
};

simbolo* nuevo_simbolo(char* nombre, int tipo_simbolo, int tipo_variable){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    strcpy(sim->nombre, nombre);
    sim->tipo = tipo_simbolo;
    if (tipo_simbolo==VARIABLE) {
        sim->val.var.tipo = tipo_variable;
        sim->val.var.ambito = 0;
    }
    return sim;
};

void insertar_simbolo(tabla_de_simbolos* TS, simbolo *sim){
    if (TS->pos_libre<1000){
        TS->tabla[TS->pos_libre] = sim;

        // calculamos el siguiente vacio
        TS->pos_libre = TS->pos_libre + 1;
    } else {
        //error
    }
}; // crea simbolo y le inserta un valor

/*
void new_temp(tabla){
    simbolo *simb = (simbolo*) malloc()
};

void modifica_tipo(tabla,simbolo,valor){}; // modifica el tipo del simbolo
char* consulta_tipo(tabla,simbolo){}; //devuelve el tipo del simbolo especificado
*/