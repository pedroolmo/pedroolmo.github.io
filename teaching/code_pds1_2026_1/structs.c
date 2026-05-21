#include <stdio.h>

// typedef tipo_antigo tipo_novo;
typedef int inteiro;
typedef float fracionario;

typedef struct fracao {
	inteiro num;
	int den;
} fracao;


/*
struct fracao {
	inteiro num;
	int den;
};
*/


/*

2/5 * 4/9

*/

/*
void imprimeMultFracao(int n1, int d1, int n2, int d2) {

	printf("\n%d/%d", n1*n2, d1*d2);
	
}
*/

/*
struct fracao multFracao(struct fracao f1, struct fracao f2) {

	struct fracao resultado;
	resultado.num = f1.num*f2.num;
	resultado.den = f1.den*f2.den;
	return resultado;
	
}
*/


void imprimeMultFracao(int n1, int d1, int n2, int d2) {

	printf("\n%d/%d", n1*n2, d1*d2);
	
}

fracao multFracao(fracao f1, fracao f2) {

	fracao resultado;
	resultado.num = f1.num*f2.num;
	resultado.den = f1.den*f2.den;
	return resultado;
}

int main() {
	

	//struct fracao x, y, res;
	fracao x, y, res;
	scanf("%d/%d", &x.num, &x.den);
	scanf("%d/%d", &y.num, &y.den);
	res = multFracao(x, y);
	printf("\nResultado: %d/%d", res.num, res.den);
	
	
	/*
	int num1, den1, num2, den2;
	scanf("%d %d %d %d", &num1, &den1, &num2, &den2);
	imprimeMultFracao(num1, den1, num2, den2);
	*/
}	
	
