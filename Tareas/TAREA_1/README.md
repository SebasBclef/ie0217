# Tarea 1,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA COMPILAR
- **mingw32-make y mingw32-make all:** Se utiliza para ejecutar todo el programa. Si no se pone nada, de una vez el MakeFile lo interpreta como 'all'. Ademas, 'all' de una vez compila y ejecuta.
* **mingw32-make os_message:** Se utiliza para verificar en cual Sistema Operativo se esta.
+ **mingw32-make clean:** Se utiliza para borrar el ejecutable anterior.
+ **mingw32-make build:** Se utiliza para compilar el programa, y crear un nuevo ejectuable.

**NOTA:** Una vez iniciado el modo dificil, no se es capaz de volver al modo facil. Entonces, si se escoge el modo dificil, se completa el juego, y debe reiniciar todo el programa para jugar en facil. Modo facil es el default. En el modo dificil, por cada error se penalizan 2 intentos por cada error. Ademas, siempre se debe ejecutar el comando **mingw32-make clean:**, para borrar los ejecutables que se generen. 
## Teoria Parte C++.
### 1. ¿Cuál es la principal diferencia entre C y C++?
Existen varias diferencias y similitudes entre ambos lenguajes. **En el lenguaje C**, se tiene que es un lenguaje procedural, que esta centrado a funciones y estructuras de datos, con una complejidad un poco menor al ser comparado con C++, y el usuario tienen un control más directo sobre la memoria al utilizar funciones como **malloc() y free()**. Mientras tanto, en el **lenguaje C++**, se tiene que es un lenguajeorientado a la programación orientada a objetos, utilizando herramientas como polimorfismo. C++ también es más complejo que C, ya que se usan conceptos como sobrecarga de funciones, herencia y en general una síntaxis más díficil de leer e implementar cuando se está aprendiendo a usar. Por otro lado, en C++ el manejo de memoria se hace a través del uso de funciones como **new y delete**, así como también se pueden utilizar punteros y punteros inteligentes para gestionar la memoria.


### 2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.
Cuando se habla de un **lenguaje compilado**, es un lenguaje donde se traduce el código fuente a ´lenguaje de máquina´, o código intermedio antes de la ejecución del programa. O sea, traduce el código fuente a un código que sea leible por la máquina. Esto se realiza compilando el lenguaje manualmente, y luego se corre el código. Al compilar el código, se genera un ejecutable (.exe). Algunos lenguajes compilados incluyen C y C++. Los lenguajes compilados en general tienen un mejor rendimiento y eficiencia, ya que el código se compila por aparte, lo que aumenta la velocidad de ejecución del código. Es óptimo utilizar un lenguaje compilado cuando se trate de desarrollar sistemas operativos, aplicaciones de alto rendimiento (juegos, software) y cuando se necesite tener un control estricto y preciso sobre los recursos del sistema, como en el desarrollo de sistemas embebidos; donde los recursos disponibles son sumamente limitados.

Cuando se habla de un **lenguaje interpretado**, se tiene que este es un lenguaje en el que se compila y se traduce el código línea a línea por el intérprete al **mismo tiempo.** Los ejemplos más concretos sobre lenguajes interpretados son Python y Java. Algunas ventajas sobre estos lenguajes, es que el código desarrollado en ellas puede ejecutarse en múltiples plataformas sin necesidad de estarlo recompilando, esto se llama portabilidad. Además, el desarrollo en general es más rápido, ya que no hay que esperar a la compilación. Es óptimo utilizar éste tipo de lenguaje cuando se necesita desarrollar prototipos rápidos, desarrollo web, scripting y aplicaciones donde se urge más la portabilidad que la eficiencia. 

Entonces, los lenguajes compilados permiten mayor control sobre los recursos disponibles, y al compilarlo manualmente, disminuye la **velocidad de ejecución** del código, a cambio de que se ocupa más tiempo para trabajarlo ya que hay que compilar y ejecutar por aparte. En un lenguaje interpretado, la compilación y la ejecución suceden al mismo tiempo; por lo que es menos eficiente y se consumen más recursos, pero se ocupa menos tiempo para trabajarlo.

