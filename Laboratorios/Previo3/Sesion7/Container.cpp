#include <iostream>
#include <vector>

using namespace std;
//Decir porque incluyo cada uno, con formato Doxygen

int main (){
    //Iniciando un vector de tipo int
    vector <int> numbers={1,100,10,70,100};
     //Imprimiento del vector
    cout << "Los numeros son: ";
    for(auto &num: numbers){
        cout << num << ", ";
    }
    return 0;
}