#include <iostream>
#include "funciones.hpp"

int main() {
    Info info;
    while(1){
        MostrarMenu();
        procesarOpcion(info);
    }
    return 0;
}