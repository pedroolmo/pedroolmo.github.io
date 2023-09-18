#include <stdio.h>
#include <stdlib.h>

void main() {
	
	//leitura dinamica de dados
	float peso1=0, altura1=0;
	float peso2=0, altura2=0;
	
	//peso = 50;
	//altura = 1.6;
	
	
	printf("Digite o peso e a altura, nessa ordem:\n");
	scanf("%f%f", &peso1, &altura1);
	

	
	float imc1 = peso1/(altura1*altura1);
	
	fflush(stdin);
	
	scanf("%f %f", &peso2, &altura2);
	
	float imc2 = peso2/(altura2*altura2);
	
	
	printf("\nIMC da pessoa 1: %.2f", imc1);
	printf("\nIMC da pessoa 2: %.2f", imc2);	
	
	
}