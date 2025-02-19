void processaSaca(int *endl, int *endp) {
	int aux = *endl;
	*endl = *endl / *endp;
	*endp = aux % *endp;	
}

int verifica(int a, int b) {
	return (a > 0 && b > 0);
}

int nSorteio(int sobra, int k) {
	int div=1;
	int maior_div;
	while(div <= sobra) {
		if(sobra % div == 0 && sobra / div >= k) {
			maior_div = div;
		}
		div++;
	}
}



