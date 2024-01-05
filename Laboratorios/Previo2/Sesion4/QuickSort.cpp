//Haciendo un sort de tipo Quick como se vio en clase, este en su primer paso va a acomodar los extremos.
#include <iostream>
using namespace std;

//Iniciando la funcion para realizar el cambio

void swap(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}

//Iniciando la funcion para 'partir' el array

int partir(int arr[], int bajo, int alto){ //donde bajo es el indice mas bajo del rango, y alto es el indice mas alto
    int pivote= arr[alto];
    int i=bajo-1;

    for (int j = bajo ; j < alto; ++j){
        if (arr[j]<= pivote) {
            i++;
            swap (arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[alto]);
    return i+1;
}
//Funcion para el quicksort
void QuickSort(int arr[], int bajo, int alto){
    if (bajo < alto){
        int indicePivote = partir(arr, bajo, alto);

        QuickSort(arr, bajo, indicePivote-1);
        QuickSort(arr, indicePivote+1,alto);
    }
}
//Funcion para imprimir
void Imprimir(int arr[],int size){
    for(int i=0 ; i<size; ++i) {
        std:: cout << arr[i]<< " ";
    }
    std:: cout << std:: endl;
}
//Funcion principal

int main(){
    int datos [] = {12,45,66,1,20,99,7,69};
    int size = sizeof(datos)/sizeof(datos[0]);

    std::cout << "Array antes de aplicar el quickSort: ";
    Imprimir(datos,size);

    QuickSort(datos, 0, size-1);

    std:: cout << "Array despues de aplicar quickSort: ";
    Imprimir(datos,size);
    return 0;
}