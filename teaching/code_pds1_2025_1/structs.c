#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define MAX_PREDIOS 50

typedef int inteiro;

typedef struct Ponto {
	float x,y;
} Ponto;

typedef struct Circulo {
	float raio;
	Ponto centro;
}Circulo;

typedef struct Cilindro {
	Circulo base;
	float altura;
} Cilindro;



float dist(Ponto u, Ponto v) {
	float s = pow(u.x-v.x,2) + pow(u.y-v.y,2);
	return sqrt(s);
}	

void lePonto(Ponto *p) {
	scanf("%f %f", &p->x, &p->y);
}

void leCirculo(Circulo *c) {
	scanf("%f", &c->raio);
	lePonto(&c->centro);
}

void leCilindro(Cilindro *c) {
	/*
	c.altura = 5;
	c.base.raio = 2;
	c.base.centro.x = 0;
	c.base.centro.y = -1;
	*/	
	//(*c).base = leCirculo();
	leCirculo(&c->base);	
	scanf("%f", &c->altura);
}

void geraCilindro(Cilindro *c) {
	
	c->altura = 1+rand()%20;
	c->base.raio = 1+rand()%5;
	c->base.centro.x = rand()%100;
	c->base.centro.y = rand()%100;	
}


float areaCirculo(Circulo c) {
	return 3.141592 * c.raio * c.raio;
}

float volumeCilindro(Cilindro c) {
	return areaCirculo(c.base) * c.altura;
}

void imprimeCilindro(Cilindro c) {
	printf("\n%.2f %.2f %.2f %.2f",
			c.base.centro.x,
			c.base.centro.y,
			c.base.raio,
			c.altura);
}



int colisao(Cilindro p, Cilindro predios[], int n) {

	int i;
	float somaraio, d;
	for(i=0; i<n; i++) {
		somaraio = p.base.raio + 
						 predios[i].base.raio;
		d = dist(p.base.centro,
					   predios[i].base.centro);
		if(d < somaraio) {
			printf("\n-----");
			printf("\nDist: %f", d);
			printf("\nSoma raios: %f", somaraio);
			imprimeCilindro(p);
			imprimeCilindro(predios[i]);
			printf("\n-----");
			return 1;	
			
		}
	}
	return 0;
}	

int main() {	
	
	Cilindro predios[MAX_PREDIOS];
	int i;
	for(i=0; i<MAX_PREDIOS; i++) {
		geraCilindro(&predios[i]);
		imprimeCilindro(predios[i]);
			
		if(colisao(predios[i], predios, i)) {
			i--;
			printf("\nColisao!");
			
		}
		
		
		//geraCilindro(predios+i);
	}
	
	




	//float x1, x2, y1, y2;
	
	/*Cilindro c;
	leCilindro(&c);
	float volume = volumeCilindro(c);
	printf("\nvolume: %f", volume);	
	
	*/
	//float d = dist(p1, p2);
	//printf("\ndistancia: %f", d);	
	
	
	/*
	p1.x = 0;
	p1.y = 0;
	
	p2.x = -1;
	p2.y = 1;
	*/
	
	
	//scanf("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);
	

}