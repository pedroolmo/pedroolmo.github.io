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
	
	
	//regra: (5*código_ASCII + 100) % 256
	char msg_cripto[10000];
	//for(i=0; msg[i] != '\0';i++) {
	//for(i=0; msg[i] != '#';i++) {
	for(i=0; i<n ;i++) {
		msg_cripto[i] = (5*msg[i]+100)%256;		
	}
	
	msg_cripto[i] = '\0';
	printf("\nmsg cripto:");// %s", msg_cripto);
	for(i=0; i<n; i++)
		printf("%c", msg_cripto[i]);
	
	
	/*
	printf("\nTESTE:\n");
	for(i=0; i<100; i++)
		printf("%d ", msg[i]);
	*/
	

	


}