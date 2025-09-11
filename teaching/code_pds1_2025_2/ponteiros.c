#include <stdio.h>

int main() {
	
	int a = 2;
	int b = 10;

	int *end_a;
	int *end_b = &b;
	
	end_a = &a;
	
	*end_a = *end_b + *end_a;
	
	
	printf("%p", end_a);
	printf("\n%d", a);
	
	
	
	return 0;
}