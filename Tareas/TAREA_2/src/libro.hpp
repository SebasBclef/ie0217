/**
 * @file libro.hpp
 * @brief Declaración de la clase Libro y sus métodos.
 */

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "material_lectura.hpp"

/**
 * @brief Clase que representa un libro.
 */
class Libro : public MaterialLectura {
public:
    /**
     * @brief Constructor de la clase Libro.
     * @param titulo Título del libro.
     * @param autor Autor del libro.
     * @param editorial Editorial del libro.
     * @param genero Género del libro.
     * @param estado Estado del libro (disponible, prestado, reservado, etc.).
     * @param cantidadHojas Cantidad de hojas del libro.
     * @param precio Precio del libro.
     * @param resumen Resumen del contenido del libro.
     * @param materialRelacionado Otro material relacionado con el libro.
     */
    Libro(const std::string& titulo, const std::string& autor, const std::string& editorial,
         const std::string& genero, const std::string& estado, int cantidadHojas,
         double precio, const std::string& resumen, const std::string& materialRelacionado);

    /**
     * @brief Destructor de la clase Libro.
     */
    ~Libro();

    /**
     * @brief Muestra la información del libro.
     */
    void mostrarInformacion() const override;

    /**
     * @brief Obtiene el resumen del libro.
     * @return Resumen del libro.
     */
    const std::string& getResumen() const;

    /**
     * @brief Obtiene el material relacionado con el libro.
     * @return Material relacionado con el libro.
     */
    const std::string& getMaterialRelacionado() const;

private:
    std::string resumen; ///< Resumen del contenido del libro.
    std::string materialRelacionado; ///< Otro material relacionado con el libro.
};

#endif // LIBRO_HPP
