##funcion anidada
def greet (name):

    def display_name():
        print("Hi", name)

    display_name()
greet("John")

def greet ():
    name="John"

    return lambda: "Hi " + name

message= greet()
print(message())

##otra funcion 

def calculate():
    num = 1
    def inner_func():
        nonlocal num
        num +=2
        return num
    return inner_func
odd=calculate()

print(odd())
print(odd())
print(odd())

odd2=calculate()
print(odd2())

##otra funcion

def make_multiplier_of(n):
    def multiplier (x):
        return x*n
    return multiplier

##Multiplo de 3
times3= make_multiplier_of(3)

##Multiplo de 5
times5= make_multiplier_of(5)

print(times3(9))

print(times5(3))

print(times5(times3(2)))