### 3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?
Un linker permite enlazar varios archivos en el proceso de compilación, y lo hace a través de un ejecutable (.exe). Algunas de sus funciones principales incluyen asociar símbolos (variables, nombres de funciones), a un espacio en de memoria real; también es capaz de enlazar bibliotecas con el código fuente, para que éste  se pueda ejecutar de manera coherente y se encarga de conectar las llamadas de funciones que hace el código fuente con los archivos en los que estén dichas funciones. Por otro lado, el linker convierte las direcciones de memoria utilizadas por los archivos objeto en direcciones de memoria absoluta. La inclusión de un linker es crucial, ya que sin este, no se puede juntar todo en un solo ejecutable (.exe).

### 4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.
Los **datos derivados** incluyen las funciones, arrays, punteros y referencias. Mientras que los **datos primarios** son los integers, characters, booleanos, puntos flotantes, puntos flotantes dobles, voids y wide characters. La diferencia clave es que unos se meten en otros, como juguetes en una caja. Los datos primeros serían los juguetes que van dentro los datos derivados, que propiamente son la caja. Dejando la analogía de la caja, también se puede ver que los datos derivados nacen derivando o combinando los datos primarios o básicos.

### 5. Defina qué significa inicializar y declarar una variable.
Cuando **se inicializa** una variable, se le está pidiendo a la computadora que le asigne un espacio de memoria solo para ella, a pesar de que **aún no haya nada declarado en esta variable.** Cuando **declaro** una variable, se le asigna un valor específico a guardar para utilizar posteriormente en el código fuente.

### 6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
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

### 7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.
Un puntero es una variable que almacena la **dirección de memoria** de otra variable. No contiene un valor directamente, contiene la dirección donde se encuentra el valor específico. Usando una casa de analogía, las casas tienen direcciones específicas. Los punteros son lo que me apuntan hacia la dirección de esa casa. Puedo pedirle al puntero que me muestre la dirección de la casa, y que me muestre lo que tiene dentro de ella.

### 8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.
Al usar una variable global en una función, esta función puede acceder y modificar el valor almacenado en la variable, no se crea una copia de la variable, ya que la función trabaja directamente con la ubicación de la memoria. Se puede escoger utilizar variables globales ya que estos se vuelven accesibles desde cualquier parte del programa. Por otro lado el valor persiste y retiene su valor a pesar de que la función termine su trabajo. También, es importante cuando se busca ayudar evitar pasar un gran número de parámetros entre funciones, mejorando la legibilidad del código.

### 9. Investigue y explique tres métodos comunes de la biblioteca string en C++.
La biblioteca string proporciona una gama de funciones para manipular cadenas de carácteres de manera eficiente. 3 de estos son:

- size(): Se utiliza para obtener la longitud, o número de carácteres que hay en un solo string, no modifica la cadena y devuelve un valor entero.
* substr(): Se utiliza para sacar una subcadena de una cadena más grande, y toma dos argumentos, siendo estos la posición inicial y la longitud de la subcadena que se desea extraer.
+ find(): Se utiliza para buscar cuando ocurre una subcadena, por primera vez, dentro de otra cadena. Este devuelve la posición de ésta primera posición de la subcadena.
### 10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
La diferencia principal es que el bucle "do-while" garantiza que el código se ejectue al menos una sola vez, incluso si la condición del bucle es falsa desde el principio. El bucle "while", por otro lado, verifica la condición antes de ejecutar el código en general. Entonces, en el "do-while", primero se ejecuta al menos una vez y luego se vé la condición. En el "while" se vé la condición primero, y luego se ejecuta el código.
### 11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.
Las estructuras solo permiten que se almacenen datos, de distintos tipos. Sin embargo, al usar punteros, se puede lograr algo parecido. Se pueden referenciar partes de la memoria donde estén guardadas las funciones, y estos punteros se pueden meter en una estructura, para decir que las funciones están "guardadas" en una estructura. Entonces, en términos estrictos no se pueden guardar funciones en estructuras de manera directa, pero se puede lograr ¨brincar¨ esa restricción. 

