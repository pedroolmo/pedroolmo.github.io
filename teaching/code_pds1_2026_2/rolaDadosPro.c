#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAM_DADO 100



int rolaDado(int faces) {
	return 1+rand()%faces;
}

void zeraMatriz(int M[][MAX_TAM_DADO], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			M[i][j] = 0;
		}
	}		
}

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
}

void imprimeMatriz(int M[][MAX_TAM_DADO], int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
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
	
	int tam1, tam2;
	scanf("%d %d", &tam1, &tam2);
	
	
	int soma[MAX_TAM_DADO+MAX_TAM_DADO-1];
	int d1, d2;
	int i, j;
	int M[MAX_TAM_DADO][MAX_TAM_DADO];
	int maiorSoma = 0;

	zeraMatriz(M, tam1, tam2);
	zeraVetor(soma, tam1+tam2-1);
	
	for(i=0; i<360000; i++) {
		d1 = rolaDado(tam1)-1;
		d2 = rolaDado(tam2)-1;
		//printf("\n%d, %d", d1, d2);
		
		M[d1][d2]++;
		soma[d1+d2]++;
	}
	
	imprimeMatriz(M, tam1, tam2);
	
	imprimeVetor(soma, tam1+tam2-1);
	maiorSoma = maior(soma, tam1+tam2-1)+2;
	printf("\nMaior soma: %d", maiorSoma);
	
	
	
	
	
	
	return 0;
}