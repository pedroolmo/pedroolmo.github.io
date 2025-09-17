#include <stdio.h>

/* Operadores relacionais: 

> maior que
>= maior ou igual
< menor que
<= menor ou igual a
== igual a
!= diferente de

Saída dos operadores:
0 = Falso
1 = Verdadeiro
*/

/* Operadores lógicos:

&& And (e) lógico
|| Or (ou) lógico
! Negação

Saída dos operadores:
0 = Falso
1 = Verdadeiro



*/

int ou_exclusivo(int a, int b) {
	int fa = a != 0;
	//int fa = a != 0;
	int fb = b != 0;
	
	return fa ^ fb;
	
	
	
}

int comparaFloats(double a, double b) {
	
	
}

int main() {
	
	

	
	int a = 3;
	float b = 1.5;
	
	//int res = !(a - (2*b)) || ((a/2.0) - b);
	
	int res = ou_exclusivo(2, 8);
	
	
	//int res = comparaFloats(b, 0.6);
	
	// 0.59999999999999999 == 0.599999990000000000
	
	printf("\nres: %d", res);
	
	
	
	return 0;
}