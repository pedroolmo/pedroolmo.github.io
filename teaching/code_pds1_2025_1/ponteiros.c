#include <stdio.h>

void main() {
	
	int *end_a;
	int a = 0;
	
	end_a = &a;
	
	*end_a = *end_a + 1;
		
	printf("\n%p: %d ou %d", end_a, *end_a, a);
	
}