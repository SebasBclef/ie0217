/**
 * @file material_audiovisual.hpp
 * @brief Contiene la definición de la clase MaterialAudiovisual.
 */

#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <string>

/**
 * @brief Clase base que representa un material audiovisual.
 * 
 * Esta clase proporciona una interfaz para los materiales audiovisuales, con métodos para obtener información
 * como título, autor, tipo, duración y precio.
 */
class MaterialAudiovisual {
public:
    /**
     * @brief Constructor de la clase MaterialAudiovisual.
     * @param titulo Título del material audiovisual.
     * @param autor Autor del material audiovisual.
     * @param tipo Tipo de material audiovisual.
     * @param genero Género al que pertenece el material audiovisual.
     * @param estado Estado actual del material audiovisual.
     * @param duracion Duración del material audiovisual en minutos.
     * @param precio Precio del material audiovisual.
     */
    MaterialAudiovisual(const std::string& titulo, const std::string& autor,
                        const std::string& tipo, const std::string& genero,
                        const std::string& estado, int duracion, double precio);

    /**
     * @brief Destructor virtual de la clase MaterialAudiovisual.
     * 
     * Se utiliza un destructor virtual para permitir la liberación de memoria en las clases derivadas.
     */
    virtual ~MaterialAudiovisual();

    /**
     * @brief Muestra la información del material audiovisual.
     * 
     * Este método imprime la información básica del material audiovisual, como título, autor, tipo, etc.
     */
    virtual void mostrarInformacion() const;

    /**
     * @brief Obtiene el título del material audiovisual.
     * @return Título del material audiovisual.
     */
    const std::string& getTitulo() const;

    /**
     * @brief Obtiene el tipo del material audiovisual.
     * @return Tipo del material audiovisual.
     */
    const std::string& getTipo() const;

    /**
     * @brief Obtiene el precio del material audiovisual.
     * @return Precio del material audiovisual.
     */
    double getPrecio() const;

protected:
    std::string titulo;     ///< Título del material audiovisual.
    std::string autor;      ///< Autor del material audiovisual.
    std::string tipo;       ///< Tipo de material audiovisual.
    std::string genero;     ///< Género al que pertenece el material audiovisual.
    std::string estado;     ///< Estado actual del material audiovisual.
    int duracion;           ///< Duración en minutos del material audiovisual.
    double precio;          ///< Precio del material audiovisual.
};

#endif // MATERIAL_AUDIOVISUAL_HPP
