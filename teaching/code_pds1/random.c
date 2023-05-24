#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rand_n(int n) {
	return rand()%(n+1);
}

int rand_int(int min, int max) {
	return min+rand_n(max-min);
}

float rand_f() {
	return (float)rand()/RAND_MAX;
}

float rand_float(float min, float max) {
	return min + (max-min)*rand_f();

}










void main() {
	
	
	
	int r;
	int i;
	srand(time(NULL));
	
	for(i=0; i<10; i++) {
		r = rand();
		printf("\nr = %d", r);
	}
	
	
}