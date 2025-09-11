#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeAsteriscos(int n) {
	while(n > 0) {
		printf("*");
		n--;
	}
	printf("\n");
}

void imprimeTriangulo(int i, int h) {
	
	//caso trivial:
	if(i == h)
		imprimeAsteriscos(h);
	else {
		imprimeAsteriscos(i);
		imprimeTriangulo(i+1, h);
		imprimeAsteriscos(i);
	}
}

void imprimeTriangulo(int i, int h) {

	imprimeAsteriscos(i);
	if(i!=h) {
		imprimeTriangulo(i+1, h);
		imprimeAsteriscos(i);
	}

}


int numAsts(int i, int h) {
	if(i == h)
		return h;
	else{
		return 2*i + numAsts(i+1, h);
	}
}

int tamString(char *str) {
	if(str[0] == '\0')
		return 0;		
	return 1 + tamString(str+1);
}

void fillStr(char **str) {
	int i, n = 1+rand()%10;
	*str = (char*)malloc((n + 1)*sizeof(char));
	for(i=0; i<n; i++)
		(*str)[i] = 'A' + rand()%('Z' - 'A' + 1);
	(*str)[i] = '\0';
	
}

int main() {
	srand(time(NULL));
	char *s;
	
	fillStr(&s);
	
	
	printf("\n%s: %d", s, tamString(s));
	
	free(s);
	
	/*
	int lateral, altura;
	scanf("%d %d", &lateral, &altura);
	imprimeTriangulo(lateral, altura);
	printf("\n%d", numAsts(lateral, altura));
	*/
	
}