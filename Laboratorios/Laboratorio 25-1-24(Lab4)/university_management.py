# Importa las clases Student, Teacher y Course desde los respectivos archivos
from student import Student
from teacher import Teacher
from course import Course

# Crea instancias de la clase Student con diferentes parámetros
student1 = Student("Carlos", 19, "C25467")
student2 = Student("Pedro", 23, "C04367")
student3 = Student("Luis", 17, "C16667")

# Crea instancias de la clase Teacher con diferentes parámetros
teacher1 = Teacher("Jorge Romero", 65, "12345")
teacher2 = Teacher("Luis Diego Marin", 70, "59303")

# Crea instancias de la clase Course con diferentes parámetros
course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

# Matricula al estudiante1 en los cursos 1 y 2
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

# Asigna al profesor1 a los cursos 1 y 2
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

# Muestra la información de estudiante1, profesor1 y curso1
student1.display_info()
teacher1.display_info()
course1.display_info()
