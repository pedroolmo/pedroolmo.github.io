#include <stdio.h>

double raizb(int x, int n) {
    if(n == 1) return x/2.0;
    double prev = raizb(x, n-1);
    return 0.5 * (prev + x/prev);
}

int main()
{
    
    int x, n;
	printf("\nDigite x e n: ");
	scanf("%d %d", &x, &n);
    printf("\n%f", raizb(x, n));

    return 0;
}