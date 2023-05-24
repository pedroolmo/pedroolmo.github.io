#include <stdio.h>

int num_dias(int mes) {
	
	int num_dias = 0;
	
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7
	   mes == 8 || mes == 10 || mes == 12) {
		num_dias = 31;
	}
	else if(mes == 2) {
		num_dias = 28;
	}
	else 
		num_dias = 30;
	
	return num_dias;
}
	
	
	
}