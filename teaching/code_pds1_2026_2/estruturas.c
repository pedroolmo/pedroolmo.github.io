#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MIN_ALTURA 3
#define MAX_ALTURA 20
#define MAX_PREDIOS 12

typedef int inteiro;


typedef struct Ponto {
	inteiro x;
	int y;
} Ponto;

typedef struct Circulo {
	float raio;
	Ponto centro;
} Circulo;

typedef struct Cilindro {
	Circulo base;
	float altura;
} Cilindro;



/*void geraCoord(int *x, int *y) {
	*x = rand()%100;
	*y = rand()%100;
}
*/
void geraCoord(Ponto *p) {
	p->x = rand()%10;
	p->y = rand()%10;
	/*
	(*p).x = rand()%100;
	(*p).y = rand()%100;
	*/
}
void geraCirculo(Circulo *c) {
	c->raio = 1 + rand()%4;
	//(*c).raio = 1 + rand()%4;
	geraCoord(&c->centro);
	
	/*
	c->centro.x = rand()%100;
	c->centro.y = rand()%100;
	*/
}

void geraCilindro(Cilindro *c) {
	c->altura = MIN_ALTURA + 
				rand()%(MAX_ALTURA-MIN_ALTURA+1);
	geraCirculo(&c->base);
	
}


float areaCirculo(Circulo c) {
	return M_PI * c.raio * c.raio;
}

float volumeCilindro(Cilindro c) {
	return c.altura * areaCirculo(c.base);
}


void imprimePonto(Ponto p) {
	printf("\n(%d %d)", p.x, p.y);
}

void imprimeCirculo(Circulo c) {
	printf("\nraio: %.2f", c.raio);
	//printf("\n(%d %d)", c.centro.x, c.centro.y);
	imprimePonto(c.centro);
}

void imprimeCilindro(Cilindro c) {
	printf("\nAltura: %.2f", c.altura);
	imprimeCirculo(c.base);
}

float dist(Ponto p1, Ponto p2) {
	return sqrt(pow(p1.x-p2.x,2) +
	            pow(p1.y-p2.y,2));
}

int colisaoCirculo(Circulo c1, Circulo c2) {
	float d = dist(c1.centro, c2.centro);
	if(d < c1.raio + c2.raio)
		return 1;
	return 0;	
}

int colisaoPredios(Cilindro c, Cilindro predios[], int n) {
	int i;
	for(i=0; i<n; i++) {
		if(colisaoCirculo(c.base, predios[i].base))
			return 1;
	}
	return 0;
}



int main() {
	
	srand(time(NULL));
	Cilindro predios[MAX_PREDIOS];
	int n_predios = 1+rand()%MAX_PREDIOS;
	int i;
	int count_colisoes=0;
	for(i=0; i<n_predios; i++) {
		geraCilindro(&predios[i]);
		imprimeCilindro(predios[i]);
		if(colisaoPredios(predios[i], predios, i)) {
			i--;
			count_colisoes++;
			printf("\nColidiu! %d", count_colisoes);
		}
		
	}
	
	float volumeTotal = 0;
	for(i=0; i<n_predios; i++) {
		volumeTotal += volumeCilindro(predios[i]);	
	}
	
	printf("\nVolume total: %.2f", volumeTotal);
	
	
	
	
	
/*	
	Circulo c1, c2;
	geraCirculo(&c1);
	imprimeCirculo(c1);
	geraCirculo(&c2);
	imprimeCirculo(c2);


	Cilindro c1, c2;
	geraCilindro(&c1);
	imprimeCilindro(c1);
	geraCilindro(&c2);
	imprimeCilindro(c2);

	
	if(colisaoCirculo(c1.base, c2.base) == 1) {
		printf("\nColisao!");
	}
	else {
		printf("\nOk!");
		float v1 = volumeCilindro(c1);
		float v2 = volumeCilindro(c2);
		printf("\nDensidade: %.2f", v1+v2);
	}
*/	
	
/*
	Ponto p1, p2;
	geraCoord(&p1);
	imprimePonto(p1);
	
	geraCoord(&p2);
	imprimePonto(p2);
	
	printf("\ndist: %.2f", dist(p1, p2));

	
	
	/*
	int x, y;
	geraCoord(&x, &y);
	*/
	
	
	
	return 0;
}