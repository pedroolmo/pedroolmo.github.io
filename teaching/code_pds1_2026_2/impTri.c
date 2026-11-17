#include <stdio.h>

/*
lado = 4
altura = 5

Tela:

**
***
****
*****
****
***
**



*/


void impAst(int n) {
	int i;
	printf("\n");
	for(i=0; i<n; i++)
		printf("*");
}


void impTri(int i, int h) {
	if(i == h)
		impAst(i);
	else {
		impAst(i);
		impTri(i+1, h);
		
	}
	
	
}


int main() {
	
	int lado, altura;
	scanf("%d %d", &lado, &altura);
	impTri(lado, altura);
	return 0;
}