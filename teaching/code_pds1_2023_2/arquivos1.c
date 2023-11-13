#include <stdio.h>
#define MAX_TAM 100


void imprimeMatriz(int M[][MAX_TAM], int n, int m, int arquivo) {
	
	FILE *arqw;
	
	if(arquivo == 1) 
		arqw = fopen("matrizSoma.pds", "w");
	else 
		arqw = stdout;
	
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			fprintf(arqw, "%3d ", M[i][j]);
		}
		fprintf(arqw, "\n");
	}
	
	fclose(arqw);
}	
	


int main() {
	int M1[MAX_TAM][MAX_TAM];
	int M2[MAX_TAM][MAX_TAM];
	
	//criar uma variavel para manipular arquivo
	FILE *arq;
	
	//ler o arquivo matrizes.pds:
	arq = fopen("matrizes.pds", "r");
	
	//numero de linhas e colunas
	int n, m;
	fscanf(arq, "%d %d", &n, &m);
	
	//primeira matriz:
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			fscanf(arq, "%d", &M1[i][j]);
		}	
	}
	
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			fscanf(arq, "%d", &M2[i][j]);
			M1[i][j] += M2[i][j];
		}	
	}	
	
	imprimeMatriz(M1, n, m, 1);
	
	fclose(arq);
	
	
	return 0;
}