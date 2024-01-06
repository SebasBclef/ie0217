#include <iostream>
#include "funciones.hpp"


int main() {
    Empleado empleados [MAX_EMPLEADOS];
    int numEmpleados= 0;
    while(1){
        MostrarMenu();
        procesarOpcion(empleados,numEmpleados);
    }
    return 0;
}