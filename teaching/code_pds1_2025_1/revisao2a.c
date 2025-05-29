#include <stdio.h>


float calculaMedia(char *alunos[], int n) {
	
	int i;
	char temp[1000];
	int nota;
	float soma=0;
	for(i=0; i<n; i++) {
		printf("\n%s", alunos[i]);
		sscanf(alunos[i], "%s %d", temp, &nota);
		soma += nota;
	}
	
	return soma/n;
	
}

int main(int argc, char *argv[]) {
    printf("Numero de argumentos: %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
	
	printf("\nCalculo da media...");
	
	float media = calculaMedia(&argv[1], argc-1);
	printf("\nmedia = %.2f", media);

    return 0;
}