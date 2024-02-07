# Tarea 5,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA EJECUTAR
Se deben ejecutar los siguientes comandos:
- **make run1:** para ejecutar el codigo que corresponde a la parte 1 de la tarea.
- **make run2:** para ejecutar el codigo que corresponde a la parte 2 de la tarea.
- **make clean:** para borrar el directorio pycache, recomendado hacer siempre una vez que ya se empezo a probar el programa.

## Analisis de graficos, explicaciones sobre el codigo, entre otros

Para analizar los datos, se escogio especificamente el archivo que corresponde a **Average Domestic Airline Itinerary Fares By Origin City for 2013
Ranked by Total Number of Domestic Passengers in 2022**, en el cual hay informacion que corresponde a tarifas, ciudades y cantidad de pasajeros. En base a eso, se realizaron los analisis siguientes e imprimeron los graficos correspondientes. Ademas, explicando como funciona el codigo, es que primero realiza un **analisis estadistico general** basado en la funcion **describe** de Pandas, y se imprime en la terminal. En este analisis, se imprimen valores como la media, la desviacion estandar, los valores minimos y maximos, asi como los cuartiles de las columnas que corresponden a **Tarifa, Tarifa Ajustada a la inflacion de 2023, y los pasajeros registrados**, ya que estas son las unicas columnas con valores numericos a las cuales se les podia aplicar un analisis estadistico. 

Luego, se procedio a implementar un filtro a traves de iteradores. El codigo corresponde al siguiente:
```
filtro_por_aeropuerto = lambda fila: fila['State Name'] == 'IL' #filtro puesto sobre los aeropuertos por estado
    procesador.agregar_condicion_filtrado(filtro_por_aeropuerto)
```
Si se quiere utilizar el filtro, que en este caso filtra los aeropuertos que hay en cada estado, basta con cambiar **IL** (que corresponde a Illinois) por cualquier otro nombre de estado, siguiendo el formato en el .csv, que es con las siglas del estado. Este filtro igual se imprime en la terminal.

