#include "funciones.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>


void MostrarMenu (){ //Esta funcion ejecuta el menu.
    std::cout << "\n ---MENU---\n";
    std::cout << "\n 1. Iniciar Juego\n";
    std::cout << "\n 2. Escoger Dificultad: Difícil\n";
    std::cout << "\n 3. Escoger Intervalo de Valores Deseado\n";
    std::cout << "\n 4. Salir\n";
}

void procesarOpcion(Info& info){
    int opcion;
    static bool rangoDefinido = false;//se define asi para garantizar que en cada iteracion, el rango se inicializa en 0

    std::cout<< "Ingrese una opcion: ";
    std::cin>>opcion;

    switch(opcion){
        case 1://Iniciando el juego  
        if (info.modoDificil&& rangoDefinido&& info.max> info.min){//este if hace que se encicle el menu hasta que reciba el rango
            Iniciar_Juego(info);
        } else{
            std::cout<<"Debe definir un rango valido antes de iniciar el juego.\n";
        }
        break;

        case 2: //Funcion para Escoger la dificultad Dificil
        Dificultad_Dificil (info);
         std::cout<< info.modoDificil<<std::endl;
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

void Iniciar_Juego(Info& info){
    int numero_juego = Generar_Numero(info.min,info.max);
    std:: cout << "\n--------Empezando Juego--------\n";
    int attempt;
    int attempt_rest= DefinirIntentos(info);////Para delimitar la cantidad de intentos.

    std:: cout << "Adivine el numero entre "<<info.min<< " y "<<info.max<<". Tiene "<<attempt_rest<<" intentos.\n";
    bool success= false;
    
    if (info.modoDificil==false){//Esta es la condicional para que se ejecute el modo facil, o el dificil.
        while (!success && attempt_rest > 0){
        std:: cout << "Ingrese su intento: ";
        std:: cin >> attempt;

        if(attempt < numero_juego){
            std::cout<<"El numero es mayor.Le quedan "<<--attempt_rest<<" intentos.";
        } else if (attempt>numero_juego){
            std::cout<<"El numero es menor.Le quedan "<<--attempt_rest<<" intentos.";
        } else { 
            std::cout<< "Lograste adivinar el numero. Felicidades!!!!\n";
            success = true;
        }
            
        if (attempt_rest==0){ 
            std::cout<<"Se le acabaron los intentos, perdio. El numero era "<< numero_juego <<". Buuuuu.\n";
        }

        std::cout<<std::endl;
        }//fin de codigo en modo facil

} else {
    std::cout << "Modo Difícil: " << info.modoDificil << std::endl;
    while (!success && attempt_rest > 0) {
        std::cout << "Ingrese su intento, MODO DIFICIL: ";
        std::cin >> attempt;

        if (attempt == numero_juego) {
            std::cout << "Lograste adivinar el numero y me apagaste las llamas! Felicidades!!!!\n";
            success = true;
            break;
        }

        int distancia = std::abs(numero_juego - attempt);

        if (distancia == 0) {
            std::cout << "Adivinaste el numero!!! Ganaste! Me salvaste!\n";
        } else if (distancia <= 1) {
            std::cout << "ESTAS EN LLAMAS, MUY CERCA, AAAAAAAAGGH. PRUEBA OTRO NUMERO. Le quedan " << (attempt_rest-=2) << " intentos.\n";
        } else if (distancia <= 3) {
            std::cout << "Estas entrando en calor, poco poco. Te quedan " <<  (attempt_rest-=2) << " intentos.\n";
        } else if (distancia <= 5) {
            std::cout << "Estas frio, y estoy lejos de caaaaaaaasaaaaa. Te quedan " <<  (attempt_rest-=2) << " intentos.\n";
        } else if (distancia <= info.max) {
            std::cout << "Me congele bro. Te quedan " <<  (attempt_rest-=2) << " intentos.\n";
        }
//fin de codigo para el modo dificil. Aqui, se penalizan mas duro las fallas.
        if (attempt_rest == 0) {
            std::cout << "Se le acabaron los intentos, perdio. El numero era " << numero_juego << ". Buuuuu.Me quemeeeeee y duele mucho :(\n";
            break;
        }
    }
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