#include <stdio.h>

int ehPar(int x) {
	
	return (~x)&1; 
	
	
}

int main() {
	int a = 10;
	printf("%d", ehPar(a));
	return 0;
}