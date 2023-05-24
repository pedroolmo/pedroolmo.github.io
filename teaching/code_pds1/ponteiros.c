#include <stdio.h>

int main() {
	
	char c = 'A';
	float aux = 0.5;
	
	//end_char end_c = &c;
	char *end_c;	
	float *end_aux = &aux;
	
	end_c = &c;
	
	printf("\nend de c: %p", end_c);
	printf("\nend de aux: %p", end_aux);
	
	*end_aux = 3.25;
	//aux = 3.25;
	printf("\nvalor armazenado em %p:", end_aux);	
	printf("\n%f", aux);
	printf("\n%f", *end_aux);	

	*end_c = *end_c + 1;
	
	printf("\nnumero de bytes ocupados por um endereço:");
	printf("%d", sizeof(end_c));
	
	return 0;
}