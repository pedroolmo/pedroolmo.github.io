#include <stdio.h>

int comparaFloats(float x, float y) {
	
	float erro = 0.00001;
	
	if(x > y - erro && x < y + erro)
		return 1;
		
	return 0;	
	
}

void main() {
	
	float x=0.6;
	
	//scanf("%f", &x);
	
	if(comparaFloats(x,0.6)) {
		printf("\nIguais!");
	}
	else {
		printf("\nDiferentes!");
	}
	
	
	int a, b;
	scanf("%d %d", &a, &b);

	
	
	
	printf("\nFim!");
	
}