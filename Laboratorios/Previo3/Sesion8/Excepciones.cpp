#include <iostream>
using namespace std;

int main (){
    double numerator,denominator,divide;

    cout<< "Ingrese Numerador: " ;
    cin>> numerator; 

    cout<< "Ingrese Denominador: ";
    cin>> denominator;

    try{
        //tirar una excepcion si el denominador es 0

        if (denominator == 0)

        throw 0;

        //no se ejecuta si el denominador es 0

        divide= numerator/denominator;

        cout<< numerator << " / " << denominator<< " = "<<divide<<endl;
    }

    catch (int num_exception){

        cout<<"Error, no se puede dividir entre "<< num_exception <<endl;

        return 0;
    }


}