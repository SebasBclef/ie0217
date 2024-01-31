from alergia import Alergia

class TiposDeAlergias:
    def __init__(self):
        self.alergias_usuario = []

    def agregar_alergia(self, alergia_usuario, valor):
        alergia_existente = self.obtener_alergia_por_nombre(alergia_usuario)
        
        if alergia_existente:
            # Alergia ya existe, mostrar mensaje de error o manejar según sea necesario
            print(f"La alergia '{alergia_usuario}' ya existe con valor {alergia_existente[1]}.")
        else:
            # Añadir nueva alergia
            self.alergias_usuario.append((alergia_usuario, valor))
            # Imprimir nueva adición a la lista
            print(f"Se agregó la alergia '{alergia_usuario}' con valor {valor}.")

    def obtener_alergia_por_nombre(self, nombre):
        for alergia in self.alergias_usuario:
            if alergia[0].lower() == nombre.lower():
                return alergia
        return None

    def imprimir_resultados(self):
        print("Alergias del usuario:")
        for alergia, valor in self.alergias_usuario:
            print(f"{alergia}: {valor}")
