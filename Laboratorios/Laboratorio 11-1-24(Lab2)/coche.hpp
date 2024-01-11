#ifndef COCHE_HPP
#define COCHE_HPP
#include "vehiculo.hpp"

class Coche :public Vehiculo{
    public:
    Coche(int velocidad, int numPuertas);
    void abrirPuertas();

    protected:
        int numPuertas;
};//poner punto y coma

#endif 