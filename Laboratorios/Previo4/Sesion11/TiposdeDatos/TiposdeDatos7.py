##Prueba de membresia para llaves de diccionario

cuadrados={1:1,3: 9,5:25,7:49,9:81}
#output:True

print(1 in cuadrados) #imprime True

print(2 not in cuadrados) #imprime true

#pruebos de membrecia para la llave, no  para el valor
print(49 in cuadrados)#imprime False

##iterando un diccionario
cuadrados={1:1,3: 9,5:25,7:49,9:81}

for i in cuadrados:
    print(cuadrados[i])