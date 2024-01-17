/**
 * @file MaterialPrecio.cpp
 * @brief Implementación de la clase MaterialPrecio.
 */

#include "MaterialPrecio.hpp"
#include <algorithm>
#include <iostream>

/**
 * @brief Constructor por defecto de la clase MaterialPrecio.
 * 
 * Inicializa los vectores si es necesario.
 */
MaterialPrecio::MaterialPrecio() {
    // Inicializar vectores si es necesario
}

/**
 * @brief Agrega un material de lectura a la lista.
 * @param material Puntero al material de lectura a agregar.
 */
void MaterialPrecio::agregarMaterial(MaterialLectura* material) {
    listaMaterialesLectura.push_back(material);
}

/**
 * @brief Agrega un material audiovisual a la lista.
 * @param material Puntero al material audiovisual a agregar.
 */
void MaterialPrecio::agregarMaterial(MaterialAudiovisual* material) {
    listaMaterialesAudiovisual.push_back(material);
}

/**
 * @brief Ordena los materiales de forma ascendente por precio.
 */
void MaterialPrecio::ordenarAscendentemente() {
    std::sort(listaMaterialesLectura.begin(), listaMaterialesLectura.end(),
              [](const MaterialLectura* a, const MaterialLectura* b) {
                  return a->getPrecio() < b->getPrecio();
              });

    std::sort(listaMaterialesAudiovisual.begin(), listaMaterialesAudiovisual.end(),
              [](const MaterialAudiovisual* a, const MaterialAudiovisual* b) {
                  return a->getPrecio() < b->getPrecio();
              });
}

/**
 * @brief Ordena los materiales de forma descendente por precio.
 */
void MaterialPrecio::ordenarDescendentemente() {
    std::sort(listaMaterialesLectura.begin(), listaMaterialesLectura.end(),
              [](const MaterialLectura* a, const MaterialLectura* b) {
                  return a->getPrecio() > b->getPrecio();
              });

    std::sort(listaMaterialesAudiovisual.begin(), listaMaterialesAudiovisual.end(),
              [](const MaterialAudiovisual* a, const MaterialAudiovisual* b) {
                  return a->getPrecio() > b->getPrecio();
              });
}

/**
 * @brief Muestra la información de los materiales ordenados por precio.
 */
void MaterialPrecio::mostrarMaterialesOrdenados() const {
    std::cout << "Materiales de Lectura Ordenados:" << std::endl;
    for (const auto& material : listaMaterialesLectura) {
        std::cout << "Título: " << material->getTitulo() << ", Precio: " << material->getPrecio() << std::endl;
    }

    std::cout << "\nMateriales Audiovisuales Ordenados:" << std::endl;
    for (const auto& material : listaMaterialesAudiovisual) {
        std::cout << "Título: " << material->getTitulo() << ", Precio: " << material->getPrecio() << std::endl;
    }
}
