#include <stdio.h>

void main() {
	
	int qtd_laranjas = 125221;
	
	int num_pessoas = 189;

	
	//1. Numero de laranjas por dono:
	int n_laranjas_p_dono = qtd_laranjas / num_pessoas;
	printf("\nNum laranjas p dono: %d", n_laranjas_p_dono);
	
	
	//2. Sobra de laranjas:
	int sobra = qtd_laranjas % num_pessoas;
	printf("\nSobra: %d", sobra);
	
	
	//3. Numero medio de laranjas por dono:
	float media = (float)(qtd_laranjas) / num_pessoas;
	//float media = 1.0*qtd_laranjas/num_pessoas;
	printf("\nmedia: %.200f", media);
	
	
}








