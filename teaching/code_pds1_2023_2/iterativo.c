#include <stdio.h>
#include <stdlib.h>

char toupper_pedro(char c) {
	
	if(c >= 'a' && c <= 'z')
		return c - 32;
	
	return c;
	
}

void calculaIMC() {
	
	
	//leitura dinamica de dados
	float peso1=0, altura1=0;	
	
	printf("Digite o peso e a altura, nessa ordem:\n");
	scanf("%f%f", &peso1, &altura1);
	
	printf("\npeso e altura: %f %f", peso1, altura1);
	
	if(!(peso1 > 0 && altura1 > 0)) {	
		printf("\nValores invalidos!");
	}
	
	else {
		float imc = peso1/(altura1*altura1);
		printf("\nIMC: %.2f", imc);

		if(imc < 18.5)
			printf("\nAbaixo do peso");
		else if(imc < 25)
			printf("\nNormal");
		else if(imc < 30)
			printf("\nExcesso de peso");
		else if(imc < 35)
			printf("\n Obesidade Leve (Grau I)");
		else if(imc < 40)
			printf("\nObesidade Severa (Grau II)");
		else 
			printf("\nObesidade Mórbida (Grau III)");
		
	}	
}

void main() {
	

	/*
< 18,5 - Abaixo do peso

18,5-24,9 - Normal

25,0-29,9 - Excesso de peso

if(25 <= x < 30) x
if(x >= 25 && x < 30) { ... }


30,0-34,9 - Obesidade Leve (Grau I)

35,0-39,9 - Obesidade Severa (Grau II)

> 40,0 - Obesidade Mórbida (Grau III)
	*/

	int cond=1;
	char resp = ' ';

	do {
		
		calculaIMC();
		
		printf("\nExecuta novamente? (S/N)");
		
		//fflush(stdin);
		
		scanf("\n%c", &resp);
		
		resp = toupper_pedro(resp);
		
		cond = resp == 'S' ;

	} while(cond);
	
}