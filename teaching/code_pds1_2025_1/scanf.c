#include <stdio.h>

void main() {
	
	int idade;
	char sexo;
	double ddd;
	printf("\nDigite idade e sexo:");
	scanf("%d %c", &idade, &sexo);
	
	
	printf("\nDigite o ddd:");
	//fflush(stdin);
	scanf("%f", &ddd);
	
	printf("\nValores lidos: %d, %c, %f", idade, sexo, ddd);
}