#include <stdio.h>
#include <stdlib.h>

void main() {
	
	float **M;
	
	int n,m;
	int i, j;
	scanf("%d %d", &n, &m);
	
	M = (float**) malloc(n*sizeof(float*));
	for(i=0; i<n; i++) {
		M[i] = (float*)malloc(m*sizeof(float));
		for(j=0; j<m; j++)
			M[i][j] = 0;
	}
	
	fflush(stdin);
	getchar();

	
	for(i=0; i<n; i++)
		free(M[i]);
	free(M);
	
	
}