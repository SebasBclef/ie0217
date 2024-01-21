def greet():
    print("Hola mundo.")
##llamando la funcion
greet()
print("Fuera de la funcion.")

##funcion con 2 argumentos

def agregar_num (num1,num2):
    sum=num1+num2
    print("Suma:",sum)

agregar_num(num1=5,num2=4)

##definicion de funciones

def encontrar_cuadrados(num):
    res=num*num
    return res
cuadrado=encontrar_cuadrados(5)
print("Cuadrado:", cuadrado)
