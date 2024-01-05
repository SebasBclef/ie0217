//Haciendo un sort de tipo Selection como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

//se declara la funcion para cambiar la POSICION de dos elementos

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//funcion para imprimir un array
//se utilizan punteros, ya que se esta hablando de posiciones
void Imprimir (int array[], int size){
    for (int i=0; i < size; i++){
        cout<< array[i]<<" ";
    }
    cout<<endl;
}

void SelectionSort(int array[],int size){
    for (int paso = 0; paso < size -1; paso++){
        int min_idx = paso;
        for (int i =paso+1; i<size;i++){
            //En este loop, se elecciona el elemento minimo. De manera similar a ambos codigos anteriores, se esta
            //ordenando de modo ASCENDENTE. Si se quiere DESCENDENTE, se debe cambiar el '>' a '<' en la linea 25.
            if (array [i]<array[min_idx])
            min_idx=i;
        }
    //poniendo el numero minimo en la posicion correcta.
    swap(&array[min_idx], &array[paso]);
    }
}

//ahora, en el main

int main(){
    int datos[]= {-123, 34, 0, -32, 124};
    int size = sizeof(datos)/sizeof(datos[0]);
    SelectionSort(datos,size);
    cout<< "Arraglo ordenado en orden ASCENDENTE: \n";
    Imprimir(datos,size);
}