#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
	
	
int rolaDado() {

	return rand()%6;
}

void imprimeMatriz(int M[][6], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%4d ", M[i][j]);
		}
		printf("\n");
	}
}


void zeraMatriz(int M[][6], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			M[i][j] = 0;
		}
	}
}

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		v[i] = 0;
	}
}

void imprimeVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ", v[i]);
	}
}

int maiorElemento(int v[], int n) {
	int i, maior_i, maior=-INT_MAX;
	for(i=0; i<n; i++) {
		if(v[i] > maior) {
			maior = v[i];
			maior_i = i;
		}
	}
	return i;
}

int maiorElemento2(int v[], int n) {
	int i, maior_i=0;
	for(i=1; i<n; i++) {
		if(v[i] > v[maior_i]) {
			maior_i = i;
		}
	}
	return maior_i;
}




void main() {
	
	srand(time(NULL));
	int M[6][6];
	int soma[11];
	zeraMatriz(M, 6);
	zeraVetor(soma, 11);
	
	int count = 0, d1, d2;
	for(count=0; count<36000; count++) {
		d1 = rolaDado();
		d2 = rolaDado();
		M[d1][d2] = M[d1][d2] + 1;	
		soma[d1+d2] = soma[d1+d2] + 1;
	}
	imprimeMatriz(M, 6);
	printf("\n");
	imprimeVetor(soma, 11);
	
	int maiorSoma = 2 + maiorElemento2(soma, 11);
	printf("\nmaior soma:  %d", maiorSoma);
	
	
}