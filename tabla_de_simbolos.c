
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
simbolo * nuevo_simbolo(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable, int ambito){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
    }
   
    
    simbolo* aux = buscar_sim_nombre(TS, nombre);
    //printf("Esto es aux: %p\n",aux);
    if (aux != NULL){

        if (aux->val.var.ambito == ENTRADASALIDA){
            error("Ya existe la variable ");

        }else if (aux->val.var.ambito == ENTRADA && ambito == SALIDA){

            aux->val.var.ambito = ENTRADASALIDA;
            int pos = buscar_sim_nombre_pos(TS, nombre);

        }else{
            error("Ya existe la variable ");
        }
        return aux;
    }else{
        strcpy(sim->nombre, nombre);
        // le ponemos un id
        sim->id = TS->pos_libre;
        sim->tipo = tipo_simbolo;
        if (tipo_simbolo==VARIABLE) {
            sim->val.var.tipo = tipo_variable;
            sim->val.var.ambito = ambito;
        }

        if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
            TS->tabla[TS->pos_libre] = sim;

            // calculamos el siguiente vacio
            TS->pos_libre = TS->pos_libre + 1;
        } else {
            //error
            error("Se ha llenado la tabla de simbolos");
        }
        return sim;
    }

};

simbolo * nuevo_simbolo_constante_entero(tabla_de_simbolos* TS, char* nombre, int tipo_simbolo, int tipo_variable, int ambito,int valor){

    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
    }
   
    
    simbolo* aux = buscar_sim_nombre(TS, nombre);
    //printf("Esto es aux: %p\n",aux);
    if (aux != NULL){

         error("Ya existe la constante");
       
        return aux;
    }else{
        strcpy(sim->nombre, nombre);
        // le ponemos un id
        sim->id = TS->pos_libre;
        sim->tipo = tipo_simbolo;
    
        sim->val.cons.tipo = tipo_variable;
        sim->val.cons.ambito = ambito;
        sim->val.cons.val.entero = valor;
            
        

        if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
            TS->tabla[TS->pos_libre] = sim;

            // calculamos el siguiente vacio
            TS->pos_libre = TS->pos_libre + 1;
        } else {
            //error
            error("Se ha llenado la tabla de simbolos");
        }
        return sim;
    }

}
simbolo* nuevo_simbolo_constante_real(tabla_de_simbolos* TS, char* nombre,float valor){
    
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
    }
   
    
    simbolo* aux = buscar_sim_nombre(TS, nombre);
    //printf("Esto es aux: %p\n",aux);
    if (aux != NULL){

         error("Ya existe la constante");
       
        return aux;
    }else{
        strcpy(sim->nombre, nombre);
        // le ponemos un id
        sim->id = TS->pos_libre;
        sim->tipo = CONSTANTE;
    
        sim->val.cons.tipo = REAL;
        sim->val.cons.ambito = LOCAL;
        sim->val.cons.val.real = valor;
            
        

        if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
            TS->tabla[TS->pos_libre] = sim;

            // calculamos el siguiente vacio
            TS->pos_libre = TS->pos_libre + 1;
        } else {
            //error
            error("Se ha llenado la tabla de simbolos");
        }
        return sim;
    }
}
simbolo* nuevo_simbolo_constante_bool(tabla_de_simbolos* TS, char* nombre,char* valor){
    simbolo *sim = (simbolo*) malloc(sizeof(simbolo));
    if(sim == NULL){
        error("Fallo en nuevo_simbolo -> MALLOC");
    }
   
    
    simbolo* aux = buscar_sim_nombre(TS, nombre);
    //printf("Esto es aux: %p\n",aux);
    if (aux != NULL){

         error("Ya existe la constante");
       
        return aux;
    }else{
        strcpy(sim->nombre, nombre);
        // le ponemos un id
        sim->id = TS->pos_libre;
        sim->tipo = CONSTANTE;
    
        sim->val.cons.tipo = BOOLEANO;
        sim->val.cons.ambito = LOCAL;

        if ((strcasecmp(valor,"verdadero"))==0){
            sim->val.cons.val.booleano= true;
        }else {
            sim->val.cons.val.booleano = false;
        }
            
        

        if (TS->pos_libre < MAX_TABLA_SIMBOLOS){
            TS->tabla[TS->pos_libre] = sim;

            // calculamos el siguiente vacio
            TS->pos_libre = TS->pos_libre + 1;
        } else {
            //error
            error("Se ha llenado la tabla de simbolos");
        }
        return sim;
    }


}

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

