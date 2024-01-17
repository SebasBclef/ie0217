/**
 * @file libro.cpp
 * @brief Implementación de la clase Libro.
 */

#include "libro.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase Libro.
 * @param titulo Título del libro.
 * @param autor Autor del libro.
 * @param editorial Editorial del libro.
 * @param genero Género al que pertenece el libro.
 * @param estado Estado actual del libro.
 * @param cantidadHojas Cantidad de hojas del libro.
 * @param precio Precio del libro.
 * @param resumen Resumen del contenido del libro.
 * @param materialRelacionado Material relacionado con el libro.
 */
Libro::Libro(const std::string& titulo, const std::string& autor, const std::string& editorial,
             const std::string& genero, const std::string& estado, int cantidadHojas,
             double precio, const std::string& resumen, const std::string& materialRelacionado)
    : MaterialLectura(titulo, autor, "Libro", editorial, genero, estado, cantidadHojas, precio),
      resumen(resumen), materialRelacionado(materialRelacionado) {}

/**
 * @brief Destructor virtual de la clase Libro.
 * 
 * Se utiliza un destructor virtual para permitir la liberación de memoria en las clases derivadas.
 */
Libro::~Libro() {
    // Destructor virtual para permitir la liberación de memoria
}

/**
 * @brief Muestra la información del libro.
 * 
 * Este método imprime la información básica del libro, seguido del resumen y material relacionado.
 */
void Libro::mostrarInformacion() const {
    MaterialLectura::mostrarInformacion(); // Llamada al método de la clase base
    std::cout << "Resumen: " << resumen << std::endl;
    std::cout << "Material relacionado: " << materialRelacionado << std::endl;
}

/**
 * @brief Obtiene el resumen del libro.
 * @return Resumen del contenido del libro.
 */
const std::string& Libro::getResumen() const {
    return resumen;
}

/**
 * @brief Obtiene el material relacionado con el libro.
 * @return Material relacionado con el libro.
 */
const std::string& Libro::getMaterialRelacionado() const {
    return materialRelacionado;
}
