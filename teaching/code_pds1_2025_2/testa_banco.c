#include <stdio.h>
#include "banco.h"


void main() {
	
	float juros = 1.01;
	float taxa = 3.14;
	
	apresentacao();
	
	float poupanca = 500;
	//operacao de juros mensais: 1o mes para o 2o
	poupanca = rendimentos(poupanca, juros, taxa);
	
	poupanca = deposito(poupanca, 200);

	//operacao de juros mensais: 2o mes para o 3o
	poupanca = rendimentos(poupanca, juros, taxa);
	
	poupanca = retirada(poupanca,50);

	//operacao de juros mensais: 3o mes para o 4o
	poupanca = rendimentos(poupanca, juros, taxa);

	printf("%.2f", poupanca);

}