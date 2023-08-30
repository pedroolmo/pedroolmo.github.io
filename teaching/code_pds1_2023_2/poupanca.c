#include <stdio.h>

void main() {
	
	//declaração da variável:
	float poupanca;
	
	//operação de atribuição:
	poupanca = 500;
	
	//primeiro rendimento mensal:
	poupanca = poupanca + ((1.0/100.0) * poupanca);
	poupanca += ((1.0/(100.0 * poupanca));
	
	
		
	//declaração e atribuição ao mesmo tempo:
	//float poupanca = 500;
	
	printf("Valor na poupanca: %.2f", poupanca);
	
	//printf("Valor na poupanca:\n");
	//printf("%.2f",poupanca);
	
	
}





