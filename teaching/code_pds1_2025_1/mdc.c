#include <stdio.h>


/* Crie uma funcao para calcular e retornar
o MDC entre dois numeros inteiros */

int menor(int a, int b) {
	if(a < b) return a;
	return b;
}

int MDC(unsigned int x, unsigned int y) {
	
	int div = 2;
	int o_menor = menor(x, y);
	int mdc;
	
	while(div <= o_menor) {
		if(x % div == 0 && y % div == 0) {
			mdc = div;
		}
		div++;
	}
	
	return mdc;
}

int MDC_v2(unsigned int x, unsigned int y) {
	
	int o_menor = menor(x, y);
	int mdc;
	while(o_menor > 1) {
		if(x % o_menor == 0 && y % o_menor == 0) {
			return o_menor;
		}
		o_menor--;
	}
	return 1;
}

int main() {
	
	int a, b;
	char resp;
	do {
		do {
			scanf("%d %d", &a, &b);
		} while(a<=0 || b <= 0);
		//while(!(a>0 && b > 0));
		
		printf("\nMDC: %d", MDC(a, b));
		printf("\nDe novo(S/N)?");
		fflush(stdin);
		scanf("%c", &resp);
	} while(resp == 'S' || resp == 's');
}

