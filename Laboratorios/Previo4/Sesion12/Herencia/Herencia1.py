class Animal:
    name=""

    def eat(self):
        print("Nom nom, soy un Tiranido")

##heredando de animal
class Dog (Animal):
    #nuevo metodo
    def display (self):
        ##accesando el atributo del niombre
        print("My name is", self.name)
##creando un objeto de la subclase
labrador=Dog()
##creando una superclase

labrador.name="SLIM SHADY"
labrador.eat()
labrador.display()
#######################
class Polygon:
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    def inputSides(self):
        self.sides = [float(input("Ingrese su lado " + str(i+1) + " : ")) for i in range(self.n)]

    def dispSides(self):
        for i in range(self.n):
            print("Side", i+1, "is", self.sides[i])

class Triangle(Polygon):
    def __init__(self):
        super().__init__(3)

    def findArea(self):
        a, b, c = self.sides
        # Calculando el semiperímetro
        s = (a + b + c) / 2
        area = (s * (s-a) * (s-b) * (s-c))**0.5
        print("El área del triángulo es %0.2f" % area)

# Creando una instancia de triángulo
t = Triangle()
# Clase para insertar los lados de un triángulo
t.inputSides()
# Mostrar los lados de un triángulo
t.dispSides()
# Calculando y mostrando el área del triángulo
t.findArea()

