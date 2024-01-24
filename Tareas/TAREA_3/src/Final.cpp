#include <iostream>
#include <vector>
#include <stdexcept>
#include <complex>
#include <type_traits>
#include <sstream>
#include <string>

template <typename T>
class Matriz2D;
//template para generar una matriz con numeros enteros
template <>
class Matriz2D<int> {
private:
    std::vector<std::vector<int>> matriz;
    int filas;
    int columnas;

public:
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<int>(columnas, 0));
    }

    int obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }
       int obtenerFilas() const {
        return filas;
    }

    int obtenerColumnas() const {
        return columnas;
    }

    void establecerValor(int fila, int columna, int valor) {
        matriz[fila][columna] = valor;
    }

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (int valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
    }

    void ingresarDatos() {
        std::cout << "Ingrese los datos para la matriz de enteros:\n";
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                int parteReal;
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte real): ";
                std::cin >> parteReal;

                // Verificar si el valor ingresado es un número entero
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    std::exit(1);  // Finalizar la ejecución del programa
                }

                establecerValor(i, j, parteReal);
            }
        }
    }
};
//template para generar una matriz con numeros flotantes
template <>
class Matriz2D<float> {
private:
    std::vector<std::vector<float>> matriz;
    int filas;
    int columnas;

public:
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<float>(columnas, 0.0f));
    }

    float obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }

    void establecerValor(int fila, int columna, float valor) {
        matriz[fila][columna] = valor;
    }

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (float valor : fila) {
                std::cout << valor << " ";
            }
            std::cout << std::endl;
        }
    }
    int obtenerFilas() const {
        return filas;
    }

    int obtenerColumnas() const {
        return columnas;
    }


void ingresarDatos() {
    std::cout << "Ingrese los datos para la matriz de flotantes:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            float valor;
            std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            std::cin >> valor;

            // Verificar si el valor ingresado es un número entero
            while (std::cin.fail() || std::cin.peek() != '\n') {
                std::cerr << "Error: Debe ingresar un número flotante." << std::endl;
                // Limpiar el buffer de entrada en caso de error
                std::cin.clear();
                while (std::cin.get() != '\n');
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
                std::cin >> valor;
            }

            establecerValor(i, j, valor);
        }
    }
}

};

template <>
class Matriz2D<std::complex<float>> {
private:
    std::vector<std::vector<std::complex<float>>> matriz;
    int filas;
    int columnas;

public:
    Matriz2D(int filas, int columnas) : filas(filas), columnas(columnas) {
        matriz.resize(filas, std::vector<std::complex<float>>(columnas, {0.0f, 0.0f}));
    }

    std::complex<float> obtenerValor(int fila, int columna) const {
        return matriz[fila][columna];
    }

    void establecerValor(int fila, int columna, std::complex<float> valor) {
        matriz[fila][columna] = valor;
    }
    int obtenerFilas() const {
        return filas;
    }

    int obtenerColumnas() const {
        return columnas;
    }

    void mostrarMatriz() const {
        for (const auto& fila : matriz) {
            for (std::complex<float> valor : fila) {
                std::cout << "(" << valor.real() << "," << valor.imag() << ") ";
            }
            std::cout << std::endl;
        }
    }

    void ingresarDatos() {
        std::cout << "Ingrese los datos para la matriz de números complejos:\n";
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                int parteReal, parteImaginaria;
                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte real): ";
                std::cin >> parteReal;

                // Verificar si el valor ingresado es un número entero
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    // Limpiar el buffer de entrada en caso de error
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    --j;  // Decrementar j para reintentar la entrada del mismo elemento.
                    continue;
                }

                std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << " (parte imaginaria): ";
                std::cin >> parteImaginaria;

                // Verificar si el valor ingresado es un número entero
                if (std::cin.fail() || std::cin.peek() != '\n') {
                    std::cerr << "Error: Debe ingresar un número entero." << std::endl;
                    // Limpiar el buffer de entrada en caso de error
                    std::cin.clear();
                    while (std::cin.get() != '\n');
                    --j;  // Decrementar j para reintentar la entrada del mismo elemento.
                    continue;
                }

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

