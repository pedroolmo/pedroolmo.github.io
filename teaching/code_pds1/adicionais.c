#include <stdio.h>

#define PIX 0
#define CARTAO 1

#define BLACK 0
#define PLATINUM 1
#define GOLD 2
#define SILVER 3

float valorFinal(float valor, int modo) {
	
	float desconto = 0;
	float cashback = 0;
	float frete = 15;


	switch(modo){
		
		printf("\nteste 1");
		
		case BLACK:
			desconto = 10;	
			break;
		
		case PLATINUM:
			cashback = 50;
			//...
			break;
			
		case GOLD:
			frete = 0;
			break;
			
		default:
			printf("\nEntrou no default");
			return valor + frete;

	}
/*	
	if(valor > 1000) {
		desconto = 10;
	}
	if(valor > 700) {
		cashback = 50;
	}
	if(valor > 400) {
		frete = 0;
	}
	if(modo == PIX) {
		desconto += 5;
	}
*/
	valor = valor + frete - cashback;
	float d = valor * desconto/100.0;
	return valor - d;
	
}


int main() {
	
	float v = 2000;
	int modo = PLATINUM;
	
	v = valorFinal(v, modo);
	printf("\ndesconto: %f", v);
	
	return 0;
}