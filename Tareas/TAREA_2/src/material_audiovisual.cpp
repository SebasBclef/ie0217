/**
 * @file material_audiovisual.cpp
 * @brief Implementación de la clase MaterialAudiovisual.
 */

#include "material_audiovisual.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase MaterialAudiovisual.
 * @param titulo Título del material audiovisual.
 * @param autor Autor del material audiovisual.
 * @param tipo Tipo de material audiovisual.
 * @param genero Género al que pertenece el material audiovisual.
 * @param estado Estado actual del material audiovisual.
 * @param duracion Duración del material audiovisual en minutos.
 * @param precio Precio del material audiovisual.
 */
MaterialAudiovisual::MaterialAudiovisual(const std::string& titulo, const std::string& autor,
                                         const std::string& tipo, const std::string& genero,
                                         const std::string& estado, int duracion, double precio)
    : titulo(titulo), autor(autor), tipo(tipo), genero(genero), estado(estado),
      duracion(duracion), precio(precio) {}

/**
 * @brief Destructor virtual de la clase MaterialAudiovisual.
 * 
 * Se utiliza un destructor virtual para permitir la liberación de memoria en las clases derivadas.
 */
MaterialAudiovisual::~MaterialAudiovisual() {
    // Destructor virtual para permitir la liberación de memoria
}

/**
 * @brief Muestra la información del material audiovisual.
 * 
 * Este método imprime la información básica del material audiovisual, como título, autor, tipo, etc.
 */
void MaterialAudiovisual::mostrarInformacion() const {
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "Tipo: " << tipo << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Duracion: " << duracion << " minutos" << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
}

/**
 * @brief Obtiene el título del material audiovisual.
 * @return Título del material audiovisual.
 */
const std::string& MaterialAudiovisual::getTitulo() const {
    return titulo;
}

/**
 * @brief Obtiene el tipo del material audiovisual.
 * @return Tipo del material audiovisual.
 */
const std::string& MaterialAudiovisual::getTipo() const {
    return tipo;
}

/**
 * @brief Obtiene el precio del material audiovisual.
 * @return Precio del material audiovisual.
 */
double MaterialAudiovisual::getPrecio() const {
    return precio;
}
