main: myscanner.o lex.yy.o
	gcc -w -o myscanner myscanner.o lex.yy.o