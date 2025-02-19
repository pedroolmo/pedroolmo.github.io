#include <stdio.h>

void criaEvento(Evento *e) {
	e->tipo = -1;
	e->x = -1;
	e->y = -1;
	e->tecla = -1;
	
	e->tipo = rand()%3;
	if(e->tipo == 1)
		e->tecla = rand()%105;
	else if(e->tipo == 2) {
		e->x = rand()%SCREEN_W;
		e->y = rand()%SCREEN_H;
	}
	printf("\n%d %d", (*e).x, e->x);
	
}

void imprimeEvento(Evento e) {
	printf("\n%d %d %d %d", e.tipo, e.x, e.y, e.tecla);
	
}

void imprimeFila(Fila f) {
	int i;
	for(i=0; i<f.n; i++)
		imprimeEvento(f.eventos[i]);
	
}


void criaFila(Fila *f) {
	f->n = 0;
	//(*f).n = 0;
}

int adicionaEvento(Fila *f, Evento e) {
	
	if(f->n == MAX_TAM)
		return 0;
	(*f).eventos[f->n] = e;
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
	for(i=0; i<f->n; i++)
		f->eventos[i] = f->eventos[i+1];
	
	f->n--;
	return e;
	
}











