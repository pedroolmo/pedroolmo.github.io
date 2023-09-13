#include <stdio.h>

void zeraVariaveis(int a, int b) {
	a = 9;
	b = 20;
	
	int *end_a, *end_b;
	
	end_a = &a;
	end_b = &b;
	
	printf("Valor armazenado em %p: %d", end_a, *end_a);
	
	*end_a = *end_a * 1000;
	
	printf("\na=%d, b=%d", a, b);
	printf("\nend a: %p, end b: %p", end_a, end_b);
}

void main() {
	
	int a = 10, b = 10;
	zeraVariaveis(a, b);
	printf("\na = %d, b = %d", a, b);
	printf("\nend a: %p, end b: %p", &a, &b);
}

	