#include <iostream>
#include <limits>
using namespace std;
struct Persona
{
    char nombre[50];
    int edad;
    float salario;
};

int main(){
    
    Persona p1;//Esta es la parte del codigo para ejecutar la estructura de salario que se vio en el video.

    cout<< "Digite su nombre: \n"; 
    cin.get(p1.nombre,50);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout<< "Digite su edad: \n";
    cin >> p1.edad;

    cout<< "Digite su salario:";
    cin >> p1.salario;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.nombre <<endl;
    cout << "Age: " << p1.edad << endl;
    cout << "Salario: " << p1.salario;

    return 0;
}
