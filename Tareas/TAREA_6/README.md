# Tarea 5,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA EJECUTAR
Se deben ejecutar los siguientes comandos:
- **make run1:** para ejecutar el codigo que corresponde a la parte 1 de la tarea para ejecutar el codigo que corresponde a todo el codigo. Ademas, genera los datos en car_details_dataset.zip
- **make clean:** para borrar el directorio pycache, ademas, tambien borra los datos de car_details_dataset.zip
## Analisis de graficos
![Clustering Precio Distancia](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Clustering%20Precio%20Distancia.png)
Del grafico anterior, se puede ver como los clusters se acumulan a un kilometraje bajo.Sin embargo, se puede ver una tendencia muy clara, que cuando hay menos kilometraje, antes de los 200mil km el precio puede tomar cualquier valor, inclusivemente los mas altos. Despues de los 200 mil km, se puede ver como de manera muy marcada disminuye el precio del carro al superar el kilometraje.
![Clustering Precio Edad](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Clustering%20Precio%20y%20Edad.png)
De este grafico, se puede ver como el precio tiende a aumentar mientras mas cercano se este al 2024. Esto refleja la realidad, ya que un carro recien salido de agencia es muchas veces mas caro que un carro viejo, a no ser que el carro viejo sea de coleccion.
![Regresion Precio Distancia](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Regresion%20Precio%20y%20Distancia.png)
Parecido al clustering precio/distancia, solo que en la regresion podemos ver como, a traves de la linea azul, se reafirma la tendencia de que, a mas kilometraje, se va a vener el carro por menos tiempo. Esto es debido a que la linea azul es decreciente.
![Regresion Precio Tiempo](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Regresion%20Precio%20y%20Tiempo.png)
Por otro lado, parecido al clustering precio/edad, en la regresion se puede ver como con la linea azul se reafirma la tendencia de que mientras mas nuevo sea el carro, mas caro es. Esto es debido a que la linea azul es creciente.

![Elbow 1](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Elbow%201.png)
Este grafico corresponde a la distorsion obtenida con el metodo elbow, el cual nos sugiere utilizar 5 clusters para el clustering de Precio Edad, ya que es cuando el tiempo de ejecucion se aproxima mas al puntaje de distorsion.

