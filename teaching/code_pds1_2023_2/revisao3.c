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
	else {
		ImpAst(i);
		impTri(i + 1, n);
		ImpAst(i);
	}
}


void strInv(char *str) {
	if(str[0] == '\0') {
		return;
	}
	strInv(str+1);
	printf("%c", str[0]);
	
}

int somaVet(int v[], int n) {
	if(n==0) {
		return 0;
	}
	return v[n-1] + somaVet(v, n-1);
	
	
}

void freeMatrix(int **M, int n){
	if(n == 0) {
		free(M);
	}
	else {
		free(M[n-1]);
		freeMatrix(M, n-1);
	}
	
}













void main() {
	
	char s[] = "bola";
	strInv(s);
	
	
	int i, n;
	scanf("%d %d", &i, &n);
	impTri(i, n);
}



















