//Haciendo un sort de tipo Bubble como se vio en clase
#include <iostream>
using namespace std;


void BubbleSort (int array[],int size){

//loop para accesar cada elemento del array
    for (int paso = 0; paso < size; ++paso){
        //otro loop para comparar los elementos dentro del array, note que el primero es para ACCESAR los elementos, no se hace nada con ellos.
        for(int i = 0; i < size - paso -1; ++i){
            //ahora, se copmaran dos elementos adyacentes dentro del array
            //si se desea ordenar de forma descendiente, se debe cambiar el '>' por un '<'.
            if (array[i] > array [i+1]){
                //ahora, con este codigo se procede a cambiar los elementos si los elementos
                //no estan en el orden que se busca.
                 int temp = array [i];
                 array[i] = array[i+1];
                 array[i+1] = temp;
            }
        }
    }

}
//Para imprimir el array
void Imprimir(int array[], int size){
    for (int i= 0; i < size; ++i){
        cout<<" "<<array[i];
    }
    cout << "\n";
}


int main() {
int datos []= {1000,-123,-3901238,123443,9883,1092};
//Para encontrar el tamano del array

int size = sizeof(datos)/ sizeof(datos[0]);

BubbleSort(datos,size);

cout << "Array Ordenado de Manera Ascendente: \n";

Imprimir(datos,size);

}