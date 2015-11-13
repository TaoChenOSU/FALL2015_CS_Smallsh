#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
	int i=0;
	pid_t pid;
	char *args[]={"ls", (char *)0};

	pid=fork();
	if(pid==0){
		fprintf(stdout, "Child\n");
		execvp("ls", args);
	}else if(pid<0){
		fprintf(stdout, "Fail\n");
	}else{
		fprintf(stdout, "Parent\n");
	}
	
	return 0;
}
