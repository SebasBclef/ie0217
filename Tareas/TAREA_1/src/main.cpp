/**
 * @file main.cpp. 
 *
 * @brief Programa principal que utiliza funciones de manejo de información.
 */
#include <iostream>
#include "funciones.hpp"
#include <cstdlib>
/**
 * @brief Función principal que inicia el programa.
 * @return Retorna 0 al finalizar el programa.
 */
int main() {
    /**
     * @brief Objeto de la clase Info que almacenará la información.
     */
    Info info;
    // Bucle principal del programa
    while(1){
        /**
         * @brief Muestra el menú de opciones en la consola. While(1) garantiza que el programa se ejecute siempre, hasta que se cancele con input manual.
         * @see MostrarMenu()
         */
        MostrarMenu();
        /**
         * @brief Esta funcion procesa la opción seleccionada por el usuario.
         * @param info Objeto de la clase Info que contiene la información.
         * @see procesarOpcion()
         */
        procesarOpcion(info);
    }
    // Fin del programa
    return 0;
}