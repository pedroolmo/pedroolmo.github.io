#include <stdio.h>
#define MAXTAM 1000


int main() {
	
	char s[MAXTAM];

	printf("\nDigite seu nome:\n");
	printf("(digite . para terminar)\n");
	
	//scanf("%c", &s[0]);
	int i = 0;
	do {
		scanf("%c",&s[i]);
		i++;
	} while(s[i-1] != '.' && i < MAXTAM);
	s[i-1] = '\0';
	
	printf("\n->%s", s);
	
	
	
	return 0;
}