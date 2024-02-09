import pandas as pd
import numpy as np
import requests
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import os



response=requests.get('https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv') #es el link del cual se sacan los archivos
csv_data = response.text #se extraen los datos de con formato .text
folder_path= 'data'
file_path = os.path.join(folder_path, 'dataset.csv') #el path donde se van a guardar los datos

if not os.path.exists(folder_path):
    os.makedirs(folder_path)

with open(file_path, 'w', newline='') as file: #se abre el archivo, con el path, en modo 'w', lo cual va a escribir en el nuevo archivo
        file.write(csv_data) #se escribe en el archivo


data = pd.read_csv("data/dataset.csv") #se extrae en data para usar en el resto del codigo 


# -----------
#     1
# -----------

X_simple = data['median_income'].values.reshape(-1, 1)
y_simple = data['median_house_value'].values


X_train, X_test, y_train, y_test = train_test_split(X_simple, y_simple, test_size=0.2, random_state=42)


model_simple = LinearRegression()
model_simple.fit(X_train, y_train)


y_pred_simple = model_simple.predict(X_test)


mse_simple = mean_squared_error(y_test, y_pred_simple)
print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

# -----------
#     2
# -----------

X_multiple = data[['median_income', 'housing_median_age', 'population']]
y_multiple = data['median_house_value'].values


X_train_multi, X_test_multi, y_train_multi, y_test_multi = train_test_split(X_multiple, y_multiple, test_size=0.2, random_state=42)


model_multiple = LinearRegression()
model_multiple.fit(X_train_multi, y_train_multi)


y_pred_multiple = model_multiple.predict(X_test_multi)


mse_multiple = mean_squared_error(y_test_multi, y_pred_multiple)
print(f"Error cuadrático medio (MSE) en regresión lineal múltiple: {mse_multiple}")

# -----------
#     3
# -----------
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline


X_nonlinear = data['housing_median_age'].values.reshape(-1, 1)
y_nonlinear = data['median_house_value'].values


X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)


degree = 2
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)


y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)


mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

# -----------
#     4
# -----------

#Se importan las tecnicas de regulacion del L1(Lasso) y L2(Ridge)
#Estas evitan el sobreajuste y mejora la generalizacion de la regresoin del modelo
from sklearn.linear_model import Ridge, Lasso

'''
El modelo Ridge no lleva los coeficientes a 0, pero si disminuye la magnitud de estos.
Evita valores extremadamente altos, promoviendo la precision. La penalizacion es propocional a los valores absolutos en los coeficientes.
'''
model_ridge = Ridge(alpha=1.0) #el alpha define que tan estricta es la regulacion que se aplica sobre la regresion
model_ridge.fit(X_train_multi, y_train_multi)#el .fit aplica el modelo de regresion a los datos obtenidos

'''
El modelo Lasso n puede seleccionar caracteristicas, puede llevar ciertos coeficientes a 0, no todos.
Esto hace que se eliminen ciertas caracteristicas del modelo. La penalizacion es proporcional a los valores cuadrados de los coeficientes.
'''

model_lasso = Lasso(alpha=1.0)#Los datos de la regulacion
model_lasso.fit(X_train_multi, y_train_multi)

# -----------
#     5
# -----------
from sklearn.cluster import KMeans, DBSCAN
import matplotlib.pyplot as plt


X_cluster = data[['longitude', 'latitude']]


kmeans = KMeans(n_clusters=3, random_state=42, n_init=10)
data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)


dbscan = DBSCAN(eps=0.5, min_samples=5)
data['cluster_dbscan'] = dbscan.fit_predict(X_cluster)


plt.scatter(data['longitude'], data['latitude'], c=data['cluster_kmeans'], cmap='viridis', marker='.')
plt.title('Clusters usando K-means')
plt.show()

plt.scatter(data['longitude'], data['latitude'], c=data['cluster_dbscan'], cmap='viridis', marker='.')
plt.title('Clusters usando DBSCAN')
plt.show()