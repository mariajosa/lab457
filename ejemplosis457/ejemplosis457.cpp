// ejemplosis457.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Figura.h"
#include "Jugador.h"
using namespace std;

int main()
{
    Jugador jugador1, jugador2;
    jugador1.setNombre("Jugador 1");
    jugador2.setNombre("Jugador 2");

 

    char jugarDeNuevo;
    do {
        jugador1.seleccionar();
        jugador2.seleccionar(); 

        cout << "Jugador 1 ha seleccionado: " << jugador1.getOpcion() << endl;
        cout << "Jugador 2 ha seleccionado: " << jugador2.getOpcion() << endl;

        jugador1.evaluar(jugador2);

        cout << "Puntaje de " << jugador1.getNombre() << ": " << jugador1.getPuntaje() << endl;
        cout << "Puntaje de " << jugador2.getNombre() << ": " << jugador2.getPuntaje() << endl;

        cout << "¿Jugar de nuevo? (s/n): ";
        cin >> jugarDeNuevo;
    } while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');

    cout << "¡Gracias por jugar!" << endl;

    return 0;
}
//int main() {
//    Jugador jugador1, jugador2;
//    jugador1.setNombre("Jugador 1");
//    jugador2.setNombre("Jugador 2");
//
//    srand(time(0));
//
//    char jugarDeNuevo;
//    do {
//        jugador1.seleccionar();
//        jugador2.setOpcion(rand() % 3 + 1);
//        jugador2.setPuntaje(0);
//
//        cout << "Jugador 1 seleccionó: " << jugador1.getOpcion() << endl;
//        cout << "Jugador 2 seleccionó: " << jugador2.getOpcion() << endl;
//
//        jugador1.evaluar(jugador2);
//
//        cout << "Puntaje de " << jugador1.getNombre() << ": " << jugador1.getPuntaje() << endl;
//        cout << "Puntaje de " << jugador2.getNombre() << ": " << jugador2.getPuntaje() << endl;

    //    cout << "¿Jugar de nuevo? (s/n): ";
    //    cin >> jugarDeNuevo;
    //} while (jugarDeNuevo == 's' || jugarDeNuevo == 'S');

    //cout << "¡Gracias por jugar!" << endl;

    //return 0;
//}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
