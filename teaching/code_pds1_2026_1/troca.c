#include <stdio.h>

/*

1. & é usado para:
acessar o end de memoria que uma var faz acesso.
Ex: printf("\nend de x %p", &x);

2. %p é o especificador de formato de enderecos de memoria
Ex: printf("\nend de x %p", &x);

3. Para declarar uma variável que armazena endereços (ponteiros):
tipo *nome_var, aux, y, *a;
Ex:
//variável que armazena endereços de tipos inteiros
int *end_aux;

4. Para acessar o conteúdo de um endereço de memória:
*var_end;
Ex:
x = *ex + 2;





*/

void troca_boba(int a, int b) {
	int aux = a;
	a = b;
	b = aux;
	printf("\ndentro da funcao: x=%d, y=%d", a, b);
}
	

void troca(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
	printf("\ndentro da funcao: x=%d, y=%d", *a, *b);
}
	

int main() {
	
	int x=-1, y=1;
	troca_boba(x, y);
	printf("\nx=%d, y=%d", x, y);
	
	
	troca(&x, &y);
	printf("\nx=%d, y=%d", x, y);
	
	return 0;	
}