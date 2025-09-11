#include <stdio.h>
#include <math.h>

int main() {
	
	long long int maxint = pow(2,31) - 1;
	
	maxint = maxint + 1000*pow(2,31) - 1;;
	
	printf("\n%lld", maxint);
	
	
	
	return 0;
}