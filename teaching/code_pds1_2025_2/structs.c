#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_X 50
#define MAX_Y 50
#define NUM_TORRES 10


typedef int inteiro;

typedef struct Ponto {
	float x;
	float y;
} Ponto;

typedef struct Circulo {
	float raio;
	Ponto centro;
} Circulo;

typedef struct Cilindro {
	float altura;
	Circulo base;
} Cilindro;

void geraCilindro(Cilindro *c) {
	
	c->altura = 1 + rand()%20;
	c->base.raio = 1 + rand()%10;
	c->base.centro.x = rand()%MAX_X;
	c->base.centro.y = rand()%MAX_Y;
	
	
}


void lePonto(Ponto *p) {
	scanf("%f %f", &(*p).x, &p->y);
}

void leCirculo(Circulo *c) {
	scanf("%f", &c->raio);
	lePonto(&c->centro);
}

void imprimeCirculo(Circulo c) {
	printf("\nraio: %.2f", c.raio);
	printf("\ncentro: (%.2f, %.2f)", c.centro.x,
								     c.centro.y);

}

void imprimeCilindro(Cilindro c) {
	imprimeCirculo(c.base);
	printf("\naltura: %.2f\n", c.altura);
}
	

float distancia(Ponto p1, Ponto p2) {
	return sqrt(pow(p1.x - p2.x, 2) + 
	            pow(p1.y - p2.y, 2));
}

int colisao(Circulo c1, Circulo c2) {
	float dist = distancia(c1.centro, c2.centro);
	if(dist <= c1.raio + c2.raio)
		return 1;
	return 0;
}

float areaCirculo(Circulo c) {
	return 3.141592 * c.raio * c.raio;
}

float volumeCilindro(Cilindro c) {
	return areaCirculo(c.base) * c.altura;
}

	

int main() {
	
	Cilindro torres[NUM_TORRES];
	int i, j;
	float volumeTotal = 0;
	
	for(i=0; i<NUM_TORRES; i++) {
		geraCilindro(&torres[i]);
		printf("\nCilindro %d", i);
		imprimeCilindro(torres[i]);

		for(j=0; j<i; j++) {
			if(colisao(torres[i].base, torres[j].base)) {
				
				printf("\nColisao entre %d e %d", i, j);
				i--;
				break;
			}
		}		
	}
	
	for(i=0; i<NUM_TORRES; i++)
		volumeTotal += volumeCilindro(torres[i]);
	
	printf("\nVolume total: %.2f", volumeTotal);
	
	
	
	/*
	inteiro a, b;
	int c;
	
	Circulo c1;
	leCirculo(&c1);
	imprimeCirculo(c1);
	
	/*
	struct Circulo c1;
	scanf("%f", &c.raio);
	lePonto(&c1.centro);
	
	/*
	struct Ponto p1, p2;
	lePonto(&p1);
	lePonto(&p2);
	
	printf("\nPrimeiro ponto lido:");
	printf("(%.2f, %.2f)\n", p1.x, p1.y);
	
	
	/*
	float x1, y1, x2, y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	*/
	
	return 0;
	
}