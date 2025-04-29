#include <stdio.h>
#define MAXTAM 1000


int main() {
	
	unsigned char s[MAXTAM];
	unsigned char s_cripto[MAXTAM];

	printf("\nDigite sua mensagem:\n");
	printf("(digite . para terminar)\n");
	
	//scanf("%c", &s[0]);
	int i = 0;
	do {
		scanf("%c",&s[i]);
		i++;
	} while(s[i-1] != '.' && i < MAXTAM);
	s[i-1] = '\0';
	
	int tam_msg = i-1;
	
	
	printf("\nMensagem criptografada:");
	for(i=0;i<tam_msg;i++) {
		//(5*código_ASCII + 100) % 256.
		s_cripto[i] = (5*s[i] + 100) % 256;
		printf("%c(%u)", s_cripto[i],s_cripto[i]);
	}
	
	
	
	printf("\nMensagem original:>%s", s);
	
	
	
	return 0;
}