Posteriormente, se imprime un informe completo, mediante generadores, y al final se busco ogranizar los precios de mayor a menor, tambien a traves de generadores. Esta explicacion se hace porque todo se imprime de un solo, por lo que hay que deslizar la terminal para arriba para encontrar todos los valores.
### Distribucion de Tarifas
![Distribucion de Tarifas](https://github.com/SebasBclef/ie0217/blob/3015207fd5c13f5e21f815b3d2ad880df1b624b0/Tareas/TAREA_5/Distribucion%20de%20tarifas.png)
En el grafico anterior, se represento, mediante un histograma, la distribucion de tarifas que habia en el .csv. Lo mas notable es que, de manera esperable, la mayoria de precios estan concentrados alrededor de 400 dolares. Lo que mas interes levanta, es que hay distribuciones leves cercanas a los precios arriba de 800$, lo cual para un viaje turistico por ejemplo, se vuelve excesivamente caro. Mas adelante se verá a qué lugares corresponden cuales precios, pero un pequeño adelanto es que, mientras más alejado se esté del "mainland" de Estados Unidos, más caro se vuelve.
![Grafico sobre Tarifas y Estado](https://github.com/SebasBclef/ie0217/blob/3015207fd5c13f5e21f815b3d2ad880df1b624b0/Tareas/TAREA_5/Tarifas%20y%20Estado.png)
Lo más interesante en este gráfico, es el pico pronunciado que hay hacia el final. Sin embargo, esto tiene mucho sentido, ya que corresponde a **"TT"**, lo que significa **Trust Territories.** Esto corresponde a las islas que son territorio de Estados Unidos, pero no son estados propiamente. Usualmente, corresponde a las poblaciones que hay presentes en las Islas Marshall, Palau, Micronesia y las Islas de Mariana, por mencionar algunas. Ademas, el volumen de poblacion tambien es muy bajo, por lo que puede contirbuir a los precios altos, sumado a la distancia. La segunda barra mas cara representa al estado de **Alaska**, lo que sigue teniendo sentido, ya que Alaska esta a una distancia considerable de Estados Unidos.La tercera barra mas alta tiene por nombre a **HI**, lo cual corresponde a **Hawaii**, siguiendo con la tendencia establecida anteriormente. La barra mas pequeña, corresponde al estado de **Delaware**, lo cual parece curioso.
![Grafico sobre Tarifas y Pasajeros](https://github.com/SebasBclef/ie0217/blob/3015207fd5c13f5e21f815b3d2ad880df1b624b0/Tareas/TAREA_5/Tarifas%20y%20Pasajeros.png)
Este grafico se comporta de manera esperada, ya que representa la idea de que, a menos volumen, mas caro se vuelven los objetos. Las poblaciones sumamente pequeñas son las que deben pagar mucho más. Si se está en 0.0, se va oagar desde 1000, 1200, hasta 1600 (!!!). Pero, viendo el otro caso, las poblaciones que llegan a 1.2 (que en realidad son 1.2 millones de pasajeros, cortesia del aeropuerto de Los Angeles), los precios se abaratan considerablemente. Se puede ver que, a mientras mas poblacion, mas se tienden a quedar los precios entre 600 y 400 dolaes. Esto nos indica que, si queremos viajar y que el tiquete de avion nos salga barato, es mejor ir a un lugar con bastantes pasajeros registrados.
![Grafico de Dispersion sobre Tarifas](https://github.com/SebasBclef/ie0217/blob/3015207fd5c13f5e21f815b3d2ad880df1b624b0/Tareas/TAREA_5/Tarifas.png)

Finalmente, en este grafico se muestran las tarifas en general, ordenadas por el 'ranking' proporcionado por el .csv. Es interesante ver que, ademas de las excepciones donde el precio subre de una manera desproporcional debido a la distancia de ciertos lugares, mientras más se aleja del origen, los precios tienden a aumentar. Esto nos indica que hay una relacion precio-distancia para que las personas consideren darle un rango a un aeropuerto sobre otro.
## Iteradores
### 1. ¿Que es un iterador en Python y cual es su proposito?

Es un objeto que permite recorrer un contenedor, como una lista o una tupla, y acceder a sus elementos uno por uno sin tener que conocer la estructura interna del contenedor. Los iteradores implementan dos métodos: **__iter__()** y **__next__().**

- **__iter__():** Este método devuelve el propio objeto iterador. Debe estar presente en todos los iteradores y generalmente simplemente devuelve self.

- **__next__():** Este método devuelve el siguiente elemento en la secuencia. Cuando no hay más elementos para devolver, se lanza la excepción StopIteration.

Los iteradores en Python es proporcionar una forma uniforme y eficiente de recorrer secuencias de elementos. Esto es independientemente de la estructura del contenedor,lo que hace que el código sea más legible y modular. 

### 2. Explica la diferencia entre un iterable y un iterador
+ Un **iterable** es un objeto que puede ser recorrido, o tierado, inclute una secuencia de elementos como listas, tuplas o cadenas. Un iterable debe implementar el metodo **__iter__()**, el cual devuelve un objeto iterador.

+ Un **iterador** es un objeto el cual **realiza** el seguimiento del estado de la iteracion de un iterable. Este, implementa los metodos **__iter__()** y **__next__()**, donde iter devuelve el obeto iterador y next devuelve el proximo elemento en la secuencia.

## Excepciones

### 1. Define que es una excepcion en Python.
Una excepción es un evento anormal o inesperado que ocurre durante la ejecución de un programa y que interrumpe el flujo normal de ejecución. En general, las expeciones incluyen tipos de errores, como **ZeroDivisionError**, que se usa cuando se divide por cero, o **FileNotFoundError**, que se usa cuando no se encuentra un archivo en especifico.Usualmente, cuando se usan excepciones, se utilizar bloques **try** y **except**. 

### 2. ¿Cual es el proposito de la clausula try...except en el manejo de excepciones?

Analizando deste ejemplo simple:
```
try:
    # Código que puede generar una excepción
    resultado = 10 / 0
except ZeroDivisionError:
    # Manejo de la excepción
    print("¡Error! División por cero.")

```
Entonces, en **try** se busca hacer una division por cero, lo cual obviamente da error. Como ya sabemos esto conceptualmente, podemos poner un **ZeroDivisionError** en el bloque **Except**, para manejar esa excepcion. En **try** se ejecuta lo que se quiere intentar o probar, y en **except** se pone el error que se espera, para que el programa lo atrape.


### 3. Explica la diferencia entre las clausulas except y finally en el manejo de excepciones.
Ambos se utilizan para manejar excepciones. Sin embargo:

- **Except:** Se utiliza para manejar excepciones especificas que pueden suceder en el **try**. Pueden existir varios **except** para manejar diferentes tipos de excepciones. Si en el **try** sucede el error especifico que esta en la excepcion, se ejecuta el codigo que esta dentro del **except.**

- **Finally:** Este se usa para especificar en un bloque de codigo que se va a ejecutar **siempre**, ya sea que haya una exepcion o no dentro del bloque **try.**. Este bloque se ejecuta después de la ejecución del bloque **try** y cualquier cláusula **except** que coincida, incluso si se produce una excepción y no se maneja.

## Generadores

### 1. ¿Que es un generador en Python y cual es su ventaja sobre las listas tradicionales?
Un generador es una forma de construir iteradores de manera más eficiente y facil. Las listas tradicionales almacenan todos los elementos en memoria de una vez, los generadores generan valores sobre la marcha y solo los calculan cuando se solicitan. Un **generador** hace, sin guardar nada. Esto hace que sea tenga un uso de memoria mas eficiente, ya que se van generando los elementos conforme se necesitan. Por otro lado, el tiempo de ejecucino del programa, ya que evita calcular todos los elementos de una vez. Es beneficioso cuando se trabajan con conjuntos de datos de tamaño considerable. Ademas, se promueve un mejor rendimiento a la hora de utilizar iteradores, ya que no es necesario cargar toda la memoria cuando se busca iterar algo solo una vez.


### 2. Explica como se puede crear un generador usando la funcion yield.
Para utilizar un generador, se necesita utilizar la funcion **yield**. Entonces, esta funcion se utiliza para devolver el valor de la funcion y mantiene el estado de la funcion para que la proxima vez que se llame, la ejecucion vuelva a comezar donde quedo anteriormente. Esto permite que la función genere valores de manera incremental sin tener que calcular todos los valores de antemano. Esto permite que la función genere valores de manera incremental sin tener que calcular todos los valores de antemano. Un **yield** es un tipo de **pausa** que permite al generador generar un valor y luego esperar hasta la próxima llamada para continuar generando más valores.

### 3. ¿Cuando es mas apropiado usar generadores en lugar de listas?
Cuando se enfrenta a grandes conjuntos de datos o cuando se desea generar y procesar secuencias de valores de manera incremental, es mejor utilizar generadores. Por otro lado, cuando se habla con secuencias infinitas, o es realmente necesario preservar la eficiencia en el tiempo de la ejecucion del codigo. Ademas, se pueden utilizar generadores cuando sea necesario crear una iteracion sobre una secuencia solamente una vez, y no es necesario retener los valores despues de la iteracion. Igualmente, tambien es bastante practico utilizar generadores sobre listas porque mejora la legibilidad del codigo, ya que usar generadores permite una legibilidad mas limpia y comprensible.

## Pandas

### 1. ¿Cual es la diferencia entre una Serie y un DataFrame en Pandas?
Una Serie y un DataFrame son dos estructuras de datos principales que se utilizan para manipular y analizar datos tabulares.

- **Serie:** Es una estructura de una dimension en Pandas, que puede contener cualquier tipo de datos, como enteros o flotantes. Ademas, cada uno de estos elementos tiene un valor de indice asociado, lo que significa que se puede acceder a este elemento llamando este valor de indice. Se puede ver una serie como una columna en una hoja de calculo de excel.

- **Dataframe:** Este es una estructura bidimensional, que no solo se puede ver como una tabla de datos con filas y columnas. De igual manera, puede tener multiples tipos de datos. Sin embargo, cada columna es una Serie, y varias Series forman las filas en un Dataframe.


### 2. Explica como manejar valores nulos o faltantes en un DataFrame.
Se pueden utilizar varios metodos para manejar estos datos. Se puede utilizar **isnull()** para identificar valores nulos en un **DataFrame**. Este metodo, devuelve otro DataFrame con el mismo tamaño que el original, pero con valores Booleanos que indican la presencia o ausencia de valores nulos. Otros metodos incluyen **fillna()** y **dropna()**. El metodo **fillna()** puede rellenar valores nulos con un valor dado, el metodo **dropna()** es capaz de eliminar filas o columnas que contengan esos valores nulos.


### 3. ¿Cual es la diferencia entre loc y iloc en Pandas?

Ambos metodos se pueden utlizar para acceder los datos del **DataFrame**.
- **loc:** Este metodo se utiliza para acceder a un grupo de filas y columnas por medio de etiquetas o booleanos. Ademas, se pueden especificar tanto etiquetas de filas como etiquetas de columnas. La sintaxis general es **DataFrame.loc[fila_etiqueta, columna_etiqueta]**.
- **iloc:** Este metodo se utiliza para acceder a un grupo de filas y columnas por medio de índices enteros. Solo se pueden especificar índices enteros, no etiquetas. La sintaxis general es **DataFrame.iloc[fila_indice, columna_indice]**.