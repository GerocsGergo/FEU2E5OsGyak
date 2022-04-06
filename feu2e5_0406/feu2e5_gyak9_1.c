#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	pid_t pid;
	
	if(argc<2)
	{
		printf("\n nincs kinek, exitlok. \n");
		exit(1);
	}
	
	pid = atoi(argv[1]);
	kill(pid, SIGALRM); 
	exit(0);
}