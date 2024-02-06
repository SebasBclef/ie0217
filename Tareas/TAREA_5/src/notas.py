import numpy as np #importante, si se va a usar numpy se debe importar la libreria


# Este arreglo tiene las calificaciones de 5 estudiantes en 5 asignaturas.
# Fueron establecidos manualmente
datos_calificaciones = np.random.randint(1,101, size=(5,5))


# Función para calcular el promedio por estudiante y por asignatura
def calcular_promedios(datos):
    promedios_estudiantes = np.mean(datos, axis=1) #Axis 1 es para las filas (estudiantes), cada fila es un estudiante.
    promedios_asignaturas = np.mean(datos, axis=0) #Axis 0 es para las columnas (asignaturas) cada columna es una asignatura.
#Directamente se usa 'np.mean()' de numpy para los promedios.
    return promedios_estudiantes, promedios_asignaturas

# Encontrar la calificación máxima obtenida por cada estudiante
maximas_calificaciones_estudiantes = np.max(datos_calificaciones, axis=1) #np.max saca el valor mas grande en las filas de estudiantes

# Calcular la suma total de calificaciones por asignatura
suma_total_asignaturas = np.sum(datos_calificaciones, axis=0) #np.sum suma todos los valores por cada columna de asignaturas.

#--------------------------------------------------------------------------------------------------------------------

# Imprimir los datos creados y los resultados obtenidos


#imprime el array principal, deberia ser uno 5x5
print("Conjunto de Datos:")
print(datos_calificaciones)

#se llama a la funcion de calular promedios
promedios_estudiantes, promedios_asignaturas = calcular_promedios(datos_calificaciones)
#se imprimen los promedios

#primero por estudiante
print("\nPromedio por Estudiante:")
print(promedios_estudiantes)

#luego por asignatura
print("\nPromedio por Asignatura:")
print(promedios_asignaturas)

#Ahora se imprime la calificacion maxima
print("\nCalificación Máxima por Estudiante:")
print(maximas_calificaciones_estudiantes)

#Finalmente se imprime la sumatoria por asignatura
print("\nSuma Total de Calificaciones por Asignatura:")
print(suma_total_asignaturas)
