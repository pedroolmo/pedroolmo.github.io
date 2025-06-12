#include <stdio.h>


int hotpo(int x) {
	printf("%d ", x);
	if(x==1)
		return 0;
	if(x%2 == 0) {
		return 1 + hotpo(x/2);
	else
		return 1 + hotpo(3*x + 1);	
}


int ehPalindromo(int v[], int n) {
	if(n == 1)
		return 1;
	if(v[0] == v[n-1]) 
		return ehPalindromo(v+1, n-2);
	return 0;
}


int menorElemento2(int v[], int n) {
	if(n==1)
		return v[0];
	int atual = v[0];
	int resto = menorElemento2(v+1, n);
	if(atual < resto)
		return atual;
	return resto;	
}

int menorElemento(int v[], int n) {
	if(n==1)
		return v[0];
	int atual = v[n-1]; //v[0]
	int resto = menorElemento(v, n-1);
	if(atual < resto)
		return atual;
	return resto;	
}

int main() {
	
	int v[] = {1, 2, -5, 8, -5, 2, 1};
	printf("\n%d", menorElemento(v, 4));
	printf("\n%d", ehPalindromo(v, 7));
	
	int x;
	scanf("%d", &x);
	printf("\nhotpo: %d", hotpo(x));
}