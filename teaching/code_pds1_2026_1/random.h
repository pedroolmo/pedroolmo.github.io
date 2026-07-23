#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXN 10

//gera um numero aleatorio entre 0 e max-1
int randmax(int max);

//gera um numero aleatorio entre 0 e max
int randmaxInclusivo(int max);

//gera um numero aleatorio entre min e max
int randInt(int min, int max);

//gera um numero aleatorio FLOAT entre 0 e 1
float randf();

float randfloat(float min, float max);

float randfloatG(int min, int max);

float randMoney(int min, int max);

float randMoneyM(int min, int max);



/*




int main() {
	int r[MAXN], i;
	float rf[MAXN];
	//srand(2);
	srand(time(NULL));	
	/*
	A funcao rand() retorna um numero aleatorio
	entre 0 e RAND_MAX (no meu caso, 32767)
	
	for(i=0; i<MAXN; i++) {
		r[i] = randInt(-5, 1);
		rf[i] = randMoneyM(5, 6);
		printf("\nr[%d] = %d",i, r[i]);
		printf("\nrf[%d] = %f",i, rf[i]);
	}
	
	return 0;
}
*/