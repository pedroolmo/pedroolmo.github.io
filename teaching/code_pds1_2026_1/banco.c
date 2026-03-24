//implementação das funções
#include <stdio.h>

void boasVindas() {
	printf("\n-----------------------------");
	printf("\nBoas vindas ao banco do Pedro!");
	printf("\n-----------------------------");
}
	
void imprimeSaldo(float saldo) {
	printf("\n-----------------------------");
	printf("\nSaldo: %.2f", saldo);
	printf("\n-----------------------------");	
}

float rendMensal(float saldo, float juros, float taxa) {
	float rendimento = saldo * juros;
	saldo = saldo + rendimento;
	saldo = saldo - taxa;	
	return saldo;
}

float deposito(float saldo, float valor) {
	return saldo + valor;
}

float retirada(float saldo, float valor) {
	return saldo - valor;
}
