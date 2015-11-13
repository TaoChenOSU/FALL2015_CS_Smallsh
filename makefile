All: smallsh

smallsh: smallsh.o inputAnalyzer.o myFork.o
	gcc -o smallsh smallsh.o inputAnalyzer.o myFork.o

smallsh.o: smallsh.c myLibrary.h
	gcc -c smallsh.c

inputAnalyzer.o: inputAnalyzer.c myLibrary.h
	gcc -c inputAnalyzer.c 

myFork.o: myFork.c myLibrary.h
	gcc -c myFork.c

clean: 
	rm -rf *o smallsh
