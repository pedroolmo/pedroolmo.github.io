#include <stdio.h>



int main() {
	
	char msg[1000];
	char msg_cripto[1000];
	int i=0;
	
	//opcao 1:
	for(i=0; i<1000; i++)
		msg[i] = '\0';
	
	//ler a msg do teclado:
	i=0;
	do {
		scanf("%c", &msg[i]);
		i++;
	} while(msg[i-1] != '.');
	
	//opcao 2:
	msg[i] = '\0';
	
	printf("\nMsg original: %s", msg);
	
	for(i=0; msg[i]!='.'; i++) {
		msg_cripto[i] = 1+(5*msg[i]+100)%255;
	}
	msg_cripto[i] = '\0';
	
	printf("\nMsg criptografada: %s", msg_cripto);
	
	

	return 0;
}

