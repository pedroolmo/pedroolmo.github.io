#include <string.h>
#include <stdio.h>

int main(){
	
	char frase[] = "Ola,,, feliz ano novo para todos nos!";
	
	char *p;

	printf("\nPalavras:");	
	p = strtok(frase, " ,.!;");
	while(p != NULL) {
		printf("\n%s", p);
		p = strtok(NULL, " ,.!;");
	}
	
		
	return 0;
	
}