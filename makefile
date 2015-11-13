All: smallsh

smallsh: smallsh.o inputAnalyzer.o
	gcc -o smallsh smallsh.o inputAnalyzer.o

smallsh.o: smallsh.c myLibrary.h
	gcc smallsh.c

inputAnalyzer.o: inputAnalyzer.c myLibrary.h
	gcc inputAnalyzer.c 
