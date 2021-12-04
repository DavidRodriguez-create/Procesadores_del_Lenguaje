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
dir_elemento* nuevo_dir_elemento_constante_entero(int num){
    dir_elemento* dir_elem = (dir_elemento*) malloc(sizeof(dir_elemento));
    dir_elem->tipo = CONSTANTE_INT;
    dir_elem->val.cons_int = num;
    return dir_elem;
}
dir_elemento* nuevo_dir_elemento_constante_booleano(char* nombre){
    dir_elemento* dir_elem = (dir_elemento*) malloc(sizeof(dir_elemento));
    dir_elem->tipo = CONSTANTE_BOOL;
    if ((strcasecmp(nombre,"verdadero"))==0){
        dir_elem->val.cons_bool = true;
    }else {
        dir_elem->val.cons_bool = false;
    }
    return dir_elem;
}
dir_elemento* nuevo_dir_elemento_constante_real(float num){
    dir_elemento* dir_elem = (dir_elemento*) malloc(sizeof(dir_elemento));
    dir_elem->tipo = CONSTANTE_FLOAT;
    dir_elem->val.cons_float = num;
    return dir_elem;
}

void imprime_tabla_cuadruplas(tabla_de_cuadruplas* tc){
    char nombre_operador[100];
    char nombre_operando1[100];
    char nombre_operando2[100];
    char nombre_resultado[100];

    printf("\n---------------------------------------\n");
    printf("TABLA DE CUADRUPLAS \n");
    printf("num\top\top1\top2\tres\n\n");
    for (int i = 0; i < tc->next_quad; ++i) {
        get_nombre_operador(nombre_operador,tc->tabla[i]->operador);
        get_nombre_dir(nombre_operando1,tc->tabla[i]->operando1);
        get_nombre_dir(nombre_operando2,tc->tabla[i]->operando2);
        get_nombre_dir(nombre_resultado,tc->tabla[i]->resultado);
        printf("%d\t%s\t%s\t%s\t%s\n",i,nombre_operador,nombre_operando1,nombre_operando2,nombre_resultado);
    }
};

void generar_codigo_tres_direcciones(tabla_de_cuadruplas* tc){
    int operador;
    char nombre_operador[100];
    char nombre_operando1[100];
    char nombre_operando2[100];
    char nombre_resultado[100];
    printf("\n---------------------------------------\n");
    printf("Codigo de tres direcciones \n");
    for (int i = 0; i < tc->next_quad; ++i) {
        operador = tc->tabla[i]->operador;
        get_nombre_operador(nombre_operador,tc->tabla[i]->operador);
        get_nombre_dir(nombre_operando1,tc->tabla[i]->operando1);
        get_nombre_dir(nombre_operando2,tc->tabla[i]->operando2);
        get_nombre_dir(nombre_resultado,tc->tabla[i]->resultado);

        switch (operador) {
            case OP_ASIGNACION:
                printf("%d\t%s %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_SUMA_UNARIA:
                printf("%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_SUMA:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_SUMA_REAL:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_RESTA_UNARIA:
                printf("%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_RESTA:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_RESTA_REAL:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MULTIPLICACION:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MULTIPLICACION_REAL:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_DIVREAL:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MOD:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_DIV:
                printf("%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_INTTOREAL:
                printf("%d\t%s := int_to_real(%s)\n",i,nombre_resultado,nombre_operando1);
                break;
            default:
                break;
        }
    }
}

void get_nombre_operador(char * nombre, int op){
    /*
    #define OP_SUMA_UNARIA 2
    #define OP_SUMA 3
    #define OP_SUMA_REAL 4
    #define OP_RESTA_UNARIA 5
    #define OP_RESTA 6
    #define OP_RESTA_REAL 7
    #define OP_MULTIPLICACION 8
    #define OP_MULTIPLICACION_REAL 9
    #define OP_DIVREAL 10
    #define OP_MOD 11
    #define OP_DIV 12
    #define OP_INTTOREAL 13
     */
    switch (op) {
        case OP_ASIGNACION:
            strcpy(nombre,":=");
            break;
        case OP_SUMA_UNARIA:
            strcpy(nombre,"+");
            break;
        case OP_SUMA:
            strcpy(nombre,"+");
            break;
        case OP_SUMA_REAL:
            strcpy(nombre,"+");
            break;
        case OP_RESTA_UNARIA:
            strcpy(nombre,"-");
            break;
        case OP_RESTA:
            strcpy(nombre,"-");
            break;
        case OP_RESTA_REAL:
            strcpy(nombre,"-");
            break;
        case OP_MULTIPLICACION:
            strcpy(nombre,"*");
            break;
        case OP_MULTIPLICACION_REAL:
            strcpy(nombre,"*");
            break;
        case OP_DIVREAL:
            strcpy(nombre,"/");
            break;
        case OP_MOD:
            strcpy(nombre,"mod");
            break;
        case OP_DIV:
            strcpy(nombre,"div");
            break;
        case OP_INTTOREAL:
            strcpy(nombre,"intreal");
            break;
        default:
            break;
    }
}

void get_nombre_dir(char * nombre, dir_elemento * dir){
    /*
     * Accion que guarda en nombre el nombre del dir
     * si dir es NULL, entonces guarda '-' en nombre
     */
    if(dir == NULL){
        strcpy(nombre,"-");
    }
    else{
        switch (dir->tipo) {
            case CELDA_TS:
                get_nombre_sim(nombre,dir->val.celda_TS);
                break;
            case CONSTANTE_INT:
                sprintf(nombre, "%d", dir->val.cons_int);
                break;
            case CONSTANTE_FLOAT:
                sprintf(nombre, "%.2f", dir->val.cons_float);
                break;
            case CONSTANTE_BOOL:
                if (dir->val.cons_bool == 0){
                    strcpy(nombre, "false");
                }
                else{
                    strcpy(nombre, "true");
                }

                break;
            default:
                printf("Error en get_nombre_dir: El tipo del dir_elemento no esta declarado\n");
                break;
        }
    }
}


//Esto no se usa
dir_elemento* operacion_aritmetica(int op,dir_elemento * exp1, dir_elemento * exp2, tabla_de_simbolos * tabla_simbolos, tabla_de_cuadruplas * tabla_cuadruplas){
   dir_elemento * res = nuevo_dir_elemento_celda_TS(new_temp(tabla_simbolos));
   //asignar tipo a la variable temporal
   res->val.celda_TS->val.var.tipo = ENTERO;
   gen(tabla_cuadruplas,op,exp1,exp2,res);
   return res;
};



