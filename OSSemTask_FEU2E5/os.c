#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

int main(){
	char command[100];
	int status;
	char out;

	printf("Adjon meg egy UNIX parancsot: ");
	scanf("%s", command);
	printf("A megadott parancs: %s",command);
	do{
		status=system(command);
		if(WIFEXITED(status)) printf("Normalis befejezodes, visszaadott ertek: %d\n", WEXITSTATUS(status));
		printf("Adja meg a parancsot (exit a kilepeshez): ");
		scanf("%s", command);
		while(getchar()!= '\n');
	} while(command[0] != 'exit');
	exit(0);
}
