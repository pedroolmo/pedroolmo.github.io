#include <stdio.h>

#define TAM_STR 1000

void main() {
	
	char msg[TAM_STR], msg_cripto[TAM_STR];
	
	int i=0;	
	do {
		scanf("%c", &msg[i]);
		i++;
	} while(msg[i-1] != '.');
	msg[i-1] = '\0';
	int a=0;
	printf("Mensagem original:\n->%s<-\n", msg);
	for(a;a<i-1;a++){
		msg_cripto[a]=(msg[a]*5+100)%256;
	}
	//(5*código_ASCII + 100) % 256.
	
	msg_cripto[a]='\0';
	printf("Mensagem criptografada:\n->%s<-\n", msg_cripto);
	
	

	
	
}