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


int main() {
	
	int x=0, y=1;
	int *ex;
	x = 0;
	
	ex = &x;
	*ex = *ex + 2;
	ex = &y;
	*ex = *ex + x;
	
	printf("\nconteudo de x: %d", x);
	printf("\nconteudo de y: %d", y);
	printf("\n end de x: %p\nend de ex: %p", ex, &ex);
	
	return 0;	
}