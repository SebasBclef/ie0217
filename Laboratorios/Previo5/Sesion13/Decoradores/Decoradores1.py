##Funcion Anidada
def outer(x):
    def inner (y):
        return x+y
    return inner

add_five= outer(5)
result= add_five(6)
print(result)

##Funcion como Argumento
def add(x,y):
    return x+y
def calculate(func, x, y):
    return func(x,y)

result= calculate (add,4,6)
print(result)

##retornar una funcion

def greeting (name):
    def hello():
        return "Hello, " + name + "!"
    return hello

greet= greeting("Atlantis")
print(greet())

##otra funcion

def make_pretty (func):
    def inner():
        print("Me decoraron")

        func()
    return inner

def ordinary():
    print("No estoy decorado :(")

decorated_func= make_pretty(ordinary)

decorated_func()

