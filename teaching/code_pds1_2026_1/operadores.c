#include <stdio.h>


int main() {
	
	int x;
	int y;
	
	x = 9 & 6;
	y = 9 && 6;
	
	/*
	x = CONST1 (BIT_A_BIT) CONST2;
	y = CONST1 (OP LOGICO EQUIVALENTE) CONST2;
	
	x = CONST1 & CONST2;
	y = CONST1 && CONST2;
	
	x = CONST1 | CONST2;
	y = CONST1 || CONST2;
	*/
	
	printf("\nx == y? %d", x == y);
	
	
	
	
	
}