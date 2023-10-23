#include <stdio.h>

int main() {

	int j=0;
	float aux;	
	int vec[] = {10, 20, 30, 40};


	int i;
	
	for(i=0; i<5; i++) {
		vec[i] = 1;
		printf("\nvec[%d] = %d", i, vec[i]);
		getchar();
	}
	
	return 0;
}