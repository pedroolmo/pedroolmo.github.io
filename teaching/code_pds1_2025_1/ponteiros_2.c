#include <stdio.h>

void rendePoupanca(float *valor) {
	//valor = valor * 1.01;
	
	*valor = *valor + *valor*0.01;
}

void main() {
	
	float poupanca = 500;	
	rendePoupanca(&poupanca);
	printf("%.2f", poupanca);


}