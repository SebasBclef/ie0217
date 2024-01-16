// MaterialPrecio.hpp

#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP

#include <vector>
#include "material_lectura.hpp"
#include "material_audiovisual.hpp"

class MaterialPrecio {
public:
    MaterialPrecio();

    void agregarMaterial(MaterialAudiovisual* material);
    void ordenarAscendentemente();
    void ordenarDescendentemente();
    void mostrarMaterialesOrdenados() const;

private:
    std::vector<MaterialLectura*> materialesLectura;
    std::vector<MaterialAudiovisual*> materialesAudiovisual;
};

#endif // MATERIALPRECIO_HPP
