##funcion recursiva para encontrar un factorial

def factorial(x):
    if x==1:
        return 1
    else:
        return(x*factorial(x-1))
    
num=10

print("El factorial de ",num,"es",factorial(num))

##declarando una funcion lambda
greet= lambda:print("Hola mundo.Funcion Lambda.")
##llamando la funcion lambda
greet()

##lambda de un argumento

greet_user= lambda name: print("TRAPPED IN THE PURGATORY ",name)

##llamada lambda
greet_user("A LIFELESS OBJECT ALIVEEEEE")

##programa para filtrar solo los numeros pares

lista=[1,5,4,6,8,11,3,12]

nueva_lista=list(filter(lambda x:(x%2==0),lista))

print(nueva_lista)

##programa para multiplicar por 2 cada objeto en una lista

lista1=[1,5,4,6,8,11,3,12]

nueva_lista1=list(map(lambda x:x*2,lista1))

print(nueva_lista1)
