#include "banco.h"

void apresentacao() {
	printf("\n--------------------------");
	printf("\nBemvindo ao banco do Pedro!");
	printf("\n--------------------------");
}

void extrato(float valor) {
	printf("\nValor na conta poupanca: %.2f", valor);
}

float rendimentos(float valor) {
	float juros=0.01, taxa=0.81;
	float res = valor + (valor*juros) - taxa;
	return res;
}

float deposito(float poupanca, float valor) {
	return poupanca + valor;
}

float retirada(float poupanca, float valor) {
	return poupanca - valor;
}

