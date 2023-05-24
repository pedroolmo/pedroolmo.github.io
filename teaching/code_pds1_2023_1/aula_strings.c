#include <stdio.h>

void main() {
	
	//char str[] = "Alo!";
	

	char str[1000];
	
	//scanf("%s", str);
	
	int i=0;	
	do {
		scanf("%c", &str[i]);
		i++;
	} while(str[i-1] != '$');
	str[i-1] = '\0';
	
	
	//str[4] = '\0';
	
	i=0;
	while(str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}
	printf("->%d<-", str[i]);
	
	
	printf("\n%s", str);
	printf("\n%p", str);
	printf("\n%c", *str);
	printf("\n%p", &str);	
	printf("\n%c", *(str+1));
	printf("\n%c", str[0]);
	printf("\n%c", str[1]);
	


	
	
}