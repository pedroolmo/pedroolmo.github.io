#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DIAS 30
#define NUM_VOOS 200
#define TAM_TRECHO 4

typedef struct Voo {
	float p[NUM_DIAS];
	char ori[TAM_TRECHO];
	char des[TAM_TRECHO];
	int pico;
} Voo;


float randf(float min, float max) {
	
	return min + (max-min)*(float)rand()/RAND_MAX;
	
}

int indiceMaior(float x[], int n) {
	
	int iMaior = 0;
	int i;
	for(i=1; i<n; i++) {
		
		if(x[iMaior] < x[i])
			iMaior = i;
		
	}	
	return iMaior;	
}

int randint(int min, int max) {
	return min + rand()%(max - min + 1);
	
}

char geraTrecho(char s[], int n) {
	int i=0;
	for(i=0; i<n-1; i++) {
		s[i] = randint('A', 'Z');
		//s[i] = 'A' + rand()%('Z' - 'A' + 1);
	}
	s[i] = '\0';
	
}

void preencheSeriePrecos(float x[], int n) {
	
	x[n-1] = randf(100, 400);
	int i;
	for(i=n-2; i>=0; i--) {
		x[i] = x[i+1] * randf(0.8, 1.2);
	}
}



void preencheVoo(Voo *v) {
	preencheSeriePrecos(v->p, NUM_DIAS);
	geraTrecho(v->ori, TAM_TRECHO);
	geraTrecho(v->des, TAM_TRECHO);
	v->pico = indiceMaior(v->p, NUM_DIAS);
}

int diaMaisCaro(Voo voos[], int n) {
	
	float cont[NUM_DIAS];
	int i=0;
	for(i=0; i<NUM_DIAS; i++)
		cont[i] = 0;
	
	for(i=0; i<n; i++) 
		cont[voos[i].pico]++;

	//for(i=0; i<NUM_DIAS; i++) 
	//	printf("\ncont[%d]=%.1f", i, cont[i]);
	
	return indiceMaior(cont, NUM_DIAS);
	
}

//#include "prova2.h"
//#include <stdio.h>


void main() {
	srand(time(NULL));
	//Cria um vetor de voos de tamanho NUM_VOOS:
	Voo voos[NUM_VOOS];
	int i=0;
	
	//Preenche o vetor de voos:
	for(i=0; i<NUM_VOOS; i++)
		preencheVoo(&voos[i]);
	
printf("\nDia de pico mais comum:");
printf("%d",diaMaisCaro(voos, NUM_VOOS)); 
}



























