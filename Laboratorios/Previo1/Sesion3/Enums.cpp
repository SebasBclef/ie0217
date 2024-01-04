#include <iostream>

using namespace std;

enum semana {Domingo,Lunes,Martes,Miercoles,Jueves,Viernes,Sabado };

/*en este codigo, se tiene una enumeracion de dias de la semana, y lo que 
se esta pidiendo es que diga el numero del dia de la semana. En otras palabras,
el codigo busca la posicion del dia en el enum, y devuelve ese valor.*/

int main(){
    semana hoy;
    hoy = Domingo;
    cout<< "Dia: "<<hoy+1;
    return 0;
}