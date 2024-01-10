#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>
#include <cstdlib>

struct Info {//Struct para definir los datos necesarios para que el programa corra
    int min;
    int max;
    int numeroUsuario;
    bool modoDificil;
};

void MostrarMenu();

void procesarOpcion(Info& info);
void Iniciar_Juego(Info& info);
void Dificultad_Dificil(Info& info);
void Escoger_Intervalo(Info& info);
int  DefinirIntentos(const Info& dato);
int Generar_Numero(int min, int max);


#endif