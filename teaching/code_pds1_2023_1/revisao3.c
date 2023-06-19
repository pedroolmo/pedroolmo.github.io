/*

i = 3
n = 5

***
****
*****
****
***

*/

void impAst(int n) {
	if(n == 1) {
		printf("*\n");
		return;
	}
	printf("*");
	impAst(n-1);
}

void impTri(int i, int n) {
	if(i == n) {
		impAst(n);
		return;
	}
	impAst(i);
	impTri(i+1, n);	
	impAst(i);
}

void impTri(int i, int n) {
	impAst(i);
	if(i != n) {
		impTri(i+1, n);	
		impAst(i);
	}
}

int multi(int n, int k) {
	
	if(n == 0 || k == 0)
		return 0;	
	if(n==1)
		return k;
	if(k==1)
		return n;
	return k + multi(n-1, k);
	
}

int menorDif(int v[], int n) {
	
	if(n==2) {
		return abs(v[1] - v[0]);
	}
	
	int dif1 = v[n-1] - v[n-2];
	int dif2 = menorDif(v, n-1);
	
	if(dif2 < dif1)
		return dif2;
	return dif1;
}

int tamString(int i, char *str) {
	
	if(str[0] == '\0') {
		return 0;
	}
	return 1 + tamString(str+1);
}

void fillStr(char **str) {
	int n = 1 + rand()%10;
	
	*str = (char*)malloc(n*sizeof(char));
	int i;
	for(i=0; i<n; i++) {
		(*str)[i] = 'A' + rand()%('Z'-'A'+1);
	}
}

