simbolo* buscar_sim_nombre(tabla_de_simbolos* TS, char* nombre) {
    int pos = 0;
    simbolo *sim = NULL;
    //printf("\nEstoy buscando: %s\n", nombre);
    if (TS->pos_libre != 0) {
        while (pos < TS->pos_libre  && strcmp(TS->tabla[pos]->nombre, nombre) != 0) {
            //printf("\n %s vs %s\n", TS->tabla[pos]->nombre, nombre);
            pos = pos + 1;
        }
        if (pos < TS->pos_libre) {
            sim = TS->tabla[pos];
            //printf("Encontrado: %s\n", sim->nombre);
        } else {
            //printf(RED "\n\nNo existe el simbolo con nombre: %s\n" RESET, nombre);
        }
    }

    return sim;
}

int buscar_sim_nombre_pos(tabla_de_simbolos* TS, char* nombre){
    int pos = 0;

    //printf("\nEstoy buscando: %s\n",nombre);
    while (pos<TS->pos_libre && strcmp(TS->tabla[pos]->nombre,nombre)!=0){
        //printf("\n %s vs %s\n",TS->tabla[pos]->nombre,nombre);
        pos = pos + 1;
    }

    return pos;
}

void get_nombre_sim(char * nombre, simbolo * sim){
    /*
     * Accion que guarda el nombre del simbolo en nombre.
     * Si no tiene nombre, guarda t+id (es decir, un simbolo temporal)
     */
    if (sim == NULL){
        error("Error en get_nombre_sim(), simbolo nulo");
    }
    else if (sim->tipo == TEMPORAL){
        sprintf(nombre, "t%d", sim->id);
    }
    else{
        sprintf(nombre, "%s", sim->nombre);
    }

}

void get_nombre_tipo_sim(char * nombre, int tipo_sim){
    /*
    #define TEMPORAL -1
    #define VARIABLE 0
    #define CONSTANTE 1
    #define TIPO 2
     */
    switch (tipo_sim) {
        case TEMPORAL:
            strcpy(nombre,"tmp");
            break;
        case VARIABLE:
            strcpy(nombre,"var");
            break;
        case CONSTANTE:
            strcpy(nombre,"const");
            break;
        case TIPO:
            strcpy(nombre,"tipo");
            break;
        default:
            error("Error en get_nombre_tipo_sim(): no existe tipo de simbolo");
            break;
    }
}

void get_nombre_tipo_var(char * nombre, int tipo_var){
    /*
    #define ENTERO 0
    #define REAL 1
    #define BOOLEANO 2
    #define CARACTER 3
    #define CADENA 4
     */
    switch (tipo_var) {
        case ENTERO:
            strcpy(nombre,"entero");
            break;
        case REAL:
            strcpy(nombre,"real");
            break;
        case BOOLEANO:
            strcpy(nombre,"bool");
            break;
        case CARACTER:
            strcpy(nombre,"char");
            break;
        case CADENA:
            strcpy(nombre,"cadena");
            break;
        default:
            error("Error en get_nombre_tipo_sim(): no existe tipo de simbolo variable");
            break;
    }
}



void get_nombre_tipo_param(char * nombre, int tipo_param){
    /*
    #define LOCAL 0
    #define ENTRADA 1
    #define ENTRADASALIDA 2
    #define SALIDA 3
     */
    switch (tipo_param) {
        case LOCAL:
            strcpy(nombre,"local");
            break;
        case ENTRADA:
            strcpy(nombre,"ent");
            break;
        case ENTRADASALIDA:
            strcpy(nombre,"ent_sal");
            break;
        case SALIDA:
            strcpy(nombre,"sal");
            break;
        default:
            error("Error en get_nombre_tipo_param(): no existe tipo de simbolo parametro");
            break;
    }
}


void imprime_tabla_simbolos(tabla_de_simbolos* ts){
    int id;
    char nombre_sim[100];
    char nombre_tipo_sim[100];
    char nombre_tipo_var[100];
    char nombre_tipo_param[100];
    printf("\n\t------------------------------------\n");
    printf("\tTABLA DE SIMBOLOS \n");
    printf("\tid\tnombre\t\ttipo_s\t\ttipovar\t\ttipo_param\n\n");

    for (int i = 0; i < ts->pos_libre; ++i) {
        id = ts->tabla[i]->id;
        get_nombre_sim(nombre_sim,ts->tabla[i]);
        get_nombre_tipo_sim(nombre_tipo_sim,ts->tabla[i]->tipo);
        if (ts->tabla[i]->tipo == VARIABLE){
            get_nombre_tipo_var(nombre_tipo_var,ts->tabla[i]->val.var.tipo);
            get_nombre_tipo_param(nombre_tipo_param,ts->tabla[i]->val.var.ambito);
        }else{
            get_nombre_tipo_var(nombre_tipo_var,ts->tabla[i]->val.cons.tipo);
            get_nombre_tipo_param(nombre_tipo_param,ts->tabla[i]->val.cons.ambito);
        }
       
        printf("\t%d\t%s\t\t%s\t\t%s\t\t%s\n",id,nombre_sim,nombre_tipo_sim,nombre_tipo_var,nombre_tipo_param);
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