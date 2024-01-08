//Haciendo un sort de tipo Insertion como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

//funcion para imprimir un array

void Imprimir (int array[], int size){
    for(int i=0; i < size ; i++){
        cout << array[i] << "";
    }
    cout<<endl;
}

void insertionSort (int array [], int size){
    for (int paso =1; paso < size; paso++){
        int key = array[paso];
        int j= paso - 1;
        //En este caso, se compara la key en la izquierda del array
        // hasta que aparezca un elemento mas pequenp.
        //Nuevamente, en orden ascendente.
        while (key < array[j] && j >= 0){
            array[j+1] = array[j];
            --j;
        }
        array[j+1]=key;
    }
}
//La funcion que corre todo

int main(){
    int datos[]={9,5,2,1,46};
    int size= sizeof(datos)/sizeof(datos[0]);
    insertionSort(datos,size);
    cout<< "Array ordenado en orden Ascendente: \n";
    Imprimir(datos,size);
}