# Tarea 2,IE-0207,Sebastián Bonilla Vega, C01263.
##  INSTRUCCIONES PARA COMPILAR
Se deben ejecutar los siguientes comandos:
- **make:** para compilar el codigo
- **make clean:** para borrar archivos residuales o borrar todos los ejecutables
- **/.programa.exe:** para ejecutar el programa

La idea del programa es que, al ejecutar el codigo, se impriman las 3 pruebas para ver que compilan correctamente. Al decir el enunciado que el cliente tenia acceso de administrador, se asumio que iba a tener acceso al codigo e iba a saber que editar. Habiendo dicho esto, en prueba 1 lo que se busco implementar fue la primera funcionalidad del codigo, donde se guardan las clases de medios audio visuales y se subdividen en las clases que se solicito. En la prueba 2, se busco implementar la funcionalidad de agregar o borrar medios a las clases. Para la prueba 3, igualmente se busco implementar la funcionalidad de acomodar los multimedios basado en su precio en orden tanto ascendente como descendente.
## Teoria Parte C++.
### ***1. Conceptos Fundamentales:*** Define que es la programacion orientada a objetos y explica sus principios fundamentales.
La OOP organiza el código a través de objetos, dentro de los cuales se pueden instanciar clases. Permite:
- **Abstracción:** Permite representas lo esencial a través del código y omite detalles no relevantes.
* **Encapsulamiento:** Agrupa datos y métodos que operan sobre esos datos en una sola unidad.
+ **Herencia:** Permite que una clase herede propiedades y comportamientos de otra clase.
+ **Polimorfismo:** Objetos de distintas clases pueden ser tratados del mismo modo si comparten una misma interfaz.

### ***2. Herencia:*** Explica el concepto de herencia en programacion orientada a objetos y proporciona un ejemplo practico.
Es un principio que permite a una clase heredar propiedades y comportamientos de otra clase. La clase que hereda se llama "subclase" o "clase derivada", mientras la clase que hereda se llama "superclase" o "clase base". Por ejemplo, si se imagina un sistema de gestión de empleados, se podría tener una clase base llamada 'Empleado', con atributos como nombre, salario y métodos para calcular bonificaciones. Luego, se pueden desarrollar subclases como Trabajador y Gerente, que heredan propiedades y métodos de la clase Empleado pero también pueden tener sus propias características específicas. Entonces, un Trabajador y un Gerente, son empleados también, por lo que lógicamente sirve que hereden características de la clase Empleado.

### ***3. Encapsulamiento:*** ¿Que es el encapsulamiento en OOP y por que es importante? Proporciona ejemplos de como se implementa en C++.
El encapsulamiento en programación orientada a objetos es el principio de limitar el acceso directo a algunos de los componentes internos de un objeto y restringir la modificación de sus datos solo a través de métodos definidos en la propia clase. Se puede lograr mediante el uso de acceso a miembros (public, private, protected). Un ejemplo de como implementar esto en código, sacado de chat GPT:
```
#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int paginas;

public:
    // Métodos públicos para acceder y modificar los datos encapsulados
    void setTitulo(std::string t) {
        titulo = t;
    }

    std::string getTitulo() const {
        return titulo;
    }

    void setAutor(std::string a) {
        autor = a;
    }

    std::string getAutor() const {
        return autor;
    }

    void setPaginas(int p) {
        // Validar que las páginas no sean negativas
        if (p > 0) {
            paginas = p;
        } else {
            std::cout << "Número de páginas inválido. No se ha actualizado." << std::endl;
        }
    }

    int getPaginas() const {
        return paginas;
    }
};

int main() {
    Libro libro1;

    libro1.setTitulo("Cien años de soledad");
    libro1.setAutor("Gabriel García Márquez");
    libro1.setPaginas(432);

    std::cout << "Libro: " << libro1.getTitulo() << std::endl;
    std::cout << "Autor: " << libro1.getAutor() << std::endl;
    std::cout << "Páginas: " << libro1.getPaginas() << std::endl;

    // Intentar modificar las páginas directamente (fuera del encapsulamiento)
    // Esto no se permitirá debido a la validación en el método setPaginas
    libro1.paginas = -100;

    return 0;
}
```

### ***4. Polimorfismo:*** Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.

