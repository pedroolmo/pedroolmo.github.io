/*
Construa uma matriz para armazenar os resultados
da simulação da rolagem de dois dados. 
O elemento [i][j] da matriz armazena o número 
de vezes que o valor do primeiro dado é i e o 
valor do segundo dado é j.

Considere que um vetor armazena a frequência 
de cada soma possível dos valores dos dados. 
Determinar qual é a soma mais frequente após 
rolar os dados 36.000 vezes. 
Imprima a matriz que armazena os resultados 
das rolagens dos dados.
*/

#include <stdio.h>
#include <stdlib.h>

int rolaDado() {
	return 1 + rand()%6;
}

void zeraMatriz(int Mat[][6]) {
	
	int i, j;
	for(i=0; i<6; i++) {
		for(j=0; j<6; j++) {
			Mat[i][j] = 0;
		}
	}
}


void imprimeMatriz(int Mat[][6]) {
	
	int i, j;
	for(i=0; i<6; i++) {
		for(j=0; j<6; j++) {
			printf("%5d ", Mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

void zeraSoma(int v[]) {
	int i=0;
	for(i=0; i<11; i++)
		v[i] = 0;
}

void imprimeSoma(int v[]) {
	int i=0;
	for(i=0; i<11; i++)
		printf("%6d ", v[i]);
}



int main() {
	
	int M[6][6];
	int soma[11];
	zeraMatriz(M);
	zeraSoma(soma);
	
	
	int i, d1, d2;
	for(i=0; i<36000; i++) {
		d1 = rolaDado();
		d2 = rolaDado();
		soma[d1+d2-2] += 1;
		M[d1-1][d2-1] += 1;
		
	}
	
	imprimeMatriz(M);
	imprimeSoma(soma);
	
	//encontra o maior elemento de um vetor:
	
	int maior_i=0;
	for(i=1; i<11; i++) {
		if(soma[i] > soma[maior_i]) {
			maior_i = i;
		}
	}
	
	printf("\nmaior soma: %d (%d)", maior_i+2, soma[maior_i]);
	
	
	
}

