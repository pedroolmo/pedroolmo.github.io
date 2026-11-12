#include <stdio.h>
#include <math.h>


int tamStr(char *s) {
	if(s[0] == '\0')
		return 0;
	return 1 + tamStr(s+1);
	
}


int menor(int v[], int n) {
	if(n==1)
		return v[0];
	int ultimo = v[n-1];
	int resto = menor(v, n-1);
	if(ultimo < resto)
		return ultimo;
	return resto;	
}

int main() {
	int v[] = {6, 3, 9, 12};
	int m = menor(v, 4);
	printf("\menor = %d", m);
	return 0;
}