#include <stdio.h>

int main() {
	
	char s[] = "ola, tudo bem?? Meu nome eh Pedro.";
	//abde...
	int i, j;
	int cont[256];
	for(i=0; i< 256; i++)
		cont[i] = 0;
	
	for(i=0; s[i] != '\0'; i++)
		cont[s[i]]++;
	
	printf("\n");
	
	for(i=0; i<256; i++){
		for(j=0; j<cont[i]; j++)
			printf("%c", i);
	}
	
	
	return 0;
	
}