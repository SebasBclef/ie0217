#include <iostream>

using namespace std;

int main(){
    //empezando una variable con un double

    double num_double=3.56763676;
    cout << "num_double = " << num_double <<endl;
    //Convertir de double a int como si fuera en el lenguaje C

    int num_int1 = (int)num_double;
    cout << "num_int1 = " << num_int1<< endl;

    //convertir de double a int a traves de funciones

    int num_int2= int(num_double);
    cout<< "num_int2 = "<< num_int2 <<endl ;

    return 0;

}