#include "noticia.hpp"
#include <iostream>

Noticia::Noticia(const std::string& titulo, const std::string& autor, const std::string& estado,
                 int cantidadHojas, double precio, const std::string& contenido,
                 const std::string& materialRelacionado)
    : MaterialLectura(titulo, autor, "Noticia", "", "", estado, cantidadHojas, precio),
      contenido(contenido), materialRelacionado(materialRelacionado) {}

Noticia::~Noticia() {
    // Destructor virtual para permitir la liberación de memoria
}

void Noticia::mostrarInformacion() const {
    MaterialLectura::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Contenido: " << contenido << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

const std::string& Noticia::getContenido() const {
    return contenido;
}

const std::string& Noticia::getMaterialRelacionado() const {
    return materialRelacionado;
}
