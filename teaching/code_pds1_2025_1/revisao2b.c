#include <stdio.h>

int tamStr(char s[]) {
	int i;
	for(i=0; s[i]!='\0'; i++);

	return i; 	
}

int ehPalindromo(char str[]) {
	int n = tamStr(str);
	int i;
	for(i=0; i<n/2; i++) {
		if(str[i] != str[n-1-i]) 
			return 0;		
	}
	
	return 1;
	
	
	
}
int main(int argc, char *argv[]) {
	
	printf("\n->%d", ehPalindromo(argv[1]));
	
	
}