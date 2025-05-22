#include <stdio.h>
#define TAM 100

typedef struct Matriz {
	int M[100][100];
	int n, m;
} Matriz;

void imprimeMatriz(Matriz M, FILE *arqw) {
	
	int i,j;
	fprintf(arqw, "\n");
	for(i=0; i<M.n; i++) {
		for(j=0; j<M.m; j++) {
			fprintf(arqw, "%4d ", M.M[i][j]);
		}
		fprintf(arqw, "\n");
	}
}


int main() {
	
	Matriz M1, M2;
	int i,j;
	FILE *arq, *arqw;
	
	//leitura do arquivo
	arq = fopen("matrizes.txt", "r");
	if(arq == NULL) {
		printf("\nErro de leitura no arquivo!");
		return -1;
	}
	
	arqw = fopen("matrizsoma.txt", "w");
	
	
	//leitura do numero de linhas e colunas
	fscanf(arq, "%d %d", &M1.n, &M1.m);
	printf("\n%d %d", M1.n, M1.m);
	getchar();
	
	M2.n = M1.n;
	M2.m = M1.m;
	
	//ler os dados de cada matriz
	for(i=0; i<M1.n; i++) {
		for(j=0; j<M1.m; j++) {
			fscanf(arq, "%d", &M1.M[i][j]); 
		}
	}
	
	printf("\nLeitura da matriz 1 concluida!");
	imprimeMatriz(M1, stdout);
	getchar();
	
	for(i=0; i<M2.n; i++) {
		for(j=0; j<M2.m; j++) {
			fscanf(arq, "%d", &M2.M[i][j]);
		}
	}

	printf("\nLeitura da matriz 2 concluida!");
	imprimeMatriz(M2, stdout);
	getchar();
	
	//fazer a soma das matrizes
	for(i=0; i<M1.n; i++) {
		for(j=0; j<M2.m; j++) {
			M1.M[i][j] += M2.M[i][j];
		}
	}
	
	imprimeMatriz(M1, arqw);
	getchar();
	
	
	fclose(arq);
	fclose(arqw);
	
	
	return 0;
	
	
	
	
}