#include <stdio.h>
#include <math.h>

void ordenaDois(float *end1, float *end2) {
	
	float f_end1 = *end1;
	float f_end2 = *end2;
	
	if(f_end1 > f_end2) {
		*end1 = f_end2;
		*end2 = f_end1;
	}
}

void ordenaDois_v2(float *end1, float *end2) {
	
	float aux; 
	
	if(*end1 > *end2) {
		aux = *end1;
		*end1 = *end2;
		*end2 = aux;
	}
}

void ordenaTres(float *e1, float *e2, float *e3) {
	ordenaDois(e1, e2);
	ordenaDois(e1, e3);
	ordenaDois(e2, e3);
}

void imprimeSeqDiv(int qtd, int t, int n) {
	int i, q , sobra=0;
	if(qtd<=0 || t<=0|| n<=0)
		return;
	for(i=0;i<t;i++){
		q= (qtd+sobra)/n;
		sobra=(qtd+sobra)%n;
		printf("%d: %d\n",i+1,q);
	}
}

int pFrac(float x, int n) {
	//x = 3.141592
	//n = 3
	//retorna o inteiro 141
	float fracionaria = x-(int)x;
	int casas_frac = (int)(fracionaria*pow(10,n));
	return casas_frac;
}

void main() {
	float qtd, t, n;
	do {
		scanf("%f %f %f", &qtd, &t, &n);
	} while(pFrac(qtd,6) || pFrac(t,6) || pFrac(n,6));
	ordenaTres(&n, &t, &qtd);
	imprimeSeqDiv(qtd, t, n);
}
	
	
	
	
	
	
	