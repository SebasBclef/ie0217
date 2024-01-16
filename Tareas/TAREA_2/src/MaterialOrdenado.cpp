#include "MaterialOrdenado.hpp"
#include <algorithm>
#include <iostream>

MaterialOrdenado::MaterialOrdenado() {}

MaterialOrdenado::~MaterialOrdenado() {
    // Liberar la memoria dinámica al destruir la instancia
    for (MaterialAudiovisual* material : materiales) {
        delete material;
    }
}

void MaterialOrdenado::agregarMaterial(MaterialAudiovisual* material) {
    materiales.push_back(material);
}

void MaterialOrdenado::eliminarMaterial(const std::string& titulo) {
    auto it = std::remove_if(materiales.begin(), materiales.end(),
                             [titulo](MaterialAudiovisual* material) {
                                 return material->getTitulo() == titulo;
                             });

    for (auto iter = it; iter != materiales.end(); ++iter) {
        delete *iter; // Liberar memoria del material eliminado
    }

    materiales.erase(it, materiales.end());
}

MaterialAudiovisual* MaterialOrdenado::buscarPorTitulo(const std::string& titulo) const {
    auto it = std::find_if(materiales.begin(), materiales.end(),
                           [titulo](MaterialAudiovisual* material) {
                               return material->getTitulo() == titulo;
                           });

    if (it != materiales.end()) {
        return *it;
    } else {
        return nullptr; // Material no encontrado
    }
}

void MaterialOrdenado::mostrarMaterial() const {
    for (const MaterialAudiovisual* material : materiales) {
        material->mostrarInformacion();
        std::cout << "------------------------" << std::endl;
    }
}
