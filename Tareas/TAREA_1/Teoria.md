# Tarea 1,IE-0207,Sebastián Bonilla Vega, C01263.

## 1. ¿Cuál es la principal diferencia entre C y C++?
Existen varias diferencias y similitudes entre ambos lenguajes. **En el lenguaje C**, se tiene que es un lenguaje procedural, que esta centrado a funciones y estructuras de datos, con una complejidad un poco menor al ser comparado con C++, y el usuario tienen un control más directo sobre la memoria al utilizar funciones como **malloc() y free()**. Mientras tanto, en el **lenguaje C++**, se tiene que es un lenguajeorientado a la programación orientada a objetos, utilizando herramientas como polimorfismo. C++ también es más complejo que C, ya que se usan conceptos como sobrecarga de funciones, herencia y en general una síntaxis más díficil de leer e implementar cuando se está aprendiendo a usar. Por otro lado, en C++ el manejo de memoria se hace a través del uso de funciones como **new y delete**, así como también se pueden utilizar punteros y punteros inteligentes para gestionar la memoria.


## 2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.
Cuando se habla de un **lenguaje compilado**, es un lenguaje donde se traduce el código fuente a ´lenguaje de máquina´, o código intermedio antes de la ejecución del programa. O sea, traduce el código fuente a un código que sea leible por la máquina. Esto se realiza compilando el lenguaje manualmente, y luego se corre el código. Al compilar el código, se genera un ejecutable (.exe). Algunos lenguajes compilados incluyen C y C++. Los lenguajes compilados en general tienen un mejor rendimiento y eficiencia, ya que el código se compila por aparte, lo que aumenta la velocidad de ejecución del código. Es óptimo utilizar un lenguaje compilado cuando se trate de desarrollar sistemas operativos, aplicaciones de alto rendimiento (juegos, software) y cuando se necesite tener un control estricto y preciso sobre los recursos del sistema, como en el desarrollo de sistemas embebidos; donde los recursos disponibles son sumamente limitados.

Cuando se habla de un **lenguaje interpretado**, se tiene que este es un lenguaje en el que se compila y se traduce el código línea a línea por el intérprete al **mismo tiempo.** Los ejemplos más concretos sobre lenguajes interpretados son Python y Java. Algunas ventajas sobre estos lenguajes, es que el código desarrollado en ellas puede ejecutarse en múltiples plataformas sin necesidad de estarlo recompilando, esto se llama portabilidad. Además, el desarrollo en general es más rápido, ya que no hay que esperar a la compilación. Es óptimo utilizar éste tipo de lenguaje cuando se necesita desarrollar prototipos rápidos, desarrollo web, scripting y aplicaciones donde se urge más la portabilidad que la eficiencia. 

Entonces, los lenguajes compilados permiten mayor control sobre los recursos disponibles, y al compilarlo manualmente, disminuye la **velocidad de ejecución** del código, a cambio de que se ocupa más tiempo para trabajarlo ya que hay que compilar y ejecutar por aparte. En un lenguaje interpretado, la compilación y la ejecución suceden al mismo tiempo; por lo que es menos eficiente y se consumen más recursos, pero se ocupa menos tiempo para trabajarlo.

## 3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?
Un linker permite enlazar varios archivos en el proceso de compilación, y lo hace a través de un ejecutable (.exe). Algunas de sus funciones principales incluyen asociar símbolos (variables, nombres de funciones), a un espacio en de memoria real; también es capaz de enlazar bibliotecas con el código fuente, para que éste  se pueda ejecutar de manera coherente y se encarga de conectar las llamadas de funciones que hace el código fuente con los archivos en los que estén dichas funciones. Por otro lado, el linker convierte las direcciones de memoria utilizadas por los archivos objeto en direcciones de memoria absoluta. La inclusión de un linker es crucial, ya que sin este, no se puede juntar todo en un solo ejecutable (.exe).

