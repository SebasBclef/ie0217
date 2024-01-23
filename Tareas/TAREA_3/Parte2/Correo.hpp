#ifndef CORREO_HPP
#define CORREO_HPP

#include <iostream>
#include <regex>

class ValidadorCorreoElectronico {
public:
    bool validarCorreo(const std::string& correo);

private:
    void validarNombre(const std::string& correo);
    void validarDominio(const std::string& correo);
    void validarExtension(const std::string& correo);
    std::string obtenerNombre(const std::string& correo);
    std::string obtenerDominio(const std::string& correo);
    std::string obtenerExtension(const std::string& correo);
};

#endif //CORREO_HPP
