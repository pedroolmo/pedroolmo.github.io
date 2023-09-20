#include <stdio.h>

void swap_naive(int a, int b) {
	
	int aux = a;
	
	a = b;
	b = aux;
	
	return a;
	
}

void swap(int *a, int *b) {
	
	int aux = *a;
	
	*a = *b;
	*b = aux;
	
}

void zeraVariaveis(int *pa, int *pb) {
	*pa = 0;
	*pb = 0;
	
	*pa += 1;
	
	printf("\nendereco de pa: %p", &pa);
}

void main() {
	
	int a = 10, b = 1;
	
	swap_naive(a, b);
	printf("\na = %d, b = %d", a, b);
	
	
	swap(&a, &b);
	//zeraVariaveis(&a, &b);
	printf("\na = %d, b = %d", a, b);
	//printf("\nend a: %p, end b: %p", &a, &b);
}

	