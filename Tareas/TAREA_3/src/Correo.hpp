#ifndef CORREO_HPP
#define CORREO_HPP

#include <iostream>
#include <regex>

/**
 * @brief Clase que proporciona funciones para validar direcciones de correo electrónico.
 */
class ValidadorCorreoElectronico {
public:
    /**
     * @brief Valida una dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico a validar.
     * @return true si la dirección es válida, false en caso contrario.
     */
    bool validarCorreo(const std::string& correo);

private:
    /**
     * @brief Valida el nombre en la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @throw std::invalid_argument si el nombre no es válido.
     */
    void validarNombre(const std::string& correo);

    /**
     * @brief Valida el dominio en la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @throw std::invalid_argument si el dominio no es válido.
     */
    void validarDominio(const std::string& correo);

    /**
     * @brief Valida la extensión en la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @throw std::invalid_argument si la extensión no es válida.
     */
    void validarExtension(const std::string& correo);

    /**
     * @brief Obtiene el nombre de la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @return Nombre obtenido.
     */
    std::string obtenerNombre(const std::string& correo);

    /**
     * @brief Obtiene el dominio de la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @return Dominio obtenido.
     */
    std::string obtenerDominio(const std::string& correo);

    /**
     * @brief Obtiene la extensión de la dirección de correo electrónico.
     *
     * @param correo Dirección de correo electrónico.
     * @return Extensión obtenida.
     */
    std::string obtenerExtension(const std::string& correo);
};

#endif // CORREO_HPP
