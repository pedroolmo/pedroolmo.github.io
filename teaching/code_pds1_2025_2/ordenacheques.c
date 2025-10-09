#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 10

void imprimeVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int existe(int v[], int n, int x) {
	int i;
	for(i=0; i<n; i++) {
		if(v[i] == x)
			return 1;
	}
	return 0;
}

void ordcont(int v[], int n) {
	
	int aux[MAX_TAM], pos[MAX_TAM];
	int i, j;
	
	for(i=0; i<n; i++)
		aux[i] = v[i];
	
	for(i=0; i<n; i++) {
		pos[i] = 0;
		for(j=0; j<n; j++) {
			if(aux[j] < aux[i])
				pos[i]++;
		}
		
		v[pos[i]] = aux[i];
	}
	
	
	
	
}

int main() {
	
	int cheques[MAX_TAM];
	int i;
	int temp;
	for(i=0; i<MAX_TAM; i++) {
		temp = rand()%11;
		if(!existe(cheques, i, temp))
			cheques[i] = temp;
		else {
			i--;
		}
	}
	
	imprimeVetor(cheques, MAX_TAM);
	ordcont(cheques, MAX_TAM);
	imprimeVetor(cheques, MAX_TAM);
	

	
	return 0;
}