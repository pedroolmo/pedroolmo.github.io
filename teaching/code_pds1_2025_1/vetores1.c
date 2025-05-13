#include <stdio.h>

int main() {
	

	int j=0, a=3, i;
	int vec[] = {10, 20, 30, 40};
	for(i=0; i<=4; i++) {
		vec[i] = 1;
		printf("\nvec[%d] = %d", i, vec[i]);
		getchar();
	}
	
	return 0;
}