En OOP, el polimorfismo se refiere a la capacidad de los objetos de diferentes clases de responder al mismo mensaje o llamada a método de manera diferente.Para los dos tipos de polimorfismo:
- Polimorfismo de tipo: En este caso, objetos de diferentes clases pueden ser tratados como objetos de una clase común. Esto se logra mediante el uso de herencia y funciones o métodos comunes. Por ejemplo: Si se tiene un conjunto de dispositivos electrónicos, todos estos dispositivos pueden tener una función común, como encender() y apagar(). Pero, se pueden tener clases base, como Dispositivo (con métodos genéricos) y subclases específicas como Televisor y Laptop (que implementan estos mismos metodos, pero de manera diferente). Un control remoto podría enviar comandos encender() y apagar() a cualquier dispositivo, independientemente de su tipo específico.
* Polimorfismo de operador: Se refiere a la capacidad de un operador para actuar de manera diferente en función de los tipos de operandos involucrados. Por ejemplo, si se tiene una calculadora, la adición (+) podría ser implementada para sumar dos números y la concatenación (+) podría ser usada para unir dos cadenas. La calculadora, al interactuar con diferentes tipos de datos, demostraría un polimorfismo de operador. La operación + se comporta de manera diferente según el tipo de datos involucrados, adaptándose a las necesidades específicas de cada situación.
### ***5. Abstraccion:*** ¿Como se relaciona la abstraccion con la programacion orientada a objetos? Proporciona ejemplos de como aplicar la abstraccion en un contexto de programacion.
 La abstracción se refiere al concepto de encapsular los detalles internos de una implementación y proporcionar una interfaz simplificada para interactuar con dicha implementación. Cuando se habla de OOP, la abstracción se logra a través de la creación de clases y objetos. Una clase define una plantilla para crear objetos, y la interfaz de la clase proporciona una forma de interactuar con esos objetos sin necesidad de conocer todos los detalles internos. Por ejemplo,si se tiene una clase que representa un automóvil, se pueden tener métodos como "arrancar", "detenerse" y "acelerar". Desde el punto de vista del usuario de esa clase, no es necesario conocer los detalles internos del motor o la transmisión; simplemente interactúan con el automóvil a través de los métodos definidos.

### ***6. Clases y Objetos:*** Diferencia entre una clase y un objeto en programacion orientada a objetos. Proporciona un ejemplo de cada uno.
Si hablamos de una **clase**:
- Se puede ver como una plantilla o un plano que define las propiedades y comportamientos comunes de un conjunto de objetos. Es como un diseño o un modelo que deben seguir los objetos.
* Siguiendo el ejemplo del auto,  la clase seria como el diseño general que especifica qué propiedades y métodos tienen todos los vehículos. No representa un vehículo específico, sino la idea de un vehículo en sí.

Si se habla de un **objeto**:
- Un objeto es una instancia concreta de una clase que se crea utilizando la plantilla proporcionada por la clase. Los objetos tienen un estado (valores de atributos) y comportamientos (métodos) definidos por la clase.
* Siguiendo el ejemplo del auto, un objeto sería una instancia específica de la clase Vehiculo, por ejemplo, un automóvil llamado MiAuto. Este objeto tiene valores concretos para sus atributos (marca,modelo, cantidad de llantas).

### ***7. Metodos Virtuales:*** Explica la importancia de los metodos virtuales en C++ y como se utilizan en la implementacion de polimorfismo.En programación orientada a objetos, los métodos virtuales son esenciales para lograr polimorfismo, que permite que objetos de diferentes clases sean tratados de manera uniforme a través de una interfaz común.
Los métodos virtuales son esenciales para lograr polimorfismo, que permite que objetos de diferentes clases sean tratados de manera uniforme a través de una interfaz común. **Sin métodos virtuales,** el comportamiento de un método en una clase base se heredaría directamente en las clases derivadas. Esto limitaría la capacidad de las clases derivadas para proporcionar implementaciones específicas. **Con métodos virtuales,** una clase base puede definir métodos que serán implementados por clases derivadas, permitiendo que un objeto de la clase base sea tratado como un objeto de cualquier clase derivada a través de punteros o referencias. Por ejemplo, si se define una clase llamada "Figura", con un método virtual calcularArea(). Las clases derivadas como Círculo y Rectángulo pueden proporcionar implementaciones específicas de calcularArea(), ya que el área de un círculo se calcula de manera diferente a la de un rectángulo. Esto permite tratar objetos de diferentes formas geométricas de manera uniforme a través de la interfaz Figura, independientemente de su tipo concreto


