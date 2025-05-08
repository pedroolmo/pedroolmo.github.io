#include <stdio.h>

int tipoChar(char c) {
	if(c >= '0' && c <= '9')
		return 0;
	if(c >= 'A' && c<= 'Z')
		return 1;	
	if(c >= 'a' && c<= 'z')
		return 2;
	return -1;
}

int contemApenasUmNumero(char a, char b, char c) {

	return (!tipoChar(a) + 
			!tipoChar(b) + 
			!tipoChar(c)) == 1;
}	
	
void colocaMaiuscula(char *a) {

	if(tipoChar(*a) == 2) {
		*a = *a - 32;
		/*
		
		*a = *a^32;
		
		*/
	}
}	

int verifica(char a, char b, char c) {
	
	if(tipoChar(a) == -1 ||
	   tipoChar(b) == -1 || 
	   tipoChar(c) == -1)
	   return 0;
	return 1;
	
	
}

float area(float x1, float y1, float x2, float y2) {
	
	float dx = (x1 - x2);
	float dy = (y1 - y2);
	float area = dx * dy;
	if(area < 0) area = -area;
	return area;
	
	











	
	
	