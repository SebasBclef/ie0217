#include <iostream>
using namespace std;

//definiendo una funcion para cambiar valores

void swap (int &n1, int &n2){
    int temp;
    temp = n1;
    n1= n2;
    n2= temp;
}

int main() {
    //empezando variables

    int a=1,b=2;

    cout << "Antes del cambio:" << endl;
    cout<< "a = " << a << endl;
    cout << "b = " << b << endl;

    //llamando a la funcion para cambiar los numeros

    swap(a,b);

    cout << "\nDespues del cambio:" << endl;
    cout<< "a = " << a << endl;
    cout << "b = " << b << endl;


}