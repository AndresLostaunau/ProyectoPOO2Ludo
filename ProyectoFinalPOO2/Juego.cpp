#include<iostream>
#include"Dado.cpp"
#include"Jugador.cpp"
#include"Tablero.cpp"
using namespace std;
class Juego{
private:
    int turno;
    int numeroJugardores;
	Jugador** Jugadores=nullptr;
public:
    Juego(int ndeJugadores){
		turno = 0;
		numeroJugardores = ndeJugadores;
		asignarJugadores();
	}
	void asignarJugadores() {
		Jugador* jugador = nullptr;
		string nombre;
		int color;
		int coloresDisponibles[4] = { 0,1,2,3 };
		// Verde = 0, Rojo = 1, Azul = 2, Amarillo = 3
		for (int i = 0; i < numeroJugardores;i++) {
			cout << "Nombre del jugador N°" << i + 1 << ": ";
			cin >> nombre;
			
			jugador = new Jugador()
			Jugadores[i]=
		}
	}
	string disponibilidadDeColores(int i) {

	}
    void iniciarJuego(){}
    void siguienteTurno(){}
    void adicionarJugador(){}
    void validarFinJuego(){}
    void validarSalidaFicha(){}
    void validarCapturaFicha(){}
    void finalizarJuego(){}
};