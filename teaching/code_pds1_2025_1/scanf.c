#include <stdio.h>

void main() {
	
	int idade;
	char sexo;
	double ddd;
	printf("\nDigite idade e sexo:");
	scanf("%d %c", &idade, &sexo);
	
	if(idade < 18) { 
		printf("\nMenor de idade");
	}
	else if (idade < 35) {
		printf("\nJovem");
	}
	else if(idade < 65) {
		printf("\nAdulto");
	}
	else {
		printf("\nMelhor idade");
	}
	
	printf("\nValores lidos: %d, %c", idade, sexo);
}