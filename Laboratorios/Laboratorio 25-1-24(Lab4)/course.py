class Course ():
    ##Constructor de la clase
    def __init__(self, course_code,course_name):
        self.course_code = course_code
        self.course_name = course_name
    ##Metodo para imprimir informacion. Igual que los anteriores
    ##pero en este se imprime el codigo del curso y el nombre
    def display_info(self):
        print(f"Course_code: {self.course_code}\nCourse name:{self.course_name}")