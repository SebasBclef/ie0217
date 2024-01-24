#include <iostream>
#include <vector>
#include <stdexcept>
#include <complex>
#include <type_traits>
#include <sstream>
#include <string>

/**
 * @brief Plantilla de clase para matrices 2D.
 * @tparam T Tipo de dato de los elementos de la matriz.
 */

template <typename T>
class Matriz2D;

/**
 * @brief Plantilla de clase para matrices 2D.
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template <>
class Matriz2D<int> {
private:
    std::vector<std::vector<int>> matriz;   /**< Almacenamiento interno de la matriz de enteros. */
    int filas; /**< Número de filas de la matriz. */
    int columnas;  /**< Número de columnas de la matriz. */

public:
    /**
     * @brief Constructor de la matriz de enteros.
     * @param filas Número de filas.
     * @param columnas Número de columnas.
     */
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<int>(columnas, 0));
    }
    // Métodos de acceso y manipulación de la matriz

    /**
     * @brief Obtiene el valor en la posición especificada de la matriz.
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @return Valor en la posición (fila, columna).
     */

    int obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }
    /**
     * @brief Obtiene el número de filas de la matriz.
     * @return Número de filas.
     */
       int obtenerFilas() const {
        return filas;
    }
    /**
     * @brief Obtiene el número de columnas de la matriz.
     * @return Número de columnas.
     */
    int obtenerColumnas() const {
        return columnas;
    }
     /**
     * @brief Establece el valor en la posición especificada de la matriz.
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @param valor Nuevo valor a establecer.
     */

    void establecerValor(int fila, int columna, int valor) {
        matriz[fila][columna] = valor;
    }
     /**
     * @brief Muestra la matriz de enteros en la consola.
     */

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (int valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
    }

    /**
 * @brief Método para ingresar datos en la matriz de enteros.
 *
 * Este método solicita al usuario que ingrese los datos para llenar una matriz de enteros.
 * Utiliza un bucle anidado para recorrer cada posición de la matriz y solicita la parte real
 * de cada elemento al usuario. Verifica si el valor ingresado es un número entero y maneja
 * posibles errores de entrada.
 *
 * @note Este método asume que la matriz ya ha sido inicializada con las dimensiones adecuadas.
 */
    void ingresarDatos() {
        std::cout << "Ingrese los datos para la matriz de enteros:\n";
        /**
     * @note El bucle externo recorre las filas de la matriz.
     */
        for (int i = 0; i < filas; ++i) {
            /**
            * @note El bucle externo recorre las filas de la matriz.
            */
            for (int j = 0; j < columnas; ++j) {
                int parteReal;
                /**
                * @note Se muestra un mensaje solicitando la parte real del elemento en la posición (i, j).
                */
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte real): ";
                std::cin >> parteReal;

                // Verificar si el valor ingresado es un número entero
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    std::exit(1);  // Finalizar la ejecución del programa
                }
                /**
             * @note Se establece el valor ingresado en la posición (i, j) de la matriz.
             */

                establecerValor(i, j, parteReal);
            }
        }
    }
};

/**
 * @brief Clase especializada para matrices de números flotantes.
 *
 * Esta clase template está especializada para manejar matrices de números flotantes.
 * Almacena la matriz en un contenedor de vector bidimensional y proporciona métodos
 * para operaciones y manipulación de la matriz.
 *
 * @tparam T Tipo de dato de los elementos de la matriz (en este caso, float).
 */
template <>
class Matriz2D<float> {
private:
    std::vector<std::vector<float>> matriz; /**< Almacena la matriz de números flotantes. */
    int filas; /**< Número de filas de la matriz. */
    int columnas; /**< Número de columnas de la matriz. */

public:
    /**
     * @brief Constructor de la clase Matriz2D para números flotantes.
     *
     * Inicializa la matriz con el número de filas y columnas especificado.
     *
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<float>(columnas, 0.0f));
    }

    /**
     * @brief Obtiene el valor en la posición especificada de la matriz.
     *
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @return Valor en la posición (fila, columna) de la matriz.
     */

    float obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }

    /**
     * @brief Establece el valor en la posición especificada de la matriz.
     *
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @param valor Nuevo valor a establecer.
     */

    void establecerValor(int fila, int columna, float valor) {
        matriz[fila][columna] = valor;
    }

    /**
     * @brief Muestra la matriz en la consola.
     */

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (float valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
    }

     /**
     * @brief Obtiene el número de filas de la matriz.
     *
     * @return Número de filas de la matriz.
     */
    int obtenerFilas() const {
        return filas;
    }

    /**
     * @brief Obtiene el número de columnas de la matriz.
     *
     * @return Número de columnas de la matriz.
     */

    int obtenerColumnas() const {
        return columnas;
    }

