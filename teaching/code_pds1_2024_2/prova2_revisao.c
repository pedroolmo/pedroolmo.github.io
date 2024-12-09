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

void criaFila(Fila *f) {
	f->n = 0;
	//(*f).n = 0;
}