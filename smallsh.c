/*
//Smallsh.c 
//main program
*/

#include "myLibrary.h"

int main(){
	char userInput[50];
	struct argument myArgu;
	struct childStatus child; 
		

	do{
		fprintf(stdout, ": ");
		fgets(userInput, 50, stdin);
		userInput[strlen(userInput)-1]='\0';
		inputAnalyzer(userInput, &myArgu);		
		child=myFork(myArgu);
		fprintf(stdout, "PID=%d\n", child.pid);
	}while(child.status!=4);

	return 0;	
}

