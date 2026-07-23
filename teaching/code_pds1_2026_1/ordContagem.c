#include <stdio.h>
#include <stdlib.h>
#define MAXTAM 100

int existe(int x, int v[], int n) {
	int i;
	for(i=0; i<n; i++) {
		if(v[i] == x)
			return 1;
	}
	return 0;
}

void ordCont(int v[], int n) {
	
	int vaux[MAXTAM];
	int count[MAXTAM];
	int i, j, x, contador;
	
	for(i=0; i<n; i++)
		vaux[i] = v[i];
	
	
	for(i=0; i<n; i++) {
		x = v[i];
		contador=0;
		for(j=0; j<n; j++) {
			if(v[j] < x) {
				contador++;
				//printf("\nv[%d]=%d, x=%d", j, v[j], x);
			}
		}
		count[i] = contador;	
		//printf("\ncount[%d] = %d", i, count[i]);
	}	
	
	for(i=0; i<n; i++)
		v[count[i]] = vaux[i];
	
}



int main() {
	
	int cheques[MAXTAM];
	int n = 5 + rand()%6;
	int count=0;
	
	while(count < n) { 
		cheques[count] = 1+rand()%10;
		if(!existe(cheques[count], cheques, count))
			count++;
	}
	
	printf("\nCheques gerados:\n");
	for(count=0; count<n; count++)
		printf("%d ", cheques[count]);
	
	printf("\nCheques ordendos:\n");
	ordCont(cheques, n);
	for(count=0; count<n; count++)
		printf("%d ", cheques[count]);	
	
	
	return 0;
}