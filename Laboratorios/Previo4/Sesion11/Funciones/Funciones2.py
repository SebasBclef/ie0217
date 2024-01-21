import math
##sqrt computa la raiz cuadrada

raiz_cuadrada=math.sqrt(49)

print("La rais cuadrada de 49 es:",raiz_cuadrada)

##pow computa el poder

potencia=pow(4,8)

print("4 elevado a la 8 es: ",potencia)

def add_num(a=7, b=8):
    sum=a+b
    print("Suma:", sum)
##llamando a la funcion con dos argumentos
add_num(2,3)
##llamando a la funcion con 1 argumento
add_num(a=5)
##llamando la funcion con 0 argumentos
add_num()

def info(nombre,apellido):
    print("Nombre:", nombre)
    print("Apellido:", apellido)

info(nombre="Bellamon", apellido="El Oscuro")

##programa para encontrar la suma de varios numeros

def sumatoria(*num):
    resultado=0

    for i in num:
        resultado = resultado + i
    print("Suma = ",resultado)

##llamando la funcion con 3 argumentos
sumatoria(1,2,3)
##llamando la funcion con 2 argumentos
sumatoria(4,5)
