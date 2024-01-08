# include <iostream>
#include <string>
using namespace std;

class Animal{

    private:
    string color;

    protected:
    string type;

    public:

    void correr() {cout<< "Wiiiii, puedo correr de forma base!"<<endl;}
    void comer() {cout<<"Nom nom nom"<<endl;}
    void dormir() {cout<<"ZZZzzzzzZZZZzzzzZzZzz"<< endl;}
    void setColor(string clr){color=clr;}
    string getColor(){return color;}
};

class Dog: public Animal{
    public:
    void correr (){cout<<"Wuuuu, puedo correr, pero ahora en Derivado!"<<endl;}
    void setType(string tp){type=tp;}
    void displayInfo(string c){
        cout<< "Hola, me llamo: "<< type << endl;
        cout<< "Y soy de color: "<< c << endl;
    }
    void bark(){cout<<"Woof woof woof"<< endl;}
};

int main (){
    Dog dog1;
    dog1.correr();
    dog1.comer();
    dog1.dormir();
    dog1.setColor("arcoiris!!!");
    dog1.bark();
    dog1.setType("DINOSAURIO ESCUPE FUEGO DE 100 METROS DE ALTURA RAAAAAAAAAAAH");
    dog1.displayInfo(dog1.getColor());    
}