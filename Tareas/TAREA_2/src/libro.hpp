#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "material_lectura.hpp"

class Libro : public MaterialLectura {
public:
    Libro(const std::string& titulo, const std::string& autor, const std::string& editorial,
         const std::string& genero, const std::string& estado, int cantidadHojas,
         double precio, const std::string& resumen, const std::string& materialRelacionado);

    virtual ~Libro(); // Destructor virtual para permitir la liberación de memoria

    virtual void mostrarInformacion() const override;

    const std::string& getResumen() const;
    const std::string& getMaterialRelacionado() const;

private:
    std::string resumen;
    std::string materialRelacionado;
};

#endif // LIBRO_HPP
