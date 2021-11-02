all: bison flex
	gcc parser.tab.c lex.yy.o -lfl -lm
	
flex: scanner.l
	flex scanner.l
	gcc -c lex.yy.c	
	
bison: parser.y
	bison -v -d parser.y
	
clean: 
	rm parser.tab.h parser.output lex.yy.c parser.tab.c lex.yy.o
