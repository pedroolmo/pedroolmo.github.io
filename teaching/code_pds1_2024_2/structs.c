#include <stdio.h>

typedef int inteiro;


typedef struct frac {
	inteiro num;
	int den;
} frac;

void soma_frac(frac f1, frac f2) {
	
	mdc_ mdc(f1.den, f2.den);
	//....
}

void soma_frac(int x, int y, int z, int w) {
	
	//....
}

void main() {
	
	inteiro aux;
	
	frac a, b;
	a.num = 1;
	a.den = 2;
	b.num = 2;
	b.den = 7
	
	soma_frac(a, b);
	soma_frac(1, 2, 2, 7);
	
}