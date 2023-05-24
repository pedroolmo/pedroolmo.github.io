#include <stdio.h>

//----

int hotpo(unsigned int n) {
/*se n for par, hotpo(n) o divide por 2 e, 
caso n seja impar, hotpo(n) o multiplica por 3 e soma 1.
*/
	
	return (n%2==0) ? n/2 : n*3+1;
	
	//if(n % 2 == 0)
	//	return n/2;
	//return n*3 + 1;	
}

int collatz(unsigned int n)  {
	
	int count = 0;
	while(n != 1) {
		n = hotpo(n);
		count++;
	}
	return count;
}


void leIntervalo(int *endmin, int *endmax) {
	int min, max;
	
	do {
		scanf("%d %d", &min, &max);
	}while(min<=0 || max <= 0 || min >= max);
	
	*endmin = min;
	*endmax = max;
}





















