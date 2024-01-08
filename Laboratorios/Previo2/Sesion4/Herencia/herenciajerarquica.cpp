#include<iostream>
using namespace std;

class Animal{
    public:
    void info(){cout<<"SOY UNA BESTIA, RAAAAAAAAAAH **sonidos de bestia**."<<endl;}
};

class Dog: public Animal{
    public:
    void bark(){cout<<"WOOF WOOF, I TOLD YOU WE NEEDED MORE GLITTER."<<endl;}
};

class Cat: public Animal{
    public:
    void meow(){cout<<"MIAUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU"<<endl;}
};

int main(){
    Dog dog1;
    cout<<"Tipo de zaguate:"<<endl;
    dog1.info();
    dog1.bark();

    Cat cat1;
    cout<<"\n Tipo de misingo:"<<endl;
    cat1.info();
    cat1.meow();

    return 0;
}