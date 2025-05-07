#include <stdio.h>

#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50


int main() {
	
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	
	int nprod = 10;
	int nclientes = 5;
	
	int i;
	for(i=0; i<nprod; i++) {
		precos[i] = 1.99;
	}
	
	for(i=0; i<nclientes; i++) {
		compras[i] = 2;
	}
	
	float faturamento = 0;
	

	printf("\nCliente Produto Preco");
	for(i=0; i<nclientes; i++) {
		int produto = compras[i];
		faturamento += precos[produto];
		printf("\n%7d %7d %5.2f", i, produto, precos[produto]); 
	}
		
	printf("\nFaturamento: %.2f", faturamento);
	
	
	
	
	
}