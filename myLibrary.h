/*
//Library
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

struct childStatus{
	pid_t pid;
	int status;
};

struct argument{
	char **args;
	int ground;			//fore:0; back:1; error:-1
};

void inputAnalyzer(char *userInput, struct argument *myArgu);

struct childStatus myFork(struct argument myArgu);

void changeDir(struct argument myArgu);

void displayStatus(int status);

void ctrlCHandler(int sig);
