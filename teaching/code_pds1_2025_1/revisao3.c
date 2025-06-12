#include <stdio.h>
#include <stdlib.h>

typedef struct Disciplina {
	char *nome;
	int creditos;
} Disc;

void preencheDisciplina(Disc *d) {
	d->creditos = 1 + rand()%4;
	int n = 3 + rand()%4;
	int i;
	d->nome = (char*)malloc(1+n*sizeof(char));
	for(i=0; i<n; i++) 
		d->nome[i] = 'A' + rand()%26;
	d->nome[i] = '\0';
}

void imprimeDisciplina(Disc d) {
	printf("%s (%d)", d.nome, d.creditos);
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	Disc **D;
	int i, j;
	
	D = (Disc**)malloc(n * sizeof(Disc*));
	for(i=0; i<n; i++) {
		D[i] = (Disc*)malloc(m * sizeof(Disc));
		for(j=0; j<m; j++) {
			preencheDisciplina(&D[i][j]);
			imprimeDisciplina(D[i][j]);
		}
		printf("\n");
	}
	
	//desaloca tudo
	
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			free(D[i][j].nome);		
		}
		free(D[i]);
	}
	free(D);
	
	printf("%p", D);
	
	

}