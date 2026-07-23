#include <stdio.h>

int main() {
	
	//int nums[] = {1, 2, 3, 4, 5};
	
	char msg[1000];
	int i, count[256];
	for(i=0; i<256; i++)
		count[i] = 0;
	
	//ler a msg do teclado:
	i=0;
	do {
		scanf("%c", &msg[i]);
		i++;
	} while(msg[i-1] != '.');
	
	//opcao 2:
	msg[i] = '\0';
	
	printf("\nMsg original: %s", msg);
	
	
	for(i=0; msg[i] != '\0'; i++) {
		/*
		char c = msg[i];
		count[c]++;
		*/
		count[msg[i]]++;
	}
	
	/*
	int maior_cont = -1;
	char char_mais_freq;
	for(i=0; i<256; i++) {
		if(count[i] > maior_cont) {
			char_mais_freq = i;
			maior_cont = count[i];
		}
	}
	*/
	char char_mais_freq = 0;
	for(i=1; i<256; i++) {
		if(count[i] > count[char_mais_freq]) {
			char_mais_freq = i;
		}
	}
	
	
	
	
	printf("\nChar mais freq: %c", char_mais_freq);
	printf("\nContagem: %d", count[char_mais_freq]);
	
	

	return 0;
}

