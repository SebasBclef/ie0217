#include "motocoche.hpp"

int main(){
    MotoCoche miMotoCoche(60,2,true);

    miMotoCoche.Coche:: acelerar();
    miMotoCoche.Coche:: abrirPuertas();
    miMotoCoche.Moto:: usarCasco();


    return 0;
}