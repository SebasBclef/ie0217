/**
 * @file prueba3.cpp
 * @brief Programa de prueba que demuestra el uso de MaterialPrecio con instancias de MaterialLectura y MaterialAudiovisual.
 */

#include "MaterialPrecio.hpp"
#include "material_lectura.hpp"
#include "material_audiovisual.hpp"
#include <iostream>

/**
 * @brief Función de prueba que crea instancias de MaterialLectura y MaterialAudiovisual, las agrega a MaterialPrecio,
 *        y muestra la información ordenada por precio ascendentemente y descendentemente.
 * @return 0 si la ejecución es exitosa.
 */
int prueba3() {
    // Crear instancias de materiales con información heredada
    MaterialLectura* materialLectura = new MaterialLectura("Título Lectura", "Autor Lectura", "Libro", "Editorial", "Ficción", "Disponible", 300, 19.99);
    MaterialAudiovisual* materialAudiovisual = new MaterialAudiovisual("Título Audiovisual", "Director Audiovisual", "Película", "Drama", "Prestado", 120, 10.99);

    // Crear una instancia de MaterialPrecio
    MaterialPrecio materialPrecio;

    // Agregar materiales a MaterialPrecio
    materialPrecio.agregarMaterial(materialLectura);
    materialPrecio.agregarMaterial(materialAudiovisual);

    // Mostrar información de los materiales ordenados
    std::cout << "Materiales Ordenados por Precio Ascendentemente:" << std::endl;
    materialPrecio.ordenarAscendentemente();
    materialPrecio.mostrarMaterialesOrdenados();

    std::cout << "\nMateriales Ordenados por Precio Descendentemente:" << std::endl;
    materialPrecio.ordenarDescendentemente();
    materialPrecio.mostrarMaterialesOrdenados();

    // Liberar la memoria de los materiales
    delete materialLectura;
    delete materialAudiovisual;

    return 0;
}
