#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <string>

class MaterialLectura {
public:
    MaterialLectura(const std::string& titulo, const std::string& autor, const std::string& tipo,
                    const std::string& editorial, const std::string& genero, const std::string& estado,
                    int cantidadHojas, double precio);

    virtual ~MaterialLectura(); // Destructor virtual para permitir la liberación de memoria

    virtual void mostrarInformacion() const; // Función virtual para imprimir información

    const std::string& getTitulo() const;
    const std::string& getTipo() const;
    double getPrecio() const;

protected:
    std::string titulo;
    std::string autor;
    std::string tipo;
    std::string editorial;
    std::string genero;
    std::string estado;
    int cantidadHojas;
    double precio;
};

#endif // MATERIAL_LECTURA_HPP