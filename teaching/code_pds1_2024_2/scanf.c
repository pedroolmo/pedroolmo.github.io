#include <stdio.h>

int main() {
	
	float poupanca = 500;
	float juros = 1.02;
	
	//printf("o valor da poupanca: %f", poupanca);
	
	scanf("%fDD%f", &poupanca, &juros);
	
	printf("\nValores lidos: %f %f", poupanca, juros);
	
	fflush(stdin);
	scanf("%f %f", &poupanca, &juros);
	
	printf("\nValores lidos: %f %f", poupanca, juros);
	
	
	
	return 0;
}