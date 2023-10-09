#include <stdio.h>
#include <math.h>

char leChar() {
	char c;
	scanf("%c", &c);
	return c;
}

int verifica(char c) {
	if(c >= '0' && c <= '9')
		return 1;
	return 0;	
}

int converte(char cdez, char cuni) {
	
	if(!verifica(cdez) || !verifica(cuni))
		return -1;
	
	return (cdez - '0')*10 + (cuni - '0');	
}

int limpaStdin() {	
	int count = 1;
	while(leChar() != '\n') {
		count++;
	}
	return count;
}



void leInt(int *n) {
	int countStdin = 0;
	char c1, c2;	
	*n = -1;
	while(*n == -1) {
		
		c1 = leChar();
		c2 = leChar();
		countStdin = limpaStdin();
		if(countStdin == 1)
			*n = converte(c1, c2);
	}	
	
}

void main() {
	int n, soma=0;
	do {
		leInt(&n);
		soma += n;
	} while(n > 0);
	printf("\nsoma: %d", soma); 
}




