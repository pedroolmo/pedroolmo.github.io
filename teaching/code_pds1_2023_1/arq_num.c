#include <stdio.h>

#define MAX_TAM 100

void main() {
	
	/*
1) Criar duas matrizes
2) Ler o arquivo
3) Armazenar os dados do arquivo nas matrizes
4) fazer a soma das matrizes
5) Imprimir a matriz resultante	
	*/
	
	//1) Criar duas matrizes	
	float M1[MAX_TAM][MAX_TAM];
	float M2[MAX_TAM][MAX_TAM];
	
	// 2) Ler o arquivo
	
	FILE *arq;
	arq = fopen("matriz1.txt", "r");
	if(arq == NULL) {
		printf("\nArquivo matriz1.txt nao existe");
		return;
	}
	
	float aux;
	
	int n, m, i, j;
	fscanf(arq, "%d %d", &n, &m);
	for(i=0; i<n; i++) 
		for(j=0; j<m; j++) 
			fscanf(arq, "%f", &M1[i][j]);
		
	fclose(arq);
	
	arq = fopen("matriz2.dat", "r");
	if(arq == NULL) {
		printf("\nArquivo matriz2.dat nao existe");
		return;
	}	
	fscanf(arq, "%d %d", &n, &m);
	for(i=0; i<n; i++) 
		for(j=0; j<m; j++) 
			fscanf(arq, "%f", &M2[i][j]);
	fclose(arq);
	
	
	arq = fopen("matriz_soma.mdp", "w");
	fprintf(arq, "%d %d\n", n, m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			M1[i][j] += M2[i][j];
			fprintf(arq, "%.2f ", M1[i][j]);
		}
		fprintf(arq, "\n");
	}
		
	fclose(arq);
		
		
	
	/*
	while(!feof(arq)) {
		printf(".");
		fscanf(arq, "%f", &aux);
		printf("%.2f ", aux);
	}
	*/
	
	
	
}