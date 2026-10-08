#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50

//numero aleatorio entre min e max
int randInt(int min, int max) {
	return min + rand()%(max+1-min);
}

float randPreco(int min, int max) {
	int centavos = randInt(min*100, max*100);
	return centavos/(100.0);	
}

int main() {

	srand(time(NULL));
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	
	
	int i;
	int nprodutos = randInt(1,MAX_PRODUTOS);
	
	for(i=0; i<nprodutos; i++) {
		precos[i] = randPreco(5, 100);
	}

	int nclientes = randInt(1, MAX_CLIENTES);

	for(i=0; i<nclientes; i++) {
		compras[i] = randInt(0, nprodutos-1);
	}
	
	float faturamento = 0;
	for(i=0; i<nclientes; i++) {
		faturamento += precos[compras[i]];
		/*
		int idProduto = compras[i];
		float preco = precos[idProduto];
		faturamento += preco;
		*/
	}
	
	printf("\nFaturamento: %.2f", faturamento);
	
	return 0;
}