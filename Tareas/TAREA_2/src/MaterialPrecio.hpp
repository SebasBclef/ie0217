/**
 * @file MaterialPrecio.hpp
 * @brief Contiene la definición de la clase MaterialPrecio.
 */

#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP

#include <vector>
#include "material_lectura.hpp"
#include "material_audiovisual.hpp"

/**
 * @brief Clase que representa una colección de materiales ordenados por precio.
 * 
 * La clase MaterialPrecio permite almacenar y gestionar materiales de lectura y audiovisuales
 * ordenados por precio de forma ascendente o descendente.
 */
class MaterialPrecio {
public:
    /**
     * @brief Constructor por defecto de la clase MaterialPrecio.
     * 
     * Inicializa los vectores si es necesario.
     */
    MaterialPrecio();

    /**
     * @brief Agrega un material de lectura a la lista.
     * @param material Puntero al material de lectura a agregar.
     */
    void agregarMaterial(MaterialLectura* material);

    /**
     * @brief Agrega un material audiovisual a la lista.
     * @param material Puntero al material audiovisual a agregar.
     */
    void agregarMaterial(MaterialAudiovisual* material);

    /**
     * @brief Ordena los materiales de forma ascendente por precio.
     */
    void ordenarAscendentemente();

    /**
     * @brief Ordena los materiales de forma descendente por precio.
     */
    void ordenarDescendentemente();

    /**
     * @brief Muestra la información de los materiales ordenados por precio.
     */
    void mostrarMaterialesOrdenados() const;

private:
    std::vector<MaterialLectura*> listaMaterialesLectura; ///< Vector que almacena materiales de lectura.
    std::vector<MaterialAudiovisual*> listaMaterialesAudiovisual; ///< Vector que almacena materiales audiovisuales.
};

#endif // MATERIALPRECIO_HPP
