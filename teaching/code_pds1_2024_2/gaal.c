#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXX 10
#define MAXY 10
#define MAX_RAIO 3
#define MAX_ALTURA 50
#define NUM_CILINDROS 10

typedef struct ponto {
	int x;
	int y;
} ponto;


typedef struct circulo {
	int raio;
	ponto centro;
} circulo;

typedef struct cilindro {
	int altura;
	circulo base;
} cilindro;

void criaPonto(ponto *p) {
	(*p).x = rand()%MAXX;
	p->y = rand()%MAXY;

}

float distPontos(ponto p1, ponto p2) {
	return sqrt(pow(p1.x - p2.x,2) + pow(p1.y - p2.y,2));
}

int colisaoCilindros(cilindro c1, cilindro c2) {
	float distCentros = distPontos(c1.base.centro, 
								   c2.base.centro);
								   
	if(distCentros >= c1.base.raio + c2.base.raio)
		return 0;
	return 1;
}

float areaCirculo(circulo c) {
	return 3.141592 * c.raio * c.raio;
}

float volumeCilindro(cilindro c) {
	return areaCirculo(c.base) * c.altura;
}


void criaCirculo(circulo *c) {
	c->raio = 1 + rand()%MAX_RAIO;
	//criaPonto(&c->centro); FUNCIONA!
	//ou
	c->centro.x = rand()%MAXX;
	(*c).centro.y = rand()%MAXY;
}

void criaCilindro(cilindro *c) {
	c->altura = 1 + rand()%MAX_ALTURA;
	criaCirculo(&c->base);
	//ou
	//c->base.centro.x = rand()%MAXX;
	//...
}

void imprimeCilindro(cilindro c) {
	printf("\n(%d, %d, %d, %d)", c.base.centro.x, 
								 c.base.centro.y, 
								 c.base.raio,
								 c.altura);
	printf("\nvolume: %.2f\n", volumeCilindro(c));
}

int verificaCilindros(cilindro c, cilindro cs[], int n) {
	int i;
	
	if(n==0)
		return 0;
	
	for(i=0; i<n; i++) {
		if(colisaoCilindros(c, cs[i]))
			return 1;
	}
	return 0;
}

void main() {
	
	cilindro predios[NUM_CILINDROS];
	int i;
	float volumeTotal = 0;
	for(i=0; i<NUM_CILINDROS; i++) {
		criaCilindro(&predios[i]);
		//criaCilindro(predios+i);
		if(verificaCilindros(predios[i], predios, i)) {
			i--;
			printf("\nCOLISAO!");
			continue;
		}
		
		imprimeCilindro(predios[i]);
		volumeTotal += volumeCilindro(predios[i]);
	}
	
	printf("\n\nVOLUME TOTAL: %.2f", volumeTotal);
	
	/*
	cilindro c1, c2;
	criaCilindro(&c1);
	criaCilindro(&c2);
	imprimeCilindro(c1);
	imprimeCilindro(c2);
	*/
}