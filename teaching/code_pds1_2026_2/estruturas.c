#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef int inteiro;


typedef struct Ponto {
	inteiro x;
	int y;
} Ponto;

typedef struct Circulo {
	float raio;
	Ponto centro;
} Circulo;



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
	geraCoord(&c->centro);
	
	/*
	c->centro.x = rand()%100;
	c->centro.y = rand()%100;
	*/
	
	
}

float areaCirculo(Circulo c) {
	return M_PI * c.raio * c.raio;
}


void imprimePonto(Ponto p) {
	printf("\n(%d %d)", p.x, p.y);
}

void imprimeCirculo(Circulo c) {
	printf("\nraio: %.2f", c.raio);
	imprimePonto(c.centro);
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



int main() {
	
	srand(time(NULL));
	
	Circulo c1, c2;
	geraCirculo(&c1);
	imprimeCirculo(c1);
	geraCirculo(&c2);
	imprimeCirculo(c2);
	
	if(colisaoCirculo(c1, c2) == 1) {
		printf("\nColisao!");
	}
	else
		printf("\nOk!");
	
	
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