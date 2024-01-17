/**
 * @file material_lectura.cpp
 * @brief Implementación de la clase MaterialLectura.
 */

#include "material_lectura.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase MaterialLectura.
 * @param titulo Título del material de lectura.
 * @param autor Autor del material de lectura.
 * @param tipo Tipo de material de lectura.
 * @param editorial Editorial del material de lectura.
 * @param genero Género al que pertenece el material de lectura.
 * @param estado Estado actual del material de lectura.
 * @param cantidadHojas Cantidad de hojas del material de lectura.
 * @param precio Precio del material de lectura.
 */
MaterialLectura::MaterialLectura(const std::string& titulo, const std::string& autor, const std::string& tipo,
                                 const std::string& editorial, const std::string& genero,
                                 const std::string& estado, int cantidadHojas, double precio)
    : titulo(titulo), autor(autor), tipo(tipo), editorial(editorial), genero(genero),
      estado(estado), cantidadHojas(cantidadHojas), precio(precio) {}

/**
 * @brief Destructor virtual de la clase MaterialLectura.
 * 
 * Se utiliza un destructor virtual para permitir la liberación de memoria en las clases derivadas.
 */
MaterialLectura::~MaterialLectura() {
    // Destructor virtual para permitir la liberación de memoria
}

/**
 * @brief Muestra la información del material de lectura.
 * 
 * Este método imprime la información básica del material de lectura, como título, autor, tipo, etc.
 */
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

/**
 * @brief Obtiene el título del material de lectura.
 * @return Título del material de lectura.
 */
const std::string& MaterialLectura::getTitulo() const {
    return titulo;
}

/**
 * @brief Obtiene el tipo del material de lectura.
 * @return Tipo del material de lectura.
 */
const std::string& MaterialLectura::getTipo() const {
    return tipo;
}

/**
 * @brief Obtiene el precio del material de lectura.
 * @return Precio del material de lectura.
 */
double MaterialLectura::getPrecio() const {
    return precio;
}
