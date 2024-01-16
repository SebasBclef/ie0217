#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "material_audiovisual.hpp"

class Pelicula : public MaterialAudiovisual {
public:
    Pelicula(const std::string& titulo, const std::string& autor, const std::string& genero,
             const std::string& estado, int duracion, double precio,
             const std::string& resumen, const std::string& materialRelacionado);

    virtual ~Pelicula(); // Destructor virtual para permitir la liberación de memoria

    virtual void mostrarInformacion() const override;

    const std::string& getResumen() const;
    const std::string& getMaterialRelacionado() const;

    private:
    std::string resumen;
    std::string materialRelacionado;
};

#endif // PELICULA_HPP