Cuando se habla de miembros privados y públicos en una estructura, no se pueden hacer especificaciones de ese tipo. Para realizar eso, es mejor utilizar una **clase.** En las clases, es más directo realizar divisiones de acceso así en comparación con las estructuras.

### 12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.
Es útil, ya que permite mayor organización y estructuración de código. Por otro lado, al mejorar el orden del código, se hace más fácil escalar y mantener el código. Los archivos son los siguientes:
- **.hpp**: También llamado "header", es usual declarar dentro de éste clases, funciones, variables o estructuras, todo lo que sea utilizable varias veces en un mismo proyecto. Proporcionan una interfaz externa a las implementaciones.
* **.cpp**: Estos son archivos de código fuente que contienen las implementaciones de las funciones declaradas en los archivos del header. Se escribe la mayoría del código que realiza la lógica en las declaraciones.
+ **main.cpp**: En este archivo, se incluye función **main()**, que es la encargada de ejecutar todo el programa. Este archivo puede incluir todos los encabezados, y es capaz de llamar las funciones de otros archivos para organizar el flujo del programa.
### 13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.
El Type Casting se refiere a la conversión explícita de un tipo de dato a otro. Es necesario cuando se necesita utilizar un tipo diferente de expresión.Existen el casting implícito y el casting explícito. En el **explícito**, se habla de la conversión manual de un tipo de dato a otro, realizado mediante el uso de operadores o funciones. Como por ejemplo, convirtiendo un entero a un punto flotante a través de la función:
```
static_cast<float>(entero)
```
La cuál realiza la conversión explícita de un entero a un punto flotante. Para el casting **implícito**, se tiene que éste se realiza de manera automática por el compilador cuando éste no necesita una conversión explícita del programador. Es útil para evitar pérdidas de precisión, como por ejemplo cuando se pasa de un **double a un float**, haciéndolo a través de casting garantiza que no se pierda información. Además, el casting permite el manejo preciso de punteros, como cuando se deba pasar un puntero de un tipo a otro. Un ejemplo de typecasting se puede ver en este código:
```
//Conversión de entero a float
#include <iostream>

int main() {
    int entero = 42;

    // Casting explícito de int a float
    float flotante = static_cast<float>(entero);

    std::cout << "Entero: " << entero << std::endl;
    std::cout << "Flotante: " << flotante << std::endl;

    return 0;
}
```
Y, viéndo una conversión implícita:

```
//Conversión implícita con un typecasting.
#include <iostream>

int main() {
    int entero = 42;

    // Casting implícito de int a float
    float flotante = entero;

    std::cout << "Entero: " << entero << std::endl;
    std::cout << "Flotante (implícito): " << flotante << std::endl;

    return 0;
}
```
### 14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.
No es recomendable, ya que esta es una instrucción que permite realizar saltos no estructurados dentro de un programa. Su uso dificulta la lectura, mantenimiento y entendimiento del mismo; rompe el flujo del programa haciéndo saltos no controlados. Además, esta sentencia aumenta la complejidad ya que no sigue una estructura clara proporcionada por otras sentencias, como los **if, while y for**. Todo esto, sin considerar que hay alternativas estructuradas sin causar tanta complejidad. 

Para no usar un goto, se pueden iniciar mediante variables de control, las cuáles son más estructuradas y controladas. Analizando el siguiente código:
```
// Loop for Con go to
for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
        if (condicion) {
            goto salida;
        }
    }
}

// Loop for Sin go to
bool salir = false;
for (int i = 0; i < 10 && !salir; ++i) {
    for (int j = 0; j < 10 && !salir; ++j) {
        if (condicion) {
            salir = true; //variable de control
        }
    }
}
```

