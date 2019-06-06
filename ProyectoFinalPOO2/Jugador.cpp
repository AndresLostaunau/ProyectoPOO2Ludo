#include <iostream>
#include "Ficha.cpp"
using namespace std;
class Jugador{
private:
    string nombre;
    int color;
public:
    Jugador(const string &nombre, int color) : nombre(nombre), color(color) {}
    void jugar(Ficha ficha, int movimientos){}
	void mostrarCaracteristicas() {
		cout << "Jugador: " << nombre << "\n Color: ";
		if (color == 0) {
			cout << "Verde\n";
		}
		else if (color == 1) {
			cout << "Rojo\n";
		}
		else if (color == 2) {
			cout << "Azul\n";
		}
		else if (color == 3) {
			cout << "Amarillo\n";
		}
	}
    virtual ~Jugador() {}
};