#include <stdio.h>

int main() {
	
	char msg[10000];
	int i;
	
	printf("\nDigite a mensagem:");
	
	i=0;
	int n;
	do {
		scanf("%c", &msg[i]);
		i++;
	} while(msg[i-1] != '#');
	msg[i] = '\0';	
	n = i;

	printf("\nMensagem Original: %s", msg);
	
	int cont[256];
	
	//inicializar o vetor com zeros
	for(i=0; i<256; i++)
		cont[i] = 0;
	
	for(i=0; i<n; i++) {
		/*
		char c = msg[i];
		cont[c]++;
		*/
		cont[msg[i]]++;
	}
	/*
	int max = 0;
	char max_i = -1;
	for(i=0; i<256; i++) {
		if(cont[i] > max) {
			max = cont[i];
			max_i = i;
		}
	}
	*/
	//versao otimizada:
	char max_i = 0;
	for(i=1; i<256; i++) {
		if(cont[i] > cont[max_i]) {
			max_i = i;
		}
	}
	
	printf("\nChar mais freq: %c, %d vezes", max_i, max);
	
}