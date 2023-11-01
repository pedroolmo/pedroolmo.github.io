#include <stdio.h>
#include <stdlib.h>

#define NUM_DIAS 7

typedef struct Atleta {
	float carga[NUM_DIAS];
	int contundiu;
} Atleta;


float randf(float min, float max) {
	return min + (max-min)*(float)rand()/RAND_MAX;
}

void preencheCarga(float x[], int n) {
	int i;
	x[0] = randf(4, 12);
	for(i=1; i<n; i++) {
		if(x[i-1] < 8)
			x[i] = randf(4, 12);
		else 
			x[i] = randf(0, 4);
	}
}

float probContusao(float x[], int n) {
	int i;
	float max = 0, media=0;
	for(i=0; i<n; i++) {
		if(x[i] > max)
			max = x[i];
		media += x[i];
	}
	media = media/n;
	return max/(max + media);
}

void initAtleta(Atleta *a) {
	preencheCarga(a->carga, NUM_DIAS);
	float pContundir = probContusao(a->carga, NUM_DIAS);
	if(randf(0,1) < pContundir)
		a->contundiu = 1;
	else
		a->contundiu = 0;
}

float fracContundidos(Atleta a[], int n) {
	int i;
	int count=0;
	for(i=0; i<n; i++) {
		count += a[i].contundiu;
	}
	return count/n;
}

/*
4: 10.91 0.92 6.00 8.34 3.94 4.43 4.65 (contundiu: 1)
*/
void imprimeTime(Atleta a[], int n) {
	int i, j;
	for(i=0; i<n; i++) {
		printf("\n%d: ", i);
		for(j=0; j<NUM_DIAS; j++) {
			printf("%.2f ", a[i].carga[j]);
		}
		printf("(contundiu: %d)", a[i].contundiu);
	}
}











