#include <stdio.h>

void main() {

	int a = 0;
	int i=0;
	
	int v[] = {10, 20, 30, 40};
	

	for(i=0; i<5; i++) {
		v[i] = 1;
		printf("\nv[%d] = %d", i, v[i]);
		getchar();
	}

	
	
}