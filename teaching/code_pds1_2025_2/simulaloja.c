#include <stdio.h>
#include <stdlib.h>

#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50

int randint(int min, int max) {
	
	return min + rand()%(max-min+1);
}


int main() {
	
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	int i;
	
	//produtos e precos
	int num_produtos = randint(1, MAX_PRODUTOS);
	for(i=0; i<num_produtos; i++) {
		precos[i] = randint(5, 100);
	}
	
	//clientes e compras
	int num_clientes = randint(1, MAX_CLIENTES);
	for(i=0; i<num_clientes; i++) {
		compras[i] = randint(0, num_produtos-1);
	}
	
	float faturamento = 0;
	for(i=0; i<num_clientes; i++) {
		printf("\n%3d %3d %.2f", 
		       i, compras[i], precos[compras[i]]);
		
		/*int cliente = i;
		int prod_comprado = compras[i];
		float preco_prod = precos[prod_comprado];
		faturamento += preco_prod;
		*/
		faturamento += precos[compras[i]];
	}
	
	printf("\nFaturamento: %.2f", faturamento);
	

	
	
	
	
	
	return 0;
}