#include <stdio.h>
#include <stdlib.h>

void alocaMatriz(int ***M, int n, int m);

int** alocaMatriz(int n, int m);

int main() {
	
	//int M[1000][1000];
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int **M;
	
	alocaMatriz(&M, n, m);
	M = alocaMatriz(n, m);

	
	M[n-1][m-1] = 10;
	printf("\n%d", M[n-1][m-1]);
	
	//desaloca a matriz:
	
	for(i=0; i<n; i++)
		free(M[i]);
	free(M);

	
	return 0;
}