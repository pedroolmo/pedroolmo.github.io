#include <stdio.h>

int menorNumero(int a, int b) {
	if(a<b)
		return a;
	return b;
}


int MDC(int x, int y) {
	int menor = menorNumero(x, y);
	int div = menor;
	
	while(div>=2) {
		if(x % div == 0 && y % div == 0) {
			return div;
		}
		div--;
	}
	
	return 1;
}


int main() {
	
	int A, B;
	
	do {
		printf("\ndigite os valores de A e B:");
		scanf("%d %d", &A, &B);	
	}while(A <= 0 || B <= 0);
	
	int a=0, b=0;
	
	
	//int a = A;
	int maiorMDC = 1;
	int maiorA=0, maiorB=0;
	
	for(a=A; a<B; a++){
		for(b=a; b<=B; b++) {
			if(MDC(a, b) > maiorMDC) {
				maiorMDC = MDC(a, b);
				maiorA = a;
				maiorB = b;
			}		
		}
	}

	printf("\nMaior MDC(%d, %d): %d", 
		maiorA, maiorB, maiorMDC);
	
	return 0;
}
