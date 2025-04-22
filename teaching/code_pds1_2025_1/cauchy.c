#include <stdio.h>
#include <math.h>

/*Implemente uma função chamada cauchy que 
recebe um número de ponto flutuante de precisão
simples x  como parâmetro e retorna o valor da
 função densidade de probabilidade conforme a
 equação acima.*/
 
float cauchy(float x) {
	
	float PI = 3.141592;
	float denominador = PI * (1+pow(x,2));
	
	
	
	return 1/denominador;
}

void main() {
	float x = 1;
	printf("\n%f", cauchy(x));
}