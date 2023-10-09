#include <stdio.h>
#include <string.h>


void main() {
	
	//char str[] = "alo mundo";
	char str[100];
	
	
	
	
	//*str = 'A';
	str[0] = 'A';
	
	//*(str+4) = 'M'; 
	str[4] = 'M';
	
	str[9] = '!';
	str[10] = '!';
	str[11] = '!';
	
	str[3] = '\0';
	
	
	
	
	printf("\n->%s<-", str);
	printf("\n->%p<-", str);
	printf("\n->%c<-", *str);
	printf("\n->%c<-", *(str+1));
	printf("\n->%c<-", *str+1);
	printf("\n->%p<-", str+1);
	printf("\n->%d<-", '\0');
	
	
	
}