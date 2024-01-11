#include "moto.hpp"

Moto::Moto (int velocidad, bool tieneCasco): Vehiculo(velocidad), tieneCasco(tieneCasco){}

void Moto::usarCasco(){
    if(tieneCasco){
        cout << "Usando casco mientras maneja la moto."<<endl;
    }else{
        cout<<"No lleva casco mientras maneja.Se va a morir."<<endl;
    }
}