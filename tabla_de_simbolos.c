
#include "tabla_de_simbolos.h"


tabla_de_simbolos* nueva_tabla_de_simbolos(){
    tabla_de_simbolos *TS = (tabla_de_simbolos*) malloc(sizeof(tabla_de_simbolos));
    if(TS == NULL){
        printf("Fallo en nueva_tabla_de_simbolos -> MALLOC\n");
    }
    TS->pos_libre = 0;
    return TS;
};

simbolo* nuevo_simbolo(char* nombre, int tipo_simbolo, int tipo_variable){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        printf("Fallo en nuevo_simbolo -> MALLOC\n");
    }
    strcpy(sim->nombre, nombre);
    sim->tipo = tipo_simbolo;
    if (tipo_simbolo==VARIABLE) {
        sim->val.var.tipo = tipo_variable;
        sim->val.var.ambito = 0;
    }
    return sim;
};

void insertar_simbolo(tabla_de_simbolos* TS, simbolo *sim){
    if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
        TS->tabla[TS->pos_libre] = sim;

        // calculamos el siguiente vacio
        TS->pos_libre = TS->pos_libre + 1;
    } else {
        //error
        printf("Se ha llenado la tabla de simbolos\n");
    }
}; // crea simbolo y le inserta un valor

void ver_simbolo_por_pantalla(simbolo *sim){
    printf("\n-------------------------\n");
    printf("> %s tipo_sim:%d otro_tipo:%d \n",sim->nombre,sim->tipo,sim->val.var.tipo);
    printf("-------------------------\n");
}
/*
void new_temp(tabla){
    simbolo *simb = (simbolo*) malloc()
};

void modifica_tipo(tabla,simbolo,valor){}; // modifica el tipo del simbolo
char* consulta_tipo(tabla,simbolo){}; //devuelve el tipo del simbolo especificado
*/