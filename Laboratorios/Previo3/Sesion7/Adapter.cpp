#include <iostream>
#include <stack>
using namespace std;

int main (){
    //crear un stack de ints

    stack <int> numbers;
    //empujandole cosas al stack
    numbers.push(1);
    numbers.push(100);
    numbers.push (10);

    cout<< "Numbers are: ";

    //Se puede accesar un elemento agarrando el
    // elemento de arriba, y sacando elementos hasta que
    //el stack este vacio

    while(!numbers.empty()){
        //print top element

        cout<< numbers.top()<< ", ";

        //sacando (pop) los elementos del stack

        numbers.pop();

    }
return 0;

}