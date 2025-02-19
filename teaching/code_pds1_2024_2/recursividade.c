#include <stdio.h>

void misterio(int);
int contagem = 0;

void misterio(int x) {
	if(x > 0)
		misterio(x-1);
	printf("\n%d", x);
}

int fib(unsigned int n) {
	contagem++;
	printf("\ncontagem = %d", contagem);
	if(n <= 2)
		return 1;
	return fib(n-1) + fib(n-2);
}

int fib2(unsigned int n) {
	int atual=1, prev=1;
	if(n <= 2)
		return 1;
	int count = 3;
	while(count <= n) {
		atual = atual + prev;
		prev = atual - prev;
		count++;
	}
	return atual;
	
}



int fat(unsigned int n) {
	
	//caso trivial
	if(n == 0)
		return 1;
	return n * fat(n-1);
	
}



int main() {
	int n;
	scanf("%d", &n);
	//misterio(n);
	printf("\nfib rec: %d", fib(n));
	//printf("\nfib ite: %d", fib2(n));
	return 0;
}