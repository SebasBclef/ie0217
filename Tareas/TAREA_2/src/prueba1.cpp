/**
 * @file main.cpp
 * @brief Programa principal que demuestra el uso de las clases de materiales.
 */

#include "libro.hpp"
#include "noticia.hpp"
#include "pelicula.hpp"
#include "podcast.hpp"
#include <iostream>

/**
 * @brief Función principal que crea instancias de diferentes tipos de materiales y muestra su información.
 * @return 0 si la ejecución es exitosa.
 */
int main() {
    // Crear una instancia de Libro
    Libro miLibro("El Senor de los Anillos", "J.R.R. Tolkien", "Editorial XYZ", "Fantasia", "Disponible", 300, 29.99, "Resumen del libro", "Libro relacionado");

    // Crear una instancia de Noticia
    Noticia miNoticia("Titulo de la noticia", "Autor de la noticia", "Disponible", 5, 4.99, "Contenido de la noticia", "Noticia relacionada");

    // Crear una instancia de Pelicula
    Pelicula miPelicula("Titulo de la pelicula", "Director de la pelicula", "Accion", "Disponible", 120, 19.99, "Resumen de la pelicula", "Pelicula relacionada");

    // Crear una instancia de Podcast
    Podcast miPodcast("Titulo del podcast", "Host del podcast", "Entretenimiento", "Disponible", 45, 9.99, "Resumen del podcast", "Podcast relacionado");

    // Mostrar información de cada instancia
    miLibro.mostrarInformacion();
    miNoticia.mostrarInformacion();
    miPelicula.mostrarInformacion();
    miPodcast.mostrarInformacion();

    std::cout << std::endl;

    return 0;
}
