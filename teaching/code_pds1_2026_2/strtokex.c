#include <stdio.h>
#include <string.h>
#define MAXTAM 1000

int main() {
	
	char sep[] = " ?.!#,\n";
	char texto[MAXTAM];
	fgets(texto, MAXTAM, stdin);
	
	printf("\nTexto usuario: %s", texto);
	
	char *tok = strtok(texto, sep);
	while(tok != NULL) {
		printf("\ntoken: *%s*", tok);
		tok = strtok(NULL, sep);
	}
	
	
/*
	char *tok1, *tok2;
	tok1 = strtok(texto, " ");
	printf("\nPrimeiro token: %s", tok1);
	
	tok2 = strtok(NULL, " ");
	printf("\nSegundo token: %s", tok2);	
*/
	
	
	
	
	return 0;
}