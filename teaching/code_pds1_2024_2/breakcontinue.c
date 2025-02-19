#include <stdio.h>


int menor(int a, int b) {
	if(a < b)
		return a;
	return b;
}

int mdc2(unsigned int x, unsigned int y) {
	
	int div = menor(x, y);
	int maxdiv = 1;
	
	while(div >= 1) {
		if(x%div == 0 && y%div == 0) {
			maxdiv = div;
			break;
		}
			
		//return div;
		div--;
	}
	return maxdiv;
}

int mdc(int x, int y) {
	
	int div = 1;
	int maxdiv;
	
	while(div <= x && div <= y) {
		if(x%div == 0 && y%div == 0) {
			maxdiv = div;
		}
		div++;
	}
	return maxdiv;
}


int main() {
	
	int n1, n2;
	
	do {
		scanf("%d %d", &n1, &n2);
	} while(n1 <= 0 || n2 <= 0);


	printf("\nMDC = %d", mdc(n1, n2));
	
	
	return 0;
}