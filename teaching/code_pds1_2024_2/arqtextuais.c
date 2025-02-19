#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char *fgets(char *str, int n, FILE *stream);

int main() {
	
	char buffer[1001];
	FILE *arq = fopen("GAAL.txt", "r");
	FILE *arqw = fopen("GAALNOVO.txt", "w");
	int mat;
	char *nome;
	float nota1, nota2;
	float soma = 0;
	int n = 0;
	
	int matzero;
	scanf("%d", &matzero);
	
	
	while(fgets(buffer, 1000, arq) != NULL) {
		mat = atoi(strtok(buffer, ","));
		nome = strtok(NULL, ",");
		nota1 = atof(strtok(NULL, ","));
		nota2 = atof(strtok(NULL, ","));
		
		if(mat == matzero) {
			nota1 = 0;
			nota2 = 0;
		}
		
		
		fprintf(arqw, "%d,%s,%.2f,%.2f\n", 
				  mat, nome, nota1, nota2);
		soma += nota1 + nota2;
		n += 2;
	}
	
	printf("\nMedia: %.2f", soma/n);
	
	fclose(arq);
	fclose(arqw);	
	
	int value;
	
	value = remove("GAAL.txt");
    if (!value) {
        printf("%s", "File removed successfully");
    }
	
	value = rename("GAALNOVO.txt", "GAAL.txt");
    if (!value) {
        printf("%s", "File name changed successfully");
    }	

	return 0;
}