#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randmax(int max) {
	
	return rand()%(max+1);
	
}

int randint(int min, int max) {
	
	return min + rand()%(max-min+1);
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