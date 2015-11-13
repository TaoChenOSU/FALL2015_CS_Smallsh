/*
//Smallsh.c 
//main program
*/

#include <myLibrary.h>

int main(){
	char userInput[50];
	argument myArgu;
	childStatus status; 
		

	do{
		fprintf(stdout, ": ");
		fgets(userInput, 50, stdin);
		userInput[strlen(userInput)-1]='\0';
		inputAnalyzer(userInput, &myArgu);
				
		status=myFork(myArgu);
	}while(

	return 0;	
}