## 4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.
Los **datos derivados** incluyen las funciones, arrays, punteros y referencias. Mientras que los **datos primarios** son los integers, characters, booleanos, puntos flotantes, puntos flotantes dobles, voids y wide characters. La diferencia clave es que unos se meten en otros, como juguetes en una caja. Los datos primeros serían los juguetes que van dentro los datos derivados, que propiamente son la caja. Dejando la analogía de la caja, también se puede ver que los datos derivados nacen derivando o combinando los datos primarios o básicos.

## 5. Defina qué significa inicializar y declarar una variable.
Cuando **se inicializa** una variable, se le está pidiendo a la computadora que le asigne un espacio de memoria solo para ella, a pesar de que **aún no haya nada declarado en esta variable.** Cuando **declaro** una variable, se le asigna un valor específico a guardar para utilizar posteriormente en el código fuente.

## 6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
La sobrecarga de funciones se refiere a que se pueden definir varias funciones con el mismo nombre en el mismo archivo, pero se definen con distintos conjuntos de parámetros. Esto significa que se pueden tener múltiples funciones con el mismo nombre y cada una realiza una tarea diferente basado en la cantidad de parámetros que reciben. Entonces, usando este ejemplo que hizo ChatGPT:
```
void MostrarMensaje(int numero) {
std::cout << "El número es: " << numero << std::endl;
}
void MostrarMensaje(double numero) {
std::cout << "El número es: " << numero << std::endl;
}
void MostrarMensaje(conts char*mensaje) {
std::cout << mensaje << std::endl;
}
```
Y le pido que se ejecute así, por ejemplo:
```
int main() {
MostrarMensaje(42);
MostrarMensaje (3.14);
MostrarMensaje ("Hola Mundo.)
}
```
Entonces, el compilador va a seleccionar la función ¨MostrarMensaje¨ adecuada para cada uno de los datos pedidos. Si le meto un float, va a escoger el ¨Mostrar Mensaje¨ que tenga un float, si le meto un int, va a escoger el ¨MostrarMensaje¨ que tenga un int, y así sucesivamente. 

## 7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.
Un puntero es una variable que almacena la **dirección de memoria** de otra variable. No contiene un valor directamente, contiene la dirección donde se encuentra el valor específico. Usando una casa de analogía, las casas tienen direcciones específicas. Los punteros son lo que me apuntan hacia la dirección de esa casa. Puedo pedirle al puntero que me muestre la dirección de la casa, y que me muestre lo que tiene dentro de ella.

## 8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.
Al usar una variable global en una función, esta función puede acceder y modificar el valor almacenado en la variable, no se crea una copia de la variable, ya que la función trabaja directamente con la ubicación de la memoria. Se puede escoger utilizar variables globales ya que estos se vuelven accesibles desde cualquier parte del programa. Por otro lado el valor persiste y retiene su valor a pesar de que la función termine su trabajo. También, es importante cuando se busca ayudar evitar pasar un gran número de parámetros entre funciones, mejorando la legibilidad del código.

## 9. Investigue y explique tres métodos comunes de la biblioteca string en C++.
La biblioteca string proporciona una gama de funciones para manipular cadenas de carácteres de manera eficiente. 3 de estos son:

- size(): Se utiliza para obtener la longitud, o número de carácteres que hay en un solo string, no modifica la cadena y devuelve un valor entero.
* substr(): Se utiliza para sacar una subcadena de una cadena más grande, y toma dos argumentos, siendo estos la posición inicial y la longitud de la subcadena que se desea extraer.
+ find(): Se utiliza para buscar cuando ocurre una subcadena, por primera vez, dentro de otra cadena. Este devuelve la posición de ésta primera posición de la subcadena.
## 10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
## 11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.
## 12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.
## 13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.
## 14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.
## 15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.
## 16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?
## 17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.
## 18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.
## 19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?
## 20. ¿Para qué se utiliza la directiva #ifndef?
## 21. ¿Qué es el puntero this en C++?
## 22. ¿Qué es un puntero nullptr?
## 23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
## 24. ¿Qué es una funcién prototipo?
## 25. ¿Investigue qué es un memory leak?

