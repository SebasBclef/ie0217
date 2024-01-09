#include "funciones.hpp"
#include <iostream>

void MostrarMenu (){ //Esta funcion ejecuta el menu.
    std::cout << "\n ---MENU---\n";
    std::cout << "\n 1. Iniciar Juego\n";
    std::cout << "\n 2. Escoger Dificultad: Fácil\n";
    std::cout << "\n 3. Escoger Dificultad: Difícil\n";
    std::cout << "\n 4. Escoger Intervalo de Valores Deseado\n";
    std::cout << "\n 5. Salir\n";
}

void procesarOpcion(Info& info){
    int opcion;
    std::cout<< "Ingrese una opcion: ";
    std::cin>>opcion;
    switch(opcion){

        /*case 1://Iniciando el juego       aqui debo meter el numero de intentos y generar el numero.
        Iniciar_Juego(numeroUsuario);
        break;

        case 2: //Funcion para Escoger la dificultad Facil
        Dificultad_Facil(info);
        break;

        case 3: //Funcion para Escoger la dificultad Dificil
        Dificultad_Dificil (info);
        break;*/

        case 4: ////Funcion para Escoger el intervalo
        Escoger_Intervalo(info);
        break;

        case 5://Salir del juego
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
    