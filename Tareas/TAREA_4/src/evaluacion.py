from alergia import Alergia

class EvaluacionEspecifica:
    def __init__(self, puntuacion):
        self.puntuacion = puntuacion
        self.alergias_evaluadas = []

    def evaluar_alergias(self):
        # Ordenar las alergias de mayor a menor valor
        alergias_ordenadas = sorted(Alergia.alergias_registradas, key=lambda x: x.valor, reverse=True)

        for alergia in alergias_ordenadas:
            if alergia.valor <= self.puntuacion:
                self.alergias_evaluadas.append(alergia)
                self.puntuacion -= alergia.valor

            if self.puntuacion == 0:
                break

    def imprimir_resultados(self):
        print("Alimentos a los que el usuario es alérgico:")
        if self.alergias_evaluadas:
            for alergia in self.alergias_evaluadas:
                print(alergia.nombre, alergia.valor)
        else:
            print("No hay alergias registradas para la puntuación proporcionada.")
