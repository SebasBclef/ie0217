/**
 * @file prueba2.cpp
 * @brief Programa de prueba que demuestra el uso de MaterialOrdenado con instancias de Pelicula.
 */

#include "MaterialOrdenado.hpp"
#include "pelicula.hpp"
#include <iostream>

/**
 * @brief Función de prueba que crea instancias de Pelicula, las agrega a MaterialOrdenado y muestra la información.
 * @return 0 si la ejecución es exitosa.
 */
int prueba2() {
    // Crear instancias de material (Pelicula)
    Pelicula* pelicula1 = new Pelicula("Pelicula 1", "Autor 1", "Genero 1", "Disponible", 120, 10.99, "Resumen 1", "Relacionado 1");
    Pelicula* pelicula2 = new Pelicula("Pelicula 2", "Autor 2", "Genero 2", "Prestado", 90, 8.99, "Resumen 2", "Relacionado 2");
    Pelicula* pelicula3 = new Pelicula("Pelicula 3", "Autor 3", "Genero 3", "Reservado", 150, 12.99, "Resumen 3", "Relacionado 3");

    // Crear una instancia de MaterialOrdenado
    MaterialOrdenado materialOrdenado;

    // Agregar materiales a MaterialOrdenado
    materialOrdenado.agregarMaterial(pelicula1);
    materialOrdenado.agregarMaterial(pelicula2);
    materialOrdenado.agregarMaterial(pelicula3);

    // Mostrar información de los materiales en MaterialOrdenado
    std::cout << "Materiales en MaterialOrdenado:" << std::endl;
    materialOrdenado.mostrarMaterial();

    // Ejemplo de eliminar un material por título
    std::string tituloAEliminar = "Pelicula 2";
    materialOrdenado.eliminarMaterial(tituloAEliminar);

    // Mostrar información después de la eliminación
    std::cout << "\nMateriales en MaterialOrdenado después de eliminar \"" << tituloAEliminar << "\":" << std::endl;
    materialOrdenado.mostrarMaterial();

    // Liberar la memoria de los materiales
    delete pelicula1;
    delete pelicula2;
    delete pelicula3;

    return 0;
}