### ***8. Constructores y Destructores:*** ¿Cual es el proposito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.
Para el **constructor:**
- Su propósito es establecer el estado inicial de un objeto cuando se crea una instancia de una clase.
+ Su importancia radica en que se garantiza que el objeto comience con valores coherentes y válidos.
* Un ejemplo sería cuando se crea una nueva cuenta llamada "CuentaBancaria"; el constructor se encarga de inicializar el saldo y configurar cualquier otro estado inicial necesario.

Para el **destructor:**

- Su propósito es Liberar recursos y realizar tareas de limpieza cuando un objeto se elimina o sale de ámbito.
+ Su importancia radica en que evita posibles problemas como fugas de memoria y permite realizar acciones específicas antes de que el objeto deje de existir. 
* Cuando la cuenta bancaria deja de ser necesaria (por ejemplo, al salir de una función o al finalizar un programa), el destructor podría encargarse de cerrar cualquier conexión a la base de datos utilizada o realizar cualquier otra acción de limpieza necesaria.
### ***9. Sobrecarga de Operadores:*** Explica que es la sobrecarga de operadores y proporciona un ejemplo de como se implementa en C++.
La sobrecarga de operadores es un concepto en programación que permite proporcionar implementaciones personalizadas para operadores que ya existen. Esto significa que se puede definir cómo un operador específico debería comportarse cuando se utiliza con otros tipos de datos o clases.Si se tienee una clase Tiempo, por ejemplo, que representa el tiempo, y se desea poder sumar dos instancias de esta clase de una manera más natural, la sobrecarga del operador "+" permitiría hacer eso. Esto, con el propósito de expresar la suma de dos instancias de Tiempo de manera más intuitiva, como si fueran números.

### ***10. Templates:*** Describe el concepto de templates en C++. ¿En que situaciones seria util utilizar templates?
Un template es una característica que permite definir funciones o clases de manera genérica, independiente del tipo de datos con el que operan. Los templates permiten escribir código que puede trabajar con varios tipos de datos sin tener que reescribir el código para cada tipo específico.Es útil utilizar templates cuando se busque **reutiliar el código**, ya que permiten escribir funciones o clases que funcionan con varios tipos de datos sin tener que duplicar el código para cada tipo; y también cuando se desea escribir algoritmos o estructuras de datos que son **independientes del tipo de datos**, como por ejemplo, una función de ordenamiento o una lista enlazada que puede contener elementos de cualquier tipo.

Además, se le permite a los programadores proporcionar tipos de datos arbitrarios para adaptarse a diferentes situaciones. y la mantenibilidad mejora, ya que al modificar el código de una plantilla, los cambios se aplican a todos los tipos de datos con los que se utiliza, lo que facilita el mantenimiento y la corrección de errores.

### 11. ¿Que es la memoria dinamica en C++ y cuando se utiliza comunmente?

La memoria dinámica en C++ se refiere al espacio de almacenamiento que se reserva durante la ejecución del programa en tiempo de ejecución, en lugar de en tiempo de compilación. Es gestionada mediante operadores new y delete. La memoria dinámica permite la creación y liberación de recursos de manera flexible, pero también requiere una uso cuidadoso para evitar fugas de memoria.

### 12. Explique la diferencia entre new y malloc en C++. ¿Cuando deberia utilizar uno sobre el otro?
**new** y **malloc** son dos maneras de asignar memoria dinámicamente en C++. Algunas diferencias clave son:
- **new:** Se utiliza para para trabajar con clases y objetos. También invoca el constructor de la clase si es necesario.
    + Se utiliza **< new >** para incluirlo en el header.
    + Se calcula automáticamente el tamaño del tipo de dato proporcionado.
    + Se invoca el constructor de la clase si se está asignando memoria para un objeto de una clase.
* **malloc:** Se utiliza para asignar bloques de memoria sin inicializar. No invoca constructores de clases.
    + Se utiliza **< cstdlib >** para incluirlo en el header.
    + Se requiere que se le proporcione el tamaño del bloque de memoria a asignar.
    + No se invocan constructores; simplemente asigna un bloque de memoria.
