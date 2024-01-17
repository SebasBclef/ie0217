#include "MaterialPrecio.hpp"
#include "material_lectura.hpp"
#include "material_audiovisual.hpp"
#include <iostream>

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
