try:
    num=10
    den=0 #se induce a error para que salga la excepcion. En este caso, se pide dividir entre 0.

    resultado=num/den

    print(resultado)
except:
    print("Error: Denominador no debe ser 0.")

####
    
try:
    numeros_pares=[2,4,6,8]
    print(numeros_pares[5]) #se induce a error para que salga la excepcion. En este caso, se pide indice 5 cuando el max es 4.
except IndexError:
    print("Indice fuera de rango.")

### programa para encontrar el reciproco de numeros enteros

try:
    num=int(input("Digite un numero: "))

    assert num % 2 == 0
except:
    print("No es un numero par.")

else:
    reciprocal=1/num
    print(reciprocal)
########
print("NUEVO PROGRAMA :D")
try:
    num=10
    den=0 #se induce a error para que salga la excepcion. En este caso, se pide dividir entre 0.

    resultado=num/den

    print(resultado)
except:
    print("Error: Denominador no debe ser 0.")

finally:
    print("Fin de programa.") 

##Programa para que el usuario defina excepciones
    
class InvalidAgeException (Exception):
    "Raised when the input value is less than 18"
    pass
##Numero a adivinar

num=18

try:
    input_num=int(input("Enter a number: "))
    if input_num < num:
        raise InvalidAgeException
    else:
        print("Elegible para votar")

except InvalidAgeException:
    print("Exception ocurred: Invalid Age.") 

###Programa nuevo
print("NUEVO PROGRAMA :D")

class SalaryNotInRangeError(Exception):
    """Exception raised for errors in the input salary.
    
    Attributes:
        salary -- input salary that cuased the error
        message -- explanation of the error
        """
    def __init__ (self, salary, message="Salary is not in (5k,15k) range:"):
        self.salary=salary
        self.message=message
        super().__init__(self.message)

salary= int(input("Enter salary amount: "))
if not 5000 < salary < 15000:
    raise SalaryNotInRangeError(salary)