#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAXTAM 1000

void imprimeMedia(char *curso) {
	
	char nome_arquivo[1000];
	nome_arquivo[0] = '\0';
	
	strcat(nome_arquivo, curso);
	strcat(nome_arquivo, ".txt");
	
	printf("\nnome arquivo: %s", nome_arquivo);
	
	FILE *arq = fopen(nome_arquivo, "r");
	if(arq == NULL) {
		printf("\nArquivo %s nao existe!", nome_arquivo);
		return;
	}
	
	
	char buf[1000];
	char *funcionou;
	char *tok;
	float nota1, nota2;	
	float soma = 0;
	int num_notas = 0;
	
	
	//char *fgets(char *str, int n, FILE *stream)
	do {
		funcionou = fgets(buf, MAXTAM, arq);
		
		
		if(funcionou != NULL) {

			
			tok = strtok(buf, ",");
			printf("\nmatricula: %s", tok);
			
			tok = strtok(NULL, ",");
			printf("\nnome: %s", tok);
			
			tok = strtok(NULL, ",");
			nota1 = atof(tok);
			printf("\nnota 1: %.2f", nota1);
			
			tok = strtok(NULL, ",");
			nota2 = atof(tok);
			printf("\nnota 2: %.2f", nota2);

			soma += nota1 + nota2;
			num_notas++;


			printf("\n");
			
			
		}


	} while(!feof(arq));
	//while (funcionou != NULL);
	
	
	
	fclose(arq);
	
	printf("\nmedia: %.2f", soma/num_notas);
	

}	

void adicionaAluno(char *curso) {
	
	char nome_arquivo[1000];
	nome_arquivo[0] = '\0';
	
	strcat(nome_arquivo, curso);
	strcat(nome_arquivo, ".txt");
	
	printf("\nnome arquivo: %s", nome_arquivo);
	
	FILE *arq = fopen(nome_arquivo, "r");
	if(arq == NULL) {
		printf("\nArquivo %s nao existe!", nome_arquivo);
		return;
	}
	fclose(arq);
	arq = fopen(nome_arquivo, "a");
	
	int mat;
	float nota1, nota2;
	char nome[1000];
	
	printf("\nNumero de matricula:");
	scanf("%d", &mat);
	fflush(stdin);
	printf("\nNome:");
	fgets(nome, 1000, stdin);
	
	int n = strlen(nome);
	nome[n-1] = '\0';
	
	
	printf("\nNota 1 e 2:");
	scanf("%f %f", &nota1, &nota2);
	
	fprintf(arq, "\n%d,%s,%.2f,%.2f", mat, nome, nota1, nota2);
	
	
	fclose(arq);	
	
}	


int main(int argc, char *argv[])  {
	
	printf("\nargc: %d", argc);
	
	int i;
	for(i=0; i<argc; i++) {
		printf("\n%s", argv[i]);
		
		if(!strcmp(argv[i],"-m")) {
			imprimeMedia(argv[i+1]);
		}
		else if(!strcmp(argv[i],"-a")) {
			adicionaAluno(argv[i+1]);
		}
		
		
		
	}
	
	
	
	
	
	
	
	//imprimeMedia();
	
	
	return 0;
}