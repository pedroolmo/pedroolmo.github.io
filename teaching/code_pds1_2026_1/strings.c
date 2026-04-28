#include <stdio.h>
#include <string.h>


int main() {
	char msg[] = "Alo!";
	
	//*msg = 'a';
	msg[0] = 'a';
	msg[2] = msg[2] - 32;
	//*(msg+2) = 'e';
	//msg[2] = '\0';
	//msg[4] = '!';
	//msg[6] = '!';
	
	
	printf("\nEnd onde comeca a str: %p", msg);
	printf("\nConteudo: %s", msg);
	return 0;
}

