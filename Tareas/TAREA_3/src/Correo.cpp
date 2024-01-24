// ValidadorCorreoElectronico.cpp

#include "Correo.hpp"

/**
 * @brief Valida una dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico a validar.
 * @return true si la dirección es válida, false en caso contrario.
 */
bool ValidadorCorreoElectronico::validarCorreo(const std::string& correo) {
    try {
        std::regex formatoCorreo("^([a-zA-Z0-9.-]+)@([a-zA-Z0-9-]+)\\.([a-zA-Z]{2,4})$");
        if (!std::regex_match(correo, formatoCorreo)) {
            throw std::invalid_argument("Formato de correo electrónico no válido.");
        }

        validarNombre(correo);
        validarDominio(correo);
        validarExtension(correo);
        return true;
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}

/**
 * @brief Valida el nombre en la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @throw std::invalid_argument si el nombre no es válido.
 */
void ValidadorCorreoElectronico::validarNombre(const std::string& correo) {
    std::regex formatoNombre("^[a-zA-Z0-9.-]{1,15}[^.-]$");
    if (!std::regex_match(obtenerNombre(correo), formatoNombre)) {
        throw std::invalid_argument("Nombre no válido en la dirección de correo.");
    }
}

/**
 * @brief Valida el dominio en la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @throw std::invalid_argument si el dominio no es válido.
 */
void ValidadorCorreoElectronico::validarDominio(const std::string& correo) {
    std::regex formatoDominio("@([a-zA-Z0-9-]+)\\.[a-zA-Z0-9-]+(?:\\.([a-zA-Z]{2,4}))?$");
    std::smatch matches;

    if (!std::regex_search(correo, matches, formatoDominio) || matches.size() != 3) {
        throw std::invalid_argument("Dominio o extensión no válidos en la dirección de correo.");
    }
}

/**
 * @brief Valida la extensión en la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @throw std::invalid_argument si la extensión no es válida.
 */
void ValidadorCorreoElectronico::validarExtension(const std::string& correo) {
    std::regex formatoExtension("\\.([a-zA-Z]{2,4})$");
    std::smatch matches;

    if (!std::regex_search(correo, matches, formatoExtension) || matches.size() != 2) {
        throw std::invalid_argument("Extensión no válida en la dirección de correo.");
    }
}

/**
 * @brief Obtiene el nombre de la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @return Nombre obtenido.
 */
std::string ValidadorCorreoElectronico::obtenerNombre(const std::string& correo) {
    size_t posArroba = correo.find('@');
    return correo.substr(0, posArroba);
}

/**
 * @brief Obtiene el dominio de la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @return Dominio obtenido.
 */
std::string ValidadorCorreoElectronico::obtenerDominio(const std::string& correo) {
    size_t posArroba = correo.find('@');
    return correo.substr(posArroba + 1, correo.find('.') - posArroba - 1);
}

/**
 * @brief Obtiene la extensión de la dirección de correo electrónico.
 *
 * @param correo Dirección de correo electrónico.
 * @return Extensión obtenida.
 */
std::string ValidadorCorreoElectronico::obtenerExtension(const std::string& correo) {
    return correo.substr(correo.find_last_of('.'));
}
