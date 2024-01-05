#include <iostream>
using namespace std;

int main() {
    float arr[10];

    //variable de puntero
    float*ptr;

    cout << "Mostrando la direccion utilizando arrays: " << endl;

    //usando un loop de for para imprimir todas las direcciones, y llenar el array con ellos
    for (int i=0 ; i<10 ;  ++i){
        cout<< "&arr[" << i << "]= " << &arr[i] << endl;
    }
    ptr = arr;
    cout << "\n Mostrando la direccion usando punteros: " << endl;
    //ahora, se declara otro loop de for para imprimir las direcciones de todos los elementos del array utilizando punteros.

    for (int i=0; i<10; ++i){
        cout<< "ptr + " << i << " = " <<ptr + i <<endl;
    }
}

//Si es de interes que corran mas o menos de 10, es NECESARIO cambiar TODOS los valores en los que esta i, junto el valor del 
//tamano del array.