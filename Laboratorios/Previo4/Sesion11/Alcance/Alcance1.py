def greet():
    ##variable local
    mensaje="Holi"

    print("Local",mensaje)
greet()

##ahora, con variable global

mensaje1="Holi, mensaje 1"

def greet1():
    print("Local 1",mensaje1)
greet1()
print("Global 1",mensaje1)

##probando fuera de la funcion

def outer():
    mensaje2="local 2"
    ##funcion anidada
    def inner():
        ##variable no local
        nonlocal mensaje2

        mensaje2="non local"
        print ("inner:",mensaje2)

    inner()

    print("outer:",mensaje2)

outer()