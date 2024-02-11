# Tarea 5,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA EJECUTAR
Se deben ejecutar los siguientes comandos:
- **make run1:** para ejecutar el codigo que corresponde a la parte 1 de la tarea
- **make run2:** para ejecutar el codigo que corresponde a la parte 2 de la tarea.
- **make clean:** para borrar el directorio pycache, recomendado hacer siempre una vez que ya se empezo a probar el programa.

## Regresion
### 1. ¿Que es la regresion lineal y como se diferencia de la regresion no lineal?
Cuando se habla de una **regresion lineal**, se hace referencia al metodo estadistico que se utiliza para modelar la relacion entre una variable dependiente y una o mas variables independientes, a traves de una funcion lineal. La forma mas simple de una regresion lineal esta dada a traves de la formula: **y = mx+b**, donde:
- y es la variable dependiente
- x es la variable independiente
- m es la pendiente
- b es la interseccion con el eje y.
Cuando se habla de una **regresion no lineal**, se habla de un enfoque general, que permite modelar relaciones mas elaboradas y complejas entre variables dependientes e independientes. Esta funcion no necesariamente es una linea recta, ya que puede tomar formas de curvas, vurvas exponenciales, polinomios de grado superior, entre otros. Las regresiones no lineales tienden a ser mas flexibles, a cambio de complejidad.
### 2. ¿Que son los coeficientes de regresion y que informacion proporcionan sobre la relacion entre las variables?
Los coeficientes de regresión son los números que multiplican las variables predictoras en una ecuación de regresión, y proporcionan información sobre la relación entre las variables en el modelo. Se listaron anteriormente:
- **m (coeficiente de pendiente):** Indica el cambio promedio en la variable dependiente por cada cambio en la variable independiente. Un ejemplo, seria que si relaciono el tiempo de estudio (en la variable x) con las calificaciones (en la variable y), la pendiente va a indicar cuanto se espera que aumenten o disminuyan las calificaciones por cada hora adicional (u hora menos) de estudio.

- **b (coeficiente de intercepcion):** Representa el valor esperado de la variable dependiente cuando la variable independiente es igual a cero. En el mismo ejemplo, si las horas de estudio son 0 (x=0), el termino b me va a indicar el valor inicial esperado de y.
- **Coeficientes en regresiones multiples:** Cuando hay multiples variables independientes, cada coeficiente de regresion indica el cambio promedio en la variable dependiente por cada cambio en la variable independiente.

Entonces, la informacion mas importante que se puede extraer de los coeficientes incluye la **direccion, la magnitud y el intercepto** de la relacion. Su signo determina su direccion, el valor absoluto del coeficiente determina su magnitud, y su intercepto nos da el valor esperado de la variable dependiente, cuando todas las demas variables son 0.


### 3. ¿Que es el error cuadratico medio (MSE) y como se utiliza para evaluar la precision de un modelo de regresion?
El MSE es una medida utilizada para medir la precision de un modelo de regresion. Hace esto tomando la diferencia de los valores **reales** y los valores **predichos**, despues los eleva al cuadrado, y los promedia. Cuanto menor sea el valor de MSE, mejor será la precisión del modelo, por lo que mientras mas grande sea el MSE, mas impreciso es el modelo. Por otro lado, el MSE penaliza mas significativamente los errores grandes, por elevar al cuadrado las diferencias. De manera directa, se puede utilizar asi en el codigo:
```
from sklearn.metrics import mean_squared_error

mse = mean_squared_error(y_real, y_pred)
```
Donde **y_real** representa los valores realtes, y **y_pred** los valores predichos.


### 4. ¿Cual es la diferencia entre regresion simple y regresion multiple y cuando se utiliza cada una?
Cuando se habla de una **regresion simple**:
- La regresión simple implica una única variable independiente que se utiliza para predecir la variable dependiente.
- La forma básica de la ecuación de regresión simple es y=mx+b.
- Cuando hay una relacion clara y directa entre 2 variables, es mejor utilizar esta.

Cuando se habla de una **regresion multiple**:
- Implica dos o más variables independientes que se utilizan para predecir la variable dependiente.
- No existe tal cosa como una "forma basica" para modelar la ecuacion, ya que es un modelo multiple y variable, donde se incluye todo lo que no es lineal.
- Es adecuada cuando la relación entre la variable dependiente y las variables independientes es más compleja y no puede ser capturada de manera efectiva por una única variable.

## Clustering

### 1. ¿Que es el clustering y cual es su objetivo principal en el analisis de datos?
El clustering es una técnica en el análisis de datos que tiene como objetivo principal dividir un conjunto de datos en grupos o "clusters" de manera que las observaciones dentro de un mismo grupo sean más similares entre sí. El clustering busca revelar características similares o patrones en los datos como objetivo principal busca agrupar las observaciones que comparten. Por otro lado, facilita la segmentacion y particion de datos en grupos muy grandes. Algunos de sus aplicaciones mas notables incluyen el marketing.


### 2.Describa brevemente los algoritmos K-Means y DBSCAN y como funcionan.
En **K-Means**, se agrupan conjuntos de datos en k grupos, donde k representa un numero predefinido de clusters. El objetivo, es asignar cada observacion a un cluster, de manera que se minimicen las sumas de las distancias al cuadrado entre cada observacion. Primero se seleccionan centroides iniciales (uno para cada cluster), luego se asigna cada punto al cluster mas cercano. Por lo que, luego se actualizan los centroides, y se repite todo el proceso hasta que se alcance el numero maximo de iteraciones.

En **DBSCAN**, que es un acronimo para **Density Based Spatial Clustering of Applications with Noise**, lo que sucede es que se realiza un agrupamiento basado en la densidad que abarcan los puntos de datos. DBSCAN no necesita especificar el numero de clusters de antemano. Para que DBSCAN funcione, se necesitan definir los parametros, luego se etiquetan los puntos, para que luego se formen los clusters y se asigne el ruido correspondientemente, para al final generar el resultado.



### 3. ¿Que es la inercia en el contexto del clustering y como se utiliza para evaluar la calidad de un agrupamiento?
La inercia es una medida que se utiliza para evaluar la calidad de un agrupamiento, específicamente en el caso del algoritmo K-Means.

### 4. ¿Que son los centroides y como se utilizan en el algoritmo K-Means?

### 5. Escriba la diferencia entre datos estructurados y no estructurados para analisis de datos.



## Paquetes en Python ( __init__.py):

### 1. ¿Que es un paquete en Python y como se diferencia de un modulo?


### 2. ¿Cual es la funcion del archivo __init__.py dentro de un paquete de Python?


### 3.  ¿Como se importa un modulo o funcion desde un paquete en Python?

### 4. ¿Que es la variable __all__ en el archivo __init__.py y cual es su proposito?

### 5. ¿Cual es la ventaja de organizar el codigo en paquetes y modulos en Python?


## Python HTTP y Servicios Web (API):

### 1. ¿Que es una API y cual es su funcion en el contexto de los servicios web?

### 2. ¿Cual es la diferencia entre una API RESTful y una API SOAP?

### 3. Describa los pasos basicos para consumir una API utilizando Python.

### 4. ¿Que es la autenticacion de API y por que es importante?

### 5. ¿Cual es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?