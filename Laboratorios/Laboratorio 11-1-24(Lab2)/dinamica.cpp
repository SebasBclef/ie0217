# include <iostream>
using namespace std;

/* se va a guardar en la seccion data*/

int variableGlobal=10;
/*se va a guardar en la seccion .text*/
void funcionGlobal(){

/* se guarda en la seccion data*/
    static int variableLocalEstatica = 5;//ESTO SE EJECUTA UNA SOLA VEZ, es como un balazo.
    int variableLocal=20;

    cout<< "Variable global: "<< variableGlobal << endl;
    cout<< "Variable local estatica: " <<variableLocalEstatica<<endl;
    cout<< "Variable local: "<< variableLocal << endl;
}

int main (){
    int variableLocalMain=15;

    funcionGlobal();

    cout<<"Variable local en main: "<< variableLocalMain<<endl;
/* Esto se va a guardar en el heap*/
    int*variableDinamica = new int;
    *variableDinamica=25;

    cout<<"Variable dinamica: " << *variableDinamica<< endl;

    delete variableDinamica;

    return 0;
}