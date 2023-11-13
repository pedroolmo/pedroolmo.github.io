// como funciona o strtok
//char * strtok ( char * str, const char * delimiters );


#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
	
	char str[] = "28347,Ahmad Jamal, 8.5, 4.8";
	char *tok;
	float nota1, nota2;
	
	tok = strtok(str, ",");
	printf("\nmatricula: %s", tok);
	
	tok = strtok(NULL, ",");
	printf("\nnome: %s", tok);
	
	tok = strtok(NULL, ",");
	nota1 = atof(tok);
	printf("\nnota 1: %.2f", nota1);
	
	tok = strtok(NULL, ",");
	nota2 = atof(tok);
	printf("\nnota 2: %.2f", nota2);

return 0;	
}