### 13. ¿Que es una fuga de memoria (memory leak) y como puede evitarse en programas como C++?
Un memory leak (fuga de memoria) ocurre cuando un programa asigna memoria dinámicamente pero no la libera adecuadamente antes de que el programa finalice su ejecución. Como resultado, la memoria asignada no está disponible para su reutilización, lo que puede llevar a un agotamiento de los recursos del sistema. Se puede prevenir liberando memoria a través de delete [ ] y new [ ].
### 14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.
Un smart pointer es un objeto que actúa como un puntero tradicional (raw pointer), pero proporciona una gestión automática de la memoria. Su objetivo principal es ayudar a evitar memory leaks y simplificar la gestión de la memoria dinámica en C++. Hay dos tipos principales de smart pointers en la biblioteca estándar de C++: **std::unique_ptr** y **std::shared_ptr.**

### 15. ¿Cual es la diferencia entre delete y delete[] en C++? ¿En que contexto se utilizaria cada uno?
La diferencia principal entre delete y delete [ ] en C++ radica en cómo se libera la memoria que fue asignada con new o new[ ]. Ambos operadores se utilizan para liberar memoria dinámicamente asignada, pero se aplican de manera diferente según si la memoria fue asignada para un solo objeto o para un array (arreglo) de objetos.

- Si se ha utilizado new para asignar memoria para un solo objeto, se debe usar delete para liberar esa memoria.

+ Si se ha utilizado new[] para asignar memoria para un array de objetos, se debe usar delete[] para liberar esa memoria.
### 16. ¿Que es un algoritmo de ordenamiento y por que son importantes en programacion?
Un algoritmo de ordenamiento es un conjunto de pasos bien definidos y específicos diseñados para organizar los elementos de una lista o conjunto en un orden específico, generalmente ascendente o descendente. La ordenación de datos es una operación común en la programación y la informática en general, y existen varios algoritmos de ordenamiento con diferentes características y eficiencias.
### 17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cual es su complejidad temporal en el peor caso?
Su **complejidad temporal (Peor Caso): O(n^2)** ,donde 'n' es el número de elementos en la lista.El Bubble Sort es un algoritmo de ordenamiento que funciona comparando repetidamente pares de elementos adyacentes y realizando intercambios si están en el orden incorrecto. Este proceso se repite hasta que la lista esté ordenada. Aquí está cómo funciona:
- Se compara el primer elemento con el siguiente.
+ Si el primer elemento es mayor que el siguiente, se intercambian.
+ Se repite este proceso para cada par de elementos adyacentes a lo largo de la lista.
- Luego, se repite el mismo proceso para el segundo elemento, el tercero, y así sucesivamente, hasta que toda la lista esté ordenada.
### 18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cual es su ventaja principal sobre otros algoritmos de ordenamiento?
El Quicksort es un algoritmo de ordenamiento eficiente que sigue el dicho de "divide y vencerás". Funciona dividiendo el arreglo en subconjuntos más pequeños, ordenándolos y luego combinándolos. Su ventaja radica en su rapidez y eficiencia en comparación con otros algoritmos de ordenamiento, especialmente para conjuntos de datos grandes. Además, su implementación suele ser compacta y requiere menos memoria adicional en comparación con otros algoritmos de ordenamiento.
### 19. ¿Cual es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.
Un algoritmo de ordenamiento se considera estable si mantiene el orden relativo de elementos con claves iguales tal como estaba en la entrada.
- Por ejemplo: Si se tiene una lista de personas ordenada por edad de manera estable, y dos personas tienen la misma edad, el orden original entre esas dos personas se mantiene después de la ordenación.

Un algoritmo de ordenamiento se considera inestable si no garantiza el mantenimiento del orden relativo de elementos con claves iguales.
- Como por ejemplo, si se ordena una lista de personas por edad de manera inestable y dos personas tienen la misma edad, no se garantiza que su orden relativo inicial se conserve.
### 20. Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cual es su complejidad temporal y en que situaciones es preferible su uso?

El Merge Sort es un algoritmo de ordenamiento basado otra vez en el "divide y vencerás". Su funcionamiento implica dividir la lista en mitades, ordenar cada mitad recursivamente y luego combinar las mitades ordenadas. Este proceso de división y combinación garantiza que el orden relativo de los elementos se mantenga. Su **complejidad temporal en el peor, mejor y caso promedio** es **O(n log n)**, donde 'n' es el número de elementos en la lista.Merge Sort es eficiente para listas enlazadas y arreglos. Es especialmente útil cuando se necesita garantizar un rendimiento consistente, ya que su complejidad es O(n log n) en todos los casos.Su uso se prefiere para listas enlazadas, ya que no requiere acceso aleatorio, a diferencia de algoritmos como QuickSort.
