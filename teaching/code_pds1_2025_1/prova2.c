/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void imprimeTabuleiro(char t[12][12]) {

    int i,j;
    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            printf("%2c", t[i][j]);
        }
        printf("\n");
    }


}

//Q1)

void initTabuleiro(char t[12][12]) {
    
    int i,j;
    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            t[i][j] = '.';
    
}

//Q2)
void posicionar_navios(char t[12][12], char* navios[], int n) {
    
    int i, j;
    char tipo[100];
    int l, c, tam;
    
    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            t[i][j] = '.';
    
    for(i=0; i<n; i++) {
        tam = 3;

        //printf("\n->%s", navios[i]);

        sscanf(navios[i], "%s %d %d", tipo, &l, &c);

        //printf("\nNavio: %s %d %d", tipo, l, c);

        if(!strcmp(tipo, "corveta")) tam = 1;
        else if(!strcmp(tipo, "fragata")) tam = 2;
        for(j=c; j<c+tam; j++)
            t[l][j] = 'N';
    }
}


//Q3
int verificar_tiro(char t[12][12], int l, int c) {
   
	int i, j;
	
    if(t[l][c] == 'N') {
        t[l][c] = 'X';
        return 1;
    }
    return 0;
}

//Q4
int jogo_acabou(char t[12][12]) {
    
    int i, j;
    for(i=0; i<12; i++) {
        for(j=0; j<12; j++) {
            if(t[i][j] == 'N')
                return 0;
        }
    }
    return 1;
    
}


int main(int argc, char* argv[]) {
    char tabuleiro[12][12];
    
    posicionar_navios(tabuleiro, &argv[1], argc-1);

    while (1) {
        int linha, coluna;
        printf("\nDigite as coordenadas do tiro (linha coluna): ");
         scanf("%d %d", &linha, &coluna);

        if (verificar_tiro(tabuleiro, linha, coluna)) {
            printf("Acertou!\n");
        } else {
            printf("Errou!\n");
        }

        imprimeTabuleiro(tabuleiro);

        if (jogo_acabou(tabuleiro)) {
            printf("Voce afundou todos os navios!\n");
            printf("Fim de jogo.\n");
            break;
        }
    }
    return 0;
}
