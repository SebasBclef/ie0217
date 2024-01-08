#include <iostream>
using namespace std;

class Base{
    public:
    void print(){
        cout <<"Funcion Base" << endl;
    }
};

class Derivada: public Base {
    public:
    void print(){
        cout << "Funcion Derivada" <<endl;
    }
};

int main(){
    Derivada derivada1;
    derivada1.print();
    return 0;
}