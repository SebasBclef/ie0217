#ifndef ESTUDIANTE_HPP
#define ESTDUDIANTE_HPP

#include <string>

class Estudiante{
    public:

    Estudiante(const std::string& nombre, int edad);
    void mostrarDatos();

    private:
    std::string nombre;
    int edad;
    int edad2;
};


#endif