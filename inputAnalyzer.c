/*
//Input Analyzer
//Analyze user inputs, split them into
//individual strings, return a point to the array 
//of strings
//check if it is a comment, 
//return NULL
*/

#include "myLibrary.h"

void inputAnalyzer(char *userInput, struct argument *myArgu){
	int argc=0;
	int i=0;
	char **args;
	char *token;
	char backup[1024];
	strcpy(backup, userInput);
	
	//comment
	if(userInput[0]=='#'){
		myArgu->ground=-1;
		myArgu->args=NULL;
	}
	//======================

	token=strtok(userInput, " ");
	if(token!=NULL){	
		while(token){
			token=strtok(NULL, " ");
			argc++;
		}

		args=malloc(sizeof(char*)*argc);
		for(i=0; i<argc; i++){
			args[i]=malloc(sizeof(char)*150);
		}		

		token=strtok(backup, " ");
		strcpy(args[0], token);
		
		for(i=1; i<argc; i++){
			token=strtok(NULL, " ");
			strcpy(args[i], token);
		}

		if(args[i-1]=="&"){
			myArgu->ground=1;
			args[i-1]=NULL;
			myArgu->args=args;
		}else{
			myArgu->ground=0;
			myArgu->args=args;
		}
	}else{
		myArgu->ground=-1;
		myArgu->args=NULL;	
	}
}
