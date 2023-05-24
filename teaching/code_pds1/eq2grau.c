#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int MDCLarissa(unsigned int a, unsigned int b) {

	int menor = (a < b)?a:b;
	int div = menor;
	int mdc = 1;
	
	while (div >= 1) {
		if(a % div == 0 && b % div == 0) {
			mdc = div;
			return mdc;
		}
		div = div - 1;
	}
	
	return mdc;
	
}


int MDC(unsigned int a, unsigned int b) {

	int menor = (a < b)?a:b;
	int div = 2;
	int mdc = 1;
	
	while (div <= menor) {
		if(a % div == 0 && b % div == 0) {
			mdc = div;
		}
		div = div + 1;
	}
	
	return mdc;
	
}


void eqDoisGraus() {
	
	int a, b, c;
	int delta;
	float x1, x2;
	
	printf("\ndigite os valores de a, b e c:");
	scanf("%d %d %d", &a, &b, &c);	
	fflush(stdin);
	
	delta = pow(b, 2) - 4*a*c;
	
	printf("\ndelta = %d\n", delta);
	
	if(delta < 0) {
		printf("\nNao existem raizes reais!");
	}
	else {
		x1 = (-b + sqrt(delta)) / (2 * a);
		printf("\nx1: %f", x1);
		if(delta > 0) {
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("\nx2: %f", x2);
		}
	}
}	

void main() {

	/*
	Eqs do segundo grau no seguinte formato:
	ax2 + bx + c = 0	
	*/
	
	char resp;
	int a, b, mdc;
	
	float af, bf;
	
	do {
	
		//eqDoisGraus();
		do {
			printf("\nDigite os valores de a e b: ");
			scanf("%d %d", &a, &b);
			
			/*
			scanf("%f %f", &af, &bf);
			a = af;
			b = bf;
			
			if(af > a || bf > b)
				printf("Nao digite floats!");
			*/	
			fflush(stdin);
		} while(a <= 0 || b <= 0);
		
		mdc = MDCLarissa(a, b);
		printf("\nMDC(%d,%d) = %d", a, b, mdc);
		
		printf("\nDeseja executar novamente? (S/N)\n");
		scanf("%c", &resp);
		
	} while(resp == 'S' || resp == 's');
	
	
}

