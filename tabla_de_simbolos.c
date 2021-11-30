
#include "tabla_de_simbolos.h"
#include <string.h>


tabla_de_simbolos* nueva_tabla_de_simbolos(){
    tabla_de_simbolos *TS = (tabla_de_simbolos*) malloc(sizeof(tabla_de_simbolos));
    if(TS == NULL){
        printf("Fallo en nueva_tabla_de_simbolos -> MALLOC\n");
    }
    TS->pos_libre = 0;
    return TS;
};
simbolo* new_temp(tabla_de_simbolos* TS){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        printf("Fallo en nuevo_simbolo -> MALLOC\n");
    }
    // le ponemos un id
    sim->id = TS->pos_libre;
    if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
        TS->tabla[TS->pos_libre] = sim;

        // calculamos el siguiente vacio
        TS->pos_libre = TS->pos_libre + 1;
    } else {
        //error
        printf("Se ha llenado la tabla de simbolos\n");
    }
    return sim;
};
simbolo * nuevo_simbolo(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        printf("Fallo en nuevo_simbolo -> MALLOC\n");
    }
    strcpy(sim->nombre, nombre);
    // le ponemos un id
    sim->id = TS->pos_libre;
    sim->tipo = tipo_simbolo;
    if (tipo_simbolo==VARIABLE) {
        sim->val.var.tipo = tipo_variable;
        sim->val.var.ambito = 0;
    }

    if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
        TS->tabla[TS->pos_libre] = sim;

        // calculamos el siguiente vacio
        TS->pos_libre = TS->pos_libre + 1;
    } else {
        //error
        printf("Se ha llenado la tabla de simbolos\n");
    }
    return sim;
};

void ver_simbolo_por_pantalla(simbolo *sim){
    printf("\n-------------------------\n");
    printf("> %s id:%d tipo_sim:%d otro_tipo:%d \n",sim->nombre,sim->id,sim->tipo,sim->val.var.tipo);
    printf("-------------------------\n");
}

int existe_simbolo(tabla_de_simbolos* TS, char* nombre){
    int pos = 0;
    int existe = 0;
    while (pos<MAX_TABLA_SIMBOLOS && !strcmp(TS->tabla[pos]->nombre,nombre)){
        pos = pos + 1;
    }
    if (pos<MAX_TABLA_SIMBOLOS){
        existe = 1;
    }
    return existe;
}

simbolo* buscar_sim_nombre(tabla_de_simbolos* TS, char* nombre){
    int pos = 0;
    simbolo *sim;
    while (pos<MAX_TABLA_SIMBOLOS && !strcmp(TS->tabla[pos]->nombre,nombre)){
        pos = pos + 1;
    }
    if (pos<MAX_TABLA_SIMBOLOS){
        sim = TS->tabla[pos];
    } else {
        printf("No existe el simbolo con nombre: %s", nombre);
    }
    return sim;
}
/*
void new_temp(tabla){
    simbolo *simb = (simbolo*) malloc()
};

void modifica_tipo(tabla,simbolo,valor){}; // modifica el tipo del simbolo
char* consulta_tipo(tabla,simbolo){}; //devuelve el tipo del simbolo especificado
*/