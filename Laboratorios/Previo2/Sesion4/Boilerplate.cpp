#include <iostream>
using namespace std;

class Molde {
    public:

    double largo;
    double ancho;
    double altura;

    Molde(){
        cout<< "Esto se ejecuta en cada instancia." << endl;
        cout<< "Iniciando un objeto de la clase Room." << endl;
    }

    double CalcularArea(){
        return largo*ancho;
    }

    double CalcularVolumen(){
        return largo*ancho*altura;
    }
};

int main(){
    //Aqui, se instancia un objeto, llamado pared, basado en la clase Molde.
    Molde pared;

    pared.largo = 500.69;
    pared.ancho = 25.7;
    pared.altura = 320.33;

    //Calculando y desplegando el area y volumen

    cout<< "Area= " <<pared.CalcularArea()<< endl;
    cout<< "Volumen= " <<pared.CalcularVolumen()<< endl;
    return 0;
}