#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>

struct Info {//Struct para definir los datos necesarios para que el programa corra
    int min;
    int max;
    int numeroUsuario;
};

void MostrarMenu();

void procesarOpcion(Info& info);
void Iniciar_Juego();
void Dificultad_Facil();
void Dificultad_Dificil();
void Escoger_Intervalo(Info& info);
int  DefinirIntentos(const Info& dato);


#endif