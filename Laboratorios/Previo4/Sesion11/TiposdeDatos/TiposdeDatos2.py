##List slicing in Python

list= ["p","r","o","g","r","a","m","i","z"]

##items de 2 a 4

print(list[2:5])

##items de 2 al final

print(list[5:])

##items de principio a fin

print(list[:])

numeros=[21,34,54,12]

print("Antes del append:",numeros)

numeros.append(32)

print("Despues del append:",numeros)

numeros_primos=[2,3,5]
print("List1:", numeros_primos)
numeros_pares=[4,6,8,10]
print("List2:", numeros_pares)

##Juntando las dos listas

numeros_primos.extend(numeros_pares)

print("Lista despues del append:", numeros_primos)

lenguajes=["Python","Swift","C++","C","Java","Rust","R"]
##borrando el segundo item
del lenguajes[1]
print(lenguajes)
##borrando el ultimo item
del lenguajes[-1]
print(lenguajes)
##borrando los primeros dos items
del lenguajes[0:2]
print(lenguajes)
