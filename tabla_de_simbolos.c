
#include "tabla_de_simbolos.h"
#include <string.h>


tabla_de_simbolos* nueva_tabla_de_simbolos(){
    tabla_de_simbolos *TS = (tabla_de_simbolos*) malloc(sizeof(tabla_de_simbolos));
    if(TS == NULL){
        error("Fallo en nueva_tabla_de_simbolos -> MALLOC");
    }
    TS->pos_libre = 0;
    return TS;
};
simbolo* new_temp(tabla_de_simbolos* TS){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
    }
    // le ponemos un id
    sim->id = TS->pos_libre;
    sim->tipo = TEMPORAL;
    if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
        TS->tabla[TS->pos_libre] = sim;

        // calculamos el siguiente vacio
        TS->pos_libre = TS->pos_libre + 1;
    } else {
        error("Se ha llenado la tabla de simbolos");
    }
    return sim;
};
simbolo * nuevo_simbolo(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
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

    printf("\n> %s id:%d tipo_sim:%d otro_tipo:%d \n",sim->nombre,sim->id,sim->tipo,sim->val.var.tipo);

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
    //printf("\nEstoy buscando: %s\n",nombre);
    while (pos<MAX_TABLA_SIMBOLOS && strcmp(TS->tabla[pos]->nombre,nombre)!=0){
        //printf("\n %s vs %s\n",TS->tabla[pos]->nombre,nombre);
        pos = pos + 1;
    }
    if (pos<MAX_TABLA_SIMBOLOS){
        sim = TS->tabla[pos];
        //printf("Encontrado: %s\n",sim->nombre);
    } else {
        printf("No existe el simbolo con nombre: %s", nombre);
    }
    return sim;
}

void get_nombre_sim(char * nombre, simbolo * sim){
    /*
     * Accion que guarda el nombre del simbolo en nombre.
     * Si no tiene nombre, guarda t+id (es decir, un simbolo temporal)
     */
    if (sim->tipo == TEMPORAL){
        sprintf(nombre, "t%d", sim->id);
    }
    else{
        sprintf(nombre, "%s", sim->nombre);
    }

}



void imprime_tabla_simbolos(tabla_de_simbolos* TS){
    printf("\n-------------------------\n");
    printf("TABLA DE SIMBOLOS \n");
    for (int i = 0; i < TS->pos_libre; ++i) {
        if (TS->tabla[i]->tipo == TEMPORAL){
            printf("> id:%d nombre:%s tipo_sim:%d tipo_var:%d \n",TS->tabla[i]->id,"tmp",TS->tabla[i]->tipo,TS->tabla[i]->val.var.tipo);
        }
        else{
            printf("> id:%d nombre:%s tipo_sim:%d tipo_var:%d \n",TS->tabla[i]->id,TS->tabla[i]->nombre,TS->tabla[i]->tipo,TS->tabla[i]->val.var.tipo);
        }

    }
}

void error(char * mensaje){
    printf("\033[31m\n\n%s\n\033[0m", mensaje);
}
/*
void new_temp(tabla){
    simbolo *simb = (simbolo*) malloc()
};

void modifica_tipo(tabla,simbolo,valor){}; // modifica el tipo del simbolo
char* consulta_tipo(tabla,simbolo){}; //devuelve el tipo del simbolo especificado
*/