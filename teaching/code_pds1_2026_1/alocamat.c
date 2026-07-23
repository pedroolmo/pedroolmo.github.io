#include <stdio.h>
#include <stdlib.h>
#define MAX 10000


void main() {
	
	/*int M[MAX][MAX];
	
	
	
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	*/
	
	int n=MAX, m=MAX, i, j;
	
	int **M;
	
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
	
	
	M[MAX-1][MAX-1] = 123;
	printf("\n->%d", M[MAX-1][MAX-1]);
	/*
	
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%2d ", M[i][j]);
		}
		printf("\n");
	}
	*/
	
	
			
	
	
	
	
	
	
	
	
	
	
}