from alergia import Alergia

class EvaluacionEspecifica:
    """
    Clase que realiza la evaluación específica de alergias para una puntuación dada.

    Attributes:
        puntuacion (int): La puntuación de alergia proporcionada por el usuario.
        alergias_evaluadas (list): Lista de alergias evaluadas según la puntuación.

    Methods:
        evaluar_alergias(): Evalúa las alergias registradas para determinar cuáles afectan al usuario.
        imprimir_resultados(): Imprime los resultados de la evaluación.
    """

    def __init__(self, puntuacion):
        """
        Inicializa una nueva instancia de EvaluacionEspecifica.

        Parameters:
            puntuacion (int): La puntuación de alergia proporcionada por el usuario.
        """
        self.puntuacion = puntuacion
        self.alergias_evaluadas = []

    def evaluar_alergias(self):
        ##Evalúa las alergias registradas para determinar cuáles afectan al usuario.

        # Ordenar las alergias de mayor a menor valor
        alergias_ordenadas = sorted(Alergia.alergias_registradas, key=lambda x: x.valor, reverse=True)

        for alergia in alergias_ordenadas:
            if alergia.valor <= self.puntuacion:
                self.alergias_evaluadas.append(alergia)
                self.puntuacion -= alergia.valor

            if self.puntuacion == 0:
                break

    def imprimir_resultados(self):
        ##Imprime los resultados de la evaluación.
        print("Alimentos a los que el usuario es alérgico:")
        if self.alergias_evaluadas:
            for alergia in self.alergias_evaluadas:
                print(alergia.nombre, alergia.valor)
        else:
            print("No hay alergias registradas para la puntuación proporcionada.")
