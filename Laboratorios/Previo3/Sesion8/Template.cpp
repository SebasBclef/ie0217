#include<iostream>
using namespace std;

template<typename T>
T add (T num1, T num2){
    return (num1+num2);
}

int main (){
    int result1;
    double result2;
    //llamando los parametros int
    result1= add<int>(2,3);
    cout<< result1<< endl;

    //llamando con parametros double
    result2= add <double> (2.2,3.3);
    cout<<result2<< endl;

    return 0;
}