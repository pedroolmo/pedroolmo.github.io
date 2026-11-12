#include <stdio.h>
#include <math.h>

int fatorial(unsigned int n) {
	if(n <= 1)
		return 1;
	return n * fatorial(n-1);
	
}

int main() {
	int n;
	scanf("%d", &n);
	int resp = fatorial(n);
	printf("\nFat(%d) = %d", n, resp);
	return 0;
}