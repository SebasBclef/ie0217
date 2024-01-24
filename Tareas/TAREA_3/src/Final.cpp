#include "Templates.cpp"
int pedirOperacion() {
    char operacion;
    std::cout << "Ingrese el tipo de operación que desea realizar (+, -, *): ";
    std::cin >> operacion;
    /**
     * @note Se verifica si la operación ingresada es válida (+, -, *).
     *       Si es válida, se retorna el carácter que representa la operación.
     *       En caso contrario, se lanza una excepción.
     */
    if (operacion == '+' || operacion == '-' || operacion == '*') {
        return operacion;
    } else {
        throw std::invalid_argument("Operación no válida. Debe ingresar +, -, o *.");
    }
}
/**
 * @brief Función principal del programa para realizar operaciones con matrices.
 * 
 * Se solicita al usuario ingresar el número de filas y columnas para las matrices.
 * Luego, se crea una matriz de enteros, una matriz de flotantes y una matriz de números complejos
 * según las preferencias del usuario. Se realizan operaciones de suma, resta o multiplicación
 * entre matrices, y se muestra el resultado.
 * 
 * @return 0 si el programa se ejecuta correctamente.
 */
int main() {
    int filas, columnas;
    std::cout << "Ingrese el número de filas de las matrices: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas de las matrices: ";
    std::cin >> columnas;

/**
 * @brief Matriz de enteros 1.
 * 
 * Se crea una matriz de enteros con el número de filas y columnas especificado por el usuario.
 */
    Matriz2D<int> matrizEnteros1(filas, columnas);
/**
 * @brief Matriz de enteros 2.
 * 
 * Se crea otra matriz de enteros con el mismo número de filas y columnas que la Matriz de enteros 1.
 */
    Matriz2D<int> matrizEnteros2(filas, columnas);
/**
 * @brief Matriz de flotantes 1.
 * 
 * Se crea una matriz de flotantes con el mismo tamaño que las matrices de enteros.
 */
    Matriz2D<float> matrizFlotantes1(filas, columnas);
/**
 * @brief Matriz de números complejos 1.
 * 
 * Se crea una matriz de números complejos con el mismo tamaño que las matrices de enteros.
 */
    Matriz2D<std::complex<float>> matrizComplejos1(filas, columnas);

/**
 * @brief Solicitar al usuario el tipo de matriz para la Matriz 1.
 * 
 * Se presenta un mensaje en consola pidiendo al usuario que seleccione el tipo de matriz para la Matriz 1.
 * Las opciones son:
 * - 1: Matriz de enteros.
 * - 2: Matriz de flotantes.
 * - 3: Matriz de números complejos.
 * 
 * @return La opción seleccionada por el usuario.
 */
    std::cout << "Seleccione el tipo de matriz para la Matriz 1 (1: Enteros, 2: Flotantes, 3: Complejos): ";
    int opcionMatriz1;
    std::cin >> opcionMatriz1;

/**
 * @brief Crear la Matriz 1 según la opción seleccionada por el usuario.
 * 
 * Se utiliza una estructura de switch para determinar el tipo de matriz a crear:
 * - Si la opción es 1, se crea y muestra una matriz de enteros.
 * - Si la opción es 2, se crea y muestra una matriz de flotantes.
 * - Si la opción es 3, se crea y muestra una matriz de números complejos.
 * - En caso de una opción no válida, se muestra un mensaje de error y se finaliza el programa.
 */
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
/**
 * @brief Solicitar al usuario que ingrese el número de filas y columnas, y seleccione el tipo de matriz para la Matriz 2.
 * 
 * Se solicita al usuario que ingrese el número de filas y columnas para la Matriz 2, y luego seleccione el tipo de matriz:
 * - Si la opción es 1, se crea y muestra una matriz de enteros.
 * - Si la opción es 2, se crea y muestra una matriz de flotantes.
 * - Si la opción es 3, se crea y muestra una matriz de números complejos.
 */
    std::cout << "Ingrese el número de filas de la Matriz 2: ";
    int filasMatriz2;
    std::cin >> filasMatriz2;
    std::cout << "Ingrese el número de columnas de la Matriz 2: ";
    int columnasMatriz2;
    std::cin >> columnasMatriz2;

    std::cout << "Seleccione el tipo de matriz para la Matriz 2 (1: Enteros, 2: Flotantes, 3: Complejos): ";
    int opcionMatriz2;
    std::cin >> opcionMatriz2;

/**
 * @brief Crear la Matriz 2 según la opción seleccionada por el usuario.
 * 
 * Se utiliza una estructura de switch para determinar el tipo de matriz a crear:
 * - Si la opción es 1, se crea y muestra una matriz de enteros.
 * - Si la opción es 2, se crea y muestra una matriz de flotantes.
 * - Si la opción es 3, se crea y muestra una matriz de números complejos.
 * - En caso de una opción no válida, se muestra un mensaje de error y se finaliza el programa.
 */
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