#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50

int randInt(int min, int max) { //12 108
	// entre min e max + min
	int r = min + rand()%(max-min+1); 
	return r;
}

float geraPreco(float min, float max) {
	/*gera um preco entre min e max com 
	  centavos aleatorios. Ex: 35.89 */
	int pint =  randInt(min, max);
	float centavos = randInt(0, 99);
	return pint + (float)centavos/100;
	
}

int main() {
	
	srand(time(NULL));
	
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	
	//1 e 200
	int nprod = randInt(1, MAX_PRODUTOS);
	
	//1 e 50
	int nclientes = randInt(1, MAX_CLIENTES);
	
	int i;
	for(i=0; i<nprod; i++) {
		precos[i] = geraPreco(5, 100);
	}
	
	for(i=0; i<nclientes; i++) {
		compras[i] = randInt(0, nprod-1);
	}
	
	float faturamento = 0;
	

	printf("\nCliente Produto Preco");
	for(i=0; i<nclientes; i++) {
		int produto = compras[i];
		faturamento += precos[produto];
		printf("\n%7d %7d %f", i, produto, precos[produto]); 
	}
		
	printf("\nFaturamento: %.2f", faturamento);
	
	
	
	
	
}