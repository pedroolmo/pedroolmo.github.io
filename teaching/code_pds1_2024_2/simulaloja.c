#include <stdio.h>


int main() {
	
	float precos[200];
	int compras[50];
	int i, nprod, nclientes;
	
	nprod = 20; //aleatorio entre 1 e 200
	for(i=0; i<nprod; i++) {
		precos[i] = 1.99; //aleatorio entre 5 e 100
	}
	
	nclientes = 10;
	for(i=0; i<nclientes; i++) {
		compras[i] = 0; //aleatorio entre 0 a nprod-1
	}
	
	float faturamento = 0;
	for(i=0; i<nclientes; i++) {
		/*int id_produto = compras[i];
		float preco_produto = precos[id_produto];
		faturamento += preco_produto;*/
		faturamento += precos[compras[i]];	
	}
	
	printf("\nFaturamento: %.2f", faturamento);

	return 0;
}