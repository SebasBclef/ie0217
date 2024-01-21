##Distintos tipos de tuplas

##tupla vacia

my_tuple=()
print(my_tuple)

##tupla con ints

my_tuple=(1,2,3)
print(my_tuple)

##tupla con distintos datos

my_tuple=(1,"Holi",3.4)
print(my_tuple)

##tupla anidada
my_tuple=("rata",[8,4,6],(1,2,3))
print(my_tuple)

##creando una variable string

name="Python"
print(name)

message="Amo a Python"

print(message)

greet="hello"
print(greet[1])
print(greet[-4])
print(greet[1:4])

mensaje="Hola bros"
print(mensaje[0])

##comparando cadenas de strings
str1="Hola bros"
str2="Quiero dormir"
str3="Hola bros"
print(str1==str2)
print(str1==str2)

##usando el operador +
greet="Hola"
nombre=" bro"
result=greet+nombre
print(result)

##iterando a traves del string
greet1="Hello"
for letter in greet1:
    print(letter)
print(len(greet1))

ejemplo="El dijo 'Quien anda ahi?'"
print(ejemplo)

nombre="Ramiro"
pais="Paisano"

print(f"{nombre} es de {pais}")
