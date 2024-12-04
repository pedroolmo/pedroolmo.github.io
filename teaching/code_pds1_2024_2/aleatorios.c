#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int min, int max) {
	//retorna um aleatorio entre min e max?
	return min + rand()%(max - min + 1);
	
}

float randf() {
	//retorna um numero float aleatorio entre 0 e 1
	r = 0;
	return r; 
}


int main() {
	
	srand(time(NULL));
	
	int r[10];
	int i;
	for(i=0; i<10; i++) {

		r[i] = rand(); //entre 0 e RAND_MAX (32537)	
		printf("\nr[%d] = %d", i, r[i]);
	}
	
	return 0;
	
}