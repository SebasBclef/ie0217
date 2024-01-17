/**
 * @file pelicula.cpp
 * @brief Implementación de la clase Pelicula.
 */

#include "pelicula.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase Pelicula.
 * @param titulo Título de la película.
 * @param autor Autor de la película.
 * @param genero Género de la película.
 * @param estado Estado de la película.
 * @param duracion Duración de la película en minutos.
 * @param precio Precio de la película.
 * @param resumen Resumen de la película.
 * @param materialRelacionado Material relacionado con la película.
 */
Pelicula::Pelicula(const std::string& titulo, const std::string& autor, const std::string& genero,
                   const std::string& estado, int duracion, double precio,
                   const std::string& resumen, const std::string& materialRelacionado)
    : MaterialAudiovisual(titulo, autor, "Pelicula", genero, estado, duracion, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

/**
 * @brief Destructor de la clase Pelicula.
 * 
 * Destructor virtual para permitir la liberación de memoria.
 */
Pelicula::~Pelicula() {
    // Destructor virtual para permitir la liberación de memoria
}

/**
 * @brief Muestra la información de la película.
 * 
 * Llama al método de la clase base para mostrar la información común y luego muestra
 * el resumen y el material relacionado específico de la película.
 */
void Pelicula::mostrarInformacion() const {
    MaterialAudiovisual::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Resumen: " << resumen << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

/**
 * @brief Obtiene el resumen de la película.
 * @return Referencia constante al resumen de la película.
 */
const std::string& Pelicula::getResumen() const {
    return resumen;
}

/**
 * @brief Obtiene el material relacionado con la película.
 * @return Referencia constante al material relacionado con la película.
 */
const std::string& Pelicula::getMaterialRelacionado() const {
    return materialRelacionado;
}
