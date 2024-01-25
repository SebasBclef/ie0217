class Person:
    #Se inician los atributos de una instancia de la clase Person, 
    #que incluyen nombre y edad
    def __init__ (self,name,age):
        self.name = name
        self.age = age
    #Se pone aqui un metodo para imprimir la informacion a la hora de ejecutar el programa
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")
