#include <stdio.h>

int main() {
	
	int x = 156;
	
	int valor;
	
	printf("\nDigite o valor: ");
	scanf("%d", &valor);
	
	if(valor == x) {
		printf("\nAcertou mizeravi!");
	}
	if(valor < x) 
		printf("Menor que x!");
	if(valor > x) 
		printf("Maior que x!");	
	
	printf("\nValor digitado pelo usuario: %d", valor);
	
	
	return 0;
}