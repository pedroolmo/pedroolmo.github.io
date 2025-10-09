#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randmax(int max) {
	return rand()%(max+1);
}

int randint(int min, int max) {
	return min + rand()%(max-min+1);
}

//retorna um float entre 0 e 1
float randfloat() {
	return (float)rand()/RAND_MAX;
}

float randfmax(float max) {
	return randfloat()*max;
}

float randf(float min, float max) {
	return min + (max-min) * randfloat();
}

float randMoney(int min, int max) {
	return randint(min*100, max*100)/100.0;
}






int main() {
	
	srand(time(NULL));
	
	int r[10];
	int i;
	for(i=0; i<10; i++) {
		r[i] = rand();	
		printf("\n%d", r[i]);
	}
	
	
	return 0;
}