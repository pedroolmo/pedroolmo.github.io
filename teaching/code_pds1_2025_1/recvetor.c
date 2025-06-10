#include <stdio.h>


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
	
	int v[] = {1, 10, -100, 20};
	printf("\n%d", menorElemento(v, 4));
}