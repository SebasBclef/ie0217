class Punto(object):
    def _new_(cls,*args,**kwargs):
        print("Desde 0")
        print(cls)
        print(args)
        print(kwargs)
        #creando un objeto y retornando

        obj = super()._new_(cls)
        return obj
    def _init_(self,x=0,y=0):
        print("Desde el init")
        self.x=x
        self.y=y

class SqPoint(Punto):
    MAX_Inst = 4
    Inst_creadas = 0

    def _new_(cls,*args,**kwargs):
        if (cls.Inst_creadas >= cls.MAX_Inst):
            raise ValueError ("No se puede crear mas")
        cls.Inst_creadas+=1
        return super()._new_(cls)

