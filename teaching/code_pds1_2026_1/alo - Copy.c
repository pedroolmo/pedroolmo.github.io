#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float pi() {	
	return 3.141592;
}

int main() {
	//todos os comandos terminam com ';'
	float y = sin(1.5);
	float x = 0.6;
	double xd = 0.6;
	printf("Alo mundo!\n");
	printf("Barra n: *\n*\n");
	printf("Barra a: #\a#\n");
	printf("Barra t: $\t$\n");
	printf("Seno de 1.5: %f\n", y);
	printf("float: %f, double: %f",x,xd);
	system("PAUSE");
	return 0;
}