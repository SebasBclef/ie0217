#include "persona.hpp"
using namespace std;

Persona :: Persona (string nombre, int edad): nombre(nombre),edad(edad){
}

string Persona :: getNombre(){
    return nombre;
}

int Persona :: getEdad(){
    return edad;
}

void Persona:: setEdad(int nuevaEdad){
    edad = nuevaEdad;
}