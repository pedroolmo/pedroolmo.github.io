#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/* Conteudo fornecido para os alunos: */
#define MAXTAM 16
#define MAXTEMPO 30

typedef struct RS {
	int A[MAXTAM][MAXTAM];
	int n;
	float dens;
} RS;

float randf() {
	return (float)rand()/RAND_MAX;
}

int min(int x, int y) {
	if(x<y)
		return x;
	return y;
}

/* fim do conteudo fornecido para os alunos */

void imprimeRede(RS r) {
	printf("\n");
	int i, j;
	for(i=0; i<r.n; i++) {
		for(j=0; j<r.n; j++) {
			printf("%d ", r.A[i][j]);
		}
		printf("\n");
	}
	printf("\n%d %.2f", r.n, r.dens);
}


//Q1 (aberta): calcular a densidade da rede, soma das arestas divido pelo maximo possível
void atualizaDens(RS *r) {
	int i,j;
	int soma = 0;
	for(i=0; i<r->n; i++)
		for(j=0; j<r->n; j++)
			soma += r->A[i][j];
	r->dens = (float)soma/(r->n * (r->n-1));
}

//Q2 (completar): iniciar uma estrutura de rede. Matriz é inicializada com zeros. Sorteamos o numero de usuarios e populamos arestas iniciais.
//Alunos completam todo o conteúdo 1) depois das atribuicoes (à direita do =), dentro de todos os for e dos ifs. Ultima linha tb é de completar.
void iniciaRS(RS *r, float taxa) {
	r->n = 2 + rand()%MAXTAM;
	int i, j;
	for(i=0; i<MAXTAM; i++) {
		for(j=0; j<MAXTAM; j++) {
			float ra = randf();
			//printf("%f %d %d %d\n", ra, i , j, r->n);
			if(i!=j && ra < taxa && i<r->n && j<r->n) {
				r->A[i][j] = 1;
			}
			else {
				r->A[i][j] = 0;
			}
		}
	}
	atualizaDens(r);
}


//Q3 (completar): atualiza a rede nova a partir da rede velha. Novas arestas podem ser adicionadas entre usuarios antigos e tambem entre os novos e antigos.
//Regra para completar: mesma do exercicio anterior

void aumentaRS(RS velha, RS *nova) {
	int i, j;
	float taxa = randf();
	nova->n = min(velha.n + velha.n*taxa, MAXTAM);
	for(i=0; i<MAXTAM; i++) {
		for(j=0; j<MAXTAM; j++) {
			nova->A[i][j] = velha.A[i][j];
			if(i<nova->n && j<nova->n && randf() < taxa && i!=j)
				nova->A[i][j] = 1;
		}
	}
	atualizaDens(nova);
}

//Q4 (completar)
int main() {
	int t=0;
	RS rt[MAXTEMPO];
	iniciaRS(&rt[0], 0.1);
	while(t+1<MAXTEMPO && rt[t].dens < 1) {
		aumentaRS(rt[t], &rt[t+1]);
		t++;
		printf("\nDensidade no tempo %d: %.2f", t, rt[t].dens);
	}
	return 0;
}