#include <stdio.h>

int main() {
	
	char s[] = "Alo!";
	
	*s = 'O';
	*(s+2) = 'a';
	
	//ou
	
	s[0] = 'O';
	s[2] = 'a';
	
	s[4] = '!';
	s[6] = '!';
	
	
	printf("\n%s", s);
	printf("\nEnd do primeiro char: %p", s);
	printf("\nConteudo do primeiro end: %c", *s);
	printf("\n1: %c", *s+1);
	printf("\n2: %c", *(s+1));
	printf("\n3: %p", s+1);
	return 0;
}