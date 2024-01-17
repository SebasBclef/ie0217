/**
 * @file material_lectura.hpp
 * @brief Contiene la definición de la clase MaterialLectura.
 */

#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <string>

/**
 * @brief Clase base que representa un material de lectura.
 * 
 * Esta clase proporciona una interfaz para los materiales de lectura, con métodos para obtener información
 * como título, autor, tipo, cantidad de hojas y precio.
 */
class MaterialLectura {
public:
    /**
     * @brief Constructor de la clase MaterialLectura.
     * @param titulo Título del material de lectura.
     * @param autor Autor del material de lectura.
     * @param tipo Tipo de material de lectura.
     * @param editorial Editorial del material de lectura.
     * @param genero Género al que pertenece el material de lectura.
     * @param estado Estado actual del material de lectura.
     * @param cantidadHojas Cantidad de hojas del material de lectura.
     * @param precio Precio del material de lectura.
     */
    MaterialLectura(const std::string& titulo, const std::string& autor, const std::string& tipo,
                    const std::string& editorial, const std::string& genero, const std::string& estado,
                    int cantidadHojas, double precio);

    /**
     * @brief Destructor virtual de la clase MaterialLectura.
     * 
     * Se utiliza un destructor virtual para permitir la liberación de memoria en las clases derivadas.
     */
    virtual ~MaterialLectura();

    /**
     * @brief Muestra la información del material de lectura.
     * 
     * Este método imprime la información básica del material de lectura, como título, autor, tipo, etc.
     */
    virtual void mostrarInformacion() const;

    /**
     * @brief Obtiene el título del material de lectura.
     * @return Título del material de lectura.
     */
    const std::string& getTitulo() const;

    /**
     * @brief Obtiene el tipo del material de lectura.
     * @return Tipo del material de lectura.
     */
    const std::string& getTipo() const;

    /**
     * @brief Obtiene el precio del material de lectura.
     * @return Precio del material de lectura.
     */
    double getPrecio() const;

protected:
    std::string titulo;         ///< Título del material de lectura.
    std::string autor;          ///< Autor del material de lectura.
    std::string tipo;           ///< Tipo de material de lectura.
    std::string editorial;      ///< Editorial del material de lectura.
    std::string genero;         ///< Género al que pertenece el material de lectura.
    std::string estado;         ///< Estado actual del material de lectura.
    int cantidadHojas;          ///< Cantidad de hojas del material de lectura.
    double precio;              ///< Precio del material de lectura.
};

#endif // MATERIAL_LECTURA_HPP
