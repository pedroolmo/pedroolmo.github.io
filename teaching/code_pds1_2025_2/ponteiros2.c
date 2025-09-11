#include <stdio.h>

void aumenta_de_1(int *x, int *y) {
	*x = *x+1;
	*y = *y+1;
}

int main() {
	
	int a = 2;
	int b = 10;

	aumenta_de_1(&a, &b);
	
	printf("%d %d", a, b);
	
	return 0;
}