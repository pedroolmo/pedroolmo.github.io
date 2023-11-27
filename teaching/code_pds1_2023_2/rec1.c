#include <stdio.h>


int menorElemento(int v[], int n) {
	if(n == 1)
		return v[0];
	
	int ultimo = v[n-1];
	int menor_do_resto = menorElemento(v, n-1);
	
	if(ultimo < menor_do_resto)
		return ultimo;
	return menor_do_resto;
	
}




int count_fib = 0;


int fib_it(int n) {
	
	if(n <= 2)
		return 1;
	int ant = 1;
	int prox = 1;
	int count = 2;
	
	while(count < n) {
		prox = prox + ant;
		ant = prox - ant;
		count ++;
	}
	
	return prox;

}

int fib(int n) {
	if(count_fib % 1000 == 0)
		printf("\n%d", count_fib);
	count_fib++;
	if(n <= 2)
		return 1;
	return fib(n-1) + fib(n-2);
}


int fatorial(int n) {
	if(n == 1 || n == 0)
		return 1;
	else
		return n*fatorial(n-1);
	
}

void misterio(int x) {	
	if(x == 0)
		return;
	
	misterio(x-1);
	printf("\n%d", x);
}

void main() {
	
	int n;
	scanf("%d", &n);
	
	int r = fib(n);
	printf("\nresultado: %d", r);
	
}
