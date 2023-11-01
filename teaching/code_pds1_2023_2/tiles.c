#include <stdio.h>
#include <stdlib.h>

#define TAM_Y 300
#define TAM_X 300
#define LINHAS 3
#define COLUNAS 3 


typedef struct Tile {
	int investigado;
	int premio;
} Tile;

typedef struct Jogador {
	int vidas;
	int pontuacao;
} Jogador;

void initGrid(Tile g[][COLUNAS]) {
	int i, j;
	for(i=0; i<LINHAS; i++) {
		for(j=0; j<COLUNAS; j++) {
			g[i][j].investigado = 0;
			//*(*(g+i)+j).investigado = 0;
			g[i][j].premio = rand()%11;
		}
	}
}

void imprimeGrid(Tile g[][COLUNAS]) {
	int i, j;
	for(i=0; i<LINHAS; i++) {
		for(j=0; j<COLUNAS; j++) {
			printf("%d ", g[i][j].investigado);
		}
		printf("\n");
	}
}

int coordParaLinha(int coord) {
	int altura_tile = TAM_Y / LINHAS;
	return coord/altura_tile;
}

int coordParaCol(int coord) {
	int largura_tile = TAM_X / COLUNAS;
	return coord/largura_tile;
}


void initJogador_v2(Jogador j) {
	j.pontuacao = 0;
	j.vidas = 3;
}










void initJogador(Jogador *j) {
	j->pontuacao = 0;
	j->vidas = 3;
}










int executaJogada(Jogador *p, Tile g[][COLUNAS]) {
	int x,y,i,j;
	scanf("%d %d", &x, &y);
	j = coordParaCol(x);
	i = coordParaLinha(y);
	if(g[i][j].investigado ||
	   x < 0 || x > TAM_X ||
	   y < 0 || y > TAM_Y) {
		   p->vidas --;
		   return 0;
	   }
	p->pontuacao += g[i][j].premio;
	g[i][j].investigado = 1;
	return 1;
	
}	


int main() {
	Tile grid[LINHAS][COLUNAS];
	initGrid(grid);
	imprimeGrid(grid);
	
	Jogador p1, p2;
	initJogador(&p1);
	initJogador(&p2);
	
	int x, y, i, j;
	int nTiles = LINHAS * COLUNAS;
	while(1) {
		printf("\nP1: ");
		nTiles -= executaJogada(&p1, grid);
		imprimeGrid(grid);	

		if(p1.vidas <= 0 || nTiles == 0) 
			break;
		
		printf("\nP2: ");
		nTiles -= executaJogada(&p2, grid);		
		imprimeGrid(grid);
		
		if(p2.vidas <= 0 || nTiles == 0) 
			break;		
		
	}
	
	printf("\n\nP1: %d pontos", p1.pontuacao);
	printf("\nP2: %d pontos", p2.pontuacao);
	
	
	return 0;
}