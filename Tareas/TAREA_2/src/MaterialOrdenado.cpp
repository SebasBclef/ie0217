/**
 * @file MaterialOrdenado.cpp
 * @brief Implementación de la clase MaterialOrdenado.
 */

#include "MaterialOrdenado.hpp"
#include <algorithm>
#include <iostream>

/**
 * @brief Constructor por defecto de la clase MaterialOrdenado.
 */
MaterialOrdenado::MaterialOrdenado() {}

/**
 * @brief Destructor de la clase MaterialOrdenado.
 * 
 * Se encarga de liberar la memoria dinámica de los materiales almacenados.
 */
MaterialOrdenado::~MaterialOrdenado() {
    // Liberar la memoria dinámica al destruir la instancia
    for (MaterialAudiovisual* material : materiales) {
        delete material;
    }
}

/**
 * @brief Agrega un nuevo material a la colección.
 * @param material Puntero al material audiovisual a agregar.
 */
void MaterialOrdenado::agregarMaterial(MaterialAudiovisual* material) {
    materiales.push_back(material);
}

/**
 * @brief Elimina un material de la colección por título.
 * @param titulo Título del material a eliminar.
 */
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

/**
 * @brief Busca un material por título en la colección.
 * @param titulo Título del material a buscar.
 * @return Puntero al material encontrado, o nullptr si no se encuentra.
 */
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

/**
 * @brief Muestra la información de todos los materiales en la colección.
 */
void MaterialOrdenado::mostrarMaterial() const {
    for (const MaterialAudiovisual* material : materiales) {
        material->mostrarInformacion();
        std::cout << "------------------------" << std::endl;
    }
}
