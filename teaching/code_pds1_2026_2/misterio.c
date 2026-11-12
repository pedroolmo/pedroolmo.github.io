#include <stdio.h>
#include <math.h>

void misterio(int n) {
	if(n != 0)
		return;
	misterio(n-1);	
	printf("\n%d", n);
}

int main() {
	int n;
	scanf("%d", &n);
	misterio(n);
	return 0;
}