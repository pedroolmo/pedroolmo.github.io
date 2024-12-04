#include <stdio.h>

//n1 = 10, n2 = 52, n3 = 11
int maior3(int n1, int n2, int n3) {
	
	scanf("%d%d%d", &n1, &n2, &n3);
	int maior = n1;
	if(n2 > n1)
		maior = n2;
	if(n3 > maior)
		maior = n3;
	
	return maior;
}


int main()  {
	
	int a, b, c;
	printf("Digite os tres valores inteiros:");
	scanf("%d%d%d", &a, &b, &c);
	
	int maior = maior3(a, b, c);
	printf("\nMaior: %d", maior);
	
	return 0;
	
}