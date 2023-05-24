#include <stdio.h>


float operacoes_mensais(float valor, float taxa) {
	
	float *end_conta;
	
	end_conta = &valor;
	
	float rendimento = valor * (1.5/100);
	valor = valor + rendimento;
	valor = valor - taxa;	
	return valor;
}


void operacoes_mensais(float *end_conta, int *p1, char* p_ch, ) {
	float taxa = 2.5;
	float *end_conta;
	
	float rendimento = *end_conta * (1.5/100);
	*end_conta = *end_conta + rendimento;
	*end_conta = *end_conta - taxa;

}

void retirada(float *end_conta, float valor) {
	*end_conta = *end_conta - valor;

}

void deposito(float *end_conta, float valor) {
	*end_conta = *end_conta + valor;
}



int main() {
	
	float conta;

	
	printf("Banco do Pedro\n");
	
	//valor inicial da conta:
	conta = 500;
	
	//primeiro rendimento mensal:
	operacoes_mensais(&conta);
	operacoes_mensais(conta);
	
	//deposito no segundo mes
	deposito(&conta, 200);
	
	//segundo rendimento mensal:
	operacoes_mensais(&conta);

	//retirada no terceiro mes:
	retirada(&conta, 50);
	
	//terceiro rendimento mensal:
	operacoes_mensais(&conta);

	printf("\nValor na conta: %.2f", conta);
		
	
	return -1;
}

