from alergia import Alergia

class EvaluacionGeneral:
    def __init__(self, alergias_usuario):
        # Inicializamos la clase con la lista de alergias del usuario, listas auxiliares y puntuaciones.
        self.alergias_usuario = alergias_usuario
        self.valores_sin_nombre = []
        self.nombres_sin_valor = []
        self.puntuacion_general = 0
        self.contador_alergias_con_valor = 0  # Nuevo atributo para contar alergias con nombre y valor

    def calcular_puntuacion_general(self):
        # Filtramos las alergias que tienen tanto nombre como valor
        alergias_con_nombre_y_valor = [(nombre, valor) for nombre, valor in self.alergias_usuario if nombre and valor is not None]
        
        # Implementamos la lógica para calcular la puntuación general
        self.puntuacion_general = sum(valor for _, valor in alergias_con_nombre_y_valor)
        
        # Contamos alergias con nombre y valor
        self.contador_alergias_con_valor = len(alergias_con_nombre_y_valor)
        
        # Separar alergias sin nombre y nombres sin valor
        valores_sin_nombre = [valor for nombre, valor in alergias_con_nombre_y_valor if not nombre]
        nombres_sin_valor = [nombre for nombre, valor in alergias_con_nombre_y_valor if nombre and valor is None]

        # Identificamos valores sin nombre y nombres sin valor
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

            # Dividimos la entrada del usuario en nombre y valor (si es aplicable)
            entrada_dividida = entrada_usuario.split()
            nombre = ""
            valor = None

            # Analizamos la entrada del usuario
            for elemento in entrada_dividida:
                try:
                    valor = int(elemento)
                except ValueError:
                    # Si no se puede convertir a entero, asumimos que es una cadena
                    nombre += elemento + " "

            # Eliminamos el espacio adicional al final del nombre
            nombre = nombre.strip()

            # Creamos una instancia de Alergia y la agregamos a la lista de alergias del usuario
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
            
            # Imprimimos el promedio
            if self.contador_alergias_con_valor > 0:
                promedio = self.puntuacion_general / self.contador_alergias_con_valor
                print(f"\nPromedio: {promedio}")

            # Mostramos valores sin nombre
            if self.valores_sin_nombre:
                print("\nValores sin nombre:")
                for valor in self.valores_sin_nombre:
                    print(f"{valor}")

            # Mostramos nombres sin valor
            if self.nombres_sin_valor:
                print("\nNombres sin valor:")
                for nombre in self.nombres_sin_valor:
                    print(f"{nombre}")

            # Puedes agregar más detalles o cálculos según sea necesario
        else:
            print("No se ingresaron alergias.")
