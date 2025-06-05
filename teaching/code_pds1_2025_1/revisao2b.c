#include <stdio.h>
#include <stdlib.h>

#define MAXTAM 100

int tamStr(char s[]) {
	int i;
	for(i=0; s[i]!='\0'; i++);

	return i; 	
}

float randFloat(float min, float max) {
	
	float r01 = (float)rand()/RAND_MAX;
	float r = min + (r01 * (max-min));
	
	return r;
	
	
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

int pessoaMaisPopular(int M[][MAXTAM], int n) {
	
	int i, j;
	int numAmigos;
	int maisAmigos = 0;
	int pop=-1;
	
	for(i=0; i<n; i++) {
		numAmigos = 0;
		for(j=0; j<n; j++) {
			numAmigos += M[i][j];
		}
		
		if(numAmigos >= maisAmigos) {
			maisAmigos = numAmigos;
			pop = i;
		}	
	}
	return pop;
}





int main(int argc, char *argv[]) {
	
	printf("\n->%d", ehPalindromo(argv[1]));
	
	
}