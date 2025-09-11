#include <stdio.h>

float rendimentos(float valor, float juros, float tx) {
	return valor*juros - tx;
}

void apresentacao() {
	printf("\n================");
	printf("\nBemvindo ao Banco do Pedro!");
	printf("\n================\n");
	
}

float deposito(float saldo, float valor) {
	return saldo + valor;
}

float retirada(float saldo, float valor) {	
	return saldo - valor;
}


