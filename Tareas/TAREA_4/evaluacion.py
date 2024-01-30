from alergia import Alergia
class EvaluacionEspecifica:
    def __init__(self, puntuacion):
        self.puntuacion = puntuacion
        self.alergias_detectadas = []

    def evaluar_alergias(self):
        for alergia in Alergia.alergias_registradas:
            if alergia.valor <= self.puntuacion:
                self.alergias_detectadas.append(alergia)

    def imprimir_resultados(self):
        if self.alergias_detectadas:
            print("Alergias detectadas:")
            for alergia in self.alergias_detectadas:
                print(f"{alergia.nombre}: {alergia.valor}")
        else:
            print("No se detectaron alergias para la puntuación proporcionada.")


