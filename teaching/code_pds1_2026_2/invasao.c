#include <stdio.h>

int main() {


int i;
int v[] = {10, 20, 30, 40};


for(i=0; i<=4; i++) {
	v[i] = 1;
	printf("\nv[%d] = %d", i, v[i]);
	getchar();
}

return 0;
}