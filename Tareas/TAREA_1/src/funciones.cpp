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

        case 1://Iniciando el juego
        Iniciar_Juego(info);
        break;

        case 2: //Funcion para Escoger la dificultad Facil
        Dificultad_Facil();
        break;

        case 3: //Funcion para Escoger la dificultad Dificil
        Dificultad_Dificil ();
        break;

        case 4: ////Funcion para Escoger el intervalo
        Escoger_Intervalo(info);
        break;

        case 5://Salir del juego
        std:: cout <<"Saliendo del programa...\n";
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
