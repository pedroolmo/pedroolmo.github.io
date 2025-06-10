#include <stdio.h>

int count = 0;


void misterio(int x) {

	if(x >= 0) {
		printf("\n%d", x);
		misterio(x-1);
		printf("\n%d", x);
	}
}

int fib(int n) {
	count++;
	printf("\ncount=%d", count);
	
	if(n<=2) return 1;
	return fib(n-1) + fib(n-2);
}

int fib2(int n) {
	
	if(n<=2)
		return 1;

	int i, prev=1, atual=1;
	for(i=2; i<n; i++) {
		atual = prev + atual;
		prev = atual - prev;
	}
	return atual;
}


int main() {
	
	int x;
	scanf("%d", &x);
	//misterio(x);	
	printf("\n%d", fib2(x));
}