#include "vehiculo.hpp"

Vehiculo:: Vehiculo (int param_velocidad){
    this-> velocidad = param_velocidad;
}

void Vehiculo:: acelerar (){
    cout<< "Acelerando a: "<< velocidad <<"km/h"<<endl;
}

void Vehiculo:: frenar (){
    cout<< "Frenando."<<endl;
}

