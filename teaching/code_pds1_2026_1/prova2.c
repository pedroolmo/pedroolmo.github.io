#include <stdio.h>
#include <stdlib.h>
#define MINC 32
#define NUMCS 95

//1) Funcao para retirar um elemento aleatorio de um vetor de caracteres de n posicoes
char retira(char lista[], int *n) {
	int i, idx = rand()%(*n);
	char sorteado = lista[idx];
	for(i=idx; i<*n-1; i++)
		lista[i] = lista[i+1];
	*n = *n-1;
	return sorteado;
}

//2) funcao para inicializar os vetores de codificacao de decodificacao.
void initCripto(char cod[], char decod[]) {
	char lista[NUMCS];
	int i;
	for(i=0; i<NUMCS; i++)
		lista[i] = i+MINC;
	
	int n = NUMCS;
	for(i=0; i<NUMCS; i++) {
		cod[i] = retira(lista, &n);
		decod[cod[i]-MINC] = i+MINC;
	}
}

/*
Programa para codificar e decodificar mensagens.
- Apenas os caracteres entre o 32 e o 126 (inclusive para ambos) devem ser considerados
- Os vetores de codificacao devem conter apenas 95 posicoes. 
- Considerar o deslocamento do caractere real para o indice no vetor: indice = ascii - 32
- Para testar, imprimir a mensagem original caractere a caractere usando o vetor de decodificacao.
*/
int main() {
	
	char msg[1000];
	char msg_cripto[1000];
	int i=0;
	
	//ler a msg do teclado:
	i=0;
	do {
		scanf("%c", &msg[i]);
		i++;
	} while(msg[i-1] != '.');
	
	//opcao 2:
	msg[i] = '\0';
	
	printf("\nMsg original: %s", msg);
	
	char cod[NUMCS];
	char decod[NUMCS];
	
	initCripto(cod, decod);
	
	printf("\nMsg criptografada:\n");
	for(i=0; msg[i]!='.'; i++) {
		msg_cripto[i] = cod[msg[i]-MINC];
		printf("%c", msg_cripto[i]);
	}
	
	printf("\nMsg decodificada:\n");
	for(i=0; msg[i]!='.'; i++) {
		printf("%c", decod[msg_cripto[i]-MINC]);
	}

	return 0;
}

