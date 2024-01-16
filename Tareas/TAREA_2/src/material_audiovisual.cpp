#include "material_audiovisual.hpp"
#include <iostream>

MaterialAudiovisual::MaterialAudiovisual(const std::string& titulo, const std::string& autor,
                                         const std::string& tipo, const std::string& genero,
                                         const std::string& estado, int duracion, double precio)
    : titulo(titulo), autor(autor), tipo(tipo), genero(genero), estado(estado),
      duracion(duracion), precio(precio) {}

MaterialAudiovisual::~MaterialAudiovisual() {
    // Destructor virtual para permitir la liberación de memoria
}

void MaterialAudiovisual::mostrarInformacion() const {
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Duracion: " << duracion << " minutos" << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
}

const std::string& MaterialAudiovisual::getTitulo() const {
    return titulo;
}

const std::string& MaterialAudiovisual::getTipo() const {
    return tipo;
}

double MaterialAudiovisual::getPrecio() const {
    return precio;
}
