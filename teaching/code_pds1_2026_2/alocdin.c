#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, i;
	scanf("%d", &n);
	
	double *v;
	v = (double*)malloc(sizeof(double)*n);
	
	for(i=0; i<n; i++)
		v[i] = 0;
	
	printf("\nEnd de n: %p", &n);
	printf("\nValor de v: %p", v);
	printf("\nEnd de v[0]: %p", &v[0]);
	printf("\nEnd de v[1]: %p", &v[1]);

	
	
	return 0;
}