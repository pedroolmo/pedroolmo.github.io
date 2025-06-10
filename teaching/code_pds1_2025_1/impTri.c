#include <stdio.h>

void iA(int n) {
	int i;
	for(i=0; i<n; i++)
		printf("*");
	printf("\n");
}

void impTri(int i, int h) {
	if(i <= h){
		
		iA(i);
		impTri(i+1, h);
	}
	if(i<h){
		iA(i);
	}
}

int main() {
	int i, h;
	scanf("%d %d", &i, &h);
	impTri(i, h);
}
	
	
	