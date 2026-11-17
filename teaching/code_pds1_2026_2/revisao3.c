#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa { 
	char *nome; //nome da pessoa 
	int dinheiro; //quantidade de dinheiro que ela possui 
	int jogadas; //número de vezes que ela vai jogador no site 
} Pessoa;


Pessoa* carrega_apostadores (int *n) {
	FILE *arq = fopen("apostadores.txt", "r");
	if(arq == NULL)
		return;
	fscanf(arq, "%d", n);
	Pessoa *vp = (Pessoa*)malloc(*n*sizeof(Pessoa));
	int i;
	for(i=0; i<*n; i++) {
		vp[i].nome = (char*)malloc(11*sizeof(char);
		fscanf(arq, "%s", vp[i].nome);
		fscanf(arq, "%d %d", &vp[i].dinheiro,
						     &vp[i].jogadas);
	}	
	fclose(arq);
	return vp;
	}
	
	int leopardo() {
		
		int dado = randInt(1, 6);
		if(dado == 1)
			return -10;
		return dado + leopardo();
		/*
		int saldo = dado;
		saldo += leopardo();
		return saldo;
		*/
				
		
		
	}
	
	int onca(int x, int n) {
		int dado = randInt(1, 6);
		int valor = (x==dado)?40:-10;
		if(n==1) {
			return valor;
		}
		valor += onca(x, n-1);
		return valor;
	}
	
	
	void joga(Pessoa *p) {
		
		if(p->dinheiro <= 0 || p->jogadas == 0) 
			return;
		if(rand()%2) {
			//onca:
			int n = p->dinheiro/10;
			p->dinheiro = onca(6, n);
		}
		else {
			//leopardo:
			p->dinheiro += leopardo();
		}
		p->jogadas--;	
	}
	
	
	
	
	
	









