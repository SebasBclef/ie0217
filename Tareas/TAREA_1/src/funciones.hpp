#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>
#include <cstdlib>

/**
 * @brief Estructura para definir los datos necesarios para que el programa corra.
 */

struct Info {//Struct para definir los datos necesarios para que el programa corra
    int min;   ///< Valor mínimo del rango de números.
    int max;   ///< Valor máximo del rango de números.
    int numeroUsuario;///< Número ingresado por el usuario.
    bool modoDificil;///< Indica si se está en modo difícil o no.
};
/**
 * @brief Muestra el menú principal del programa.
 */
void MostrarMenu();
/**
 * @brief Procesa la opción seleccionada por el usuario en el menú.
 * @param info Es una Referencia a la estructura Info que contiene los datos del juego.
 */
void procesarOpcion(Info& info);
/**
 * @brief Inicia el juego con la configuración actual.
 * @param info Es una Referencia a la estructura Info que contiene los datos del juego.
 */
void Iniciar_Juego(Info& info);
/**
 * @brief Establece el modo difícil en la estructura Info.
 * @param info Es una Referencia a la estructura Info que contiene los datos del juego.
 */
void Dificultad_Dificil(Info& info);
/**
 * @brief Permite al usuario escoger el intervalo de números.
 * @param info Es una Referencia a la estructura Info que contiene los datos del juego.
 */
void Escoger_Intervalo(Info& info);
/**
 * @brief Define el número de intentos permitidos según la configuración actual.
 * @param dato Estructura Info que contiene los datos del juego.
 * @return Número de intentos permitidos.
 */
int  DefinirIntentos(const Info& dato);
/**
 * @brief Genera un número aleatorio en el rango especificado.
 * @param min Valor mínimo del rango.
 * @param max Valor máximo del rango.
 * @return Número aleatorio generado.
 */
int Generar_Numero(int min, int max);
// Fin del programa
#endif