/*
//Library
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

struct childStatus{
	pid_t pid;
	int status;
};

struct argument{
	char **args;
	int ground;			//fore:0; back:1; error:-1
};

argument inputAnalyzer(char *userInput);

childStatus myFork(argument myArgu);
