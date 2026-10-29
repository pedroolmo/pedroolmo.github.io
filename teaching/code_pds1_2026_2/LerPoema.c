#include <stdio.h>
#define MAXTAM 1000


int main() {
	
	FILE *arq = fopen("poema.txt", "r");
	char espaco[MAXTAM];
	printf("\n");
	while(!feof(arq)) {
		fgets(espaco, MAXTAM, arq);
		printf("Linha lida: %s", espaco);
	}

	
	
	fclose(arq);	
	
	
}