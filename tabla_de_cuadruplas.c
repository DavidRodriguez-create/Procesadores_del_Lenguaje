//
// Created by David on 29/11/2021.
//

#include "tabla_de_cuadruplas.h"
#include <stdio.h>

tabla_de_cuadruplas* nueva_tabla_de_cuadruplas(){
    tabla_de_cuadruplas *TC = (tabla_de_cuadruplas*) malloc(sizeof(tabla_de_cuadruplas));
    if(TC == NULL){
        printf("Fallo en nueva_tabla_de_cuadruplas -> MALLOC\n");
    }
    TC->next_quad = 0;
    return TC;
};
cuadrupla* gen(tabla_de_cuadruplas* TC, int op, dir_elemento *op1, dir_elemento *op2, dir_elemento *res){

    cuadrupla* quad = (cuadrupla*) malloc(sizeof(cuadrupla));

    if(quad == NULL){
        printf("Fallo en nueva_cuadrupla -> MALLOC\n");
    }
    quad->operador = op;
    quad->operando1 = op1;
    quad->operando2 = op2;
    quad->resultado = res;

    int nextQuad = TC->next_quad;
    if (MAX_TABLA_CUADRUPLAS < nextQuad ){
        printf("Se ha llenado la tabla de cuadruplas\n");
    }
    TC->tabla[nextQuad] = quad;
    TC->next_quad = nextQuad + 1;

    return quad;

}

dir_elemento* nuevo_dir_elemento_celda_TS(simbolo* sim){
    dir_elemento* dir_elem = (dir_elemento*) malloc(sizeof(dir_elemento));
    dir_elem->tipo = CELDA_TS;
    dir_elem->val.celda_TS = sim;
    return dir_elem;
}

void imprime_tabla_cuadruplas(tabla_de_cuadruplas* TC){
    int operador;
    int tipo_operando1, tipo_operando2, tipo_resultado;
    printf("\n-------------------------\n");
    printf("TABLA DE CUADRUPLAS \n");
    for (int i = 0; i < TC->next_quad; ++i) {
        operador = TC->tabla[i]->operador;
        tipo_operando1 = TC->tabla[i]->operando1->tipo;
//        tipo_operando2 = TC->tabla[i]->operando1->tipo;
        tipo_resultado = TC->tabla[i]->operando1->tipo;

        switch (tipo_operando1) {
            char nombre_operando1[100];
            case CELDA_TS:
                get_nombre_sim(TC->tabla[i]->operando1->val.celda_TS,nombre_operando1);
                break;
            case CONSTANTE_INT:
                break;
            case CONSTANTE_FLOAT:
                break;
            case CONSTANTE_BOOL:
                break;
            default:
                printf("Error en imprime_tabla_cuadruplas: El tipo del operando1 no esta declarado\n");
                break;
        }

        if (TC->tabla[i]->operador<0){
            printf("> quad:%d operador:%d op1:%d op2:%d resultado:%d\n",i,TC->tabla[i]->operador,TC->tabla[i]->operando1->val.celda_TS->id,-1,TC->tabla[i]->resultado->val.celda_TS->id);
//            printf("> quad:%d operador:%d op1:%d op2:%d\n",i,TC->tabla[i]->operador,TC->tabla[i]->operando1->val.celda_TS->id,-1);
        }
        else{
            printf("> quad:%d operador:%d op1:%d op2:%d resultado:%d\n",i,TC->tabla[i]->operador,TC->tabla[i]->operando1->val.celda_TS->id,TC->tabla[i]->operando2->val.celda_TS->id, TC->tabla[i]->resultado->val.celda_TS->id);
        }
    }
};

void get_nombre_sim(simbolo * sim, char * nombre){
    /*
     * Funcion que devuelve el nombre del simbolo
     * Si no tiene nombre, devuelve t+id (es decir, un simbolo temporal)
     */
    if (sim->tipo == TEMPORAL){
        sprintf(nombre, "t%d", sim->id);
    }
    else{
        sprintf(nombre, "%s", sim->nombre);
    }

}

dir_elemento* operacion_aritmetica(int op,dir_elemento * exp1, dir_elemento * exp2, tabla_de_simbolos * tabla_simbolos, tabla_de_cuadruplas * tabla_cuadruplas){
   dir_elemento * res = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
   //asignar tipo a la variable temporal
   res->val.celda_TS->val.var.tipo = ENTERO;
   gen(tabla_cuadruplas,op,exp1,exp2,res);
   return res;
};



