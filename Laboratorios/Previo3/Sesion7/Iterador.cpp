#include <iostream>
#include <vector>

using namespace std;

int main() {
     vector <string> languages= {"Python", "C++","Java"};

     //Creando un iterador asociado a un string vector

     vector <string>:: iterator itr;

     //iterar sobre todos los elementos 

     for (itr = languages.begin(); itr != languages.end();itr++){
        cout << *itr<< ", ";
     }

    return 0;
}