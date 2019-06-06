#include<iostream>
#include"Dado.cpp"
#include"Jugador.cpp"
#include"Tablero.cpp"
#include"lista_string.cpp"
using namespace std;
class Juego{
private:
    int turno;
    int numeroJugardores;
	Jugador** Jugadores=nullptr;
public:
	Juego(int ndeJugadores) {
		turno = 0;
		numeroJugardores = ndeJugadores;
		Jugadores = new Jugador*[numeroJugardores];
		asignarJugadores();
	}
	void asignarJugadores() {
		Jugador* jugador = nullptr;
		string nombre;
		int color;
		auto coloresDisponibles = new ListaD<int>;
		for (int i = 0; i < numeroJugardores; i++) {
			coloresDisponibles->insert(i);
		}
		// Verde = 0, Rojo = 1, Azul = 2, Amarillo = 3
		for (int i = 0; i < numeroJugardores;i++) {
			cout << "Nombre del jugador N°" << i + 1 << ": ";
			cin >> nombre;
			cout << "Seleccione un color: \n";
			for (int j = 0; j < coloresDisponibles->getSize(); j++) {
				if (j > 0) { cout << ", "; }
				if (coloresDisponibles->getItem(j) == 0) {
					cout << "Verde = 0";
				}
				else if (coloresDisponibles->getItem(j) == 1) {
					cout << "Rojo = 1";
				}
				else if (coloresDisponibles->getItem(j) == 2) {
					cout << "Azul = 2";
				}
				else if (coloresDisponibles->getItem(j) == 3) {
					cout << "Amarillo = 3";
				}
			}
			cout << endl;
			cin >> color;
			if (coloresDisponibles->exist(color)){
				coloresDisponibles->remove(coloresDisponibles->find(color));
				jugador = new Jugador(nombre, color);
				Jugadores[i] = jugador;
			}
			else {
				cout << "Ingrese un color valido.\n";
				i--;
			}
			
		}
	}
	void mostrarJugadores() {
		for (int i = 0; i < numeroJugardores; i++) {
			Jugadores[i]->mostrarCaracteristicas();
		}
	}
    void iniciarJuego(){}
    void siguienteTurno(){}
    void adicionarJugador(){}
    void validarFinJuego(){}
    void validarSalidaFicha(){}
    void validarCapturaFicha(){}
    void finalizarJuego(){}
};