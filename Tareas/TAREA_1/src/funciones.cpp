#include "funciones.hpp"
#include <iostream>
#include <cstdlib>


void MostrarMenu (){ //Esta funcion ejecuta el menu.
    std::cout << "\n ---MENU---\n";
    std::cout << "\n 1. Iniciar Juego\n";
    std::cout << "\n 2. Escoger Dificultad: Difícil\n";
    std::cout << "\n 3. Escoger Intervalo de Valores Deseado\n";
    std::cout << "\n 4. Salir\n";
}

void procesarOpcion(Info& info){
    int opcion;
    static bool rangoDefinido = false;

    std::cout<< "Ingrese una opcion: ";
    std::cin>>opcion;

    switch(opcion){
        case 1://Iniciando el juego  
        if (info.modoDificil&& rangoDefinido&& info.max> info.min){
            Iniciar_Juego(info);
        } else{
            std::cout<<"Debe definir un rango valido antes de iniciar el juego.\n";
        }
        break;

        case 2: //Funcion para Escoger la dificultad Dificil
        Dificultad_Dificil (info);
        break;

        case 3: ////Funcion para Escoger el intervalo
        Escoger_Intervalo(info);
        rangoDefinido = true;
        break;

        case 4://Salir del juego
        std:: cout <<"Saliendo del programa. Gracias por jugar :D\n";
        exit(0);

        default:
        std:: cout << "Opcion no valida. Intente de Nuevo...\n";   
        }
    }

int DefinirIntentos(const Info& dato){//Esta funcion define la cantidad de intentos que tiene el usuario
    int Tamano_Intervalo = dato.max - dato.min + 1;//Toma la diferencia entre el valor maximo, y el valor minimo para el intervalo
    int N = Tamano_Intervalo / 3;
    return N;
}

int Generar_Numero(int min, int max){
    return min + rand() % (max - min +1);
}

void Iniciar_Juego(Info& info, bool modoDificil){

    int numero_juego = Generar_Numero(info.min,info.max);

    std:: cout << "\n--------Empezando Juego--------\n";
    int attempt;
    int attempt_rest= DefinirIntentos(info);////Para delimitar la cantidad de intentos.
    std:: cout << "Adivine el numero entre "<<info.min<< " y "<<info.max<<". Tiene "<<attempt_rest<<" intentos.\n";
    bool success= false;

    while (!success && attempt_rest > 0){
        std:: cout << "Ingrese su intento: ";
        std:: cin >> attempt;

        if(attempt< numero_juego){
            std::cout<<"El numero es mayor.Le quedan "<<--attempt_rest<<" intentos.";
        } else if (attempt>numero_juego){
            std::cout<<"El numero es menor.Le quedan "<<--attempt_rest<<" intentos.";
        } else {
            std::cout<< "Lograste adivinar el numero. Felicidades!!!!\n";
            success = true;
        }


        if (attempt_rest==0){
            std::cout<<"Se le acabaron los intentos, perdio. El numero era "<< numero_juego <<" .Buuuuu.\n";
        }
        std::cout<<std::endl;
    }
}

void Escoger_Intervalo(Info& info){
    std:: cout <<"-----ESCOGIENDO INTERVALO------\n";
    std:: cout <<"Por favor, escoja el valor minimo del intervalo: "; std::cin>>info.min;
    std:: cout <<"Por favor, escoja el valor maximo del intervalo: "; std::cin>>info.max;

    while (info.max <= info.min){
        std:: cout <<"El valor max debe ser mayor que el valor min, digite otro numero. \n ";
        std:: cout << "Ingrese el valor max del intervalo otra vez: ";
        std:: cin >> info.max;
    }
    std::cout << "Su intervalo es (" << info.min << "," << info.max << ").\n";
}

void Dificultad_Dificil(Info& info){
    info.modoDificil = true; // Modo difícil
    std::cout << "Dificultad establecida a Difícil.\n";
}

    