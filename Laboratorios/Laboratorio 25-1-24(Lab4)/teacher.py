from person import Person

#Se inician los atributos de una instancia de la clase Teacher, 
#que incluyen nombre,edad y el id de empleado. Estos atributos son heredados
#de la clase Person.
class Teacher(Person):
    def __init__(self,name,age,employee_id):
        super().__init__(name,age)
        self.employee_id= employee_id
        self.courses_taught=[]
#Aqui, se declara un metodo dentro de la clase, que incluye self y course. Para todos los efectos,
#self hace referencia a la instancia de la clase, y course es el curso a agregar. En este caso,
# son los cursos que va a ensenar el profe
    def assign_course(self,course):
        self.courses_taught.append(course)
#Se pone aqui un metodo para imprimir la informacion a la hora de ejecutar el programa.
#Imprime el ID del estudiante, y los cursos en el que esta. Se utiliza el método join para unir 
#los elementos de la lista self.courses_taught en una cadena, separados por comas. 
    def display_info(self):
        super().display_info()
        print(f"Employee ID: {self.employee_id}\nCourses taught: {', '.join(self.courses_taught)}")