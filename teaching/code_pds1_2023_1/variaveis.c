#include <stdio.h>
#include "banco.h"


int main() {
	
	float conta;
	float taxa = 2.5;
	
	printf("Banco do Pedro\n");
	
	//valor inicial da conta:
	conta = 500;
	
	//primeiro rendimento mensal:
	conta = operacoes_mensais(conta, taxa);
	
	//deposito no segundo mes
	conta = deposito(conta, 200);
	
	//segundo rendimento mensal:
	conta = operacoes_mensais(conta, taxa);

	//retirada no terceiro mes:
	conta = retirada(conta, 50);
	
	//terceiro rendimento mensal:
	conta = operacoes_mensais(conta, taxa);

	printf("\nValor na conta: %.2f", conta);
	
	int a = 3;
	
	printf("\n*%05d", a);
		
	
	return -1;
}

