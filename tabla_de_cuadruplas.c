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
dir_elemento* nuevo_dir_elemento_pos_quad(int num){
    dir_elemento* dir_quad = (dir_elemento*) malloc(sizeof(dir_elemento));
    dir_quad->tipo = POS_QUAD;
    dir_quad->val.pos_quad = num;
    return dir_quad;

}

lista* makelist(int pos_quad){

    struct lista  *nuevo;
    nuevo=(lista*)malloc(sizeof(lista));
    nuevo->elem= pos_quad;
    nuevo->sig= NULL;
    return nuevo;

}

lista * merge(lista* l1, lista* l2){
    if (l2 == NULL){
        return l1;
    }else if (l1 == NULL){
        return l2;
    }else{
        lista * aux;
        aux = l1;
        while (aux->sig != NULL){
            aux = aux->sig;

        }
        aux->sig = l2;
        return l1;
    }

}

void backpatch(tabla_de_cuadruplas* TC, lista* l,int pos){

    if (TC == NULL){
        printf("Error en backpatch: Tabla de cuadruplas vacia");
    }else if (l == NULL){

        printf("Error en backpatch: Lista vacia");

    }else{
        lista* actual;
        actual = l;
        while (actual != NULL) {
            dir_elemento *dir_elem = (dir_elemento *) malloc(sizeof(dir_elemento));
            dir_elem->tipo = POS_QUAD;
            dir_elem->val.pos_quad = pos;
            TC->tabla[actual->elem]->resultado = dir_elem;
            actual = actual->sig;
        }

    }


}

void imprime_tabla_cuadruplas(tabla_de_cuadruplas* tc){
    char nombre_operador[100];
    char nombre_operando1[100];
    char nombre_operando2[100];
    char nombre_resultado[100];

    printf("\n\t---------------------------------------\n");
    printf("\tTABLA DE CUADRUPLAS \n");
    printf("\tnum\top\top1\top2\tres\n\n");
    for (int i = 0; i < tc->next_quad; ++i) {
        get_nombre_operador(nombre_operador,tc->tabla[i]->operador);
        get_nombre_dir(nombre_operando1,tc->tabla[i]->operando1);
        get_nombre_dir(nombre_operando2,tc->tabla[i]->operando2);
        get_nombre_dir(nombre_resultado,tc->tabla[i]->resultado);
        printf("\t%d\t%s\t%s\t%s\t%s\n",i,nombre_operador,nombre_operando1,nombre_operando2,nombre_resultado);
    }
};

