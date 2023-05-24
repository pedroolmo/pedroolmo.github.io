#include "banco.h"

float operacoes_mensais(float valor, float taxa) {

	float rendimento = valor * (1.5/100);
	valor = valor + rendimento;
	valor = valor - taxa;
	
	return valor;
}

float retirada(float conta, float valor) {
	conta = conta - valor;
	return conta;
}

float deposito(float conta, float valor) {
	return conta + valor;
}
