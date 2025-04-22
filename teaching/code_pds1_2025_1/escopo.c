#include <stdio.h>

void incremento(int x) {
	x = x+1;
}

int main() {
	int x = 1;
	incremento(x);
	printf("\n%d", x);
	
	return 0;
}