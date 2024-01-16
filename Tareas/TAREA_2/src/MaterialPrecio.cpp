#include "materialPrecio.hpp"
#include <algorithm> // Para std::sort
#include <iostream>

MaterialPrecio::MaterialPrecio() {
    // Inicializar vectores si es necesario
}

void MaterialPrecio::ordenarAscendentemente() {
    // Ordenar materiales de lectura por precio ascendente
    std::sort(materialesLectura.begin(), materialesLectura.end(), 
              [](const MaterialLectura* a, const MaterialLectura* b) {
                  return a->getPrecio() < b->getPrecio();
              });

    // Ordenar materiales audiovisuales por precio ascendente
    std::sort(materialesAudiovisual.begin(), materialesAudiovisual.end(),
              [](const MaterialAudiovisual* a, const MaterialAudiovisual* b) {
                  return a->getPrecio() < b->getPrecio();
              });
}

void MaterialPrecio::ordenarDescendentemente() {
    // Ordenar materiales de lectura por precio descendente
    std::sort(materialesLectura.begin(), materialesLectura.end(), 
              [](const MaterialLectura* a, const MaterialLectura* b) {
                  return a->getPrecio() > b->getPrecio();
              });

    // Ordenar materiales audiovisuales por precio descendente
    std::sort(materialesAudiovisual.begin(), materialesAudiovisual.end(),
              [](const MaterialAudiovisual* a, const MaterialAudiovisual* b) {
                  return a->getPrecio() > b->getPrecio();
              });
}

void MaterialPrecio::mostrarMaterialesOrdenados() const {
    // Mostrar materiales de lectura ordenados
    std::cout << "Materiales de Lectura Ordenados:" << std::endl;
    for (const auto& material : materialesLectura) {
        std::cout << "Título: " << material->getTitulo() << ", Precio: " << material->getPrecio() << std::endl;
    }

    // Mostrar materiales audiovisuales ordenados
    std::cout << "\nMateriales Audiovisuales Ordenados:" << std::endl;
    for (const auto& material : materialesAudiovisual) {
        std::cout << "Título: " << material->getTitulo() << ", Precio: " << material->getPrecio() << std::endl;
    }
}
