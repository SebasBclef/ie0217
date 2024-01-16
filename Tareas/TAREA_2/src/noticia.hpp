#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "material_lectura.hpp"

class Noticia : public MaterialLectura {
public:
    Noticia(const std::string& titulo, const std::string& autor, const std::string& estado,
            int cantidadHojas, double precio, const std::string& contenido,
            const std::string& materialRelacionado);

    virtual ~Noticia(); // Destructor virtual para permitir la liberación de memoria

    virtual void mostrarInformacion() const override;

    const std::string& getContenido() const;
    const std::string& getMaterialRelacionado() const;

private:
    std::string contenido;
    std::string materialRelacionado;
};

#endif // NOTICIA_HPP
