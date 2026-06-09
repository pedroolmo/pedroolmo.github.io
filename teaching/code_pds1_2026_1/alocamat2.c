#include <stdio.h>
#include <stdlib.h>

void alocaMatriz2(int ***M, int n, int m) {
	*M = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++) {
		(*M)[i] = (int*)malloc(m*sizeof(int));
	}
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++) {
			(*M)[i][j] = 0;
		}
	
}

int** alocaMatriz(int n, int m) {
	int **M = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++) {
		M[i] = (int*)malloc(m*sizeof(int));
	}
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++) {
			M[i][j] = 0;
		}
		
	return M;
	
}


void main() {
	

	int n, m, i, j;
	scanf("%d %d", &n, &m);


	
	int **M = alocaMatriz(n, m);
	
	alocaMatriz2(&M, n, m);
	
	/*
	
	M = (int**)malloc(n*sizeof(int*));
	for(i=0; i<n; i++) {
		M[i] = (int*)malloc(m*sizeof(int));
		//*(M+i) = (int*)malloc(m*sizeof(int));
	}
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++) {
			//*(*(M+i)+j) = 0;
			M[i][j] = i+j;
		}
	*/
	
	
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%2d ", M[i][j]);
		}
		printf("\n");
	}

	
	
			
	
	
	
	
	
	
	
	
	
	
}