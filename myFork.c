/*
//myFork()
//takes in an argument which contains
//the command the user inputs
//fork according to the argument
//returns a childStatus varible
//it contain process id and the status
//status includes "foreground", 0, "background", 1, "comment", 2
//"cd", 3, "exit", 4, "status", 5, "error", -1
*/

#include "myLibrary.h"

struct childStatus myFork(struct argument myArgu){
	struct childStatus returnVal;
	pid_t pid;
	int i=0;	

	if(myArgu.args==NULL){
		returnVal.pid=-1;
		returnVal.status=2;
	}else if(strcmp(myArgu.args[0], "cd")==0){		//change directory
		returnVal.pid=-1;
		returnVal.status=3;
	}else if(strcmp(myArgu.args[0], "exit")==0){	//exit the shell
		returnVal.pid=-1;
		returnVal.status=4;
	}else if(strcmp(myArgu.args[0], "status")==0){	//status
		returnVal.pid=-1;
		returnVal.status=5;
	}else{
		pid=fork();
		if(pid==0){				//child
			//execute()
			/*while(myArgu.args[i]!=NULL){
				fprintf(stdout, "%s ", myArgu.args[i]);
				i++;
			}*/
			fprintf(stdout, "In child\n");
		}else if(pid<0){			//unsuccessful
			//return error
			fprintf(stdout, "Error\n");
		}else{					//parent
			returnVal.pid=pid;
			returnVal.status=myArgu.ground;
			fprintf(stdout, "Parent, HAHA\n");
		}	
	}
	return returnVal;
}
