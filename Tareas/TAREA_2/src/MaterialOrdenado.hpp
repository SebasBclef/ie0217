#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include <vector>
#include "material_audiovisual.hpp"
#include "material_lectura.hpp"

class MaterialOrdenado {
public:
    MaterialOrdenado();
    ~MaterialOrdenado();

    void agregarMaterial(MaterialAudiovisual* material);
    void eliminarMaterial(const std::string& titulo);
    MaterialAudiovisual* buscarPorTitulo(const std::string& titulo) const;
    void mostrarMaterial() const;

private:
    std::vector<MaterialAudiovisual*> materiales;
};

#endif // MATERIAL_ORDENADO_HPP
