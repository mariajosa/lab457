#pragma once
#include <iostream>
using namespace std;
class Jugador
{
private:
	string nombre;
	int opcion;
	int puntaje;

public:
    Jugador();
    void setNombre(std::string n);
    string getNombre();
    void setOpcion(int op);
    int getOpcion();
    void setPuntaje(int p);
    int getPuntaje();
    void seleccionar();
    void evaluar(Jugador rival);
};


