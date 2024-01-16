#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <string>

class MaterialAudiovisual {
public:
    MaterialAudiovisual(const std::string& titulo, const std::string& autor,
                        const std::string& tipo, const std::string& genero,
                        const std::string& estado, int duracion, double precio);

    virtual ~MaterialAudiovisual(); // Destructor virtual para permitir la liberación de memoria

    virtual void mostrarInformacion() const; // Función virtual para imprimir información

    const std::string& getTitulo() const;
    const std::string& getTipo() const;
    double getPrecio() const;

protected:
    std::string titulo;
    std::string autor;
    std::string tipo;
    std::string genero;
    std::string estado;
    int duracion; // Duración en minutos
    double precio;
};

#endif // MATERIAL_AUDIOVISUAL_HPP
