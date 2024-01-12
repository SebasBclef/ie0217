#include <iostream>
#include <forward_list>
using namespace std;

int main (){

    forward_list<int>nums{1,2,3,4};

    //iniciando un iterador hacia un punto,
    //el punto siendo el principio del forward
    //list

    forward_list<int>::iterator itr= nums.begin();

    while (itr !=nums.end()){
        //accesando el valor del iterador usando un 
        //operador sin direccion

        int original_value= *itr;

        //asignando un valor nuevo utilizando un operador
        //sin direccion

        *itr= original_value*2;

        //moviendo el iterador hacia adelante, que es la siguiente posicion

        itr ++;
    }
    //mostrando el contenido de los numeros
    for (int num: nums){
        cout<<num<<",";
    }
    return 0;
}