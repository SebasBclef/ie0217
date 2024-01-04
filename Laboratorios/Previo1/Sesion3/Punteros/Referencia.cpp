#include <iostream>
using namespace std;

int main() {
    int var=5;
//Declarando la variable del puntero
    int*pointVar;
//Almacenando la direccion de la variable
    pointVar=&var;
//Imprimiendo el valor de var
cout<< "var = " << var << endl;
//Imprimiendo la direccion de var

cout<< "Direccion de var (&var) = " << &var << endl;

//imprimir el puntero pointVar
cout<< "poinVar = " << pointVar << endl;

//imprimir el contenido en la direccion a la que apunta el puntero

cout<<"Contenido en la direccion que esta siendo apuntada por el puntero pointVar= " << *pointVar <<endl;

return 0;

}
//En este ejemplo se ve como referenciar punteros principalmente, y entender como funcionan internamente, 'paso paso'