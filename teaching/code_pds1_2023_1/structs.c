#include <stdio.h>
#include <stdlib.h>

#define MAX_X 60
#define MAX_Y 60
#define TAM 12


int rand_n(int n) {
	return rand()%(n+1);
}

int rand_int(int min, int max) {
	return min+rand_n(max-min);
}

float rand_f() {
	return (float)rand()/RAND_MAX;
}

float rand_float(float min, float max) {
	return min + (max-min)*rand_f();
}

typedef float flutuante;

typedef struct Coord {
	int x;
	int y;
} Coord;

typedef struct Circulo {
	float raio;
	Coord centro;
} Circulo;

typedef struct Cilindro {
	Circulo base;
	float altura;
} Cilindro;


void imprimeCilindro(Cilindro c) {
	printf("\nCilindro: (%d, %d, %.2f, %.2f)", 
		   c.base.centro.x, c.base.centro.y,
		   c.base.raio, c.altura);
}

void geraCilindro(Cilindro *c) {
	//(*c).centro.x = rand()%MAX_X;
	c->base.centro.x = rand()%MAX_X;
	c->base.centro.y = rand()%MAX_Y;
	(*c).base.raio = rand_float(1, 5);
	c->altura = rand_float(5, 20);
}

float areaCirculo(Circulo c) {
	return c.raio * c.raio * 3.141592;
}

float volumeCilindro(Cilindro c) {
	float areaBase = areaCirculo(c.base);
	return areaBase * c.altura;
}

int colisaoCilindro(Cilindro c1, Cilindro c2) {
	//retorna 1 se houver intersecao entre os cilindros
	//imprimir "COLISAO!" quando for retornar 1
	
	return 0;
}


void main() {
	
	Cilindro cilindros[TAM];
	
	int i;
	//como garantir que os cilindros nao se sobrepoem???
	for(i=0; i<TAM; i++) {
		geraCilindro(&cilindros[i]);
	}
	
	float areaTotal = 0;
	for(i=0; i<TAM; i++)
		areaTotal = areaTotal +
				areaCirculo(cilindros[i].base);
				
	printf("\nArea total: %.2f", 
	        areaTotal);
			
	float volumeTotal = 0;
	for(i=0; i<TAM; i++)
		volumeTotal += 
			volumeCilindro(cilindros[i]);
	
	printf("\nVolume total: %.2f", 
			volumeTotal);
		
		
		
	
	
}