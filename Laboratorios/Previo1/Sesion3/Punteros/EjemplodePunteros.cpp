#include <iostream>

using namespace std;

int main(){
    //declarando variabels para ver donde se almacenan

    int var1=3;
    int var2=24;
    int var3=17;

    //ahora, aqui se imprime la direccion en donde estan guardadas estas variables.
    cout<< "Direccion de var1: " << &var1 <<endl;
    cout<< "Direccion de var2: " << &var2 <<endl;
    cout<< "Direccion de var3: " << &var3 <<endl;
    
    return 0;
}