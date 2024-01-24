#include "Correo.hpp"

/**
 * @brief Función principal que solicita una dirección de correo electrónico al usuario y la valida.
 *
 * @return 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Crear un objeto de la clase ValidadorCorreoElectronico
    ValidadorCorreoElectronico validador;

    // Solicitar al usuario que ingrese una dirección de correo electrónico
    std::string correo;
    std::cout << "Ingrese una dirección de correo electrónico: ";
    std::cin >> correo;

    // Validar la dirección de correo electrónico utilizando el objeto ValidadorCorreoElectronico
    if (validador.validarCorreo(correo)) {
        // Si la dirección es válida, imprimir un mensaje indicando que es válida
        std::cout << "La dirección de correo electrónico es válida." << std::endl;
    } else {
        // Si la dirección no es válida, imprimir un mensaje indicando que no es válida
        std::cout << "La dirección de correo electrónico no es válida." << std::endl;
    }

    // Retornar 0 indicando que el programa se ejecutó correctamente
    return 0;
}
