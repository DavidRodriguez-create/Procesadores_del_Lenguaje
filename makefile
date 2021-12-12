all: bison flex tablaSimbolos tablaCuadruplas
	gcc parser.tab.c lex.yy.o tabla_de_simbolos.o tabla_de_cuadruplas.o -ll -lm -DYYDEBUG

flex: scanner.l
	flex scanner.l
	gcc -c lex.yy.c

bison: parser.y
	bison -v -d -t parser.y

tablaSimbolos: tabla_de_simbolos.c tabla_de_simbolos.h
	gcc -c tabla_de_simbolos.c tabla_de_simbolos.h

tablaCuadruplas: tabla_de_cuadruplas.c tabla_de_cuadruplas.h
	gcc -c tabla_de_cuadruplas.c tabla_de_cuadruplas.h

clean:
	rm parser.tab.h parser.output lex.yy.c parser.tab.c lex.yy.o tabla_de_simbolos.h.gch tabla_de_cuadruplas.h.gch tabla_de_cuadruplas.o tabla_de_simbolos.o 
