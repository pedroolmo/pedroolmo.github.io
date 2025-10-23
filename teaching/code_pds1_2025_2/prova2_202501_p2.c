#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pascal(int n) {
	int m[500][500];
	int i, j, valor;
	if(n<=0)
		return;
	printf("1\n");
	if(n > 1) {
		printf("1 1\n");
		m[1][0] = 1;
		m[1][1] = 1;
	}
	for(i=2; i<n; i++) {
		printf("1 ");
		m[i][0] = 1;
		for(j=1; j<i; j++) {
			m[i][j] = m[i-1][j] + m[i-1][j-1];
			printf("%d ", m[i][j]);	
		}
		printf("1\n");
		m[i][j] = 1;
	}	
}


int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	pascal(n);

}






