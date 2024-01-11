#include<iostream>

//Almacenando en el segmento de DATA.
int globalVariable= 42;

int main(){
//almacenando en el STACK
    int stackVariable= 10;

    //almacenando en el HEAP

    int* heapVariable= new int(20);

    std::cout<<"Valor de globalVariable: "<< globalVariable<<std::endl;
    std::cout<<"Valor de stackVariable: "<< stackVariable<<std::endl;
    std::cout<<"Valor de heapVariable: "<< heapVariable<<std::endl;
    //Liberar la memoria del HEAP

    delete heapVariable;

    return 0;
}
