//Lista Enlazada en C++
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Creando un nodo

class Node{
    public:
    int value;
    Node*next;
};

int main(){
    Node*head;
    Node*one=NULL;
    Node*two= NULL;
    Node*three= NULL;

    //metiendo 3 nodos al heap

    one = new Node();
    two =  new Node();
    three = new Node();

    //Asignando valores

    one -> value == 1;
    two -> value == 2;
    three -> value == 3;

    //conectando nodos
    one -> next= two;
    two -> next= three;
    three -> next= NULL;

    //Imprimir la lista enlazada

    head= one;
    while (head != NULL){
        cout<< head -> value;
        head= head -> next;
    }
}