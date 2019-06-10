#include <iostream>
using namespace std;
class Casilla{
protected:
    int x;
    int y;
    bool disponible;
    int color;
public:
    Casilla(int x, int y) : x(x), y(y) {}
    virtual void mostrar(){
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};

class CasillaCasa : public Casilla
{
public:
    CasillaCasa(int x, int y) : Casilla(x, y) {}
    void mostrar(){
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};

class CasillaInicio : public Casilla
{
public:
    CasillaInicio(int x, int y) : Casilla(x, y) {}
    void mostrar()
    {
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};

class CasillaRecorrido : public Casilla
{
public:
    CasillaRecorrido(int x, int y) : Casilla(x, y) {}
    void mostrar()
    {
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};

class CasillaZonaSegura : public Casilla
{
public:
    CasillaZonaSegura(int x, int y) : Casilla(x, y) {}
    void mostrar()
    {
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};

class CasillaDestinoFinal : public Casilla{
public:
    CasillaDestinoFinal(int x, int y) : Casilla(x, y) {}
    void mostrar()
    {
        cout << "Posicion: x:" << x << " y: " << y << endl;
    }
};