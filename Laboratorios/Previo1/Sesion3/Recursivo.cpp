#include <iostream>
using namespace std;
//este es un ejemplo de recursividad, aplicado en una calculadora factorial como se vio en clase
int factorial (int);

int main(){
    int n, resultado;

    cout<<"Digite un numero positivo: ";
    cin>>n;

    resultado = factorial(n);
    cout<<"Factorial de " << n << " = " << resultado;
    return 0;
}

int factorial (int n) {
    if (n>1) {
        return n* factorial(n-1);
    } else {
        return 1;
    }
}