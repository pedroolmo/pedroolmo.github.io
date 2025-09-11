#include <stdio.h>

int incremento(int x) {
	x = x+1;
	return x;
}

int main() {
	int x = 1;
	x = incremento(x);
	printf("\n%d", x);
	
	return 0;
}