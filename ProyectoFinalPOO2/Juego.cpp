#include<iostream>
#include<random>
#include<ctime>
#include"Dado.cpp"
#include"Jugador.cpp"
#include"Tablero.cpp"
#include"lista_string.cpp"
using namespace std;
class Juego{
private:
    int turno;
    int numeroJugadores;
	Jugador** Jugadores=nullptr;
public:
	Juego(int ndeJugadores) {
		turno = 0;
		numeroJugadores = ndeJugadores;
		Jugadores = new Jugador*[numeroJugadores];
		asignarJugadores();
		asignarTurnos();
	}
	void asignarJugadores() {
		Jugador* jugador = nullptr;
		string nombre;
		int color;
		auto coloresDisponibles = new ListaD<int>;
		for (int i = 0; i < numeroJugadores; i++) {
			coloresDisponibles->insert(i);
		}
		// Verde = 0, Rojo = 1, Azul = 2, Amarillo = 3
		for (int i = 0; i < numeroJugadores;i++) {
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
		delete jugador;
		delete coloresDisponibles;
	}
	void mostrarJugadores() {
		for (int i = 0; i < numeroJugadores; i++) {
			Jugadores[i]->mostrarCaracteristicas();
		}
	}
	void asignarTurnos() {
		cout << "Orden asignado aleatoriamente.\n";
		Jugador** jAux = new Jugador * [numeroJugadores];
		int randomizer;
		srand(time(0));
		auto rList = new ListaD<int>;
		for (int i = 0; i < numeroJugadores; i++) {
			randomizer = rand() % (numeroJugadores);
			if (!rList->exist(randomizer)) {
				jAux[i] = Jugadores[randomizer];
				rList->insert(randomizer);
			}
			else {
				i--;
			}

		}
		Jugadores = jAux;
		delete jAux;
		delete rList;
	}
    void iniciarJuego(){
		asignarTurnos();
		while (!validarFinJuego()) {
			siguienteTurno();
		}
		finalizarJuego();
	}
    void siguienteTurno(){}
    void adicionarJugador(){}
    bool validarFinJuego(){}
    void validarSalidaFicha(){}
    void validarCapturaFicha(){}
    void finalizarJuego(){}
};