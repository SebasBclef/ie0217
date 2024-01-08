#include <iostream>
using namespace std;

class Animal{
    public:
        void eat () {
            cout<<"Nom nom, me gusta comer"<< endl;
        }

        void sleep (){
            cout<<"zzzzzzzzzzzz" << endl;
        }

};

class Dog : public Animal {
    public:
    void bark(){
        cout<< "Woof woof"<<endl;
    }
};

int main(){
    Dog dog1;

    dog1.eat();
    dog1.sleep();
    dog1.bark();

    return 0;
}