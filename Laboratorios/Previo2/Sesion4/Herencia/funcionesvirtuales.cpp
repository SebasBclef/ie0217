#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"Funcion Base"<<endl;
        }
};

class Derived:public Base{
    public:
    void print(){
        cout<< "Funcion Derivada"<<endl;
    }
};


int main(){
    Derived derived1;

    Base*base1= &derived1;

    base1 -> print();

    return 0;
}