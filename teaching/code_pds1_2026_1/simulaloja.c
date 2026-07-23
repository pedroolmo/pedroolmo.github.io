#include <stdio.h>
#include "random.h"

#define MAXPROD 200
#define MAXCLIENTES 50



int main() {
	
	float precos[MAXPROD];
	int clientes[MAXCLIENTES];
	
	int i, n_prod = randInt(1, 200);
	for(i=0; i<n_prod; i++)
		precos[i] = randMoney(5, 100);
	
	int n_clientes = randInt(1, 50);
	
	for(i=0; i<n_clientes; i++)
		clientes[i] = randmax(n_prod);
	
	//calculo do faturamento
	float total = 0;
	printf("\nCliente, Produto, Preco");
	for(i=0; i<n_clientes; i++) {
		/*
		int prod = clientes[i];
		float preco_prod = precos[prod];
		total += preco_prod;
		*/
		total += precos[clientes[i]];
		printf("\n%7d, %7d, %.3f", i, clientes[i], precos[clientes[i]]);
		
	}
	
	printf("\nValor total: %.2f", total);
	

	return 0;
}

