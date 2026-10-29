#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTAM 1000

int main() {
	
	FILE *arq = fopen("GAAL.txt", "r");
	char linha[MAXTAM];
	int mat;
	char *nome;
	float nota1, nota2;
	float soma = 0;
	int count = 0;
	
	
	while(!feof(arq)) {
		fgets(linha, MAXTAM, arq);
		mat = atoi(strtok(linha, ","));
		nome = strtok(NULL, ",");
		nota1 = atof(strtok(NULL, ","));
		nota2 = atof(strtok(NULL, ","));
		printf("\n%d-%s-%.2f-%.2f", 
				mat, nome, nota1, nota2);
		soma += nota1 + nota2;
		count += 2;
	}
	
	printf("\nMedia: %.2f", soma/count);
	
	
	
	return 0;
}