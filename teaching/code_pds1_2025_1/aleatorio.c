#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rand() -> entre 0 e 32767

float randf() {
	//retornar um numero float entre 0 e 1
	return (float)rand()/RAND_MAX; 
}

float randfmax(float max) {
	//retorna um numero float entre 0 e max
	return randf()*max;
}

float randfminmax(float min, float max) {
	//retorna um numero float entre min e max
	return min + randf()*(max-min);
}

float geraPreco(int min, int max) {}

int randInt(int min, int max) { //12 108
	// entre min e max + min
	int r = min + rand()%(max-min+1); 
	return r;
}


int randIntSimples(int max) { //50
	int r = rand()%(max+1);
	return r;
}

float geraPreco(float min, float max) {
	/*gera um preco entre min e max com 
	  centavos aleatorios. Ex: 35.89 */
	return randInt(min*100, max*100)/100.0;
}

float geraPreco2(float min, float max) {
	/*gera um preco entre min e max com 
	  centavos aleatorios. Ex: 35.89 */
	int pint =  randInt(min, max);
	float centavos = randInt(0, 99);
	return pint + (float)centavos/100;
	
	
}




int main() {

	srand(time(NULL));	

	float r[10];
	int i;
	for(i=0; i<10; i++) {

		r[i] = randf();	
		printf("\nr[%d] = %f", i,r[i]);
	}
	
	
	return 0;
}