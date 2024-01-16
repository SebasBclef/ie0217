#include "pelicula.hpp"
#include <iostream>

Pelicula::Pelicula(const std::string& titulo, const std::string& autor, const std::string& genero,
                   const std::string& estado, int duracion, double precio,
                   const std::string& resumen, const std::string& materialRelacionado)
    : MaterialAudiovisual(titulo, autor, "Pelicula", genero, estado, duracion, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

Pelicula::~Pelicula() {
    // Destructor virtual para permitir la liberación de memoria
}

void Pelicula::mostrarInformacion() const {
    MaterialAudiovisual::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Resumen: " << resumen << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

const std::string& Pelicula::getResumen() const {
    return resumen;
}

const std::string& Pelicula::getMaterialRelacionado() const {
    return materialRelacionado;
}
