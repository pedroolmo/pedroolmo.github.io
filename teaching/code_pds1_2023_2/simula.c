#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAXPRODUTOS 5
#define MAXCLIENTES 100

int randInt(int min, int max) {
	//return min + random(max+1);
	return min + rand()%(max-min+1);
}

float geraPreco(int min, int max) {
	float preco = 0;
	float parteinteira = 0;
	float centavos = 0;
	
	parteinteira = randInt(min,max);
	centavos = rand() % 100;
	
	centavos /= 100;
	
	preco = parteinteira + centavos;
	
	return preco;
	
}


void main() {
	
	srand(time(NULL));
	
	int i=0;
	float precos[MAXPRODUTOS];
	int compras[MAXCLIENTES];
	
	//numero de produtos da loja:
	int num_prod = randInt(1, MAXPRODUTOS);
	
	//preencher o vetor de precos:
	for(i=0; i<num_prod; i++)
		precos[i] = geraPreco(5, 100);
	
	//numero de clientes:
	int num_clientes = randInt(1, MAXCLIENTES);
	
	//preenche o vetor de compras:
	for(i=0; i<num_clientes; i++) {
		compras[i] = randInt(0, num_prod-1);
	}
	
	//calcular o faturamento da loja:
	float faturamento = 0;
	for(i=0; i<num_clientes; i++) {
		
		int cliente = i;
		int cod_prod = compras[i];
		float preco_prod = precos[cod_prod];
		faturamento += preco_prod;
		
		printf("\n%2d %2d %6.2f", i, cod_prod, preco_prod);
		
		//faturamento += precos[compras[i]];
		
	}
	
	printf("\nfaturamento: %.2f", faturamento);
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
/*	int i;
	for(i=0; i<20; i++) 
		printf("\n%.2f", geraPreco(5, 100));
*/	
}