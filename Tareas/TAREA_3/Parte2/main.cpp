#include "Correo.hpp"

int main() {
    ValidadorCorreoElectronico validador;

    std::string correo;
    std::cout << "Ingrese una direccion de correo electronico: ";
    std::cin >> correo;

    if (validador.validarCorreo(correo)) {
        std::cout << "La direccion de correo electronico es valida." << std::endl;
    } else {
        std::cout << "La direccion de correo electronico no es valida." << std::endl;
    }

    return 0;
}
