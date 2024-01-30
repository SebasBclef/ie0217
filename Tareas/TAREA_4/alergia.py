# alergia.py

class Alergia:
    alergias_registradas = []

    def __init__(self, nombre, valor):
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
