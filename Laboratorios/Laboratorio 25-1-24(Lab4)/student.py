from person import Person

#Se inician los atributos de una instancia de la clase Student, 
#que incluyen nombre,edad y student_id. Estos atributos son heredados
#de la clase Person.
class Student(Person):
    def __init__(self,name,age,student_id):
        super().__init__(name,age)
        self.student_id= student_id
        self.courses=[]
#Aqui, se declara un metodo dentro de la clase, que incluye self y course. Para todos los efectos,
#self hace referencia a la instancia de la clase, y course es el curso a agregar.
    def enroll_course(self,course):
        self.courses.append(course)
    #Se pone aqui un metodo para imprimir la informacion a la hora de ejecutar el programa.
    #Imprime el ID del estudiante, y los cursos en el que esta
    def display_info(self):
        super().display_info()
        print(f"Student ID: {self.student_id}\nCourses: {', '.join(self.courses)}")

