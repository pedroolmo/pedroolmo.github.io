#include <stdio.h>

#define MAXTAM 1000


void criptografa(char m[]) {
	/*
	*m = 'j';
	m[0] = 'j';
	*(m+2) = 'a';
	m[2] = 'a';
	*/
	
	int i=0;
	for(i=0; m[i]!='.'; i++) {
		m[i] = (m[i] + 100);
	}
	
}

void descriptografa(char m[]) {
	int i=0;
	for(i=0; m[i]!='.'; i++) {
		//m[i] = (m[i] + 100)%256;
		m[i] = (m[i] - 100);
	}
}	


void main() {

	char msg[MAXTAM+1];

	//1 desafio: leitura de dados 
	// (mensagem do usuario)
	
	//printf("\n%p %p", msg, &msg);
	
	/* PRIMEIRA OPCAO: CUIDADO!
	
	scanf("%s", msg);
	
	*/
	
	/* SEGUNDA OPCAO: fgets
	
	fgets(msg, MAXTAM, stdin);
	
	*/
	
	
	/* TERCEIRA OPCAO: FORCA BRUTA! */
	
	
	int i=0;
	do {
		if(i >= MAXTAM) {
			msg[i-1] = '.';
			break;
		}
		scanf("%c", &msg[i]);
		//scanf("%c", msg+i);
		i++;
		
	} while(msg[i-1] != '.');
	
	msg[i] = '\0';
		
	printf("\nmensagem original:\n%s", msg);

	criptografa(msg);

	printf("\nmensagem criptografada:\n%s", msg);
	
	descriptografa(msg);

	printf("\nmensagem original:\n%s", msg);	
	
}