/**
 * @brief Permite al usuario ingresar datos para llenar la matriz de flotantes.
 *
 * Este método solicita al usuario que ingrese los datos para llenar una matriz de números flotantes.
 * Utiliza un bucle anidado para recorrer cada posición de la matriz y solicita el valor flotante
 * de cada elemento al usuario. Verifica si el valor ingresado es un número flotante y maneja
 * posibles errores de entrada.
 *
 * @note Este método asume que la matriz ya ha sido inicializada con las dimensiones adecuadas.
 */
void ingresarDatos() {
    std::cout << "Ingrese los datos para la matriz de flotantes:\n";
     /**
     * @note El bucle externo recorre las filas de la matriz.
     */
    for (int i = 0; i < filas; ++i) {
        /**
         * @note El bucle interno recorre las columnas de la matriz.
         */

        for (int j = 0; j < columnas; ++j) {
            float valor;
            /**
             * @note Se muestra un mensaje solicitando el valor flotante del elemento en la posición (i, j).
             */
            std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            std::cin >> valor;
            /**
             * @note Se verifica si el valor ingresado es un número flotante.
             *       En caso de error, se muestra un mensaje de error, se limpia el buffer de entrada y
             *       se solicita nuevamente el ingreso del valor.
             */
            while (std::cin.fail() || std::cin.peek() != '\n') {
                std::cerr << "Error: Debe ingresar un número flotante." << std::endl;
                // Limpiar el buffer de entrada en caso de error
                std::cin.clear();
                while (std::cin.get() != '\n');
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
                std::cin >> valor;
            }
            /**
             * @note Se establece el valor ingresado en la posición (i, j) de la matriz.
             */

            establecerValor(i, j, valor);
        }
    }
}

};

/**
 * @brief Clase especializada para matrices de números complejos de tipo float.
 *
 * Esta clase template está especializada para manejar matrices de números complejos
 * con componentes de tipo float. Almacena la matriz en un contenedor de vector bidimensional
 * y proporciona métodos para operaciones y manipulación de la matriz.
 *
 * @tparam T Tipo de dato de los elementos de la matriz (en este caso, std::complex<float>).
 */

template <>
class Matriz2D<std::complex<float>> {
private:
    std::vector<std::vector<std::complex<float>>> matriz; /**< Almacena la matriz de números complejos. */
    int filas; /**< Número de filas de la matriz. */
    int columnas; /**< Número de columnas de la matriz. */

public:
    /**
     * @brief Constructor de la clase Matriz2D para números complejos de tipo float.
     *
     * Inicializa la matriz con el número de filas y columnas especificado,
     * asignando valores iniciales a cero para cada componente real e imaginaria.
     *
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<std::complex<float>>(columnas, {0.0f, 0.0f}));
    }
    /**
     * @brief Obtiene el valor en la posición especificada de la matriz.
     *
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @return Valor en la posición (fila, columna) de la matriz.
     */

    std::complex<float> obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }

    /**
     * @brief Establece el valor en la posición especificada de la matriz.
     *
     * @param fila Fila de la matriz.
     * @param columna Columna de la matriz.
     * @param valor Nuevo valor a establecer (número complejo).
     */

    void establecerValor(int fila, int columna, std::complex<float> valor) {
        matriz[fila][columna] = valor;
    }
    /**
     * @brief Obtiene el número de filas de la matriz.
     *
     * @return Número de filas de la matriz.
     */

    int obtenerFilas() const {
        return filas;
    }

    /**
     * @brief Obtiene el número de columnas de la matriz.
     *
     * @return Número de columnas de la matriz.
     */

    int obtenerColumnas() const {
        return columnas;
    }
    /**
     * @brief Muestra la matriz de números complejos en la consola.
     */

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (std::complex<float> valor : fila) {
                std::cout << "(" << valor.real() << "," << valor.imag() << ") ";
            }
            std::cout << std::endl;
        }
    }
