#include <stdio.h>

/*
 A cada 3 peças, o cliente paga apenas 2.
Após essa regra:
Desconto de 10% se o total > R$300,00.
Desconto de 5% se o total > R$100,00.
*/

float calculaDesconto(float preco, int qtd) {
	int qtd_gratis = qtd/3;
	qtd = qtd - qtd_gratis;
	float total = preco*qtd;
	if(total > 300)
		return total * 0.9;
	if(total > 100)
		return total * 0.95;
	return total;
}

/*
Preço ≤ 1 ou > 2000,
Quantidade ≤ 0 ou > 30.
*/
int verificaValores(float preco, int qtd) {
	if(preco <= 1 || preco > 2000 || 
	   qtd <= 0 || qtd > 30)
	   return 0;
	return 1;
}

/*
‘P’ (PIX) ou ‘D’ (dinheiro) → desconto de 5%.
‘C’ (cartão de crédito) → acréscimo de 3%.
‘L’ (cartão da loja) → desconto de 5% ou desconto de 50%, conforme sorteio:
Utilize a função sorteio() (implementada em prova1.h), que retorna um número entre 0 e 9.
Se o número sorteado for igual ao dígito menos significativo do valor total da compra (antes dos descontos), o cliente recebe 50% de desconto em vez de 5%.
Exemplo: Se o sorteio retorna 7 e o valor total é R$1357,48, o cliente recebe 50% de desconto.
*/

int pagamento(float *total, char pagto) {
	/*if(pagto != 'P' && pagto != 'C' && 
	   pagto != 'L' && pagto != 'D')
	   return -1;
	*/
	   
	switch(pago) {
		case 'P':
		case 'D':
			*total = *total * 0.95;
			return 0;
		case 'C':
			*total = *total * 1.03;
			return 0;
		case 'L':
			int n = sorteio();
			int dig = (int)(*total)%10;
			if(n==dig)
				*total = *total/2;
			else
				*total = *total * 0.95;
			return 0;
		default:
			return -1;
	}
	
}

