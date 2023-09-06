#include "banco.h"
#include <stdio.h>

float rendimentosMensais(float poupanca, float juros) {
	float aux = poupanca + ((juros/100.0) * poupanca) - 0.50;
	return aux;	
}

float deposito(float conta, float valor) {
	return conta + valor - 0.20;
}

float retirada(float conta, float valor) {
	return conta - valor;
}

