#include "random.h"

//gera um numero aleatorio entre 0 e max-1
int randmax(int max) {
	return rand()%max;
}

//gera um numero aleatorio entre 0 e max
int randmaxInclusivo(int max) {
	return rand()%(max+1);
}

//gera um numero aleatorio entre min e max
int randInt(int min, int max) {
	return min + rand()%(max+1-min);
}

//gera um numero aleatorio FLOAT entre 0 e 1
float randf() {
	return (float)rand()/RAND_MAX;
}

float randfloat(float min, float max) {	
	return min + randf()*(max-min);
}

float randfloatG(int min, int max) {
	return randInt(min, max-1) + randf();
}

float randMoney(int min, int max) {
	float num = randfloatG(min, max);
	num = num * 100;
	num = (int)num;
	num = num/100;
	return num;	
}

float randMoneyM(int min, int max) {
	
	return randInt(min, max-1) + randInt(0,100)/100.0;
}



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