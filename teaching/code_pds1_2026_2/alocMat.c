#include <stdio.h>
#include <stdlib.h>



int main() {
	
	//int M[1000][1000];
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	int **M;
	
	M = (int**)malloc(n * sizeof(int*));
	for(i=0; i<n; i++) {
		M[i] = (int*)malloc(m * sizeof(int));
		for(j=0; j<m; j++)
			M[i][j] = 0;
	}
	
	M[n-1][m-1] = 10;
	printf("\n%d", M[n-1][m-1]);
	
	
	//desaloca a matriz:
	
	for(i=0; i<n; i++)
		free(M[i]);
	free(M);

	
	return 0;
}