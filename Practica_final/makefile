all: bison flex
	gcc parser.tab.c lex.yy.o -lfl -lm -DYYDEBUG

flex: scanner.l
	flex -d scanner.l
	gcc -c lex.yy.c

bison: parser.y
	bison -v -d -t parser.y

clean:
	rm parser.tab.h parser.output lex.yy.c parser.tab.c lex.yy.o
