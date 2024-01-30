from alergia import Alergia

class TiposDeAlergias:
    @staticmethod
    def agregar_alergia(nombre, valor):
        Alergia(nombre, valor)

    @staticmethod
    def analizar_alergias():
        pass

    @staticmethod
    def imprimir_alergias():
        print("Lista de alergias registradas:")
        for alergia in Alergia.alergias_registradas:
            print(f"{alergia.nombre}: {alergia.valor}")
