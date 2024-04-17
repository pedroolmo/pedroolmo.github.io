def criterio_negativo(valor):
    if valor < 0:
        return True
    return False
    
def criterio_par(valor):
    if valor % 2 == 0:
        return True
    return False


lista = [-3, 5, 12, -57, 34, 1, 58984]

cont = 0
for valor in lista:
    if criterio_par(valor):
        cont = cont + 1
        
print(cont)

#---------------------------

soma = 0
for valor in lista:
    if(criterio_par(valor)):
        soma = soma + valor
    
print(soma)
print(sum(lista))

#------------------------

soma = 0
cont = 0
for valor in lista:
    if(criterio_par(valor)):
        soma = soma + valor
        cont = cont + 1
    
print("Media:", soma/cont)

#---------------------

















