#include "material_lectura.hpp"
#include <iostream>

MaterialLectura::MaterialLectura(const std::string& titulo, const std::string& autor, const std::string& tipo,
                                 const std::string& editorial, const std::string& genero,
                                 const std::string& estado, int cantidadHojas, double precio)
    : titulo(titulo), autor(autor), tipo(tipo), editorial(editorial), genero(genero),
      estado(estado), cantidadHojas(cantidadHojas), precio(precio) {}

MaterialLectura::~MaterialLectura() {
    // Destructor virtual para permitir la liberación de memoria
}

void MaterialLectura::mostrarInformacion() const {
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Editorial: " << editorial << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Cantidad de hojas: " << cantidadHojas << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
}

const std::string& MaterialLectura::getTitulo() const {
    return titulo;
}

const std::string& MaterialLectura::getTipo() const {
    return tipo;
}

double MaterialLectura::getPrecio() const {
    return precio;
}
