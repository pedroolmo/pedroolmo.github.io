#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	

	int r[10];
	int i;
	for(i=0; i<10; i++) {
		srand(time(NULL));
		r[i] = rand();	
		printf("\nr[%d] = %d", i,r[i]);
	}
	
	
	return 0;
}