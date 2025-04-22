#include "banco.h"

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