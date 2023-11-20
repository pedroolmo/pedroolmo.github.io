#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int n;
	scanf("%d", &n);
	
	//float v[n];
	
	float x[10];
	
	x[5] = 4;
	
	printf("\nx=%p", x);

	
	double *v;
	v = (double*)malloc(n*sizeof(double));
	
	printf("\nv = %p", v);
	
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
	
	
	getchar();
	getchar();
	
	
	free(v);
	
}