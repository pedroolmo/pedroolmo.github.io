#include <stdio.h>

#define NUM_COLUNAS 5
#define NUM_LINHAS 5

voi

void organizaMatriz(int M[][NUM_COLUNAS]) {
	
	int i, j, k, pos_ins;
	for(i=0; i<NUM_COLUNAS; i++) {
		pos_ins = 0;
		for(j=0; j<NUM_LINHAS; j++) {
			if(M[j][i] == 0) {
				for(k=j; k>pos_ins; k--) {
					M[k][i] = M[k-1][i];
				}
				M[pos_ins][i] = 0;
				pos_ins++;
				
			}
			
		}
	}
	
}