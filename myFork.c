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

#include <myLibrary.h>

childStatus myFork(argument myArgu){
	childStatus returnVal;
	pid_t pid;

	if(args==NULL){
		returnVal.pid=-1;
		returnVal.status=2;
	}else if(strcmp(myArgu.args[0], "cd")){		//change directory
		
	}else if(strcmp(myArgu.args[0], "exit")){	//exit the shell

	}else if(strcmp(myArgu.args[0], "status")){	//status

	}else{
		pid=fork();
		if(pid==0){				//child
			//execute()
		}else if(pid<0){			//unsuccessful
			//return error
		}else{					//parent
			returnVal.pid=pid;
			returnVal.status=myArgu.ground;
		}	
	}
	return returnVal;
}
