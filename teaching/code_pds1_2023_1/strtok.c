#include <stdio.h>
#include <string.h>

#define MAXTAM 281

void main() {
	
	char sep[] = " \n";
	char tweet[MAXTAM];
	FILE *arq = fopen("tweets.txt", "r");
	char *tok;
	if(arq == NULL) {
		printf("\nArquivo nao existe!");
		return;
	}
	
	FILE *arqa = fopen("hashtags.txt", "a");
	
	
	while(!feof(arq)) {
		fgets(tweet, MAXTAM, arq);
		//printf("\n%s", tweet);
		tok = strtok(tweet, sep);
		while(tok != NULL) {
			if(tok[0] == '#')
				fprintf(arqa, "\n%s", tok);
			tok = strtok(NULL, sep);	
		}
		printf("\n");
		
		
	}
	
	fclose(arq);
	fclose(arqa);
	
	
	
}