###Sobrecarga de operadores
class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "({0}, {1})".format(self.x, self.y)

    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)

p1 = Point(1, 2)
p2 = Point(2, 3)


print(p1 + p2)

###Sobrecarga de operadores de comparacion
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        ##sobrecargar operador
    def __lt__(self,other):
        return self.age <other.age
p1= Person("Alicia Encadenada",20)
p2= Person ("Jardin del Sonido",30)

print(p1<p2)
print(p2<p1)

##polimorfismo y sobre escritura de metodos

from math import pi

class Shape:
    def __init__(self,name):
        self.name = name

    def area(self):
        pass
    def fact(self):
        return "SOY UNA FIGURA EN DOS DIMENSIONES"
    def __str__ (self):
        return self.name
class Square(Shape):
    def __init__(self,length):
        super().__init__("Square")
        self.length=length

    def area(self):
        return self.length**2
    
    def fact(self):
        return "Squares have each angle equal to 90 degrees."
    
class Circle(Shape):
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius
    def area (self):
        return pi*self.radius**2
a= Square (4)
b= Circle (7)
print(b)
print(b.fact())
print(a.fact())
print(b.area())