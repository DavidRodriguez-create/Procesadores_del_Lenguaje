all: bison flex.o
	gcc parser.tab.c lex.yy.o -lfl -lm

	
flex.o: flex
	gcc -c lex.yy.c

flex: scanner.l 
	flex scanner.l
	
	
bison: parser.y
	bison -v -d parser.y
	

clean: 
	rm parser.tab.h parser.output lex.yy.c parser.tab.c lex.yy.o
