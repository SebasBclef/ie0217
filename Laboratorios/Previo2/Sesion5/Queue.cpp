//Queue en C++
#include<iostream>
#define SIZE 5
using namespace std;

class Queue{
    private:
    int items [SIZE], front, rear;

    public:
    Queue(){
        front= -1;
        rear= -1;
    }
    bool isFull(){
        if (front ==0 &&rear == SIZE -1){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front== -1)
            return true;
        else
            return false;
    }
    void enQueue(int element){
        if(isFull()){
            cout<<"El queue esta lleno";  
        } else{
            if (front== -1) front = 0;
            rear++;
            items[rear] = element;
            cout<<"Inserted " <<element<<endl;
        }
    }
    int deQueue(){
        int element;
        if (isEmpty()){
            cout<<"El queue esta vacio"<<endl;
            return(-1);
        }else{
            element= items[front];
        if (front >= rear){
            front= -1;
            rear= -1;
        } //en este caso, el queue solo tiene un elemento, entonces se borra y se reinicia.
        else{
            front++;
        }
        cout<<"Borrado" << element<<endl;
        return(element);
        }
        
    }
    void Display(){
        //Funcion para mostrar los elementos del Queue
        int i;
        if (isEmpty()){
            cout<<"Queue vacio"<<endl;
        }else{
            cout<<"Indice Frontal -> "<< front;
            cout<< endl
            <<"Items -> ";
            for (i=front; i<= rear; i++)
                cout<<items[i]<< " ";
                cout<<endl
                << "Indice de Atras-> "<<rear<<endl;
        }
    }
};

int main(){
    Queue q;

    //deQueue no es posible si esta vacio
    q.deQueue();

    //5 elementos de enQueue
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    //el sexto elemento no se puede meter porque el queue esta lleno
    q.enQueue(6);

    q.Display();
    //deQueue quira el primer elemento
    q.deQueue();

    //ahora solo hay 4 elementos
    q.Display();

    return 0;
}