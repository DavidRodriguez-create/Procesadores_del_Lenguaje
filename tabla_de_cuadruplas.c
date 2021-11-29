//
// Created by David on 29/11/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include "tabla_de_cuadruplas.h"

tabla_de_cuadruplas* nueva_tabla_de_cuadruplas(){
    tabla_de_cuadruplas *TC = (tabla_de_cuadruplas*) malloc(sizeof(tabla_de_cuadruplas));
    if(TC == NULL){
        printf("ERROR -> Fallo en malloc (nueva_tabla_de_cuadruplas)\n");
    }
    TC->next_quad = 0;
    return TC;
};
cuadrupla* nueva_cuadrupla(int op, dir_elemento *op1, dir_elemento *op2, dir_elemento *res){

    cuadrupla* quad = (cuadrupla*) malloc(sizeof(cuadrupla));
    if(quad == NULL){
        printf("ERROR -> Fallo en malloc (nueva_cuadrupla)\n");
    }
    quad->operador = op;
    quad->operando1 = op1;
    quad->operando2 = op2;
    quad->resultado = res;

    return quad;

}

void insertar_cuadrupla(tabla_de_cuadruplas* TC, cuadrupla *quad, int nextQuad){
    
    TC->TC[nextQuad] = quad;



}

