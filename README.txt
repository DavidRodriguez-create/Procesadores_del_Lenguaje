HEMOS IDO POR EL CAMINO C

En el scanner hemos decidido de momento que tendran el mismo token, 
pero lo diferenciamos posteriormente con un valor diferente

{DR_LITERALENTERO}	{printf("DR_LITERALENTERO "); return BT_LITERALNUMERICO;}
{DR_LITERALREAL}	{printf("DR_LITERALREAL "); return BT_LITERALNUMERICO;}

duda puede estar pegados?
	i := i +1
	i := i + 1
	comb := comb * (m - i -1) div (i + 2);
	comb := comb * (m - i - 1) div (i + 2);
respuesta: 
	si, quitamos en flex el +- en las expresiones regulares, y añadimos en bison la produccion BT_SUMA EXPRESION

cambiar en la gramatica (bison) lo de los operadores relativos, ya que vamos a pasarlo por valores yylvalue

se carga el valor de las variables multivaluados en yylval antes de retornar el token, por ejemplo el token (identificardor nombrevariable)

para optimizar -O[1,2,s....]



expresion : expresion BT_MAYOR expresion {}
					| expresion BT_MENOR expresion {}
					| expresion BT_IGUAL expresion {}
					| expresion BT_DISTINTO expresion {}
					| expresion BT_MAYORIGUAL expresion {}
					| expresion BT_MENORIGUAL expresion {}
					;

****comentar operadores aritmeticos

Hemos decidido separarlos para que sea mas sencillo coger los valores de cada tipo y pasarselos
a bison. (LITERALNUMERICO-> LITERALENTERO y LITERALREAL

--------------------------------DUDAS-------------------------------
into_real() cuando en asignacion queremos transformar un int en real.
    asignacion : operando BT_ASIGNACION expresion

el igual de oprel, como se tiene que comportar?
    (ej: (3>4) = (3>2) , es posible? o solo con ej: 3=4)
    (cuando pongo 3, 2 o 4, pueden ser variables distintas de booleanas)

en exp mayor exp:
como manejar las variables temporales
gen(tabla_cuadruplas,OP_MAYOR,exp1,exp2,NULL);
ese NULL???

a:=   a o b y c //prioridades va de izquierda a derecha hay que arreglarlo?

//	0	si false = true goto 4
  	1	goto 2
  	2	a := false
  	3	goto 5
  	4	a := true



//corregir tipos mirar ejemplo.txt