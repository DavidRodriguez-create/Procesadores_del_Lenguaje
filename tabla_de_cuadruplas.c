//
// Created by David on 29/11/2021.
//

#include <stdlib.h>
#include "tabla_de_cuadruplas.h"

tabla_de_cuadruplas* nueva_tabla_de_cuadruplas(){
    tabla_de_cuadruplas *TC = (tabla_de_cuadruplas*) malloc(sizeof(tabla_de_cuadruplas));
    TC->next_quad = 0;
    return TC;
};
