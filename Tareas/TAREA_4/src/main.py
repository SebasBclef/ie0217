import timeit
import cProfile
from alergia import Alergia
from evaluacion import EvaluacionEspecifica
from evaluacion_general import EvaluacionGeneral

def main():
    # Inicio de la medición de tiempo
    start_time = timeit.default_timer()

    # Interfaz de usuario
    while True:
        print("\nMenú:")
        print("1. Ingresar su puntuación de alergia, para ver a cuales es alérgico.")
        print("2. Ingresar tipos de alergias, a la lista ya existente.")
        print("3. Mostrar resultados de la opción 1")
        print("4. Construir su propia lista")
        print("5. Salir")

        opcion = input("Seleccione una opción (1-5): ")

        if opcion == '1':
            try:
                # Mostrar lista de alergias disponible
                print("La lista disponible es de:")
                for alergia in Alergia.alergias_registradas:
                    print(f"{alergia.nombre}: {alergia.valor}")

                # Ingresar puntuación de alergia
                puntuacion = int(input("Ingrese la puntuación de alergia: "))
            except ValueError:
                print("Por favor, ingrese un valor numérico válido.")
        
        elif opcion == '2':
            while True:
                # Mostrar lista de alergias disponible
                print("La lista disponible es de:")
                for alergia in Alergia.alergias_registradas:
                    print(f"{alergia.nombre}: {alergia.valor}")

                # Ingresar alergia y valor personalizados
                alergia_usuario = input("Ingrese el nombre de su alergia (o '0' para salir): ")
                if alergia_usuario == '0':
                    break
                try:
                    valor = int(input("Ingrese la puntuación de la alergia: "))
                    # Crea una instancia de Alergia y agrégala a alergias_registradas
                    nueva_alergia = Alergia(alergia_usuario, valor)
                    # Analiza alergias después de ingresar tipos de alergias
                except ValueError:
                    print("Por favor, ingrese un valor numérico válido.")
        elif opcion == '3':
            if Alergia.alergias_registradas:  
                print(f"Su puntuación de alergias es de: {puntuacion}")
                evaluacion = EvaluacionEspecifica(puntuacion)
                evaluacion.evaluar_alergias()
                evaluacion.imprimir_resultados()
            else:
                print("No hay alergias registradas. Registre alergias antes de realizar la evaluación.")

        elif opcion == '4':
            # Lógica para ingresar valores personalizados
            evaluacion_general = EvaluacionGeneral([])
            evaluacion_general.ingresar_valores_personalizados()
            evaluacion_general.calcular_puntuacion_general()
            evaluacion_general.imprimir_resultados()

        elif opcion == '5':
            break
        else:
            print("Opción no válida. Por favor, seleccione una opción del 1 al 5.")

    # Fin de la medición de tiempo
    end_time = timeit.default_timer()
    tiempo_ejecucion_total = end_time - start_time
    print(f"Tiempo de ejecución total: {tiempo_ejecucion_total} segundos")

if __name__ == "__main__":
    main()
     # Perfilar la función main() con cProfile
cProfile.run("main()")
