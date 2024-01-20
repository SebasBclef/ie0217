for i in range(5):
    if i==3:
        break
    print("Prueba 1:",i)

for i in range(5):
    if i==3:
        continue
    print("Prueba 2:",i)

##Programa para encontrar los primeros 5 multiplos de 6
    
i=1
print("Multiplos de 6:")
while i<= 10:
    print("6 *",(i),'=',6*i)
    if i>= 5:
        break
    i=i+1

##Programa para imprimir los numeros impares del 1 al 10

print("Numeros impares del 1 al 10:")   
num=0

while num <10:
    num+=1
    if (num%2)==0:
        continue
    print(num)

n=10
#usar el pass dentro del if

if n>10:
    pass
print("Hola tonotos")