// Sobrecarga de operadores
template <typename T>
Matriz2D<T> operator+(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '+')) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
    }
    return OperacionesBasicas<T>::suma(matriz1, matriz2);
}

template <typename T>
Matriz2D<T> operator-(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '-')) {
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
    }
    return OperacionesBasicas<T>::resta(matriz1, matriz2);
}

template <typename T>
Matriz2D<T> operator*(const Matriz2D<T>& matriz1, const Matriz2D<T>& matriz2) {
    if (!OperacionesBasicas<T>::validarOperaciones(matriz1, matriz2, '*')) {
        throw std::invalid_argument("Las matrices no cumplen las condiciones para la multiplicación.");
    }
    return OperacionesBasicas<T>::multiplicacion(matriz1, matriz2);
}

int pedirOperacion() {
    char operacion;
    std::cout << "Ingrese el tipo de operación que desea realizar (+, -, *): ";
    std::cin >> operacion;

    if (operacion == '+' || operacion == '-' || operacion == '*') {
        return operacion;
    } else {
        throw std::invalid_argument("Operación no válida. Debe ingresar +, -, o *.");
    }
}

int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas de las matrices: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas de las matrices: ";
    std::cin >> columnas;

//Matriz 1


    Matriz2D<int> matrizEnteros1(filas, columnas);
    Matriz2D<int> matrizEnteros2(filas, columnas);
    Matriz2D<float> matrizFlotantes1(filas, columnas);
    Matriz2D<std::complex<float>> matrizComplejos1(filas, columnas);

    // Solicitar al usuario que seleccione el tipo de matriz para la Matriz 1
    std::cout << "Seleccione el tipo de matriz para la Matriz 1 (1: Enteros, 2: Flotantes, 3: Complejos): ";
    int opcionMatriz1;
    std::cin >> opcionMatriz1;

    // Crear la Matriz 1
    switch (opcionMatriz1) {
        case 1: {
            matrizEnteros1.ingresarDatos();
            std::cout << "\nMatriz de enteros 1:\n";
            matrizEnteros1.mostrarMatriz();
            break;
        }
        case 2: {
            matrizFlotantes1.ingresarDatos();
            std::cout << "\nMatriz de flotantes 1:\n";
            matrizFlotantes1.mostrarMatriz();
            break;
        }
        case 3: {
            matrizComplejos1.ingresarDatos();
            std::cout << "\nMatriz de numeros complejos 1:\n";
            matrizComplejos1.mostrarMatriz();
            break;
        }
        default:
            std::cerr << "Opción no válida. Por favor, seleccione una opción válida." << std::endl;
            return 1;
    }

    // Solicitar al usuario que seleccione el tipo de matriz para la Matriz 2
    std::cout << "Ingrese el número de filas de la Matriz 2: ";
    int filasMatriz2;
    std::cin >> filasMatriz2;
    std::cout << "Ingrese el número de columnas de la Matriz 2: ";
    int columnasMatriz2;
    std::cin >> columnasMatriz2;

    std::cout << "Seleccione el tipo de matriz para la Matriz 2 (1: Enteros, 2: Flotantes, 3: Complejos): ";
    int opcionMatriz2;
    std::cin >> opcionMatriz2;

    // Crear la Matriz 2
    switch (opcionMatriz2) {
    case 1: {
        Matriz2D<int> matrizEnteros2(filasMatriz2, columnasMatriz2);
        matrizEnteros2.ingresarDatos();
        std::cout << "\nMatriz de enteros 2:\n";
        matrizEnteros2.mostrarMatriz();

        // Realizar operaciones con matrices
        try {
            std::cout << "\nMatriz 1 antes de la suma:\n";
            matrizEnteros1.mostrarMatriz();
            std::cout << "\nMatriz 2 antes de la suma:\n";
            matrizEnteros2.mostrarMatriz();
            char operacion = pedirOperacion();
            switch (operacion) {
                case '+': {
                    Matriz2D<int> resultadoSuma = matrizEnteros1 + matrizEnteros2;
                    std::cout << "\nResultado de la suma:\n";
                    resultadoSuma.mostrarMatriz();
                    break;
                }
                case '-': {
                    Matriz2D<int> resultadoResta = matrizEnteros1 - matrizEnteros2;
                    std::cout << "\nResultado de la resta:\n";
                    resultadoResta.mostrarMatriz();
                    break;
                }
                case '*': {
                    Matriz2D<int> resultadoMultiplicacion = matrizEnteros1 * matrizEnteros2;
                    std::cout << "\nResultado de la multiplicación:\n";
                    resultadoMultiplicacion.mostrarMatriz();
                    break;
                }
                default:
                    std::cerr << "Operación no reconocida." << std::endl;
                    break;
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        break;
    }

    case 2: {
        Matriz2D<float> matrizFlotantes2(filasMatriz2, columnasMatriz2);
        matrizFlotantes2.ingresarDatos();
        std::cout << "\nMatriz de flotantes 2:\n";
        matrizFlotantes2.mostrarMatriz();
        // Realizar operaciones con matrices
        try {
            std::cout << "\nMatriz 1 antes de la suma:\n";
            matrizFlotantes1.mostrarMatriz();
            std::cout << "\nMatriz 2 antes de la suma:\n";
            matrizFlotantes2.mostrarMatriz();
            char operacion = pedirOperacion();
            switch (operacion) {
                case '+': {
                    Matriz2D<float> resultadoSuma = matrizFlotantes1 + matrizFlotantes2;
                    std::cout << "\nResultado de la suma:\n";
                    resultadoSuma.mostrarMatriz();
                    break;    
                }
                case '-':{
                    Matriz2D<float> resultadoResta = matrizFlotantes1 - matrizFlotantes2;
                    std::cout << "\nResultado de la suma:\n";
                    resultadoResta.mostrarMatriz();
                    break;

                }
                case '*':{
                     Matriz2D<float> resultadoMultiplicacion = matrizFlotantes1 * matrizFlotantes2;
                    std::cout << "\nResultado de la suma:\n";
                    resultadoMultiplicacion.mostrarMatriz();
                    break;

                }
            }

        }catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

        break;

        }

        case 3: {
            Matriz2D<std::complex<float>> matrizComplejos2(filasMatriz2, columnasMatriz2);
            matrizComplejos2.ingresarDatos();
            std::cout << "\nMatriz de numeros complejos 2:\n";
            matrizComplejos2.mostrarMatriz();
            // Realizar operaciones con matrices
        try {
            std::cout << "\nMatriz 1 antes de la suma:\n";
            matrizComplejos1.mostrarMatriz();
            std::cout << "\nMatriz 2 antes de la suma:\n";
            matrizComplejos2.mostrarMatriz();
            char operacion = pedirOperacion();
            switch (operacion) {
                case '+': {
                        Matriz2D<std::complex<float>> resultadoSuma = matrizComplejos1 + matrizComplejos2;
                        std::cout << "\nResultado de la suma:\n";
                        resultadoSuma.mostrarMatriz();
                        break;    
                }

                case '-': {
                        Matriz2D<std::complex<float>> resultadoResta = matrizComplejos1 - matrizComplejos2;
                        std::cout << "\nResultado de la suma:\n";
                        resultadoResta.mostrarMatriz();
                        break;    
                }

                case '*': {
                        Matriz2D<std::complex<float>> resultadoMultiplicacion = matrizComplejos1 * matrizComplejos2;
                        std::cout << "\nResultado de la suma:\n";
                        resultadoMultiplicacion .mostrarMatriz();
                        break;    
                }
            }

            }catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
         break;
        }
            default:
                std::cerr << "Opción no válida. Por favor, seleccione una opción válida." << std::endl;
                return 1;
        }
    // Realizar operaciones con matrices
       
    return 0;
}