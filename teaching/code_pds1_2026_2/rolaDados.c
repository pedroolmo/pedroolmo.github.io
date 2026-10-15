#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int rolaDado() {
	return 1+rand()%6;
}

void zeraMatrizQuadrada(int M[][6], int n) {
	int i, j;
	for(i=0; i<6; i++) {
		for(j=0; j<6; j++) {
			M[i][j] = 0;
		}
	}		
}

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
}

void imprimeMatrizQuadrada(int M[][6], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			printf("%4d ", M[i][j]);
		}
		printf("\n");
	}	
	
}

void imprimeVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

//retorna o indice do maior elemento do vetor
int maior(int v[], int n) {
	int maior_i = 0;
	int i;
	for(i=1; i<n; i++) {
		if(v[i] > v[maior_i])
			maior_i = i;
	}
	return maior_i;
}



int main() {
	
	srand(time(NULL));
	
	int soma[11];
	int d1, d2;
	int i, j;
	int M[6][6];
	int maiorSoma = 0;

	zeraMatrizQuadrada(M, 6);
	zeraVetor(soma, 11);
	
	for(i=0; i<36000; i++) {
		d1 = rolaDado()-1;
		d2 = rolaDado()-1;
		//printf("\n%d, %d", d1, d2);
		
		M[d1][d2]++;
		soma[d1+d2]++;
	}
	
	imprimeMatrizQuadrada(M, 6);
	
	imprimeVetor(soma, 11);
	maiorSoma = maior(soma, 11)+2;
	printf("\nMaior soma: %d", maiorSoma);
	
	
	
	
	
	
	return 0;
}