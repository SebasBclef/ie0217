#include <iostream>
using namespace std;

struct Distancia {
    int pies;
    float pulgadas;
};

int main (){
    Distancia *ptr,d;

    ptr = &d;

    cout<<"Digite los pies: ";
    cin >> (*ptr).pies;
    cout<< "Digite las pulgadas: ";
    cin >> (*ptr).pulgadas;

    cout<< "Imprimiendo la informacion: "<< endl;
    cout<< "Distancia = " << (*ptr).pies << " pies " << (*ptr).pulgadas << " pulgadas.";

    return 0;
}
/*Este ejemplo es para utilizar punteros en estructuras. Asi como los punteros se pueden usar para apuntar donde esta la direccion de la memoria,
tambien se pueden utilizar para apuntar posiciones especificas en estructuras.*/