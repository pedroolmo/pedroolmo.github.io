def tamStr(texto):

    cont = 0
    for letra in texto:
        cont = cont + 1
    return cont
  



def adivinha_numero(x):
    cont = 0
    tentativa = None

    while(tentativa != x):
        tentativa = int(input("Tentativa:"))
        
        if(tentativa > x):
            print("O numero é menor")
        elif(tentativa < x):
            print("O numero é maior")
        else:
            print("PARABÉNS! ACERTOU!")
        
        
        cont = cont + 1

    return cont

def compara(secreta, tentativa):
    tam_palavra = tamStr(secreta)
    retorno = '' 
    for pos_letra in range(0, tam_palavra):
        if secreta[pos_letra] == tentativa[pos_letra]:
            retorno = retorno + secreta[pos_letra]
        else:
            retorno = retorno + '*'

    return retorno


secreta = input("Digite a palavra secreta:")

#PRIMEIRA FASE: TAMANHO DA PALAVRA
tamanho_palavra = tamStr(secreta)
n_tentativas = adivinha_numero(tamanho_palavra)
print(n_tentativas)

tentativa = ''
cont = 0
melhor_tentativa = '' 
for i in range(tamanho_palavra):
    melhor_tentativa = melhor_tentativa + '*'
while tentativa != secreta:
    tentativa = input("Digite a palavra:")
    resposta = compara(secreta, tentativa)
    
    
    
    print(resposta)
    cont = cont + 1
    
print(cont + n_tentativas)














