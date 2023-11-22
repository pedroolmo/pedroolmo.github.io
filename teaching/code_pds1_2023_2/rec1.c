#include <stdio.h>


void misterio(int x) {
	printf("\n%d", x);
	misterio(x-1);
}


void main() {
	
	int n;
	scanf("%d", &n);
	misterio(n);
	
}
