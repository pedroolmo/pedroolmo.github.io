#include <stdio.h>

void main() {
	
	int media_pais;	
	float t_media_pais, prev_alt_filho;
	char sexo_filho = 1;
	char aux = 'A';

	media_pais = 170;	
	t_media_pais = media_pais * 0.75;
	sexo_filho = sexo_filho * 10;
	
	prev_alt_filho = 50 + t_media_pais + sexo_filho;
	
	printf("\naltura filho: %.2f", prev_alt_filho);
	printf("\n(%d), (%c)", aux, aux);
	
}