/**
 * @brief Permite al usuario ingresar datos para llenar la matriz de números complejos.
 *
 * Este método solicita al usuario que ingrese los datos para llenar una matriz de números complejos.
 * Utiliza un bucle anidado para recorrer cada posición de la matriz y solicita la parte real e imaginaria
 * de cada número complejo al usuario. Verifica si los valores ingresados son números enteros y maneja
 * posibles errores de entrada.
 *
 * @note Este método asume que la matriz ya ha sido inicializada con las dimensiones adecuadas.
 */

    void ingresarDatos() {
        std::cout << "Ingrese los datos para la matriz de números complejos:\n";
        /**
        * @note El bucle externo recorre las filas de la matriz.
        */
        for (int i = 0; i < filas; ++i) {
             /**
             * @note El bucle interno recorre las columnas de la matriz.
            */
            for (int j = 0; j < columnas; ++j) {
                /**
                * @note Se muestra un mensaje solicitando la parte real del número complejo en la posición (i, j).
                */
                int parteReal, parteImaginaria;
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte real): ";
                std::cin >> parteReal;
                /**
                 * @note Se verifica si el valor ingresado es un número entero.
                 *       En caso de error, se muestra un mensaje de error, se limpia el buffer de entrada y
                 *       se solicita nuevamente el ingreso del valor.
                 */
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    // Limpiar el buffer de entrada en caso de error
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    --j;  // Decrementar j para reintentar la entrada del mismo elemento.
                    continue;
                }
                 /**
                * @note Se muestra un mensaje solicitando la parte imaginaria del número complejo en la posición (i, j).
                */
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte imaginaria): ";
                std::cin >> parteImaginaria;
                /**
                 * @note Se verifica si el valor ingresado es un número entero.
                 *       En caso de error, se muestra un mensaje de error, se limpia el buffer de entrada y
                 *       se solicita nuevamente el ingreso del valor.
                 */
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    // Limpiar el buffer de entrada en caso de error
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    --j;  // Decrementar j para reintentar la entrada del mismo elemento.
                    continue;
                }
                /**
                * @note Se establece el valor ingresado (parte real e imaginaria) en la posición (i, j) de la matriz.
                 */

                establecerValor(i, j, {static_cast<float>(parteReal), static_cast<float>(parteImaginaria)});
            }
        }
    }
};

template <typename T>
class OperacionesBasicas {
public:
// Método para validar las operaciones
    static bool validarOperaciones(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2, char operacion) {
        if (operacion == '+' || operacion == '-') {
            return (matriz1.obtenerFilas() == matriz2.obtenerFilas() && matriz1.obtenerColumnas() == matriz2.obtenerColumnas());
        } else if (operacion == '*') {
            return (matriz1.obtenerColumnas() == matriz2.obtenerFilas());
        } else {
            return false;
        }
    }

    // Métodos de operaciones
   static Matriz2D<T> suma(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    Matriz2D<T> resultado(matriz1.obtenerFilas(), matriz1.obtenerColumnas());
    for (int i = 0; i < matriz1.obtenerFilas(); ++i) {
        for (int j = 0; j < matriz1.obtenerColumnas(); ++j) {
            T valor = matriz1.obtenerValor(i, j) + matriz2.obtenerValor(i, j);
            resultado.establecerValor(i, j, valor);
        }
    }
    return resultado;
}


    static Matriz2D<T> resta(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
        Matriz2D<T> resultado(matriz1.obtenerFilas(), matriz1.obtenerColumnas());
        for (int i = 0; i < matriz1.obtenerFilas(); ++i) {
            for (int j = 0; j < matriz1.obtenerColumnas(); ++j) {
                T valor = matriz1.obtenerValor(i, j) - matriz2.obtenerValor(i, j);
                resultado.establecerValor(i, j, valor);
            }
        }
        return resultado;
    }

    static Matriz2D<T> multiplicacion(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
        Matriz2D<T> resultado(matriz1.obtenerFilas(), matriz2.obtenerColumnas());
        for (int i = 0; i < matriz1.obtenerFilas(); ++i) {
            for (int j = 0; j < matriz2.obtenerColumnas(); ++j) {
                T valor = 0;
                for (int k = 0; k < matriz1.obtenerColumnas(); ++k) {
                    valor += matriz1.obtenerValor(i, k) * matriz2.obtenerValor(k, j);
                }
                resultado.establecerValor(i, j, valor);
            }
        }
        return resultado;
    }
};

