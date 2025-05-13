#include <stdio.h>
#include <stdlib.h>
#define TAM 8


void imprimeVetor(int *v, int n) {
	int i;
	printf("\n");
	for(i=0; i<n; i++) 
		printf("%d ", v[i]);
}



int existe(int x, int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		if(v[i] == x)
			return 1;
	}
	return 0;
	
}

void zeraVetor(int v[], int n) {
	int i;
	for(i=0; i<n; i++)
		v[i] = 0;
}

void ordenacaoContagem(int v[], int n) {
	int pos[TAM];
	int v_ord[TAM];
	zeraVetor(pos, TAM);
	int i, j;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(v[j] < v[i]) {
				pos[i]++;
			}
		}	
		v_ord[pos[i]] = v[i];
	}
	
	for(i=0; i<TAM; i++)
		v[i] = v_ord[i];
	
}


int main() {
	//geracao dos cheques
	int vec[TAM];
	int i;
	for(i=0; i<TAM; i++) {
		vec[i] = rand()%8;
		if(existe(vec[i], vec, i)) {
			imprimeVetor(vec, i);
			//printf("\nValor repetido: %d", vec[i]);
			i--;
		}
	}
	
	imprimeVetor(vec, TAM);
	ordenacaoContagem(vec, TAM);
	imprimeVetor(vec, TAM);
	
	
	
	
	
	return 0;
}