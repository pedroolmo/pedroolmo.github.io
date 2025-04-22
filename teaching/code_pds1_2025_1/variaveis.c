#include <stdio.h>


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


void main() {
	
	
	apresentacao();
	
	float poupanca = 500;
	//operacao de juros mensais: 1o mes para o 2o
	poupanca = rendimentos(poupanca);
	
	poupanca = deposito(poupanca, 200);

	//operacao de juros mensais: 2o mes para o 3o
	poupanca = rendimentos(poupanca);
	
	poupanca = retirada(poupanca,50);

	//operacao de juros mensais: 3o mes para o 4o
	poupanca = rendimentos(poupanca);

	extrato(poupanca);

}