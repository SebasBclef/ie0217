/**
 * @file podcast.hpp
 * @brief Definición de la clase Podcast.
 */

#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "material_audiovisual.hpp"

/**
 * @class Podcast
 * @brief Representa un podcast como un tipo de material audiovisual.
 * 
 * La clase Podcast hereda de MaterialAudiovisual y añade atributos específicos como resumen
 * y material relacionado.
 */
class Podcast : public MaterialAudiovisual {
public:
    /**
     * @brief Constructor de la clase Podcast.
     * @param titulo Título del podcast.
     * @param autor Autor del podcast.
     * @param genero Género del podcast.
     * @param estado Estado del podcast.
     * @param duracion Duración del podcast en minutos.
     * @param precio Precio del podcast.
     * @param resumen Resumen del podcast.
     * @param materialRelacionado Material relacionado con el podcast.
     */
    Podcast(const std::string& titulo, const std::string& autor, const std::string& genero,
            const std::string& estado, int duracion, double precio,
            const std::string& resumen, const std::string& materialRelacionado);

    /**
     * @brief Destructor de la clase Podcast.
     * Destructor virtual para permitir la liberación de memoria.
     */
    virtual ~Podcast();

    /**
     * @brief Muestra la información del podcast.
     * Llama al método de la clase base para mostrar la información común
     * y luego muestra el resumen y el material relacionado específico del podcast.
     */
    virtual void mostrarInformacion() const override;

    /**
     * @brief Obtiene el resumen del podcast.
     * @return Referencia constante al resumen del podcast.
     */
    const std::string& getResumen() const;

    /**
     * @brief Obtiene el material relacionado con el podcast.
     * @return Referencia constante al material relacionado con el podcast.
     */
    const std::string& getMaterialRelacionado() const;

private:
    std::string resumen; ///< Resumen del podcast.
    std::string materialRelacionado; ///< Material relacionado con el podcast.
};

#endif // PODCAST_HPP
