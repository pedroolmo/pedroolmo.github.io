#include <stdio.h>

int main() {
	
	int fidelidade;
	scanf("%d", &fidelidade);
	
	int bonus = 0;
	
	switch(fidelidade) {
		
		case 10:
			bonus += 1000;
			break;
		
		case 9:
			bonus += 500;
			break;
			
			
		case 8:
		case 7:
		case 6:
			bonus += 100;
			break;
			
		case 5: 
			bonus += 10;
			break;
			
		default:
			bonus += 1;

	}
	
	
	printf("\n bonus = %d", bonus);
	
	
	
	
	
}