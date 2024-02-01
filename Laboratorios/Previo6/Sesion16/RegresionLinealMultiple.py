import pandas as pd 
import matplotlib.pyplot as plt     
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

###generar datos de ejemplo

X,y= make_regression(n_samples=100, n_features=3,noise=20,random_state=42)

##Creando un Dataframe

df = pd.DataFrame(X, columns=["Size","Rooms", "City_Distance"])
df["Precio"] = y

#Dividir los datos en conjunto de entrenamiento y prueba

X_train, X_test, y_train, y_test = train_test_split(
    df[["Size","Rooms", "City_Distance"]],
    df['Precio'], test_size = 0.2, random_state=42)

#Creando y ajustando el modelo de regresion lineal multiple
modelo = LinearRegression()
modelo.fit(X_train,y_train)

#Coeficientes e intercepcion
print("Coeficientes:", modelo.coef_)
print("Intercepcion:",modelo.intercept_)

##Realizando predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

##Visualizando la regresion lineal multiple

fig= plt.figure(figsize=(12,6))

#Grafico 1, Tamano vs Precio

ax1= fig.add_subplot(131, projection="3d")
ax1.scatter(
    X_test['Size'], X_test['Rooms'],
    y_test, c='blue', marker='o',alpha=0.5)
ax1.set_xlabel("Size")
ax1.set_ylabel("Rooms")
ax1.set_zlabel("Final Price")
ax1.set_title("Final Price vs Room and Size")

#Grafico 2, Tamano vs Precio Predicho

ax2= fig.add_subplot(132, projection="3d")
ax2.scatter(
    X_test['Size'], X_test['Rooms'],
    y_pred, c='red', marker='o',alpha=0.5)
ax2.set_xlabel("Size")
ax2.set_ylabel("Rooms")
ax2.set_zlabel("Predicted Price")
ax2.set_title("Predicted Price vs Room and Size")

#Grafico 3, Comparacion de Precio Verdadero y Precio Predicho

ax3= fig.add_subplot(133)
ax3.scatter(y_test,y_pred,c='green', alpha=0.5)
ax3.plot(
    [min(y_test), max(y_test)],[min(y_test),max(y_test)],
    linestyle="--", color='red', linewidth= 2)
ax3.set_xlabel("True Price")
ax3.set_ylabel("Predicted Price")
ax3.set_title("True Price vs Predicted Price")

plt.tight_layout()
plt.show()