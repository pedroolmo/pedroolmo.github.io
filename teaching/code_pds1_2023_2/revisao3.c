#include <stdio.h>

/*
Escrever uma função RECURSIVA para imprimir um tringu-
lo lateral com *s na tela. O triangulo tem altura n e 
lateral i. 

Ex para i=2 e n=5
**
***
****
*****
****
***
**
void impTri(int i, int n);
*/

void ImpAst(int n) {
	int i;
	for(i=0; i<n; i++) printf("*");
	printf("\n");
}



void impTri(int i, int n){
	if (i == n){
		ImpAst(i);
	}
	ImpAst(i);
	impTri(i + 1, n);
	ImpAst(i);
}


void main() {
	int i, n;
	scanf("%d %d", &i, &n);
	impTri(i, n);
}



















