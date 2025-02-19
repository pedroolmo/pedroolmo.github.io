#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rolaDado() {
	return 1 + rand()%6;
}

void zeraMatriz(int A[][6], int n) {
	
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			A[i][j] = 0;
		}
	}
}

void imprimeMatriz(int A[][6], int n) {
	
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%5d ", A[i][j]);
		}
		printf("\n");
	}
}



int main() {
	
	int M[6][6];
	int i=0;
	zeraMatriz(M, 6);
	
	int soma[11];
	for(i=0; i<11; i++)
		soma[i] = 0;
	
	

	int d1, d2;
	for(i=0; i<36000; i++) {

		d1 = rolaDado();
		d2 = rolaDado();
		M[d1-1][d2-1] ++;
		soma[d1+d2-2]++;
		//printf("\n%d, %d", d1, d2);
	}
	
	imprimeMatriz(M, 6);
	
	int maior_soma = -1;
	int maior_i = -1;
	for(i=0; i<11; i++) {
		if(soma[i] > maior_soma) {
			maior_soma = soma[i];
			maior_i = i;
		}
	}
	
	printf("\nmaior soma: %d", maior_soma);
	printf("\nsoma mais frequente: %d", maior_i+2);

	return 0;
}