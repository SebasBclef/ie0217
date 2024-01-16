#include "libro.hpp"
#include <iostream>

Libro::Libro(const std::string& titulo, const std::string& autor, const std::string& editorial,
             const std::string& genero, const std::string& estado, int cantidadHojas,
             double precio, const std::string& resumen, const std::string& materialRelacionado)
    : MaterialLectura(titulo, autor, "Libro", editorial, genero, estado, cantidadHojas, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

Libro::~Libro() {
    // Destructor virtual para permitir la liberación de memoria
}

void Libro::mostrarInformacion() const {
    MaterialLectura::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Resumen: " << resumen << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

const std::string& Libro::getResumen() const {
    return resumen;
}

const std::string& Libro::getMaterialRelacionado() const {
    return materialRelacionado;
}
