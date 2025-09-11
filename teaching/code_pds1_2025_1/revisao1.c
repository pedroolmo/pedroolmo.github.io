void aumentaOsDiferentes(int *e1, int *e2) {
	
	if(*e1 != *e2) 
		*e1 += *e2;
	else 
		*e1 = 0;
	*e2 = *e1;	
}