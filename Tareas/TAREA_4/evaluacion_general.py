from alergia import Alergia

class EvaluacionGeneral:
    @staticmethod
    def calcular_puntuacion_general(alergias_evaluadas):
        puntuacion_general = sum(alergia.valor for alergia in alergias_evaluadas)
        return puntuacion_general

    @staticmethod
    def imprimir_resultados(alergias_evaluadas):
        alergias_sin_nombre = [alergia for alergia in alergias_evaluadas if alergia.nombre == ""]
        alergias_sin_puntuacion = [alergia for alergia in alergias_evaluadas if alergia.valor == 0]

        if alergias_sin_nombre:
            print("Alergias con nombre pero sin puntuación:")
            for alergia in alergias_sin_nombre:
                print(f"{alergia.nombre}: {alergia.valor}")

        if alergias_sin_puntuacion:
            print("Resultados Desconocidos:")
            for alergia in alergias_sin_puntuacion:
                print(f"{alergia.nombre}: 0")

        # Comparar la cadena de strings con la lista de alergias disponibles
        for alergia_str in alergias_evaluadas:
            alergia_encontrada = next((alergia for alergia in Alergia.alergias_registradas if alergia.nombre == alergia_str), None)
            if alergia_encontrada:
                print(f"{alergia_encontrada.nombre}: Alergico")
