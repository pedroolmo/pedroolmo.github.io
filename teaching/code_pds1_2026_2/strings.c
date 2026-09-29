#include <stdio.h>

int main() {
	
	int a = 9;
	char msg[] = "Pedro Olmo";
	
	msg[1] = '!';
	*(msg+11) = '!';
	*(msg+12) = '!';
	*(msg+13) = '!';
	
	printf("\n%s", msg);
	/*
	printf("\n%p", &msg);
	printf("\n%p", msg);
	printf("\n%c", *msg);
	printf("\n%c", *(msg+2));
	*/



}