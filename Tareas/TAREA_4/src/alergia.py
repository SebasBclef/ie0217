# alergia.py

class Alergia:
    """
    Clase que representa una alergia con su nombre y valor asociado.

    Attributes:
    - nombre (str): Nombre de la alergia.
    - valor (int): Valor asociado a la alergia.
    """
    alergias_registradas = []

    def __init__(self, nombre, valor):
        """
        Constructor de la clase Alergia.

        Parameters:
        - nombre (str): Nombre de la alergia.
        - valor (int): Valor asociado a la alergia.
        """
        self.nombre = nombre
        self.valor = valor
        Alergia.alergias_registradas.append(self)

# Agregando alergias
Alergia("huevos", 1)
Alergia("cacahuetes", 2)
Alergia("mariscos", 4)
Alergia("fresas", 8)
Alergia("tomates", 16)
Alergia("chocolate", 32)
Alergia("polen", 64)
Alergia("gatos", 128)
Alergia("sardina", 256)
Alergia("gluten", 512)
Alergia("huevo", 1024)
Alergia("nueces",2048)
Alergia("leche",4096)
Alergia("soja",8192)
Alergia("miel",16134)
Alergia("pina",32768)
Alergia("ajo",65536)
Alergia("maiz",131072)
Alergia("kiwi",262144)
Alergia("menta",524288)
Alergia("gambas",1048576)
Alergia("apio",2097152)
Alergia("pescao",4198304)
Alergia("manzanas",8388608)
Alergia("pistacho", 140737488355328)
Alergia("cangrejo", 281474976710656)
Alergia("col", 562949953421312)

