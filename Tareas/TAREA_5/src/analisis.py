import pandas as pd

try:
    class NumericDataStatisticsCalculator:
        def __init__(self, data_frame):
            self.df = data_frame

        def calculate_statistics(self):
            # Filtrar solo las columnas numéricas
            numeric_df = self.df.select_dtypes(include='number')

            # Calcular estadísticas
            statistics = {
                'Media': numeric_df.mean(),
                'Mediana': numeric_df.median(),
                'Desviacion Estandar': numeric_df.std(),
                'Primer Cuartil (25%)': numeric_df.quantile(0.25),
                'Segundo Cuartil (50%)': numeric_df.quantile(0.5),
                'Tercer Cuartil (75%)': numeric_df.quantile(0.75)
            }

            return pd.DataFrame(statistics)
        
#--------------------------------------------------------------------------------------------------------------
    #Cargando el DataFrame
    df = pd.read_csv('Tarifas.csv', header=None)  # Evitar que la primera fila se trate como encabezado
    df.columns = df.iloc[1]  # Asignar la segunda fila como encabezado de columnas
    df = df[2:] 
    # Eliminar columnas que estén completamente llenas de NaN
    df.dropna(axis=1, how='all', inplace=True)

    numeric_statistics_calculator = NumericDataStatisticsCalculator(df)
    
    #para borrar el titulo
    value_to_remove = "Average Domestic Airline Itinerary Fares By Origin City for 2013 Ranked by Total Number of Domestic Passengers in 2022" 
    df = df[df.apply(lambda row: str(value_to_remove) not in row.astype(str).values, axis=1)]
    # Si todo se carga correctamente
    print("Archivo cargado correctamente. Se imprime un pedazo de ese archivo para visualizar que se cargó correctamente.")
    print(df.head())
    print(df.columns)
#-------------------------------------------------------------------------------------------------------------- 
#ideas para graficos  
    df.columns = df.columns.str.strip()
    tendencias_por_ciudad = df.groupby(['City Name', 'Average Fare ($)'])['2022 Passengers (10% sample)'].sum()
    print("Tendencias entre ciudad, precio y pasajeros")
    print(tendencias_por_ciudad)

    numeric_statistics_result = numeric_statistics_calculator.calculate_statistics()
    print("Estadísticas Descriptivas para Columnas Numéricas:")
    print(numeric_statistics_result)

    tendencias_por_precio = df.groupby(['Average Fare ($)', 'Inflation Adjusted Average Fare ($) (Base Year: 2023)'])['2022 Passengers (10% sample)'].sum()
    print("Tendencias entre precio, precio ajustado por inflacion y pasajeros")
    print(tendencias_por_precio)

    rango_y_pasajeros= df.groupby(['2022 Passengers (10% sample)', 'Airport Code'])['2022 Passenger Rank'].sum()
    print("Tendencias entre rango y numero de pasajeros")
    print(rango_y_pasajeros)


    
    # Calcular y mostrar estadísticas utilizando el método de instancia

except FileNotFoundError: # Si no hay archivo, se tira este error
    print("Error, archivo no encontrado.")

except pd.errors.EmptyDataError: # Si el archivo está vacío, sale este error
    print("Error: El archivo está vacío.")

