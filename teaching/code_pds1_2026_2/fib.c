#include <stdio.h>
#include <math.h>

int count = 0;

unsigned int fib(unsigned int n) {
	count++;
	printf("\n%d", count);
	if(n<=2)
		return 1;
	return fib(n-1) + fib(n-2);
}

unsigned int fib_it(unsigned int n) {
	if(n<=2)
		return 1;
	int atual=1, prev=1;
	int i;
	for(i=3; i<=n; i++) {
		atual = atual + prev;
		prev = atual - prev;
	}
	return atual;	
}


int main() {
	int n;
	scanf("%d", &n);
	int resp = fib(n);
	printf("\fib(%u) = %u", n, resp);
	return 0;
}