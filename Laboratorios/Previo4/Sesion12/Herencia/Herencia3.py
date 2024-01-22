##Herencia Multinivel

class SuperClass:

    def super_method (self):
        print("Super Class method called")
    
class DerivedClass1(SuperClass):
    def derived1_method(self):
        print("Derived class 1 method called")

class DerivedClass2(DerivedClass1):
    def derived2_method(self):
        print("Derived class 2 method called")

d2 = DerivedClass2()
d2.super_method()
d2.derived1_method()
d2.derived2_method()
###############
##MRO

class SuperClass1:
    def info(self):
        print("Super Class 1 llamado")
class SuperClass2:
    def info(self):
        print("Super Class 2 llamado")
class Derived(SuperClass1, SuperClass2):
    pass
d1=Derived()
d1.info()