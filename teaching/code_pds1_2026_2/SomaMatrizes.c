#include <stdio.h>
#define MAXTAM 100

void imprimeMatriz(FILE *arq, int M[][MAXTAM], int n, int m) {
	int i,j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			fprintf(arq, "%4d ", M[i][j]);
		}
		fprintf(arq, "\n");
	}
}

int main() {
	
	int M1[MAXTAM][MAXTAM];
	int M2[MAXTAM][MAXTAM];
	
	//ler o arquivo:
	FILE *arq;
	arq = fopen("matrizes.pds", "r");
	
	int n, m, i, j;
	fscanf(arq, "%d %d", &n, &m);
	
	printf("\n->%d %d\n", n, m);
	
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
	
	FILE *arqout = fopen("matrizSoma.out", "w");
	
	
	imprimeMatriz(arqout, M1, n, m);
	
	fclose(arqout);
	
	
	
	
	fclose(arq);
	
	return 0;
}