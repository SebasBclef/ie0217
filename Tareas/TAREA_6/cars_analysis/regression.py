
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error
import os

def analisis_regresion(df):
        X1 = df['year'].values.reshape(-1, 1)
        y1 = df['selling_price'].values
        # Aquí puedes realizar el análisis con el DataFrame cargado (df)

        # Dividiendo los datos en conjuntos de entrenamiento y prueba
        X1_train, X1_test, y1_train, y1_test = train_test_split(X1, y1, test_size=0.2, random_state=42)
        
        # Crea el modelo de regresión lineal
        model1 = LinearRegression()
        # Entrenamiento del modelo
        model1.fit(X1_train, y1_train)

        # Predicciones
        predictions1 = model1.predict(X1_test)

        # Evaluación del rendimiento
        mse1 = mean_squared_error(y1_test, predictions1)
        r2_1 = r2_score(y1_test, predictions1)
        mae1 = mean_absolute_error(y1_test, predictions1)

        # Visualización de resultados
        plt.scatter(X1_test, y1_test, color='black')
        plt.plot(X1_test, predictions1, color='blue', linewidth=3)
        plt.title('Regresión Lineal - Precios a lo largo de los años')
        plt.xlabel('Año')
        plt.ylabel('Precio')
        plt.show()

        # Imprime resultados
        print("Analisis de la regresion lineal aplicada al precio a lo largo de los años")
        print(f'MSE: {mse1}')
        print(f'R²: {r2_1}')
        print(f'MAE: {mae1}')

            # Selecciona las variables relevantes
        X2 = df['km_driven'].values.reshape(-1, 1)
        y2 = df['selling_price'].values

        # Divide los datos en conjuntos de entrenamiento y prueba
        X2_train, X2_test, y2_train, y2_test = train_test_split(X2, y2, test_size=0.2, random_state=42)

        # Crea el modelo de regresión lineal
        model2 = LinearRegression()

        # Entrenamiento del modelo
        model2.fit(X2_train, y2_train)

        # Predicciones
        predictions2 = model2.predict(X2_test)

        # Evaluación del rendimiento
        mse2 = mean_squared_error(y2_test, predictions2)
        r2_2 = r2_score(y2_test, predictions2)
        mae2 = mean_absolute_error(y2_test, predictions2)

        # Visualización de resultados
        plt.scatter(X2_test, y2_test, color='black')
        plt.plot(X2_test, predictions2, color='blue', linewidth=3)
        plt.title('Regresión Lineal - Precios según Kilómetros recorridos')
        plt.xlabel('Kilómetros')
        plt.ylabel('Precio')
        plt.show()

        # Imprime resultados
        print("Analisis de la regresion lineal aplicada al precio en relacion al kilometraje")
        print(f'MSE: {mse2}')
        print(f'R²: {r2_2}')
        print(f'MAE: {mae2}')

        # Para la regresión no lineal, puedes utilizar polinomios
        poly = PolynomialFeatures(degree=2)

        # Transforma las características
        X1_poly = poly.fit_transform(X1)
        X2_poly = poly.fit_transform(X2)

        # Regresión no lineal para el primer análisis
        model1_nonlinear = LinearRegression()
        model1_nonlinear.fit(X1_poly, y1)

        # Regresión no lineal para el segundo análisis
        model2_nonlinear = LinearRegression()
        model2_nonlinear.fit(X2_poly, y2)
        # Predicciones para regresión no lineal
        predictions1_nonlinear = model1_nonlinear.predict(poly.fit_transform(X1_test))
        predictions2_nonlinear = model2_nonlinear.predict(poly.fit_transform(X2_test))

        # Evaluación del rendimiento para regresión no lineal
        mse1_nonlinear = mean_squared_error(y1_test, predictions1_nonlinear)
        r2_1_nonlinear = r2_score(y1_test, predictions1_nonlinear)
        mae1_nonlinear = mean_absolute_error(y1_test, predictions1_nonlinear)

        mse2_nonlinear = mean_squared_error(y2_test, predictions2_nonlinear)
        r2_2_nonlinear = r2_score(y2_test, predictions2_nonlinear)
        mae2_nonlinear = mean_absolute_error(y2_test, predictions2_nonlinear)

        # Imprime resultados para regresión no lineal
        print("Regresión No Lineal aplicada al análisis 1:")
        print(f'MSE: {mse1_nonlinear}')
        print(f'R²: {r2_1_nonlinear}')
        print(f'MAE: {mae1_nonlinear}')

        print("\nRegresión No Lineal aplicada al análisis 2:")
        print(f'MSE: {mse2_nonlinear}')
        print(f'R²: {r2_2_nonlinear}')
        print(f'MAE: {mae2_nonlinear}')