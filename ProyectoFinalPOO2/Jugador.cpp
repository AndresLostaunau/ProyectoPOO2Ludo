#include <iostream>
#include "Ficha.cpp"
using namespace std;
class Jugador{
private:
    string nombre;
    int color;
public:
    Jugador(const string &nombre, int color) : nombre(nombre), color(color) {}
    void jugar(ficha Ficha, int movimientos){}
    virtual ~Jugador() {}
};