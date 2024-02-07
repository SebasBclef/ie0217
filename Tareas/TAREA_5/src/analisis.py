import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns  # Importar Seaborn

class ProcesadorAeropuertos:
    def __init__(self, df):
        self.df = df
        self.condiciones_filtrado = []

    def agregar_condicion_filtrado(self, condicion):
        self.condiciones_filtrado.append(condicion)

    def generar_informes(self):
        aeropuertos = self.df['Airport Code'].unique()

        for aeropuerto in aeropuertos:
            informe = {
                'Aeropuerto': aeropuerto,
                'Tarifas': self.obtener_tarifas(aeropuerto),
                'Ciudades': self.obtener_ciudades(aeropuerto),
                'Pasajeros': self.obtener_pasajeros(aeropuerto),
            }
            yield informe

    def obtener_tarifas(self, aeropuerto):
        tarifas = self.df[self.df['Airport Code'] == aeropuerto]['Average Fare ($)']
        return list(tarifas)

    def obtener_ciudades(self, aeropuerto):
        ciudades = self.df[self.df['Airport Code'] == aeropuerto]['City Name']
        return list(ciudades)

    def obtener_pasajeros(self, aeropuerto):
        pasajeros = self.df[self.df['Airport Code'] == aeropuerto]['2022 Passengers (10% sample)']
        return list(pasajeros)

    def filtrar_datos(self):
        for _, fila in self.df.iterrows():
            cumple_condiciones = all(condicion(fila) for condicion in self.condiciones_filtrado)
            if cumple_condiciones:
                yield fila
    def iterador_filtrado(self):
        for _, fila in self.df.iterrows():
            cumple_condiciones = all(condicion(fila) for condicion in self.condiciones_filtrado)
            if cumple_condiciones:
                yield fila
    def generar_tarifas_ordenadas(self):
        todas_tarifas = self.df['Average Fare ($)']
        tarifas_ordenadas = sorted(todas_tarifas.dropna(), reverse=True)
        yield from tarifas_ordenadas


try:
    # Cargando el DataFrame
    df = pd.read_csv('Tarifas.csv', header=None)
    df.columns = df.iloc[1]
    df = df[2:]

    # Eliminando columnas que estén completamente llenas de NaN
    df.dropna(axis=1, how='all', inplace=True)

    # Para borrar el título
    value_to_remove = "Average Domestic Airline Itinerary Fares By Origin City for 2013 Ranked by Total Number of Domestic Passengers in 2022"
    df = df[df.apply(lambda row: str(value_to_remove) not in row.astype(str).values, axis=1)]

    # Eliminar comas en las columnas numéricas
    df['Average Fare ($)'] = df['Average Fare ($)'].str.replace(',', '')
    df['Inflation Adjusted Average Fare ($) (Base Year: 2023)'] = df['Inflation Adjusted Average Fare ($) (Base Year: 2023)'].str.replace(',', '')
    df['2022 Passengers (10% sample)'] = df['2022 Passengers (10% sample)'].str.replace(',', '')

    # Convertir las columnas numéricas a tipo numérico
    df['Average Fare ($)'] = pd.to_numeric(df['Average Fare ($)'], errors='coerce')
    df['Inflation Adjusted Average Fare ($) (Base Year: 2023)'] = pd.to_numeric(df['Inflation Adjusted Average Fare ($) (Base Year: 2023)'], errors='coerce')
    df['2022 Passengers (10% sample)'] = pd.to_numeric(df['2022 Passengers (10% sample)'], errors='coerce')

    # Realizar un análisis estadístico
    estadisticas = df.describe()
    print("---------------------ANALISIS ESTADISTICO-----------------")
    print(estadisticas)

    # Generar informes detallados por aeropuerto
    procesador = ProcesadorAeropuertos(df)

    filtro_por_aeropuerto = lambda fila: fila['State Name'] == 'DE' #filtro puesto sobre los aeropuertos por estado
    procesador.agregar_condicion_filtrado(filtro_por_aeropuerto)
    print("-----------------EJEMPLO DE FILTROS-----------------------")
    for fila in procesador.filtrar_datos():
        print(fila)
    # Iterar sobre los informes generados y filtrados
    print("-----------------INFORME CON GENERADOR-----------------------")   
    for informe in procesador.generar_informes():
        print(informe)
    procesador = ProcesadorAeropuertos(df)
    print("-----------------ORGANIZANDO PRECIOS CON UN GENERADOR----------------------")   
    print("Tarifas ordenadas de mayor a menor:")
    tarifas_ordenadas = procesador.generar_tarifas_ordenadas()
    tarifas_en_una_linea = ', '.join(map(str, tarifas_ordenadas))
    print(tarifas_en_una_linea)
#-------------------------graficos-------------------------------------------------------
    #----------histograma-------------------
    tarifas = df['Average Fare ($)'].dropna()

    # Crear un histograma
    plt.figure(figsize=(10, 6))
    plt.hist(tarifas, bins=20, color='skyblue', edgecolor='black')
    plt.title('Distribución de Tarifas')
    plt.xlabel('Tarifa')
    plt.ylabel('Frecuencia')
    plt.show()

#----------Grafico de dispersion-----------------------------------
    # Seleccionar las columnas relevantes
    datos_grafico = df[['2022 Passengers (10% sample)', 'Average Fare ($)']]

    # Eliminar filas con valores nulos
    datos_grafico = datos_grafico.dropna()

    # Ordenar por el precio de manera descendente
    datos_grafico = datos_grafico.sort_values(by='Average Fare ($)', ascending=False)

    plt.figure(figsize=(12, 8))
    plt.scatter(datos_grafico['2022 Passengers (10% sample)'], datos_grafico['Average Fare ($)'], color='coral', alpha=0.5)
    plt.xlabel('Pasajeros')
    plt.ylabel('Tarifa Promedio ($)')
    plt.title('Relación entre Tarifas y Pasajeros')
    plt.show()
#----------Grafico de dispersion con Seaborn -----------------------------------

    plt.figure(figsize=(12, 8))
    sns.scatterplot(x=datos_grafico.index, y=datos_grafico['Average Fare ($)'], color='blue', s=50)
    plt.title('Relación entre Índice y Tarifa Promedio')
    plt.xlabel('Índice')
    plt.ylabel('Tarifa Promedio ($)')
    plt.show()

#----------Grafico de barras con Seaborn -----------------------------------
    plt.figure(figsize=(12, 8))
    sns.barplot(x=df['State Name'], y=df['Average Fare ($)'], color='skyblue')
    plt.title('Tarifas por Estado')
    plt.xlabel('Estado')
    plt.ylabel('Tarifa Promedio ($)')
    plt.xticks(rotation=90, ha='right', rotation_mode='anchor', fontsize=8)
    plt.tight_layout()
    plt.show()

except FileNotFoundError:
    print("Error, archivo no encontrado.")

except pd.errors.EmptyDataError:
    print("Error: El archivo está vacío.")