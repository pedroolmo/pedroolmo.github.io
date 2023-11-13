#include <stdio.h>

#define MAX_TAM 100
#define SCREEN_H 480
#define SCREEN_W 640

typedef struct Evento {
	int tipo;
	int tecla;
	int x, y;
} Evento;

typedef struct Fila {
	Evento eventos[MAX_TAM];
	int n; //numero de eventos na fila
} Fila;

void criaEvento(Evento *e) {
	e->tecla = -1;
	e->x = -1;
	e->y = -1;
	
	e->tipo = rand()%3;
	if(e->tipo == 1) {
		e->tecla = rand()%105;
	}
	else if(e->tipo == 2) {
		e->x = rand()%SCREEN_W;
		e->y = rand()%SCREEN_H;
	}
}

void criaFila(Fila *f) {
	f->n = 0;
}

int adicionaEvento(Fila *f, Evento e) {
	if (f->n == MAX_TAM)
		return 0;
	
	f->eventos[f->n] = e;
	f->n++;
	return 1;

}

Evento retiraEvento(Fila *f) {
	Evento e;
	if(f->n == 0) {
		e.tipo = -1;
		return e;
	}
	
	e = f->eventos[0];
	int i;
	for(i=1; i<f->n; i++)
		f->eventos[i-1] = f->eventos[i];
	
	f->n--;
	return e;
	
}






