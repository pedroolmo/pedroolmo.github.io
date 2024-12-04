#include <stdio.h>

void main() {

	
	char msg[1000];
	char msg_cod[1000];
	char aux;
	
	int i=0;
	do {
		scanf("%c", &aux);
		msg[i] = aux;
		i++;
	} while(aux != '.');
	msg[i] = '\0';
	
	for(i=0; msg[i] != '.'; i++) {
		msg_cod[i] = 1 + (88 + msg[i] * 15) % 255;
	}
	msg_cod[i] = '.';
	msg_cod[i+1] = '\0';
	
	printf("\nMsg lida: %s", msg);
	printf("\nMsg criptografada: %s", msg_cod);


}