### 15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.
Las **variables locales** son creadas cuando la función en el que están declaradas es ejecutado, y se eliminan una vez que se termina la ejecución del mismo. Estas variables se almacenan en el **stack** de la memoria, cuando estas variables son automáticas. Caso contrario, son variables con duración dinámica se crean y se destruyen explícitamente por la persona que esté desarrollando el código, a través de funciones como **new y delete**. Estas variables locales se almacenan en el heap.

Por otro lado, las **variables globales** tienen una duración estática, lo que significa que **existen durante toda la ejecución del programa**, lo que significa que se deben almacenar en una región de la memoria llamada **segmento de datos.**

### 16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?
Las diferencias principales son:

- Parámetros por Valor: Se copia el valor del argumento del parámetro cuando se inicia la función.Tiene sintáxis **void function (int parametro);**. Lo más notable es que los cambios realizados dentro de la función no afectan el argumento original y es útil cuando no se quiere que la función modifique el valor original del argumento.
* Parámetros por Referencia: En este caso, se pasa la referencia al argumento original, permitiendo modificar el valor directamente. Su sintáxis es ** void function (int &referencia)**. En este caso, los cambos dentro de la función afectan el argumento original, y es útil cuando el interés es modificar el valor original del argumento.
+ Parámetros por Puntero : Es bastante similar a pasar por referencia, pero se utiliza un puntero. Permite la manipulación directa del valor original, con el cuidado que se debe tener cuando se trabaja con punteros. Sun sintáxis es **void function(int * puntero )**

### 17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.
Cuando seaq crea un puntero para que apunte a un array, este inicalmente apunta a la primera posición de memoria del arreglo, lo que significa que apunta al primer elemento del arreglo. La forma para acceder a todos los datos del arreglo mediante el puntero, sería mediante el uso de un bucle for, el cual tiene como parámetros recorrer desde 0 al tamaño del arrreglo. Visto en forma de código, se vería así:
```
#include <iostream>
int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int *puntero = arreglo; //Al inicializar el puntero, este de manera automática apunta al primer elemento del array
    for (int i = 0; i < 5; ++i) {// este for es el que permite accesar los elementos del array con el puntero
        std::cout << "Elemento " << i << ": " << *puntero << std::endl;
        puntero++;// esta parte avanza al siguiente elemento del array
    }
    return 0;
}
```
### 18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.
Un puntero doble se encarga de almacenar la dirección de memoria de otro puntero. Como Inception, sueño dentro de un sueño. Entonces, un puntero doble apunta hacia la dirección de memoria de un puntero simple. Se les puede sacar el mayor provecho cuando se está trabajando con arreglos bidimensionales, matrices dinámicas y en la manipulación de memorias. Cuando se trate de manipulación de memoria más elaborada o compleja, o cuando una función modifica un puntero original.

