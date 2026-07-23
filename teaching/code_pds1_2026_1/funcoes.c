#include <stdio.h>
#include "banco.h"


int main() {
	float poupanca = 500;
	float juros = 0.87/100;
	float taxa = 1.50;
	
	boasVindas();
	
	//1o para o 2o mes
	poupanca = rendMensal(poupanca, juros, taxa);
	/*
	float rendimento = poupanca * juros;
	poupanca = poupanca + rendimento;
	poupanca = poupanca - taxa;
	*/
	
	//deposito de 200
	poupanca = deposito(poupanca, 200);
	
	//2o para o 3o mes
	poupanca = rendMensal(poupanca, juros, taxa);
	
	//retirada de 50 reais
	poupanca = retirada(poupanca, 50);
	
	//3o para o 4o mes
	poupanca = rendMensal(poupanca, juros, taxa);
	
	imprimeSaldo(poupanca);
	return 0;
	
}