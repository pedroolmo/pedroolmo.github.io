#include <string.h>
#include <stdio.h>

int main() {
	
	char str[] = "Ola, tudo bem? Meu nome eh Pedro";
	char sep[] = " ,?;.!";
	
	
	char *tok = strtok(str, sep);
	
	while(tok != NULL) {
		printf("\nToken encontrado: %s", tok);
		tok = strtok(NULL, sep);		
	}
	
	printf("\nStr original: %s", str);
	

	
	
	return 0;
}