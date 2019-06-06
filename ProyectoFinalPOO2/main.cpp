#include <iostream>
#include"Juego.cpp"
using namespace std;

int main() {
	auto juego = new Juego(3);
	juego->mostrarJugadores();
	delete juego;
}