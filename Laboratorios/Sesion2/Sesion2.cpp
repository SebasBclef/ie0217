#include <iostream>
#include <limits>
using namespace std;
int g;

void holamundo(){ /*pongo un void, y todas las funciones en adelante como un void, porque me interesa subir un solo archivo,
                por lo menos por ahora que esta comenzando el curso*/ 
    
    std::cout << "Hello World. Its sad being a computer :(\n";
}

void suma(){
    int a,b;
    int c; //variables locales segun lo que se ve en la presentacion
    a=123;
    b=9283;
    c=a+b;
    std::cout<< "El resultado de la suma es:"<< c<<"\n"; //una busqueda rapida me dijo que asi es como se hace para imprimir un valor en un string de texto :D
}

void suma_global(){
    int a,b; //a y b son locales, mientras g es global
    a=2023;
    b=2024;
    g = a+b;
    std::cout<< "El resultado de la suma, con variable global es:"<< g<<"\n";
}

void operaciones(){
    char oper;
    float num1, num2;
    cout << "Digite la operacion a realizar(+,-,*,/): ";
    cin >> oper;
    cout << "Digite dos numeros a operar: "<< endl;
    cin >> num1 >> num2;

    switch(oper){
        case '+':
        cout << num1<< "+" << num2 << "= " << num1 + num2<<"\n";
        break;

        case '-':
        cout << num1<< "-" << num2 << "= " << num1 - num2<<"\n";
        break;

        case '*':
        cout << num1<< "*" << num2 << "= " << num1 * num2<<"\n";
        break;

        case '/':
        cout << num1<< "/" << num2 << "= " << num1 / num2<<"\n";
        break;
    default:
        cout<<"Error, el operador no es valido para las opciones dadas.";
        break;
    }
}

void loop(){ //un loop for que imprime de 1 a 10
    cout<<"Array de numeros de 1 al 10, impresos a traves de un loop:";
    int array_de_numeros[]={1,2,3,4,5,6,7,8,9,10}; //de una vez iniciamos un array, como se ve en la presentacion.
    for (int n:array_de_numeros){
        cout << n <<"";
    }
     std::cout << std::endl;
}

float absoluto(float var){ // funcion para valor absoluto, pero con un float para el parametro
    if (var < 0.0)
        var = -var;
    return var;
}

int absoluto (int var){ // funcion para valor absoluto, pero con un int para el parametro
    if (var < 0)
    var = -var;
    return var;
}

int main(){
    holamundo();
    suma();
    suma_global();
    operaciones();
    loop();
    cout << "Absolute value of -5=" << absoluto(-5) << endl; //LLamando a la funcion con parametro int.
    cout << "Absolute value of -5.69=" << absoluto(-5.69f) << endl; //Misma funcion, pero con parametro float.
    return 0;
}


/*en el main se llama a todas las funciones, para que asi todo corra de una vez en la terminal sin tener que 
hacer varios archivos y subirlos.*/
