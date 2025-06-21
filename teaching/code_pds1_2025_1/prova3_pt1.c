#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

struct lutador {
    char *nome;
    int vitalidade;
    int dano_maximo;
};
typedef struct lutador Lutador;

Lutador* carrega_lutadores(int *n) {
    FILE *arquivo = fopen("lutadores.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return NULL;
    }
    fscanf(arquivo, "%d", n);
    Lutador *vetor = (Lutador*) malloc(*n * sizeof(Lutador));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        fclose(arquivo);
        return NULL;
    }
    for (int i = 0; i < *n; i++) {
        vetor[i].nome = (char *) malloc(10 * sizeof(char));
        fscanf(arquivo, "%s %d %d",
               vetor[i].nome,
               &vetor[i].vitalidade,
               &vetor[i].dano_maximo);
    }
    fclose(arquivo);
    return vetor;
}

int randint(int min, int max) { 
	return min + rand()%(max-min+1);
} 



void ataque(Lutador atacante, Lutador *alvo) {
    // Calcula o dano aleatório entre 1 e dano_maximo do atacante
    int dano = randint(1, atacante.dano_maximo);
    
    // Subtrai o dano da vitalidade do alvo
    alvo->vitalidade -= dano;
    
    // Garante que a vitalidade não fique negativa (opcional)
    if (alvo->vitalidade < 0) {
        alvo->vitalidade = 0;
    }
}

void eliminaLutador(Lutador v[], int ferido, int *n) {
	if(v[ferido].vitalidade <=0) {
            free(v[ferido].nome);
		v[ferido] = v[*n-1];
		*n = *n - 1;
	}
}


void imprimeLutadores(Lutador v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("\n%s %d %d", v[i].nome, v[i].vitalidade, v[i].dano_maximo);
	}
}

void batalha() {

   int n, l1, l2;
   Lutador *lutadores = carrega_lutadores(&n);
   while(n>1) {
      l1 = randint(0,n-1);
      l2 = randint(0,n-1);
      if(l1 != l2) {
         ataque(lutadores[l1], &lutadores[l2]);
         eliminaLutador(lutadores, l2, &n);
         if(n==1)
            printf("\nVencedor: %s", lutadores[0].nome);
	}
   }
   free(lutadores[0].nome);
   free(lutadores);
}   

int main() {
	srand(time(NULL));
	char resp;
	do {
		batalha();
		printf("\nDe novo? (S/N)");
		fflush(stdin);
		resp = getchar();
	} while(toupper(resp) == 'S');
	return 0;
}