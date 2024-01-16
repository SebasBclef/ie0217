#include "MaterialPrecio.hpp"
#include "pelicula.hpp"
#include "material_lectura.hpp"
#include "material_audiovisual.hpp"
#include <iostream>

int main() {
    // Crear instancias de materiales
    Pelicula* pelicula1 = new Pelicula("Pelicula 1", "Director 1", "Genero 2", "Prestado", 120, 10.99, "Resumen 1", "Relacionado 1");

    // Crear una instancia de MaterialPrecio
    MaterialPrecio materialPrecio;

    // Agregar materiales a MaterialPrecio
    materialPrecio.agregarMaterial(static_cast<MaterialAudiovisual*>(pelicula1));

    // Mostrar información de los materiales ordenados
    std::cout << "Materiales Ordenados por Precio Ascendentemente:" << std::endl;
    materialPrecio.ordenarAscendentemente();
    materialPrecio.mostrarMaterialesOrdenados();

    std::cout << "\nMateriales Ordenados por Precio Descendentemente:" << std::endl;
    materialPrecio.ordenarDescendentemente();
    materialPrecio.mostrarMaterialesOrdenados();

    // Liberar la memoria de los materiales
    delete pelicula1;

    return 0;
}
