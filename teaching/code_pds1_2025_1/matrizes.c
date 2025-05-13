#include <stdio.h>
#include <stdlib.h>

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
}


void zeraMatriz(int M[][6], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			M[i][j] = 0;
		}
	}
}

void imprimeMatriz(int M[][6], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%5d", M[i][j]);
		}
		printf("\n");
	}
}


int rolaDado() {
	return rand()%6;
}


int main() {
	
	int M[6][6];
	int i;
	zeraMatriz(M, 6);
	int d1, d2;
	int soma[11];
	zeraVetor(soma, 11);


	for(i=0; i<36000; i++) {
		d1 = rolaDado();
		d2 = rolaDado();
		M[d1][d2]++;	

		soma[d1+d2]++;	
	}
	
	imprimeMatriz(M, 6);
	
	
	int maior_soma = 0;
	for(i=1; i<11; i++) {
		if(soma[i] > soma[maior_soma]) {
			maior_soma = i;
		}
	}
	
	printf("\nSoma mais frequente: %d", 
			maior_soma+2);


	
	
	
	return 0;
}