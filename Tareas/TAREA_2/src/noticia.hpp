/**
 * @file noticia.hpp
 * @brief Contiene la definición de la clase Noticia.
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "material_lectura.hpp"

/**
 * @brief Clase que representa una noticia como un tipo de material de lectura.
 * 
 * La clase Noticia hereda de MaterialLectura y agrega atributos específicos como contenido
 * y material relacionado.
 */
class Noticia : public MaterialLectura {
public:
    /**
     * @brief Constructor de la clase Noticia.
     * @param titulo Título de la noticia.
     * @param autor Autor de la noticia.
     * @param estado Estado de la noticia.
     * @param cantidadHojas Cantidad de hojas de la noticia.
     * @param precio Precio de la noticia.
     * @param contenido Contenido de la noticia.
     * @param materialRelacionado Material relacionado con la noticia.
     */
    Noticia(const std::string& titulo, const std::string& autor, const std::string& estado,
            int cantidadHojas, double precio, const std::string& contenido,
            const std::string& materialRelacionado);

    /**
     * @brief Destructor de la clase Noticia.
     * 
     * Destructor virtual para permitir la liberación de memoria.
     */
    virtual ~Noticia();

    /**
     * @brief Muestra la información de la noticia.
     * 
     * Override del método mostrarInformacion de la clase base MaterialLectura.
     */
    virtual void mostrarInformacion() const override;

    /**
     * @brief Obtiene el contenido de la noticia.
     * @return Referencia constante al contenido de la noticia.
     */
    const std::string& getContenido() const;

    /**
     * @brief Obtiene el material relacionado con la noticia.
     * @return Referencia constante al material relacionado con la noticia.
     */
    const std::string& getMaterialRelacionado() const;

private:
    std::string contenido; ///< Contenido de la noticia.
    std::string materialRelacionado; ///< Material relacionado con la noticia.
};

#endif // NOTICIA_HPP
