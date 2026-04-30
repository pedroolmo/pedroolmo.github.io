#include <stdio.h>
#define MAXPROD 200
#define MAXCLIENTES 50



int main() {
	
	float precos[MAXPROD];
	int clientes[MAXCLIENTES];
	
	int i, n_prod = 10;
	for(i=0; i<n_prod; i++)
		precos[i] = 1.99;
	
	int n_clientes = 5;
	
	for(i=0; i<n_clientes; i++)
		clientes[i] = 0;
	
	//calculo do faturamento
	float total = 0;
	for(i=0; i<n_clientes; i++) {
		/*
		int prod = clientes[i];
		float preco_prod = precos[prod];
		total += preco_prod;
		*/
		total += precos[clientes[i]];
		
	}
	
	printf("\nValor total: %.2f", total);
	

	return 0;
}

