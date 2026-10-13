#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//numero aleatorio entre min e max
int randInt(int min, int max) {
	return min + rand()%(max+1-min);
}

int nao_existe(int x, int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		if(x == v[i])
			return 0;
	}
	return 1;
}

void ord_contagem(int v[]) {
	int v_aux[TAM];
	int pos[TAM];
	int i,j;
	for(i=0; i<TAM; i++) {
		v_aux[i] = v[i];
		pos[i] = 0;
	}
	
	for(i=0; i<TAM; i++) {

		for(j=0; j<TAM; j++) {
			if(v_aux[j] < v_aux[i]) {
				pos[i]++;
			}
		}
		v[pos[i]] = v_aux[i];
		
	}
	
	
	
}


int main() {
	
	int cheques[TAM];
	int i, tentativa;
	for(i=0; i<TAM; i++) {
		tentativa = randInt(1,10);
		if(nao_existe(tentativa, cheques, i)) {
			cheques[i] = tentativa;
			printf("\nOK:%d ", cheques[i]);
		}
		else {
			printf("ERRO:%d ", tentativa);
			i--;
		}	
	}
	
	ord_contagem(cheques);
	
	printf("\nVetor ordenado: ");
	for(i=0; i<TAM; i++) 
		printf("%d ", cheques[i]);
	
	
return 0;
}