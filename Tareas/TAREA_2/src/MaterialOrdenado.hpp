/**
 * @file MaterialOrdenado.hpp
 * @brief Contiene la definición de la clase MaterialOrdenado.
 */

#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include <vector>
#include "material_audiovisual.hpp"

/**
 * @brief Clase que representa una colección ordenada de materiales audiovisuales.
 * 
 * La clase MaterialOrdenado permite almacenar y gestionar materiales audiovisuales de forma ordenada.
 */
class MaterialOrdenado {
public:
    /**
     * @brief Constructor por defecto de la clase MaterialOrdenado.
     */
    MaterialOrdenado();

    /**
     * @brief Destructor de la clase MaterialOrdenado.
     * 
     * Se encarga de liberar la memoria dinámica de los materiales almacenados.
     */
    ~MaterialOrdenado();

    /**
     * @brief Agrega un nuevo material a la colección.
     * @param material Puntero al material audiovisual a agregar.
     */
    void agregarMaterial(MaterialAudiovisual* material);

    /**
     * @brief Elimina un material de la colección por título.
     * @param titulo Título del material a eliminar.
     */
    void eliminarMaterial(const std::string& titulo);

    /**
     * @brief Busca un material por título en la colección.
     * @param titulo Título del material a buscar.
     * @return Puntero al material encontrado, o nullptr si no se encuentra.
     */
    MaterialAudiovisual* buscarPorTitulo(const std::string& titulo) const;

    /**
     * @brief Muestra la información de todos los materiales en la colección.
     */
    void mostrarMaterial() const;

private:
    std::vector<MaterialAudiovisual*> materiales; ///< Vector que almacena los materiales audiovisuales.
};

#endif // MATERIAL_ORDENADO_HPP
