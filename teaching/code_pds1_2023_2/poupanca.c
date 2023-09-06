#include <stdio.h>

float poupanca = 10;

float rendimentosMensais(float poupanca, float juros) {
	float aux = poupanca + ((juros/100.0) * poupanca) - 0.50;
	return aux;	
}

float deposito(float conta, float valor) {
	printf("\npoupanca no deposito: %f", poupanca);
	return conta + valor - 0.20;
}

float retirada(float conta, float valor) {
	return conta - valor;
}



void main() {
	//declaração e atribuição ao mesmo tempo:
	
	printf("\npoupanca global: %f", poupanca);
	
	float poupanca = 500, juros = 0.85;	
	
	printf("\npoupanca global: %f", poupanca);
	
	//declaração da variável:
	//float poupanca;
	//float juros = 0.85;
	
	//operação de atribuição:
	//poupanca = 500;
	
	//primeiro rendimento mensal:
	poupanca = rendimentosMensais(poupanca, juros);
	//poupanca += ((1.0/(100.0 * poupanca));
	
	//deposito de 200 no segundo mes:
	poupanca = deposito(poupanca, 200);
	//poupanca = poupanca + 200;
	
	
	//rendimento mensal do segundo para o terceiro mes
	poupanca = rendimentosMensais(poupanca, juros);
	
	
	//retirada de 50 reais no terceiro mes:
	poupanca = retirada(poupanca, 50);
	//poupanca -= 50;
	
	//rendimento mensal do terceiro para o quarto mes:
	poupanca = rendimentosMensais(poupanca, juros);
	
	
	printf("\nValor na poupanca: %.2f", poupanca);
	
	//printf("Valor na poupanca:\n");
	//printf("%.2f",poupanca);
	
	
}





