#include "podcast.hpp"
#include <iostream>

Podcast::Podcast(const std::string& titulo, const std::string& autor, const std::string& genero,
                 const std::string& estado, int duracion, double precio,
                 const std::string& resumen, const std::string& materialRelacionado)
    : MaterialAudiovisual(titulo, autor, "Podcast", genero, estado, duracion, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

Podcast::~Podcast() {
    // Destructor virtual para permitir la liberación de memoria
}

void Podcast::mostrarInformacion() const {
    MaterialAudiovisual::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Resumen: " << resumen << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

const std::string& Podcast::getResumen() const {
    return resumen;
}

const std::string& Podcast::getMaterialRelacionado() const {
    return materialRelacionado;
}
