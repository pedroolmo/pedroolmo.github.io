#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PRODUTOS 200
#define MAX_CLIENTES 50

//retorna um numero aleatorio entre 0 e n
int rand_n(int n) {
	return rand()%(n+1);
}

int rand_int(int min, int max) {
	return min+rand_n(max-min);
}

float rand_f() {
	return (float)rand()/RAND_MAX;
}

float rand_float(float min, float max) {
	return min + (max-min)*rand_f();

}

float rand_preco(int min, int max) {
	float preco = rand_int(min, max-1);
	float centavos = rand_int(0,100)/100.0;
	return preco + centavos;	
}


void main() {

		
	srand(time(NULL));
	
	float precos[MAX_PRODUTOS];
	int compras[MAX_CLIENTES];
	
	int n_produtos = rand_int(1, MAX_PRODUTOS);
	int n_clientes = rand_int(1, MAX_CLIENTES);
	
	int i;
	for(i=0; i<n_produtos; i++) {
		//precos[i] = rand_int(5, 100);
		precos[i] = rand_preco(5, 100);
	}
	for(i=0; i<n_clientes; i++) {
		compras[i] = rand_n(n_produtos-1);
	}
	
	float total=0;
	printf("Cl Pro Val\n");

	for(i=0; i<n_clientes; i++) {
		//int cod_prod = compras[i];
		//float preco = precos[cod_prod];
		float preco = precos[compras[i]];
		total += preco;
		
		printf("%2d %3d %5.2f\n", i, compras[i], preco);
		
	}
	
	
	printf("\nFaturamento: %.2f", total);

	

}