/**
 * @brief Sobrecarga del operador de suma para matrices.
 *
 * @tparam T Tipo de datos de la matriz (entero, flotante, número complejo, etc.).
 * @param matriz1 Matriz izquierda en la operación de suma.
 * @param matriz2 Matriz derecha en la operación de suma.
 * @return Matriz resultante de la operación de suma.
 * @throws std::invalid_argument Si las matrices no tienen las mismas dimensiones.
 *
 * Este operador permite sumar dos matrices del mismo tipo. Antes de realizar la suma,
 * se verifica si las matrices tienen las mismas dimensiones. En caso contrario, se lanza
 * una excepción de tipo std::invalid_argument.
 *
 * @note La operación de suma se realiza elemento por elemento.
 */
template <typename T>
Matriz2D<T> operator+(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    /**
     * @note Se utiliza la función validarOperaciones de la clase OperacionesBasicas para verificar
     *       si las matrices tienen las mismas dimensiones para la operación de suma.
     */
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '+')) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
    }
    /**
     * @note Se utiliza la función suma de la clase OperacionesBasicas para realizar la operación de suma.
     */
    return OperacionesBasicas<T>::suma(matriz1, matriz2);
}


/**
 * @brief Sobrecarga del operador de multiplicación para matrices.
 *
 * @tparam T Tipo de datos de la matriz (entero, flotante, número complejo, etc.).
 * @param matriz1 Matriz izquierda en la operación de multiplicación.
 * @param matriz2 Matriz derecha en la operación de multiplicación.
 * @return Matriz resultante de la operación de multiplicación.
 * @throws std::invalid_argument Si las matrices no cumplen las condiciones para la multiplicación.
 *
 * Este operador permite multiplicar dos matrices del mismo tipo. Antes de realizar la multiplicación,
 * se verifica si las matrices cumplen las condiciones necesarias para esta operación. En caso contrario,
 * se lanza una excepción de tipo std::invalid_argument.
 *
 * @note La operación de multiplicación se realiza utilizando el método multiplicacion de la clase OperacionesBasicas.
 */
template <typename T>
Matriz2D<T> operator-(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    /**
     * @note Se utiliza la función validarOperaciones de la clase OperacionesBasicas para verificar
     *       si las matrices cumplen las condiciones para la operación de multiplicación.
     */
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '-')) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
    }
     /**
     * @note Se utiliza la función multiplicacion de la clase OperacionesBasicas para realizar la operación de multiplicación.
     */
    return OperacionesBasicas<T>::resta(matriz1, matriz2);
}

/**
 * @brief Sobrecarga del operador de multiplicación para matrices.
 *
 * @tparam T Tipo de datos de la matriz (entero, flotante, número complejo, etc.).
 * @param matriz1 Matriz izquierda en la operación de multiplicación.
 * @param matriz2 Matriz derecha en la operación de multiplicación.
 * @return Matriz resultante de la operación de multiplicación.
 * @throws std::invalid_argument Si las matrices no cumplen las condiciones para la multiplicación.
 *
 * Este operador permite multiplicar dos matrices del mismo tipo. Antes de realizar la multiplicación,
 * se verifica si las matrices cumplen las condiciones necesarias para esta operación. En caso contrario,
 * se lanza una excepción de tipo std::invalid_argument.
 *
 * @note La operación de multiplicación se realiza utilizando el método multiplicacion de la clase OperacionesBasicas.
 * @see OperacionesBasicas::multiplicacion
 */
template <typename T>
Matriz2D<T> operator*(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    /**
     * @note Se utiliza la función validarOperaciones de la clase OperacionesBasicas para verificar
     *       si las matrices cumplen las condiciones para la operación de multiplicación.
     */
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '*')) {
        throw std::invalid_argument("Las matrices no cumplen las condiciones para la multiplicación.");
    }
     /**
     * @note Se utiliza la función multiplicacion de la clase OperacionesBasicas para realizar la operación de multiplicación.
     */
    return OperacionesBasicas<T>::multiplicacion(matriz1, matriz2);
}

/**
 * @brief Función para solicitar al usuario el tipo de operación a realizar.
 *
 * @return Carácter que representa la operación seleccionada (+, -, *).
 * @throws std::invalid_argument Si se ingresa una operación no válida.
 *
 * Esta función solicita al usuario que ingrese el tipo de operación que desea realizar
 * (+, -, *). Verifica si la operación ingresada es válida y la retorna. En caso de
 * una operación no válida, se lanza una excepción de tipo std::invalid_argument.
 */