### 19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?
Tanto el **break y el continue** son utilizados de manera extensiva en bucles, para así poder controlar el flujo de ejecución:
- **Break**: Se utiliza para *romper* y salir de manera inmediata de un bucle. El programa busca salir por el bucle más cercano, y la ejecución continúa con la primera instrucción que vea después del bucle.
* **Continue**: Se utiliza para pasar a la siguiente iteración de un bucle, omitiendo todo lo que siga en el bucle. Cuando el código se encuentra un *Continue*, se salta el resto del bloque de código dentro del bucle.
### 20. ¿Para qué se utiliza la directiva #ifndef?
El #ifndef, se utiliza para evitar la que se incluyan múltiples veces un mismo archivo de encabezado (header). Entonces, usualmente se utiliza en conjunto a **#define y #endif** para crear una inclusión que sea condicionada, para evitar la duplicación.
### 21. ¿Qué es el puntero this en C++?
**This** es un puntero implícito, el cual se utiliza para referise al objeto **actual** en el que se está ejecutando el código. Este puntero se utiliza para diferenciar entre los miembros de una clase y para acceder a los miembros del objeto actual. El puntero **this** apunta al objeto para el cuál se invocó el método. Siguiendo con la analogía de la casa, nuesra casa sería la **clase**, y cada objeto dentro de esa clase es como una casa en un vecindario. Entonces, dentro de nuestra casa hay cosas (funciones o métodos), que pueden interactuar con las cosas dentro de esa casa. Entonces, el puntero **this** es una etiqueta que llevo yo, que me permite referirme a las cosas dentro de **mi** casa, y no a la de los vecinos.
### 22. ¿Qué es un puntero nullptr?
De la manera más literal, es una manera de decir **puntero nulo**. Este es un puntero que no apunta a ningún lado, o para representar la ausencia o falta de dirección de memoria,significa que no apunta a ninguna ubicación de memoria específica.
### 23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
Ambas son estructuras de datos que almacenan colecciones de elementos. Primeramente, un **arreglo** o **array** es una estructura de tamaño fijo; una vez definido su tamaño, no puede cambiarse su estructura de manera dinámica durante la ejecución del programa. Por otro lado, la asignación de memoria para el arreglo se asgina en el momento de la declaración, y este también es fijo. Sin embargo, el acceso a los elementos del arreglo es rápido, fácil y directo. Finalmente, el arreglo puede ser menos eficiente para insertar o eliminar elementos en posiciones intermedias.

Por otro lado, una **lista** tiene un tamaño dinámico, su estructura puede ser cambiada durante la ejecución del programa. La memoria, al igual que su tamaño, se puede agregar dinámicamente durante la ejecución- Por otro lado, accesar a los elementos de una lista suele ser más laborioso, ya que hay que iterar o utilizar métodos específicos para poder hacer eso. Debido a la estructura dinámica de la lista, puede ser menos eficiente que un arreglo. Ahora, realizar inserciones y eliminaciones en una lista es más fácil y eficiente, ya que no es necesario el desplazamiento de elementos.
### 24. ¿Qué es una función prototipo?
Esta es una declaración anticipada de una función antes de su definición completa. Este prototipo proporciona información sobre la función, como su nombre, lo que retorna y sus parámetros. Los prototipos de funciones se colocan generalmente al comienzo de un programa o en un archivo header, para que el compilador conozca la función antes de encontrarse con la implementación completa. Entonces, las funciones prototipos son aquellas que se ponen en el header.
### 25. ¿Investigue qué es un memory leak?
Un memory leak es un error donde se reserva espacio en la memoria, pero el espacio no se libera de ese espacio después de que ya no se necesite. Esto causa que la memoria asignada se quede ocupada, y no esté disponible para otros usos. Las fugas de memorias son potencialmente peligrosas, ya que van a llevar a un agotamiento de los recursos del sistema.

## Teoria MakeFile

### 1. ¿Que suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?
- **CC(Compilador):** Se utiliza para especificar el compilador que se va a utilizar para compilar el codigo fuente. Ejemplo: gcc indica que se va a usar GNU Compiler Collection.
* **CFLAGS(C Compiler Flags):** Se utiliza para especificar las opciones de compilacion que se deben pasar al compilador de C. Esto incluye optimizacion, por ejemplo.
+ **CXXFLAGS(C++ Compiler Flags):** Se utiliza para especificar las opciones de compilacion especificas para el compilador de C++. Se usa cuando el proyecto tiene codigo fuente en C y en C++, por lo que se vuelve necesario configurar opciones de compilacion diferentes para cada lenguaje.
+ **LDFLAGS(Linker Flags):** Se utiliza para especificar opcoines que deben ser pasadas al enlazador. Esto incluye configuraciones como las bibliotecas adicionales a utilizar, rutas para buscar bibiliotecas, etc.
### 2. ¿De que se compone una regla en un Makefile?
En un makefile, una regla consta de tres partes principales. El **objetivo**, que es el resultado que se espera recibir despues de ejecutar la regla. Puede ser uin archivo ejecutbale, un archivo objeto o cualquier otro archivo que el Makefile este hecho para construir. Las **dependencias** son los archivos o recursos que se utilizar para construir el objetivo. La regla se ejecuta de nuevo si alguna de las dependencias cambia. Finalmente, los **comandos** son las acciones o los pasos necesarios para construir el objetivo a partir de las dependencias. Algo asi, como las instrucciones a seguir.

