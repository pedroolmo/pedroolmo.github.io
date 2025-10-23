#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int rolaDado() {
	return rand()%TAM;
}

void zeraMatriz(int A[][TAM], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			A[i][j] = 0;
		}
	}
}

void imprimeMatriz(int A[][TAM], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%5d ", A[i][j]);
		}
		printf("\n");
	}
}

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
}

void imprimeVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int indiceMaior(int v[], int n) {
	int i;
	int i_maior = 0;
	for(i=1; i<n; i++) {
		if(v[i] > v[i_maior]) {
			i_maior = i;
		}
	}
	return i_maior;
}



int main() {
	
	int i;
	int d1, d2;
	int M[TAM][TAM];
	int soma[2*TAM-1];
	int numSomas = 2*TAM-1;
	zeraMatriz(M, TAM, TAM);
	zeraVetor(soma, numSomas);
	for(i=0; i<36000; i++) {
		d1 = rolaDado();
		d2 = rolaDado();
		M[d1][d2]++;
		soma[d1+d2]++;	
		//printf("\n%d, %d", d1, d2);
	}
	imprimeMatriz(M, TAM, TAM);
	imprimeVetor(soma, numSomas);
	
	printf("\nMaior soma: %d", 
			indiceMaior(soma, numSomas)+2);
	
	return 0;
}