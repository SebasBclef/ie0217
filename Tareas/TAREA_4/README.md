# Tarea 4,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA COMPILAR
Se deben ejecutar los siguientes comandos:
- **make o make all:** para compilar el codigo.
- **make clean:** para borrar archivos objeto y borrar todos los ejecutables, recomendado hacer siempre una vez que ya se empezo a probar el programa.
- **./mainMatrices.exe:** para ejecutar el programa que corresponde a la parte 1, sobre matrices.
- **./mainCorreo.exe:** para ejecutar el programa que corresponde a la parte 2, sobre correos.

**Nota**: No se pudo subir a netlify :(. Pero lo bueno es que si corrio la documentacion doxygen, por eso se ven los archivos **html** y **latex.** Toda la tarea esta en el src.
### 1. Explique la diferencia entre una lista y una tupla en Python.
Las listas y tuplas son estructuras de datos que se utilizan para almacenar colecciones de elementos. En las **listas**,  se puede modificar, agregar o eliminar elementos después de crear la lista, se definen con **' [ ] '** y en general cuando se necesita una coleccion de elementos que cambian a lo largo del tiempo. Por otro lado, las **tuplas** son inmutables, lo que significa que una vez que se crea una tupla, no se puede modificar, se definen como **' ( ) '** y se utilizan cuando hay una coleccion de elementos que no van a cambiar durante toda la ejecucion del programa.

### 2. ¿Que es la sobrecarga de operadores en Python y como se implementa?
La sobrecarga de operadores se refiere a la capacidad de una clase para definir o redefinir el comportamiento de los operadore en el lenguaje. Esto permite que los objetos de esa clase respondan de manera personalizada a operaciones como la suma resta, por ejemplo. La sobrecarga de operadores se implementa mediante la definición de métodos especiales en una clase, como **_add__**, **__sub__** , **__mul__** o **__init__**.

### 3. Explique el concepto de alcanzabilidad”(scope) de una variable en Python
El alcance de una variable determina dónde en el código se puede acceder a esa variable y desde dónde no. Existen variables **globales** y **locales**. Las globales se pueden utilizar en cualquier parte del codigo, mientras que las locales solo se pueden utilizar dentro de la funcion en donde se declaran

### 4. ¿Que es un decorador en Python y cual es su funcion principal?
Un decorador es una característica que permite modificar o extender la funcionalidad de funciones o métodos de manera declarativa. Los decoradores son funciones que toman otra función o método como argumento y devuelven una nueva función con alguna modificación en su comportamiento. La función principal de un decorador es proporcionar una forma elegante y reutilizable de extender o modificar el comportamiento de funciones sin modificar directamente su código. Un decorador se aplica utilizando el símbolo @ seguido del nombre del decorador justo encima de la definición de la función que se va a decorar. 

### 5. ¿Como se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally?
Analizando este codigo:

```
try:
    # Código que puede generar una excepción
    resultado = 10 / 0  # Intentar dividir por cero
except ZeroDivisionError:
    # Manejar una excepción específica
    print("Error: División por cero")
except Exception as e:
    # Manejar cualquier otra excepción no especificada
    print(f"Error inesperado: {e}")
else:
    # Se ejecuta si no se produce ninguna excepción en el bloque try
    print("La operación se realizó sin errores")
finally:
    # Se ejecuta siempre, independientemente de si se produjo una excepción o no
    print("Este bloque siempre se ejecuta")

# El programa sigue ejecutándose después del bloque try-except-finally
print("Continuando con el programa")


```
Entonces:

+ **Try:** Se pone lo que sea que podria generar una excepcion, o error.
+ **Except:** Dentro de este codigo, va lo que especificamente va a manejar la excepcion.
+ **Finally:** Se ejecuta siempre, independientemente si se producen errores o no.

### 6. ¿Que son los generadores en Python y para que se utilizan?
Los generadores son una forma de crear iteradores de manera más eficiente y elegante, permiten generar valores sobre la marcha, uno a la vez, en lugar de crear una lista completa en la memoria. Cuando una función con yield se llama, no se ejecuta completamente en ese momento; en su lugar, se crea un objeto generador que puede generar valores sucesivos cada vez que se llama al método **__next__()** en el generador.

### 7. Explique la diferencia entre init y call en clases de Python.
+ __init__: Este método se llama cuando se crea una nueva instancia de la clase. Es utilizado para inicializar los atributos de la instancia. Se define con el nombre __init__ y toma como primer parámetro self (la instancia recién creada) y luego otros parámetros que se pueden utilizar para configurar los atributos de la instancia.
- __call__: Este método se llama cuando una instancia de la clase se utiliza como una función. Permite que una instancia sea "llamada" como si fuera una función. Se define con el nombre __call__ y toma como primer parámetro self (la instancia) y luego cualquier número de parámetros adicionales que se esperan al llamar a la instancia como función.

### 8. ¿Como se organizan los modulos y paquetes en Python? ¿Que es init .py?
Los módulos y paquetes son utilizados para organizar y estructurar el código en programas más grandes. Un **módulo** simplemente un archivo de código Python con funciones, variables y/o clases. Puede contener código reutilizable que se puede importar en otros scripts o módulos. Un **paquete** es un directorio que contiene varios módulos y, opcionalmente, un archivo llamado __init__.py. Los paquetes permiten organizar de manera jerárquica el código en subdirectorios.
El archivo __init__.py es un archivo especial que se utiliza para indicar que un directorio debe considerarse un paquete. Puede estar vacío o contener código de inicialización del paquete.

### 9. Explique la diferencia entre metodos append() e extend() en listas de Python.
+ **append():** Se utiliza para agregar un solo elemento al final de la lista.
- **extend():** Se utiliza para agregar múltiples elementos al final de la lista, ya sea otra lista, una tupla u otra secuencia iterable.

### 10. ¿Cual es la diferencia entre un metodo de clase y un metodo estatico en Python?
+ **Método de Clase:** Se usa cuando el método necesita acceder o modificar atributos de la clase. El primer parámetro (cls) se refiere a la propia clase.
- **Modo Estático:** Se utiliza cuando el método no depende ni accede a los atributos de la instancia o la clase. No tiene un primer parámetro asociado a la instancia o la clase.

### 11. Hable sobre las diferencias entre herencia simple y herencia multiple en Python.

- **Herencia Simple:** En la herencia simple, una clase puede heredar de una sola clase base. Hay mayor simplicidad y claridad en la estructura de herencia asi como menos complejidad en la resolución de conflictos.

+ **Herencia Multiple:** En la herencia múltiple, una clase puede heredar de más de una clase base. Hay mayor flexibilidad para reutilizar código de múltiples fuentes y permite la combinación de funcionalidades de diferentes clases.


### 12. ¿Como se manejan los errores de importacion de modulos en Python?

Los errores de importación de módulos se manejan utilizando bloques try y except. Al producirse errores como **ModuleNotFoundError** o **ImportError**, se puede intentar "parchear" y preveer, a traves del uso de excepciones, de este modo se lanza un error, permitiendo que asi se siga ejecutando el codigo.

### 13. ¿Cual es la diferencia entre una clase y un objeto en Python?
+ **Clase:** Es una plantilla que define la estructura y el comportamiento de los objetos.
- **Objeto:** Es una instancia concreta y única de esa clase, con sus propios valores para los atributos definidos por la clase.

### 14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.
+ **Clase Abstracta:** No puede ser instanciada directamente. Se utiliza como una base para otras clases y puede contener métodos abstractos (sin implementación) que deben ser implementados por las clases derivadas. Las clases abstractas pueden contener métodos concretos.
- **Interfaz:** Se pueden simular utilizando clases abstractas con solo métodos abstractos (sin implementación). Las interfaces están diseñadas principalmente para definir contratos y no deben contener implementaciones

### 15. Explique el concepto de sobreescritura de metodos en Python y como se realiza.
Es un concepto fundamental en la programación orientada a objetos que permite a una clase derivada proporcionar una implementación específica para un método que ya está definido en la clase base. La sobreescritura se realiza de manera sencilla y es una forma de aprovechar el polimorfismo, permitiendo que objetos de diferentes clases respondan de manera diferente a la misma llamada de método.