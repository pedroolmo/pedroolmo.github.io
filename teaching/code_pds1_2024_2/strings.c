#include <stdio.h>

void main() {
	
	//char nome[] = "Pedro";
	
	char nome[51];
	char aux;
	
	int i=0;
	do {
		scanf("%c", &aux);
		//*(nome+i) =  aux;
		nome[i] = aux;
		i++;
	} while(aux != '.');
	nome[i] = '\0';
	//*(nome+i) = '\0';
	
	printf("\nNome lido: %s", nome);
	printf("\nChar invasao: %c", nome[100]);


	//*(a+3) = '!';
	
	/*
	printf("minha str: %s", a);
	printf("\na+1 = %p", a+1);
	printf("\n*(a+3) = #%c#", *(a+3));
	printf("\n*(a+3) = %d", *(a+3));
	*/
	
}