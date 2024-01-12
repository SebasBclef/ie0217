#include <iostream>
#include <list>

using namespace std;

int main (){
    list<int> nums {23,45,89,78,8};
    //iniciando un iterador hacia un punto
    //en el principio de nums

    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " <<endl;

    //mostrando los elementos en orden "forward"

    while (itr != nums.end()){
        cout<< *itr << " ,";

        //moviendo el iterador por 1 posicion adelante

        itr++;
    }

    cout <<endl<< "Moviendose hacia atras: "<< endl;

    //mostrando los elementos en orden de atras a adelante
     while (itr != nums.begin()){
        if (itr != nums.end()){
            cout << *itr<<", ";
        }
     //moviendo el iterador una posicion  atras
     itr--;
     }
     cout << *itr<< endl;
     return 0;
}