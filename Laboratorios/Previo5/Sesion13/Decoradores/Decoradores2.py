def smart_divide (func):
    def inner (a,b):
        print ("Voy a dividir",a, "y",b)
        if b==0:
            print ("No se puede dividir.")
            return
        return func(a,b)
    return inner
@smart_divide
def divide(a,b):
    print(a/b)

divide(2,5)
divide(2,0)