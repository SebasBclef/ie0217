import numpy as np 
import matplotlib.pyplot as plt     
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error, mean_squared_error
from math import sqrt


#generar datos de ejemplo

np.random.seed(42)
X= 2*np.random.rand(100,1)
y= 4 + 3*X + np.random.randn (100,1)

#dividir los datos en conjuntos de entrenamiento y prueba
X_train, X_test, y_train, y_test= \
    train_test_split(X,y, test_size=0.2, random_state=42)

#Crear y ajustar el modelo de regresion lineal

modelo= LinearRegression()
modelo.fit(X_train,y_train)

#Realizar predicciones en el conjunto de prueba

y_pred = modelo.predict(X_test)

#Calcular metricas de evaluacion
mae= mean_absolute_error(y_test, y_pred)
mse= mean_squared_error(y_test, y_pred)
rmse= sqrt(mse)
rae= np.sum(np.abs(y_test-y_pred)) / \
    np.sum(np.abs(y_test-np.mean(y_test)))
rse= np.sum((y_test-y_pred)**2)/np.sum((y_test - np.mean(y_test)**2))

#imprimir resultados

print(f"MAE: {mae: .2f}")
print(f"MSE: {mse: .2f}")
print(f"RMSE: {rmse: .2f}")
print(f"RAE: {rae: .2f}")
print(f"RSE: {rse: .2f}")

#crear grafica

plt.scatter(X_test, y_test, label="Datos de prueba", color='blue')
plt.plot(X_test, y_pred, label="Predicciones",color="red")
plt.title("Regresion Lineal y Errores")
plt.xlabel("X")
plt.ylabel("y")
plt.legend()

#Mostrar los errores en la grafica

for i in range(len(X_test)):
    plt.plot([X_test[i], X_test[i]],
             [y_test[i], y_pred[i]],
             linestyle="-", color="gray")

plt.show()