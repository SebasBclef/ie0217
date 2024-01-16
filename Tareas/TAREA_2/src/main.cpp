#include "libro.hpp"
#include "noticia.hpp"
#include "pelicula.hpp"
#include "podcast.hpp"
#include <iostream>


int main() {
    Libro miLibro("El Senor de los Anillos", "J.R.R. Tolkien", "Editorial XYZ", "Fantasia", "Disponible", 300, 29.99, "Resumen del libro", "Libro relacionado");
    Noticia miNoticia("Titulo de la noticia", "Autor de la noticia", "Disponible", 5, 4.99, "Contenido de la noticia", "Noticia relacionada");
    Pelicula miPelicula("Titulo de la pelicula", "Director de la pelicula", "Accion", "Disponible", 120, 19.99, "Resumen de la pelicula", "Pelicula relacionada");
    Podcast miPodcast("Titulo del podcast", "Host del podcast", "Entretenimiento", "Disponible", 45, 9.99, "Resumen del podcast", "Podcast relacionado");
    miLibro.mostrarInformacion();
    miNoticia.mostrarInformacion();
    miPelicula.mostrarInformacion();
    miPodcast.mostrarInformacion();

    std::cout << std::endl;

    return 0;
}
