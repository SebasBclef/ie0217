##Sobreescritura de metodos

class Animal:
    name=""

    def eat(self):
        print("OM NOM NOM NOM")
class Dog(Animal):
    def eat(self):
        print("OM NOM NOM NOM (que hueso mas rico)")
labrador=Dog()
labrador.eat()

##Metodo Super

class Animal:
    name=""
    def eat(self):
        print("OM NOM NOM NOM")

class Dog(Animal):
    def eat(self):
        super().eat()
        print("OM NOM NOM NOM (que hueso mas rico,super)")
labrador=Dog()
labrador.eat()

##Herencia Multiple

class Mammal:
    def mammal_info(self):
        print("Soy un mamon")
class WingedAnimal:
    def winged_animal_info (self):
        print("*Flap* *Flap* *Flap* Muevo mis alas")
class Bat(Mammal,WingedAnimal):
    pass

b1=Bat()

b1.mammal_info()
b1.winged_animal_info()