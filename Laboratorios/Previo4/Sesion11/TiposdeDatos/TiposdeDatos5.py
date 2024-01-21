num={2,4,6,8,6,2}
print(num)

num1={21,34,54,12}
print("Set inicial:",num1)
num1.add(32)
print("Set actualizado:",num1)

companies={"Lacoste","Tumi"}
companies_t={"Apple","Google","Samsung"}

companies.update(companies_t)
print(companies)

lenguajes={"Java","Python","Assembly"}

print("Set inicial:",lenguajes)
removedValue=lenguajes.discard("Java")
print("Set actualizado:",lenguajes)

##creando un set de ints

id={112,115,116,118,115}

print("ID de estudiante:", id)

##creando un set de strings

letras={"a","b","c","d","e"}
print("Letras:", letras)

##creando un set mixto:
set1={"Hello",101,-2,"Chao"}
print("Datos mixtos:", set1)

##set vacio
empty_set=set()

#crear un diccionario vacio

empty_diccionario={}
##revisando el tipo de dato dentro del set y el diccionario
print("Datos del set vacio: ",type(empty_set))
print("Datos del diccionario vacio: ",type(empty_diccionario))

frutas=("Tomate","Aguacate","PLATANO")
for frutas in frutas:
    print(frutas)