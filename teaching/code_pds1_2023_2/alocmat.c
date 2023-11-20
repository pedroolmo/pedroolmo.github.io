#include <stdio.h>
#include <stdlib.h>

void main() {
	
	//int M[10000][10000];
	
	int **M;
	
	int n, m;
	scanf("%d%d", &n, &m);
	
	M = (int **)malloc(n*sizeof(int *));
	
	int i;
	for(i=0; i<n; i++) {
		M[i] = (int *)malloc(m*sizeof(int));
	}
	
	M[n-1][m-1] = 1000;
	
	printf("foi!");
	getchar();
	getchar();
	
	printf("%d", M[n-1][m-1]);
	
	
	
}