#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 1000
#define TAMNOME 200

void exibeMedia() {
	
	FILE *arq = fopen("CALC.txt", "r");
	char buf[MAXTAM+1];
	
	int mat;
	float nota1, nota2;
	char *nome;
	
	float soma = 0;
	int n = 0;
	
	//Opcao #1
	/*
	while(fgets(buf, MAXTAM, arq) != NULL) {
		printf("%s", buf);
	}
	*/
	
	//Opcao #2
	while(!feof(arq)) {
		fgets(buf, MAXTAM, arq);
		printf("%s", buf);
		mat = atoi(strtok(buf, ","));
		nome = strtok(NULL, ",");
		nota1 = atof(strtok(NULL, ","));
		nota2 = atof(strtok(NULL, ","));
		
		soma += nota1 + nota2;
		n += 2;
		
		printf("\nMatricula = %d", mat);
		printf("\nNome = %s", nome);
		printf("\nNotas: %f %f", nota1, nota2);		
	}	
	
	printf("\nMedia: %.2f", soma/n);
	
	
	
	fclose(arq);
}


void leAluno() {
	
	int mat;
	float nota1, nota2;
	char nome[TAMNOME];
	
	printf("\nDigite a matricula:");
	scanf("%d", &mat);
	
	fflush(stdin);
	printf("\nDigite o nome do aluno:");
	fgets(nome, TAMNOME, stdin); 
	
	int tamstr = strlen(nome);
	nome[tamstr-1] = '\0';
	
	
	printf("\nDigite as notas:");
	scanf("%f %f", &nota1, &nota2);
	
	FILE *arq = fopen("CALC.txt", "a");
	
	fprintf(arq, "\n%d,%s,%.2f,%.2f", mat, nome, nota1, nota2);
	
	fclose(arq);

}

void editaAluno() {
	
	int mataluno;
	printf("\nDigite a matricula para edicao:");
	scanf("%d", &mataluno);
	
	int mat;
	float nota1, nota2;
	char *nome;
	
	FILE *arq = fopen("CALC.txt", "r");
	char buf[MAXTAM];
	
	FILE *arqw = fopen("temp.txt", "w");
	
	while(fgets(buf, MAXTAM, arq) != NULL) {
		mat = atoi(strtok(buf, ","));
		nome = strtok(NULL, ",");
		nota1 = atof(strtok(NULL, ","));
		nota2 = atof(strtok(NULL, ","));
		
		if(mat == mataluno) {
			printf("\nDigite novas notas:");
			scanf("%f %f", &nota1, &nota2);
		}
		
		fprintf(arqw, "%d,%s,%.2f,%.2f\n", 
				mat, nome, nota1, nota2);	
		
	}
	
	fclose(arq);
	fclose(arqw);
	remove("CALC.txt");
	rename("temp.txt", "CALC.txt");
	
}



int main() {
	
	//leAluno();
	editaAluno();
	
	
	return 0;
}