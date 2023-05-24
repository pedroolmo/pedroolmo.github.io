#include <stdio.h>
#include <math.h>

void main() {
	
	int n;

	int valor;
	float soma = 0;
	printf("\nDigite n:");
	scanf("%d", &n);
	
	int count;

	//count = 0;
	//while(count < n) {
	for(count=0; count<10; count++) {
		printf("\nDigite o valor %d:", count);
		scanf("%d", &valor);
		
		if(valor < 0) {
			printf("\nVacilou! Nao digite um valor menor que 0!");
			count--;
			continue;
		}

		soma += sqrt(valor);
			
		}
		//count++;
	}
	
	printf("\nsoma = %f", soma);
	
}