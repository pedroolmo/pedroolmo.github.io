#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//numero aleatorio entre 0 e n-1
int random_n(int n) {
	return rand()%n;
}

//numero aleatorio entre 0 e max
int random_max(int max) {
	//return random_n(max+1);
	return rand()%(max+1);
}

//numero aleatorio entre min e max
int randInt(int min, int max) {
	return min + rand()%(max+1-min);
}

//numero aleatorio float entre 0 e 1
float randf() {
	return (float)rand()/RAND_MAX;
}
//numero aleatorio float entre min e max
float randF(float min, float max) {
	//return min + (float)rand()/RAND_MAX * (max-min);
	return min + randf()*(max-min);
}
int main() {
	srand(time(NULL));
	int i;

	float r[10];
	for(i=0; i<30; i++) {
		r[i] = randF(-1, 0.5);
		printf("\n%f", r[i]);
	}

/*		

	int r[10];

	
	for(i=0; i<10; i++) {

		r[i] = random_n(101);
		printf("\n%d", r[i]);
	}
	
*/
	return 0;
}