#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_X 480
#define MAX_Y 640
#define NUM_PREDIOS 40

typedef struct Ponto {
	int x, y;
} Ponto;

typedef struct Circulo {
	float raio;
	Ponto centro;
} Circulo;

typedef struct Cilindro {
	Circulo base;
	float altura;
} Cilindro;


float areaCirculo(Circulo c) {
	return 3.141592 * c.raio * c.raio;
}


void imprimeCilindro(Cilindro c) {
	printf("\n(%d %d), %.2f, %.2f", c.base.centro.x,
									c.base.centro.y,
									c.base.raio,
									c.altura); 
}

void preencheCilindro(Cilindro *c) {
	(*c).altura = 1 + rand()%100;
	c->base.raio = 1 + rand()%10;
	c->base.centro.x = rand()%MAX_X;
	(*c).base.centro.y = rand()%MAX_Y;	
}

Cilindro geraCilindro() {
	Cilindro c;
	c.altura = 1 + rand()%100;
	c.base.raio = 1 + rand()%10;
	c.base.centro.x = rand()%MAX_X;
	c.base.centro.y = rand()%MAX_Y;	
	return c;
}

float volumeCilindro(Cilindro c) {
	return areaCirculo(c.base) * c.altura;
}



float dist(Ponto p1, Ponto p2) {
	return sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2));
}


int main() {
	
	
	Cilindro predios[NUM_PREDIOS];
	int i;
	float volumeTotal = 0;
	for(i=0; i<NUM_PREDIOS; i++) {
		preencheCilindro(&predios[i]);
		//predios[i] = geraCilindro();
		imprimeCilindro(predios[i]);
		volumeTotal += volumeCilindro(predios[i]);
	}
	
	printf("\nVolume total: %.2f", volumeTotal);
	
	/*
	Cilindro c;
	imprimeCilindro(c);
	//c = geraCilindro();
	preencheCilindro(&c);
	imprimeCilindro(c);
	printf("\n%.2f", volumeCilindro(c));
	*/
	
	
	/*
	Ponto p1, p2;
	scanf("%d %d", &p1.x, &p1.y);
	scanf("%d %d", &p2.x, &p2.y);
	printf("\n%.2f", dist(p1, p2));
	*/
}