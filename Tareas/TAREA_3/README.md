# Tarea 3,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA COMPILAR
Se deben ejecutar los siguientes comandos:
- **make o make all:** para compilar el codigo.
- **make clean:** para borrar archivos objeto y borrar todos los ejecutables, recomendado hacer siempre una vez que ya se empezo a probar el programa.
- **./mainMatrices.exe:** para ejecutar el programa que corresponde a la parte 1, sobre matrices.
- **./mainCorreo.exe:** para ejecutar el programa que corresponde a la parte 2, sobre correos.

**Nota**: No se pudo subir a netlify :(. Pero lo bueno es que si corrio la documentacion doxygen, por eso se ven los archivos **html** y **latex.** Toda la tarea esta en el src.
## Templates:
### ***1. Definicion de Templates:*** Explique el concepto de templates en C++ y proporcione un ejemplo simple.
Un "template", se refiere a una funcionalidad del lenguaje que permite la creacion de codigo generico y reutilizable. Es una "plantilla", que se puede usar para crear funciones, clases o estructuras de datos que pueden trabajar con varios tipos de datos, sin tener que especificarlos de antemano. El codigo siguiente, va a crear una funcion que va a intercambiar los valores de dos variables, indepentiente de si son ints, floats o algun otro tipo de dato:

```
#include <iostream>

// Definición de la función de intercambio utilizando un template
template <typename T> //nomenclatura de template
void intercambiar(T &a, T &b) { //funcion
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Ejemplo con enteros
    int num1 = 5, num2 = 10;
    std::cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    intercambiar(num1, num2);

    std::cout << "Después del intercambio: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Ejemplo con doubles
    double dbl1 = 3.14, dbl2 = 2.71;
    std::cout << "Antes del intercambio: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << std::endl;

    intercambiar(dbl1, dbl2);

    std::cout << "Después del intercambio: dbl1 = " << dbl1 << ", dbl2 = " << dbl2 << std::endl;

    return 0;
}

```
### ***2. Sobrecarga de Plantillas:*** ¿Como se realiza la sobrecarga de funciones con plantillas en C++?

Cuando se habla de sobrecagra de plantillas, se refiere a la capacidad de definir varais versiones de una misma plantilla, para asi manejar distintos tipos de parametros y con cantidades diferentes. Esto permite adaptar la funcionalidad de la plantilla. Se realiza:

```
#include <iostream>

// Plantilla para imprimir un solo valor
template <typename T>
void imprimir(T valor) {
    std::cout << "Valor: " << valor << std::endl;
}

// Sobrecarga de la plantilla para imprimir dos valores
template <typename T, typename U>
void imprimir(T valor1, U valor2) {
    std::cout << "Valor 1: " << valor1 << ", Valor 2: " << valor2 << std::endl;
}

int main() {
    // Ejemplos de uso de las funciones sobrecargadas
    imprimir(42);                    // Utiliza la primera versión de la plantilla
    imprimir(3.14, "Hola");          // Utiliza la segunda versión de la plantilla

    return 0;
}

```



### ***3. Plantillas de Clases:***  Explique como se pueden utilizar plantillas en la definicion de clases en C++.
Se puede usar para asi crear clases que puedan trabajar con distintos tipos de datos, sin tener que duplicar el codigo. Es particularmente util cuando se deben crear estructuras de datos flexibles con respecto al tipo de dato que se maneja. Un ejemplo de esto:

```
#include <iostream>

// Definiendo la plantilla
template <typename T>
class MiContenedor {
private:
    T dato;

public:
    // Constructor que toma un valor inicial
    MiContenedor(T valorInicial) : dato(valorInicial) {}

    // Función para obtener el dato almacenado
    T obtenerDato() const {
        return dato;
    }

    // Función para establecer un nuevo dato
    void establecerDato(T nuevoDato) {
        dato = nuevoDato;
    }
};

int main() {
    // Uso de la plantilla de clase con un tipo de dato específico (int)
    MiContenedor<int> contenedorEntero(42);
    std::cout << "Dato almacenado en el contenedor de enteros: " << contenedorEntero.obtenerDato() << std::endl;

    // Uso de la plantilla de clase con otro tipo de dato (double)
    MiContenedor<double> contenedorDouble(3.14);
    std::cout << "Dato almacenado en el contenedor de doubles: " << contenedorDouble.obtenerDato() << std::endl;

    return 0;
}
```

## Excepciones:

### ***4. Manejo de Excepciones:*** Describa los bloques **try**, **catch** y **throw** y como se utilizan para el manejo de excepciones en C++.

El bloque **try** se utiliza para envolver el codigo que puede lanzar una excepcion, dentro de este bloque, se mete el codigo que se debe ejecutar y se espera que sucedan excepciones. Si se produce una excepcion dentro del **try**, se pasa al bloque **catch.**

El bloque **catch** recibe las excepciones que envia **try**, pueden haber varios **catch**, y cada uno puede tener un tipo de excepcion asociado que captura y maneja.

El bloque **throw** se utiliza para lanzar una excepcion desde cualquier parte del codigo, se puede lanzar un objeto de cualquier tipo, pero el blqoue **catch** debe corresponder al tipo de dato para poder atraparlo.


### ***5. Excepciones Estandar:*** Nombre al menos tres excepciones estandar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrıan ser utiles.
- **std::runtime_error**
    - Se utiliza para erroes que ocurren durante la ejecucion del programa y no se pueden preveer.
```
#include <stdexcept> //incluyendo para poder invocar las excepciones
#include <iostream>

void realizarOperacion(int valor) { //funcion para realizar la operacion
    if (valor < 0) {
        throw std::runtime_error("Error: No se puede realizar la operación con un valor negativo");//uso de la excepcion 
    }
    // Realizar la operación
}

int main() {
    try {
        realizarOperacion(-5);
    } catch (const std::runtime_error& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}
```
+ **std::invalid_argument:**
    - Idealmente, se utiliza cuando una funcion recibe un argumento que no es valido en el contexto de la funcion.
```
#include <stdexcept>
#include <iostream>

void dividir(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::invalid_argument("Error: Denominador no puede ser cero"); //Es protege la funcion que busca dividir, mediante una excepcion si el numero
                                                                            // ingresado es 0.
    }
    // Realizar la división
}

int main() {
    try {
        dividir(10, 0);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}

```

- **std::out_of_range:**
    + Se utiliza cuando se intenta acceder a un índice o realizar una operación fuera del rango válido.

```
#include <stdexcept>
#include <vector>
#include <iostream>

int obtenerElementoEnIndice(const std::vector<int>& vec, std::size_t indice) {
    if (indice >= vec.size()) {
        throw std::out_of_range("Error: Índice fuera del rango del vector");
    }
    return vec[indice];
}

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    try {
        int valor = obtenerElementoEnIndice(numeros, 10);
        std::cout << "Valor obtenido: " << valor << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    return 0;
}

```


### ***6. Politica de Manejo de Excepciones:*** ¿Que es una polıtica de manejo de excepciones y por que es importante considerarla al disenar software? 
Una politica de manejo de excepciones se refiere a las decisiones y enfoques que se piensan y toman por un desarrollador en lo que refiere a manejar las excepciones de un programa. Abarca decisiones sobre dónde y cómo se deben lanzar, capturar, y manejar excepciones en el código. Es importante considerar una política de manejo de excepciones al diseñar software cuando se quiere que el codigo sea mas robusto, claro y facil de mantener. Por otro lado, tambien contribuye a la seguridad del codigo al permitirle al codigo que haqga 'cierres controlados', en caso de que algo salga mal.

### ***7. Noexcept:*** Explica el proposito de la palabra clave noexcept y como se utiliza en C++.
La palabra clave **noexcept** se utiliza para indicar que una función no lanza excepciones. El propósito principal es optimizar el rendimiento y permitir que el compilador realice ciertas optimizaciones cuando se sabe que una función no generará excepciones. Un ejemplo de sus uso:
```
void funcionSinExcepciones() noexcept {
    // Código de la función que no lanza excepciones
}

void funcionConExcepciones() {
    throw std::runtime_error("¡Error!"); // Esta función lanza excepciones
}

int main() {
    try {
        funcionSinExcepciones();
        funcionConExcepciones(); // Esta línea lanzará una excepción
    } catch (const std::exception& e) {
        // Manejo de la excepción
    }

    return 0;
}
```


## STL (Standard Template Library):

### ***8. Contenedores STL:*** Nombre cinco contenedores diferentes de la STL y explique brevemente en que situaciones serıa apropiado usar cada uno.
Algunos contenedores proporcionados por STL incluyen:
- **std::vector**, el cual almacena elementos en un arreglo contiguo en la memoria. Se utiliza cuando se necesita un contenedor de tamano dinamico que permite almacenar y manipular secuencias de elementos de manera eficiente.
- **std::list**, que es una lista doblemente enlazada que permite la insercion y eliminacion eficiente de elementos en cualquier posicion. Se utiliza cuando es necesario realizar inserciones o eliminaciones frecuentes, como por ejemplo, a traves de iteradores.
+ **std::map**, el cual es un contenedor que almacena pares clave-valor, donde cada clave es unica y ordenada. Se utiliza cuando se busca realizar busquedas eficientes, basadas en clases, y tambien cuando se necesia una estructura de datos que asocie claves con valores.
+ **std::unordered_set:**, el cual es un conjutno, no ordenado, que almacena elementos unicos sin orden particular. Se puede utilizar cuando se necesita verificar de manera rapida la existencia de un elemento en el conjunto, o cuando el orden de los elementos no es importante.
+ **std::queue:**, el cual es una cola FIFO (First In, First Out) que permite inserciones al final y eliminaciones al frente. Entonces, se puede utilizar cuando se necestia seguir el principio FIFO.

### ***9. Iteradores en STL:*** Explique el concepto de iteradores en la STL y como se utilizan para acceder a elementos en contenedores.
Los iteradores son objetos que proporcionan una forma de recorrer secuencias de elementos en contenedores, actúan como punteros que apuntan a elementos en un contenedor y permiten acceder y manipular esos elementos. Los iteradores mas comunes son:

- **Iterador begin y end:**
    + *begin(container)* devuelve el iterador al primer elemento del contenedor. 
    + *end(container)* envia al iterador al final del rango.
```
#include <vector>

std::vector<int> numeros = {1, 2, 3, 4, 5};
auto itInicio = numeros.begin();  // Iterador al primer elemento
auto itFin = numeros.end();       // Iterador al final (fuera del contenedor)
```

- **Iterador de avance (++):**
    + Le indica al iterador a avanzar al siguiente elemento de la secuencia.
 ```   
++itInicio;  // Avanza al siguiente elemento
```

- **Operador de Desreferencia (*):**
    + Permite acceder al valor al que apunta el iterador.
```
int primerElemento = *itInicio;  // Accede al valor del primer elemento
```


- **Iterador de Retroceso ( -- ):**
    + Permite al iterador retrocedes al elemento anterior en la secuencia.
```
--itFin;  // Retrocede al elemento anterior
```

### ***10. Algoritmos STL:*** Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones basicas.

- **std::sort:**
    + Ordena los elementos de un rango específico en orden ascendente o descendente, de acuerdo a las necesidades del programa.

```
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numeros = {5, 2, 8, 1, 3};

    // Ordena el vector en orden ascendente
    std::sort(numeros.begin(), numeros.end());

    // Ahora 'numeros' contiene: {1, 2, 3, 5, 8}
    return 0;
}
```
- **std::find:**
    + Ordena lBusca la primera ocurrencia de un valor específico en un rango y devuelve un iterador al elemento encontrado 

```
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    int valorBuscado = 3;

    auto it = std::find(numeros.begin(), numeros.end(), valorBuscado);

    if (it != numeros.end()) {
        // Se encontró el valor
    } else {
        // El valor no fue encontrado
    }

    return 0;
}
```

- **std::accumulate:**
    + Calcula la suma (u otra operación binaria) de todos los elementos en un rango.

```
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Calcula la suma de los elementos en el vector
    int suma = std::accumulate(numeros.begin(), numeros.end(), 0);

    // Ahora 'suma' contiene la suma de los elementos: 15
    return 0;
}

```

### ***11. Algoritmos Personalizados:*** ¿Como podria utilizar un algoritmo personalizado con la STL?
La STL tambien proporciona una interfaz flexible que te permite aplicar funciones personalizadas a los elementos de un contenedor.Primeramente, se debe definir la funcion y lo que se quiere que esta haga. Esta funcion puede ser una funcion regular, un objeto o una expresion lambda. Luego, se pueden utilizar algoritmos como **std::transform** o **std::for_each**

## Expresiones Regulares:


### ***12. Definicion de Expresiones Regulares:***. ¿Defina que son las expresiones regulares y proporcione un ejemplo simple.
Las expresiones regulares son patrones de búsqueda y manipulación de cadenas de texto, ya que se describen conjuntos de cadenas de caracteres y se utilizan para buscar, comparar y manipular texto de manera eficiente.Se construyen mediante una combinación de caracteres literales y caracteres especiales que representan ciertos patrones o clases de caracteres. Un ejemplo seria:

+ ^[A-Za-z]+$
### ***13. Caracteres Especiales:*** Enumere al menos tres caracteres especiales comunmente utilizados en expresiones regulares y describa sus funciones.
Siguiendo el ejemplo anterior: 

- **^:** Indica el inicio de la cadena.
+ **[A-Za-z]**: Representa 'cualquier letra minuscula o mayuscula'
- **+**: Indica que debe haber al menos una letra
+ **$**: Indica el final de la cadena

### ***14.  Uso de Expresiones Regulares en C++:*** ¿Como se utilizan las expresiones regulares en C++? Proporciona un ejemplo.
Se pueden utilizar expresiones regulares mediante la biblioteca estándar regex. La STL proporciona una interfaz para trabajar con expresiones regulares a través de las clases **std::regex** y **std::regex_match**. A nivel de codigo: 
```
#include <iostream>
#include <regex>

int main() {
    // Expresión regular para buscar números enteros en una cadena
    std::regex patron("[0-9]+");

    // Cadena de texto a analizar
    std::string texto = "La edad de Juan es 25 y la de Maria es 30.";

    // Objeto de coincidencia
    std::smatch coincidencia;

    // Buscar coincidencias en la cadena usando la expresión regular
    if (std::regex_search(texto, coincidencia, patron)) {
        std::cout << "Coincidencia encontrada: " << coincidencia[0] << std::endl;
    } else {
        std::cout << "No se encontraron coincidencias." << std::endl;
    }

    return 0;
}
```
### ***15. Validacion de Patrones:*** ¿Por que las expresiones regulares son utiles para la validacion de patrones en cadenas de texto?

Son útiles para la validación de patrones en cadenas de texto por que permiten mas flexibilidad y generalidad. Por otro lado, permite el manejo de busqueda y extraccion de informacion, aumentando asi la eficiencia y el rendimiento. Ademas, la versatilidad en la definicion de reglas permite definir y anazliar patrones mas complejos. Las expresiones regulares tambien son herramientas estandarizadas, que mantienen la consistencia y los estandares definidos por la industria, ademas de facilitar la mantenibilidad del codigo.
