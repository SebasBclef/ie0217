from alergia import Alergia
from evaluacion import EvaluacionEspecifica
from tiposalergias import TiposDeAlergias
from evaluacion_general import EvaluacionGeneral

# Variables para almacenar la puntuación y la alergia del usuario
puntuacion = 0
alergia_usuario = ""

# Interfaz de usuario
while True:
    print("\nMenú:")
    print("1. Ingresar su puntuación de alergia, para ver a cuales es alérgico.")
    print("2. Ingresar tipos de alergias, para ver cuál es su puntuación de alergia.")
    print("3. Mostrar resultados de la opción 1")
    print("4. Salir")

    opcion = input("Seleccione una opción (1-4): ")

    if opcion == '1':
        try:
            print("La lista disponible es de :")
            for alergia in Alergia.alergias_registradas:
                print(f"{alergia.nombre}: {alergia.valor}")
            puntuacion = int(input("Ingrese la puntuación de alergia: "))
        except ValueError:
            print("Por favor, ingrese un valor numérico válido.")
    
    elif opcion == '2':
        while True:
            print("La lista disponible es de:")
            for alergia in Alergia.alergias_registradas:
                print(f"{alergia.nombre}: {alergia.valor}")

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
        break

    else:
        print("Opción no válida. Por favor, seleccione una opción del 1 al 4.")