### 3. Defina que es un target y como se relaciona con sus prerequisitos.
El **objetivo** o **target**, es el resultado que se espera obtener despues de ejecutar una regla especifica. Como se dijo antes, el objetivo puede ser un archivo ejecutable, un archivo objeto, una biblioteca o cualquier otro archivo que se le ordene al makefile hacer. Los **pre requisitos** son, como su nombre lo dice, necesarios para que el objetivo pueda ser construido adecuadamente. Sin prerequisitos, no se ejecuta nada. Si estos pre requisitos cambian, la regla asociada a estos se va a ejecutar nuevamente para actualizar el objetivo.

### 4. ¿Para que se utiliza la bandera -I, -c y -o del compilador gcc?
En formato de lista:
- **-I(Include Directories):** Se utiliza para especificar directorios de busqueda para los archivos header. El compilador necesita saber donde estan esos archivos header. La opcion **-I** oernute agregrar directorios al path de busqueda de arhivos header.
* **-c(Compile Only):** Se utiliza para especificarle al compilador que solo debe compilar el codigo fuente, y generar un archivo objeto (.o), pero no debe realizar el enlazado para generar el (.exe). Entonces, solo se busca compilar al ejecutar esta bandera.
+ **-o(Output File):** Se utiliza para especificar el nombre del archivo de salida. Se puede usar esta bandera para darle un nombre especifico al archivo ejecutable.
### 5. ¿Como se definen y se utilizan las variables en un Makefile? ¿Que utilidad tienen?
En un Makefile, las variables se definen y se utilizan para hacer que el archivo sea mas flexible de mantener. Las variables permiten asignar valores a nombres de manera simbolica, de modo que se puedan cambiar dichos valores en un solo lugar y afectar todas las instancias donde se utiliza la variable en el Makefile. Para utilizar las variables, se utiliza la sintaxis **$(nombre_variable)**, un ejemplo de esto:

```
programa: $(SOURCES)
    $(CC) $(CFLAGS) -o programa $(SOURCES)
```
Es bastante util, ya que usar variables facilitan mantenimiento, mejoran la legibilidad, promueven la rehabilitacion y la adaptabilidad. Valores clave pueden ser modificables en un solo lugar, sin tener que buscar y modificar multiples ubicaciones en el makefile, aumentando el mantenimiento. Ademas, el makefile se vuelve mas legible y comprensivo; asi como tambien se puede reutilizar variables en diferentes partes del Makefile.
### 6. ¿Que utilidad tiene un @ en un Makefile?
En un Makefile, el **"@"**, se utiliza para suprimir la salida de la linea de comando. Es una forma de hacer que la regla se ejecute de manera silenciosa, no muestra los comandos en la salida estandar. Incluir ese comando, evita que dicho comando se imprima en la salida estandar. Es util usar ese comando, ya que mantiene la salida limpia y clara cuando se ejecuta el makefile, haciendo la ejecucion y compilacion del programa sea mas concisa y facil de leer.

### 7. ¿Para que se utiliza .PHONY en un Makefile?

El **.PHONY** se utiliza para indicar que un objetivo no es un archivo realmente con ese nombre. Se utiliaz para especificar que el objetivo es una meta "falsa", que no corresponde a un arvhico fisico en el sistema de archivos. Es util, ya que evita conflictos con archivos reales que puedan tener el mismo nombre de las metas en el makefile. Cuando se declara un objetivo como .PHONY, se le está diciendo a Make que no espere un archivo con ese nombre y que siempre considere que la regla asociada debe ejecutarse. Esto es útil en situaciones en las que el objetivo no está destinado a producir un archivo.