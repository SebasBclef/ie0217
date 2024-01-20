##Sumador de numeros hasta que el usuario ingrese 0
    
total=0

num=int(input("Ingrese un numero: "))
#sume hasta que num=0
while num != 0:
    total+= num
    num= int(input("Digite un numero: "))

print('total= ',total)

edad=18
#la condicion prueba siempre es verdadera

while edad>18:
    print("Usted puede votar")


contador=0
while contador<3:
    print("Dentro del loop")
    contador= contador+1
else:
    print("Dentro del else")