#include "MaterialPrecio.hpp"
#include <algorithm>
#include <iostream>

MaterialPrecio::MaterialPrecio() {
    // Inicializar vectores si es necesario
}

void MaterialPrecio::agregarMaterial(MaterialLectura* material) {
    listaMaterialesLectura.push_back(material);
}

void MaterialPrecio::agregarMaterial(MaterialAudiovisual* material) {
    listaMaterialesAudiovisual.push_back(material);
}

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
