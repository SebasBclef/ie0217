#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10

enum {
    CASA_BONILLA,
    CASA_RODRIGUEZ,
    CASA_QUESADA,
    CASA_ARCE,
    CASA_ESPINOZA
} casa_t;

int main(){
    cout<< "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout<< "La cantidad de casas en el condominio es: "<< CASA_ESPINOZA+1 << endl;

    return 0;
}