##creando la clase Bicicleta
class Bike:
    name=""
    gear=0
##creando un objeto de la clase
bike1=Bike()
##accesando los atributos
bike1.name="Senora Cleta"
bike1.gear=11

print(f"Name: {bike1.name}, Marchas: {bike1.gear}")

##definiendo la clase empleado

class empleado:
    id_empleado=0 ##definiendo atributos
##creando dos instancias

empleado1=empleado()
empleado2=empleado()

##accesando atributos
empleado1.id_empleado="1001"

print(f"ID Empleado: {empleado1.id_empleado}")

empleado2.id_empleado="1002"

print(f"ID Empleado: {empleado2.id_empleado}")

##definiendo clase Cuarto

class Cuarto:
    largo=0.0
    ancho=0.0

    #metodo para calcular el area

    def calcular_area(self):
        print("Area del Cuarto= ", self.largo*self.ancho)
##creando un objeto de la clase Cuarto
sala_de_estudio= Cuarto()
##asignando valores
sala_de_estudio.largo= 42.5
sala_de_estudio.ancho= 30.8
##accesando el metodo dentro de la clase
sala_de_estudio.calcular_area()

