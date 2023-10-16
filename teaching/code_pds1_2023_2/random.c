#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//gera um preco aleatorio entre min e max, com os centavos
float geraPreco(float min, float max) {
	
}


//gera um numero FLOAT entre min e max
float randf2(float min, float max) {
	return randf()*(max - min) + min;
}

//gera um numero aleatorio FLOAT entre 0 e 1:
float randf() {
	return ((float)rand()) / RAND_MAX;
}

//gera um numero aleatorio entre min e max (inclusive para ambos)
int randInt(int min, int max) {
	//return min + random(max+1);
	return min + rand()%(max-min+1);
}


//gera um numero aleatorio entre 0 e n-1
int random(int n) {
	return rand()%n;
}


void main() {
	
	srand(time(NULL));
	
	//numero aleatorio entre 0 e RAND_MAX
	int r;

	
	printf("\nRAND_MAX: %d, %d", RAND_MAX, time(NULL));
	
	int i;
	for(i=0; i<10; i++) {
		r = rand();
		printf("\nnumero aleatorio: %d", r);
	}
	
	float rf = randf();
	printf("\n%f", rf);


}