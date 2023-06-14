#include <stdio.h>

/*
misterio3(int n) {
	printf("\n%d", n);
}
misterio2(int n) {
	printf("\n%d", n);
	misterio3(n-1);
}
*/


float menor(float v[], int n) {
	if(n==1) 
		return v[0];
	
	float menorv = menor(v, n-1);
	
	if(v[n-1] < menorv)
		return v[n-1];
	return menorv;
	
	
	
}



int count_empilha = 0;

int fib2(int n) {
	if(n <= 2)
		return 1;
	int prev = 1;
	int atual = 1;
	int count = 2;
	while(count < n) {
		atual = prev + atual;
		prev = atual - prev;
		count ++;
	}
	return atual;
}

int fib(int n) {
	//printf("\n%d", count_empilha++);
	if (n <= 2)
		return 1;
	return fib(n-2) + fib(n-1);
	
}

int fatorial(int n) {
	if(n <= 1)
		return 1;
	return n * fatorial(n-1);
}

void misterio(int n) {
	//condição de parada OU caso trivial
	if(n<0) {
		return;
	}
	misterio(n-1);	
	printf("\n%d", n);
}

void main() {
	int n;
	scanf("%d", &n);
	
	printf("\n%d", fib2(n));	
	printf("\n\nfib(%d) = %d", n, fib(n));	
}