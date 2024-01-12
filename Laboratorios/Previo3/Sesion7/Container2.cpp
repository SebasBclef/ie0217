#include <iostream>
#include <set>//note el set

using namespace std;
//Decir porque incluyo cada uno, con formato Doxygen

int main (){
    //Iniciando un vector de tipo int
    set <int> numbers={1,100,10,70,100};//note el set
     //Imprimiento del vector
    cout << "Los numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0;
}
//HACER EL PUSH Y EL PULL