![Elbow 2](https://github.com/SebasBclef/ie0217/blob/67c4deaaa1570371fad050a5caf56ccfef2d82f9/Tareas/TAREA_6/Elbow%202.png)
Este grafico corresponde a la distorsion obtenida con el metodo elbow, el cual nos sugiere utilizar 5 clusters para el clustering de Precio Tiempo, ya que es cuando el tiempo de ejecucion se aproxima mas al puntaje de distorsion.


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
La inercia es una medida que se utiliza para evaluar la calidad de un agrupamiento, específicamente en el caso del algoritmo K-Means. La inercia mide cuánto se dispersan los puntos de datos dentro de cada cluster con respecto a su centroide. El objetivo del K-Means es minimizar esta dispersión. Se utiliza para evaluar la calidad de un agrupamiento, a traves de intentar minimizar la inercia de dicho clustering. Mientras menor sea la inercia, los clusters seran mas compactor y homogeneos.Si el número de clusters es muy grande, la inercia tiende a disminuir, pero puede resultar en clusters más pequeños y menos útiles en términos prácticos. 

### 4. ¿Que son los centroides y como se utilizan en el algoritmo K-Means?
Los centroides son puntos representativos en el espacio de características que se utilizan en el algoritmo K-Means para representar el centro de un cluster. Dentro de **K-Means**, un centroide es el promedio de todas las observaciones realizadas en un cluster. La posicion del centroide define la ubicacion especial del cluster.Los centroides en K-Means son puntos que actúan como representantes del centro de un cluster.
### 5. Escriba la diferencia entre datos estructurados y no estructurados para analisis de datos.
Los **Datos estructurados**:
- Tienen un formato bien definido y organizado. Por lo general, siguen un esquema predefinido, como tablas en bases de datos.
- Se almacenan y gestionan fácilmente en bases de datos relacionales.
- La estructura predefinida facilita el análisis, la consulta y la agregación de datos.
Los **Datos no estructurados**:
- No siguen un formato predefinido o esquema organizado. Pueden presentarse de diversas formas y no están tabulados en filas y columnas.
- Pueden provenir de diversas fuentes, como redes sociales, texto libre, imágenes, videos, audio, entre otros.
- Analizar datos no estructurados puede ser más desafiante debido a su falta de organización predefinida.

## Paquetes en Python ( __init__.py):

### 1. ¿Que es un paquete en Python y como se diferencia de un modulo?

Un **modulo** en python es un archivo que contiene definiciones y declaraciones de funciones, variables y clases. Es como un contenedor que agrupa codigo en un solo archivo. Mientras tanto, un **paquete** es una **COLECCION** de modulos, organizados de manera jerarquica. El directorio que contiente los modulos debe tener un archivo especial llamado **__init__.py**. Dicho archivo, puede estar vacio, o tener codigo de inicializacion para el paquete. La presencia del archivo **__init__.py** indica que el directorio debe tratarse como un paquete.


### 2. ¿Cual es la funcion del archivo __init__.py dentro de un paquete de Python?
- La presencia de un archivo llamado **__init__.py** en un directorio indica a Python que ese directorio debe considerarse como un paquete. Sin este archivo, Python no tratará el directorio como un paquete.
- Se puede incluir código en el archivo **__init__.py** para realizar acciones de inicialización cuando el paquete es importado. Esto puede incluir la definición de variables, la configuración de parámetros o cualquier otra acción necesaria para preparar el paquete antes de su uso.



### 3.  ¿Como se importa un modulo o funcion desde un paquete en Python?
Se puede importar todo el modulo, a traves de la funcion **import**. Se puede importar de modo:
```
import paquete.modulo

paquete.modulo.funcion()
```
O, de modo:

```
import paquete.modulo as pm

pm.funcion()

```
Ademas, se puede importar solo una variable de todo el modulo:
```
from paquete.modulo import funcion,variable

funcion()
print(variable)

```
### 4. ¿Que es la variable __all__ en el archivo __init__.py y cual es su proposito?

La variable **__all__** es una lista que puede ser definida en el archivo **__init__.py**, su propósito principal es especificar qué nombres de módulos o símbolos deben ser importados cuando se utiliza la instrucción from paquete import *. Cuando se utiliza la instrucción **from paquete import **, Python importa todos los nombres que no comienzan con un guion bajo (_) desde el paquete o módulo indicado. Sin embargo, al utilizar __all__, se puede controlar explícitamente qué nombres son considerados "públicos" y deben ser importados por defecto.

### 5. ¿Cual es la ventaja de organizar el codigo en paquetes y modulos en Python?
Organizar el código en paquetes y módulos en Python proporciona una estructura clara y modular que mejora la legibilidad, la mantenibilidad, la reutilización y la colaboración en proyectos de software, por otro lado, un codigo organizado a traves de paquetes y modulos ofrece mayor escalibilidad, y mayor facilidad de entendimiento a cualquier desarollador que encuentre el codigo.

## Python HTTP y Servicios Web (API):

### 1. ¿Que es una API y cual es su funcion en el contexto de los servicios web?
Una API  (Interfaz de Programación de Aplicaciones, por sus siglas en inglés) es un conjunto de reglas y protocolos que permite que dos aplicaciones o sistemas se comuniquen entre sí. Definen estándares y protocolos para la comunicación, como HTTP (Hypertext Transfer Protocol) para servicios web basados en la web. Una API en el contexto de servicios web es esencial para la interconexión y comunicación efectiva entre aplicaciones y servicios. Proporciona una interfaz estandarizada para la integración y el intercambio de datos, promoviendo la interoperabilidad y la eficiencia en el desarrollo de software.
### 2. ¿Cual es la diferencia entre una API RESTful y una API SOAP?
Las APIs RESTful (Representational State Transfer) y las APIs SOAP (Simple Object Access Protocol) son dos enfoques diferentes para la creación de servicios web que permiten la comunicación entre sistemas.
- **API RESTful**: Utiliza el estilo REST, que se basa en principios como la representación de recursos, la manipulación de recursos a través de operaciones estándar de HTTP (GET, POST, PUT, DELETE). Por otro lado, utiliza el protocolo HTTP como su protocolo de comunicación principal. Genera archivos .json o .xml. Finalmente, es ampliamente utilizado en servicios web públicos, API de redes sociales y aplicaciones web.
- **API SOAP**: Se basa en un protocolo específico (SOAP) para la definición de mensajes y un conjunto de reglas para su intercambio. SOAP no sigue los principios REST y puede funcionar sobre diversos protocolos de transporte como HTTP, SMTP o TCP. Utiliza XML como formato de mensaje. A menudo utilizado en entornos empresariales donde se requiere una mayor formalidad y manejo de transacciones.

### 3. Describa los pasos basicos para consumir una API utilizando Python.

- Primero, se importan las librerias a utilizar, usualmente **requests** y **json**
- Luego, se realiza una solicitud HTTPS a la API, a traves de metodos **GET y POST** y utilizando la URL de la API.
- Posteriormente, se maneja la respuesta devuelta por el API, a traves de metodos como **response.status_code**
- Usualmente, se pueden solicitar datos por parte de la API, entonces estos deben ser incluidos.
- Luego, se maneja la autenticacion.
- Se implementa la logica correspondiente para manejar errores y excepciones.
- Finamelmente, se procede a revisar la documentacion interna del API.
### 4. ¿Que es la autenticacion de API y por que es importante?
La autenticación de API es el proceso de verificar la identidad de una aplicación o usuario que intenta acceder a una API.La autenticación de API ayuda a garantizar la seguridad del sistema al impedir el acceso no autorizado a los recursos y datos. Solo las aplicaciones o usuarios que han sido autenticados correctamente pueden realizar solicitudes válidas. Por otro lado, es importante porque protege ante ataques maliciosos, mantiene la confidencialidad de datos al verificar que las fuentes sean confiables y autorizadas y porque permite una integracion segura entre sistemas y servicios.


### 5. ¿Cual es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?
- **GET:** Principalmente, solicita los datos de un recurso especifico o realiza una operacion de tipo lectura. No deberia tener efectos secundarios sobre el servidor. Por ejemplo: **GET /usuarios/123.**
- **POST:** Envia datos para crear un nuevo recurso o realizar una operacion exclusivamente de escritura. Esta operacion, si puede tener efectos secundarios sobre el servidor, como crear un nuevo registro en la base de datos. Por ejemplo: **POST /usuarios**
- **PUT:** Actualiza un recruso existente, o crea uno nuevo si no existe. Realizar la operacion varias veces tienen el mismo resultado que hacerlo una vez. Por ejemplo: **POST /usuarios**
- **DELETE:** Elimina un recurso en especifico.De igual manera, eliminar un recurso varias veces no tiene efectos adicionales despues de hacerlo la primera vez. Por ejemplo: **DELETE/usuarios/123**.