void generar_codigo_tres_direcciones(tabla_de_cuadruplas* tc){
    int operador;
    char nombre_operador[100];
    char nombre_operando1[100];
    char nombre_operando2[100];
    char nombre_resultado[100];
    printf("\n\t---------------------------------------\n");
    printf("\tCodigo de tres direcciones \n");
    for (int i = 0; i < tc->next_quad; ++i) {
        operador = tc->tabla[i]->operador;
        get_nombre_operador(nombre_operador,tc->tabla[i]->operador);
        get_nombre_dir(nombre_operando1,tc->tabla[i]->operando1);
        get_nombre_dir(nombre_operando2,tc->tabla[i]->operando2);
        get_nombre_dir(nombre_resultado,tc->tabla[i]->resultado);

        switch (operador) {
            case OP_ASIGNACION:

                printf("\t%d\t%s %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_SUMA_UNARIA:
                printf("\t%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;

            case OP_SUMA_UNARIA_REAL:
                printf("\t%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_SUMA:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_SUMA_REAL:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_RESTA_UNARIA:
                printf("\t%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_RESTA_UNARIA_REAL:
                printf("\t%d\t%s := %s %s\n",i,nombre_resultado,nombre_operador,nombre_operando1);
                break;
            case OP_RESTA:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_RESTA_REAL:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MULTIPLICACION:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MULTIPLICACION_REAL:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_DIVREAL:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_MOD:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_DIV:
                printf("\t%d\t%s := %s %s %s\n",i,nombre_resultado,nombre_operando1,nombre_operador,nombre_operando2);
                break;
            case OP_INTTOREAL:
                printf("\t%d\t%s := int_to_real(%s)\n",i,nombre_resultado,nombre_operando1);
                break;
            case OP_MAYOR:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_MENOR:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_DISTINTO:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_MAYORIGUAL:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_MENORIGUAL:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_IGUAL:
                printf("\t%d\tsi %s %s %s goto %s\n",i,nombre_operando1,nombre_operador,nombre_operando2,nombre_resultado);
                break;
            case OP_GOTO:
                printf("\t%d\tgoto %s\n",i,nombre_resultado);
                break;
            case INPUT:
                printf("\t%d\tinput %s\n",i,nombre_resultado);
                break;
            case OUTPUT:
                printf("\t%d\toutput %s\n",i,nombre_resultado);
                break;
            
            default:
                error("Error en generar_codigo_tres_direcciones(): no existe operador");
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
    #define OP_MAYOR 14
    #define OP_MENOR 15
    #define OP_DISTINTO 16
    #define OP_MAYORIGUAL 17
    #define OP_MENORIGUAL 18
    #define OP_IGUAL 19
    #define OP_GOTO 20
    #define INPUT 21
    INPUT#define OUTPUT 22
     */
    switch (op) {
        case OP_ASIGNACION:
            strcpy(nombre,":=");
            break;
        case OP_SUMA_UNARIA:
            strcpy(nombre,"+");
            break;
        case OP_SUMA_UNARIA_REAL:
            strcpy(nombre,"+(real)");
            break;
        case OP_SUMA:
            strcpy(nombre,"+");
            break;
        case OP_SUMA_REAL:
            strcpy(nombre,"+(real)");
            break;
        case OP_RESTA_UNARIA:
            strcpy(nombre,"-");
            break;

        case OP_RESTA_UNARIA_REAL:
            strcpy(nombre,"-(real)");
            break;
        case OP_RESTA:
            strcpy(nombre,"-");
            break;
        case OP_RESTA_REAL:
            strcpy(nombre,"-(real)");
            break;
        case OP_MULTIPLICACION:
            strcpy(nombre,"*");
            break;
        case OP_MULTIPLICACION_REAL:
            strcpy(nombre,"*(real)");
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
        case OP_MAYOR:
            strcpy(nombre,">");
            break;
        case OP_MENOR:
            strcpy(nombre,"<");
            break;
        case OP_DISTINTO:
            strcpy(nombre,"<>");
            break;
        case OP_MAYORIGUAL:
            strcpy(nombre,">=");
            break;
        case OP_MENORIGUAL:
            strcpy(nombre,"<=");
            break;
        case OP_IGUAL:
            strcpy(nombre,"=");
            break;
        case OP_GOTO:
            strcpy(nombre,"goto");
            break;
        case INPUT:
            strcpy(nombre,"input");
            break;

        case OUTPUT:
            strcpy(nombre,"output");
            break;
        default:
            error("Error en get_nombre_operador(): no existe operador");
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

            case POS_QUAD:

                sprintf(nombre, "%d", dir->val.pos_quad);
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

void generarOutputs(tabla_de_simbolos* TS,tabla_de_cuadruplas * tabla_cuadruplas){

    int pos = 0;
    simbolo *sim = NULL;
    //printf("\nEstoy buscando: %s\n", nombre);
    if (TS->pos_libre != 0) {
        while (pos < TS->pos_libre ) {
            if (TS->tabla[pos]->val.var.ambito == SALIDA |TS->tabla[pos]->val.var.ambito == ENTRADASALIDA ){
                simbolo *sim = TS->tabla[pos];
                dir_elemento * dir = nuevo_dir_elemento_celda_TS(sim);
                gen(tabla_cuadruplas,OUTPUT,NULL,NULL,dir);
            }
            //printf("\n %s\n", TS->tabla[pos]->nombre);
            
            pos = pos + 1;
        }
        
    }

}



