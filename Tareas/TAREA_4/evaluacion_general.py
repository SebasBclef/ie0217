from alergia import Alergia

class EvaluacionGeneral:
    def __init__(self, alergias_usuario):
        self.alergias_usuario = alergias_usuario
        self.valores_sin_nombre = []
        self.nombres_sin_valor = []
        self.puntuacion_general = 0

    def calcular_puntuacion_general(self):

        # Filtrar las alergias que tienen tanto nombre como valor
        alergias_con_nombre_y_valor = [(nombre, valor) for nombre, valor in self.alergias_usuario if nombre and valor is not None]
        # Implementar la lógica para calcular la puntuación general
        # En este ejemplo, simplemente suma todos los valores de las alergias
        self.puntuacion_general = sum(valor for _, valor in alergias_con_nombre_y_valor)
        # Separar alergias sin nombre y nombres sin valor
        valores_sin_nombre = [valor for nombre, valor in alergias_con_nombre_y_valor if not nombre]
        nombres_sin_valor = [nombre for nombre, valor in alergias_con_nombre_y_valor if nombre and valor is None]

        # Identificar valores sin nombre y nombres sin valor
        for alergia in self.alergias_usuario:
            nombre, valor = alergia
            if not nombre:
                self.valores_sin_nombre.append(valor)
            elif valor is None:
                self.nombres_sin_valor.append(nombre)  

    def ingresar_valores_personalizados(self):
        print("Ingrese sus valores personalizados. Ingrese '0' para salir.")
        while True:
            entrada_usuario = input("Ingrese 'nombre', 'valor' o 'nombre valor': ")
            if entrada_usuario == '0':
                break

            # Dividir la entrada del usuario en nombre y valor (si es aplicable)
            entrada_dividida = entrada_usuario.split()
            nombre = ""
            valor = None

            # Analizar la entrada del usuario
            for elemento in entrada_dividida:
                try:
                    valor = int(elemento)
                except ValueError:
                    # Si no se puede convertir a entero, asumimos que es una cadena
                    nombre += elemento + " "

            # Eliminar el espacio adicional al final del nombre
            nombre = nombre.strip()

            # Crear una instancia de Alergia y agregarla a la lista de alergias del usuario
            nueva_alergia = Alergia(nombre, valor)
            self.alergias_usuario.append((nueva_alergia.nombre, nueva_alergia.valor))
            print(f"Se agregó la alergia '{nueva_alergia.nombre}' con valor {nueva_alergia.valor}.")

    def imprimir_resultados(self):
        print("\nResultados de la evaluación general:")
        print("===================================")

        if self.alergias_usuario:
            print("Alergias del usuario:")
            for alergia in self.alergias_usuario:
                print(f"{alergia[0]}: {alergia[1]}")

            print(f"\nPuntuación General: {self.puntuacion_general}")

            # Mostrar valores sin nombre
            if self.valores_sin_nombre:
                print("\nValores sin nombre:")
                for valor in self.valores_sin_nombre:
                    print(f"{valor}")

            # Mostrar nombres sin valor
            if self.nombres_sin_valor:
                print("\nNombres sin valor:")
                for nombre in self.nombres_sin_valor:
                    print(f"{nombre}")

            # Puedes agregar más detalles o cálculos según sea necesario
        else:
            print("No se ingresaron alergias.")