#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

void imprimeMatriz(int M[][MAXTAM],
				   int n, int m,
				   int salvaArquivo) {
					   
	int i, j;
	
	FILE *arqw;
	if(salvaArquivo)
		arqw = fopen("matrizSoma.txt", "w");
	else
		arqw = stdout;
	
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			fprintf(arqw, "%5d ", M[i][j]);
		}
		fprintf(arqw, "\n");
	}	

	if(salvaArquivo)
		fclose(arqw);
	
	
}


int main() {
	
	int M1[MAXTAM][MAXTAM],
		M2[MAXTAM][MAXTAM];
		
		

	//leitura de dados das matrizes:
	FILE *arq = fopen("matrizes.txt", "r");
	
	
	if(arq == NULL) {
		printf("\nArquivo nao encontrado!");
		return -1;
	}
	
	int modoEscrita;
	
	fscanf(arq, "%d", &modoEscrita);
	
	int n, m;
	int i, j;
	
	//arq = fopen("matrizes.txt", "r");
	fscanf(arq, "%d %d", &n, &m);
	
	system("PAUSE");

	
	for(i=0; i<n; i++) 
		for(j=0; j<m; j++) 
			fscanf(arq, "%d", &M1[i][j]);
		
	for(i=0; i<n; i++) 
		for(j=0; j<m; j++) {
			fscanf(arq, "%d", &M2[i][j]);
			M1[i][j] += M2[i][j];
		}

	imprimeMatriz(M1, n, m, modoEscrita);
	
	fclose(arq);
		
	
	return 0;
	
}