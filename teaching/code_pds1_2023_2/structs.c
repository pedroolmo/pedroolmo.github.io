#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_CILINDROS 100
#define TAM_GRID 500

typedef int inteiro;


typedef struct Ponto {
	float x;
	float y;
} Ponto;

typedef struct Circulo {
	Ponto centro;
	float raio;
} Circulo;

typedef struct Cilindro {
	Circulo base;
	float altura;
} Cilindro;



void imprimePonto(Ponto p) {
	printf("\n(%.2f, %.2f)", p.x, p.y);
}

Ponto geraPonto() {
	float x = rand()%501;
	float y = rand()%501;	
	Ponto p;
	p.x = x;
	p.y = y;
	
	return p;
}	


void criaCirculo(Circulo *c) {
	//(*c).centro = geraPonto();
	c->centro = geraPonto();
	
	/*
	//OU:
	c->centro.x = rand()%501;
	c->centro.y = rand()%501;
	*/
	
	c->raio = 1+rand()%41;
}

float areaCirculo(Circulo c) {
	return 3.141592 * c.raio * c.raio;
}

void imprimeCirculo(Circulo c) {
	printf("\n(%.2f, %.2f, %.2f)",
			c.centro.x,
			c.centro.y,
			c.raio);
			
	printf("\nArea: %.2f", areaCirculo(c));

}

void criaCilindro(Cilindro *c) {

	 criaCirculo(&c->base);
	 
	 /*
	 //OU:
	 
	 c->base.centro.x = rand()%501;
	 c->base.centro.y = rand()%501;
	 c->base.raio = 1 + rand()%10;
	 */
	 
	 c->altura = rand()%100 + 1;
}
	
float volumeCilindro (Cilindro c) {
	return areaCirculo(c.base) * c.altura;
}

void imprimeCilindro(Cilindro c) {
	printf("\n(%.2f, %.2f, %.2f, %.2f)",
			c.base.centro.x,
			c.base.centro.y,
			c.base.raio,
			c.altura);
	printf("\nVolume: %.2f", volumeCilindro(c));
			
}

float distancia(Ponto p1, Ponto p2) {
	float d = pow(p1.x - p2.x, 2);
	d += pow(p1.y - p2.y, 2);
	return sqrt(d);
	
}

int colisaoCilindros(Cilindro c1, Cilindro c2) {
	float d = distancia(c1.base.centro, c2.base.centro);
	float somaRaios = c1.base.raio + c2.base.raio;
	
	return d < somaRaios;	
}


int main() {
	
	Cilindro cilindros[MAX_CILINDROS];
	
	int i, j, count=0;
	float volumeTotal = 0;
	while(count < MAX_CILINDROS) {
		criaCilindro(&cilindros[count]);
		count++;
		for(j=0; j<count-1; j++) {
			if(colisaoCilindros(cilindros[count-1],
							    cilindros[j])) {
				count--;
				
				printf("\nColisao!");
				imprimeCilindro(cilindros[count]);
				imprimeCilindro(cilindros[j]);
				getchar();
				
				
				break;			
			}
		}
	}
	
	for(i=0; i<MAX_CILINDROS; i++) {
		imprimeCilindro(cilindros[i]);
		printf("\n");
		volumeTotal += volumeCilindro(cilindros[i]);
	}
	
	/*
	Cilindro c;
	criaCilindro(&c);
	imprimeCilindro(c);
	*/
	
	
	/*
	Circulo c;
	criaCirculo(&c);
	imprimeCirculo(c);
	*/
	
	
	/*
	Ponto p1, p2;
	p1 = geraPonto();
	p2 = geraPonto();
	imprimePonto(p1);
	imprimePonto(p2);
	*/

	
	/*
	float x[MAX_CILINDROS];
	float y[MAX_CILINDROS];
	float altura[MAX_CILINDROS];
	float raio[MAX_CILINDROS];
	
	x[0] = 200;
	y[0] = 134;
	altura[0] = 79;
	
	x[1] = 40;
	y[1] = 388;
	*/
	
	
	
}