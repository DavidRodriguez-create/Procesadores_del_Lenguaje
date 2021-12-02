//
// Created by David on 29/11/2021.
//

#include "tabla_de_cuadruplas.h"

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
    printf("\n-------------------------\n");
    printf("TABLA DE CUADRUPLAS \n");
    for (int i = 0; i < TC->next_quad; ++i) {
        printf("> operador:%d op1:%s op2:%p resultado:%s \n",TC->tabla[i]->operador,TC->tabla[i]->operando1->val.celda_TS->nombre,TC->tabla[i]->operando2, TC->tabla[i]->resultado->val.celda_TS->nombre);
    }
};



