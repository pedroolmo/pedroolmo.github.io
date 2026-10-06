#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//numero aleatorio entre 0 e n-1
int random_n(int n) {

	return rand()%n;
}

int main() {
		
	srand(time(NULL));
	int r[10];
	int i;
	
	for(i=0; i<10; i++) {

		r[i] = random_n(101);
		printf("\n%d", r[i]);
	}
	
	return 0;
}