#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeTabuleiro(char tabuleiro[12][12]) {
	int i, j;
	for(i=0; i<12; i++) {
		for(j=0; j<12; j++) {
			printf("%c", tabuleiro[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void posicionar_navios
    (char tabuleiro[12][12], char* navios[], int n) {
		
	int i, j, x, y, tam;
	char tipo[100];
	for(i=0; i<12; i++)
		for(j=0; j<12; j++)
			tabuleiro[i][j] = '.';
		
	for(i=0; i<n; i++) {
		sscanf(navios[i], "%s %d %d", tipo, &x, &y);
		tam = 3;
		if(!strcmp(tipo, "fragata"))
			tam=2;
		else if(!strcmp(tipo, "corveta"))
			tam = 1;
		for(j=0; j<tam; j++)
			tabuleiro[x][y+j] = 'N';
	}
}

int verificar_tiro(char tab[12][12], int x, int y) {
	if(tab[x][y] == 'N') {
		tab[x][y] = 'X';
		return 1;
	}
	return 0;
}

int jogo_acabou(char tab[12][12]) {
	int i, j;
	for(i=0; i<12; i++)
		for(j=0; j<12; j++) {
			if(tab[i][j] == 'N')
				return 0;
		}
	return 1;
}


int main(int argc, char *argv[]) {
	char tabuleiro[12][12];
	posicionar_navios(tabuleiro, &argv[1], argc-1);
	while (1) {
		system("cls");
		imprimeTabuleiro(tabuleiro);
		int linha, coluna;
		printf("Digite as coordenadas do tiro (linha coluna): ");
		scanf("%d %d", &linha, &coluna);
		if (verificar_tiro(tabuleiro, linha, coluna)) {
			printf("Acertou!\n");
		} else {
			printf("Errou!\n");
		}
		if (jogo_acabou(tabuleiro)) {
			printf("Voce afundou todos os navios!\n");
			printf("Fim de jogo.\n");
			break;
		}
	}
return 0;
}






