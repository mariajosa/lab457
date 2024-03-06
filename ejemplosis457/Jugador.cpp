#include "Jugador.h"
using namespace std;

Jugador::Jugador() {
    puntaje = 0;
}

void Jugador::setNombre(string n) {
    nombre = n;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::setOpcion(int op) {
    opcion = op;
}

int Jugador::getOpcion() {
    return opcion;
}

void Jugador::setPuntaje(int p) {
    puntaje = p;
}

int Jugador::getPuntaje() {
    return puntaje;
}

void Jugador::seleccionar() {
    cout << nombre << "ingresa tu opcion\n1.-Piedra\n2.-Tijera\n3.-Papel\n ";
    cin >> opcion;
    while (opcion < 1 || opcion > 3) {
        cout << "  Opcion no valida. Ingresa nuevamente (1-3)\n ";
        cin >> opcion;
    }
}

void Jugador::evaluar(Jugador rival) {
    if (opcion == rival.getOpcion()) {
        cout << "  Empate!\n" << std::endl;
    }
    else if ((opcion == 1 && rival.getOpcion() == 2) ||
        (opcion == 2 && rival.getOpcion() == 3) ||
        (opcion == 3 && rival.getOpcion() == 1)) {
        cout << nombre << "  gana!\n" << std::endl;
        puntaje++;
    }
    else {
        cout << rival.getNombre() << " gana!" << std::endl;
        rival.setPuntaje(rival.getPuntaje() + 1);
    }
}
