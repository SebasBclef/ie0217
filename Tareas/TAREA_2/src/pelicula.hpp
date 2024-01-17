/**
 * @file pelicula.hpp
 * @brief Definición de la clase Pelicula.
 */

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "material_audiovisual.hpp"

/**
 * @class Pelicula
 * @brief Representa una película como un tipo de material audiovisual.
 * 
 * La clase Pelicula hereda de MaterialAudiovisual y añade atributos específicos como resumen
 * y material relacionado.
 */
class Pelicula : public MaterialAudiovisual {
public:
    /**
     * @brief Constructor de la clase Pelicula.
     * @param titulo Título de la película.
     * @param autor Autor de la película.
     * @param genero Género de la película.
     * @param estado Estado de la película.
     * @param duracion Duración de la película en minutos.
     * @param precio Precio de la película.
     * @param resumen Resumen de la película.
     * @param materialRelacionado Material relacionado con la película.
     */
    Pelicula(const std::string& titulo, const std::string& autor, const std::string& genero,
             const std::string& estado, int duracion, double precio,
             const std::string& resumen, const std::string& materialRelacionado);

    /**
     * @brief Destructor de la clase Pelicula.
     * Destructor virtual para permitir la liberación de memoria.
     */
    virtual ~Pelicula();

    /**
     * @brief Muestra la información de la película.
     * Llama al método de la clase base para mostrar la información común
     * y luego muestra el resumen y el material relacionado específico de la película.
     */
    virtual void mostrarInformacion() const override;

    /**
     * @brief Obtiene el resumen de la película.
     * @return Referencia constante al resumen de la película.
     */
    const std::string& getResumen() const;

    /**
     * @brief Obtiene el material relacionado con la película.
     * @return Referencia constante al material relacionado con la película.
     */
    const std::string& getMaterialRelacionado() const;

private:
    std::string resumen; ///< Resumen de la película.
    std::string materialRelacionado; ///< Material relacionado con la película.
};

#endif // PELICULA_HPP
